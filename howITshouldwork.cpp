#include <iostream>
#include <new>
using namespace std;
class HTree
{
public:
	class List
	{
	public:
		char value;
		List* r;
		List* l;
		List(char value)
		{
			this->value=value;
			r=NULL;
			l=NULL;
		}
	};
};

class HList
{
	public:
	class Element
	{
	public:
		HTree::List* value;
		int rank;
		Element* next;
		Element* prev;
		Element(char value)
		{
			next=NULL;
			prev=NULL;
			this->value=new HTree::List(value);
		}
	};
private:
	Element* find(char value)
	{
		Element* current=first;
		while(current!=NULL)
		{
			if(current->value->value==value) return current;
		}
		return NULL;
	}
	void sort(Element* current)
	{
		if(current->next==NULL) return;
		if(current->rank<current->next->rank) return;
		int tmp=current->rank;
		current->rank=current->next->rank;
		current->next->rank=tmp;
		HTree::List* ltmp=current->value;
		current->value=current->next->value;
		current->next->value=ltmp;
		sort(current->next);

	}
public:
	Element* first;
	int count;
	HList()
	{
		first=NULL;
		count=0;
	}
	void Add(char value)
	{
		if(count==0)
		{
			first=new Element(value);
			count++;
			return;
		};
		Element* current=find(value);
		if(current==NULL)
		{
			current=new Element(value);
			current->next=first;
			first->prev=current;
			first=current;
			count++;
			return;
		}
		current->rank++;
		sort(current);
	}
	void Print()
	{
		if(count==0)
		{
			cout<<"empty"<<endl;
			return;
		}
		Element*  current=first;
		while(current!=NULL)
		{
			cout<<current->value->value<<" "<<current->rank<<" ";
			current=current->next;
		}
	}
};

int main()
{
	return 0;
}
