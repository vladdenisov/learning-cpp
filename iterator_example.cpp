#include <iostream>
using namespace std;
class Stack
{
private:
	int m[10];
	int k;
	Stack(Stack t1,Stack t2)
	{
		k=-1;
		iterator i;
		for (i = t1.begin(); i >= t1.end(); i--)
		{
			push(*i);
		};
		for (i = t2.begin(); i >= t2.end(); i--)
		{
			push(*i);
		};
	}
public:

	typedef  int* iterator;
	Stack():k(-1)
	{
	};
	void push(int tmp)
	{
		k++;
		m[k]=tmp;
	};
	void pop()
	{
		k--;
	};
	int top()
	{
		return m[k];
	};
	iterator begin()
	{
		return m+k;
	};
	iterator end()
	{
		return m;
	}
	friend Stack operator + (Stack t1,Stack t2);
};


Stack operator + (Stack t1,Stack t2)
{
	return Stack(t1,t2);
}

int main()
{
	Stack x;
	x.push(1);
	x.push(2);
	x.push(4);
	x.push(0);
	x.push(5);
	x.push(3);
	Stack::iterator i;
	for(i=x.begin();i>=x.end();i--)
		cout<<*i<<" ";
	cout<<endl;
	Stack y;
	y.push(12);
	y.push(22);
	y.push(41);
	for(i=y.begin();i>=y.end();i--)
		cout<<*i<<" ";
	cout<<endl;
	Stack z;
	z=x+y;
	for(i=z.begin();i>=z.end();i--)
		cout<<*i<<" ";
	cout<<endl;
	system("pause");
	return 0;
}
