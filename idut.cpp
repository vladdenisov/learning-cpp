#include <iostream>
#include <new>
#include <string>
#include <cstdlib> 
using namespace std;
const string text = "beeep boop beep kepp";
class List
{
private:
	class Element
	{
	public:
		int value;
		Element* next;
		Element* prev;
		Element(int value)
		{
			this->value=value;
			next=NULL;
			prev=NULL;
		}
	};
	Element* first;
	int count;
public:
	List()
	{
		first=NULL;
		count=0;
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
			cout<<current->value<<" ";
			current=current->next;
		}
	}
	bool Find(int value)
	{		
		Element*  current=first;
		while(current!=NULL)
		{
			if(current->value==value) return true;
			current=current->next;
		}
		return false;
	}
	void Del(int value)
	{
		Element*  current=first;
		while(current!=NULL)
		{
			if(current->value==value)
			{
				(current->prev)->next=current->next;
				(current->next)->prev=current->prev;
				count--;
				delete current;
				return;
			}
			current=current->next;
		}
	}
	int operator [](int n)
	{
		if(n>(count-1)) throw -1;
		int k=0;
		Element*  current=first;
		while(k!=n)
		{
			k++;
			current=current->next;
		}
		return current->value;
	}
};

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
			rank = 0;
			this->value=new HTree::List(value);
		}
	};
	Element* first;
	int count;
	HList()
	{
		first=NULL;
		count=0;
	}
	bool Find(int value)
	{		
		Element*  current=first;
		while(current!=NULL)
		{
			if(current->value->value==value) return true;
			current=current->next;
		}
		return false;
	}
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
};
void fill_list(string temp, HList *a) {
	for (int i = 0; i < temp.length(); i++) {
	}


}




int main()
{
	HList x; 
	fill_list(text, &x);
	system("pause");	
	return 0;
}
