#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std; 
//создать класс шаблонный, внутри массив, тип массива и размер - шаблоном. есть методы сортировки и вывода на экран
template <class T> void sort (T array[], int size) 
{T tmp; 
for(int i = 0; i < size-1; i++) {
	for (int j=0; j < size - 1; j++) {
		if(array[i] < array[j+1]){
			tmp = array[j];
			array[j] = array[j+1];
			array[j+1] = tmp;} 
	}
}};

template <class T, int size>
class Mass{
public: 
	void sort (T array[], int size) 
	{T tmp; 
		for(int i = 0; i < size-1; i++) {
			for (int j=0; j < size - 1; j++) {
				if(array[j] > array[j+1]){
					tmp = array[j];
					array[j] = array[j+1];
					array[j+1] = tmp;} 
	}
	}}
	void outp(T array[], int size) {
		for (int i = 0; i < size; i++) {
		cout << array[i]<< " ";}}

};
template <class T> 
class Stack {
private: 
	int len;
	vector<int> a;
	int el;
public: 
	void in(int elt) {a.push_back(elt);}
	int out() {return a.back();}; 
	void del_back() {a.pop_back();};
	int getEl(int i) {return a.at(i);};
	int getsize() {return a.size();};
	void asort() {std::sort(a.begin(), a.end());};
};



void onee () {int m[10] = {10,9,8,7,6,5,4,3,2,1}; sort<int>(m, 10); };
void twoo() {	int m[10] = {10,9,8,7,6,5,4,3,2,1};
	Mass<int, 10> k;
	k.sort(m, 10);
	k.outp(m, 10);};
int main() {
	Stack<int> p; 
	fstream f;
	int i;
	int j = 0; 
	string a;
	cout << "Enter 1 filename:";
	cin >> a;
	f.open("Z:\\" + a + ".txt");
	while (!f.eof())
	{f>>i;
		p.in(i);
		j++;
	}
	Stack<int> o; 
	fstream f1;
	int i1;
	int j1 = 0; 
	string a1;
	cout << "Enter 2 filename:";
	cin >> a1;
	f1.open("Z:\\" + a1 + ".txt");
	while (!f1.eof())
	{f1>>i1;
		o.in(i1);
		j1++;
	}
	for (int i = 0; i < p.getsize(); i++){
		cout << p.getEl(i) << endl;}
	for (int i = 0; i < o.getsize(); i++){
	cout << o.getEl(i) << endl;
	}
	for (int i = 0; i < o.getsize(); i++) {
	p.in(o.getEl(i));
	}
	cout << "done"<< endl;
	for (int i = 0; i < p.getsize(); i++){
		cout << p.getEl(i) << endl;}

	f.close();
	f1.close();
	system("pause");
	return 0;
}
