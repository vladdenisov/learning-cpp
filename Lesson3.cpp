#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std; 

class PointNew {
public: 
	float x; 
	float y; 
	PointNew() {x=0;y=0;}
	PointNew(float x, float y) {this -> x = x; this -> y = y; } 
};
//создать консткрускотры все массив = 0; к массиву адд другой массив; метод, который возвращает массив, увеличенный на 1;

class Point {
	
	// publc 
	// private
	// protected

	//массив 10 чисел
	//сортировка метод + макс элемент + все элементы массива на экран

	public:
		float x; 
		float y;
		float line() {
		return sqrt(pow(x,2)+pow(y,2));
		};
};

class Array { 
public: 
	int a[10];
	int b[10];
	int temp;
	int c[10];

	Array(int a[10]) {for ( int i = 0; i < 10; i++) {this -> a[i] = a[i];}} 
	Array() {for ( int i = 0; i < 10; i++) {a[i] = 0;}}

	void sort() {
	for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
  }
	
	
	};
	int max_el() {
		int max = a[0];
		for(int i = 0; i < 10; i++) {
			if (a[i] > max) {max = a[i];};
		}  
		return max;
	};
	int all_elms() {
		cout << "All elems" << endl;
		for (int i = 0; i < 10; i++) {cout << a[i] << endl;}
		return 0;	
	};
	int plus1 () {
		for (int i = 0; i < 10; i++) {b[i] = a[i] +1;}
		for (int i = 0; i < 10; i++) {cout << b[i] << endl;}
		return 0;
	}
	int plusArray() {
		cout << "Enter second array, that you want to add" << endl;
		for ( int i = 0; i < 10; i++) {
		cin >> c[i];
		}
		for ( int i = 0; i < 10; i++) {
		c[i] = c[i] + a[i];
		}
		for ( int i = 0; i < 10; i++) {
		cout << c[i] << endl;
		}
		return 0;
	
	
	}
};
int Point_func() {
	Point *A;
	A = new Point();
	cin >> A -> x >> A -> y;
	cout << A -> line() << endl;
	delete A;

	return 0;
}
int Array_func() {
    Array *A; 
	A = new Array();
	for (int i = 0; i < 10; i++) { 
	cin >> A -> a[i];
	}
	A -> all_elms(); 
	cout << "max el: "<< A -> max_el() <<endl;
	cout << "Sorted: " << endl;
	A -> sort(); 
	for (int i = 0; i < 10; i++) {
        cout << A -> a[i] << endl;
    }
return 0;
}
void arr1() {
Array *A; 
	A = new Array();
	for (int i = 0; i < 10; i++) { 
	cin >> A -> a[i];
	}
	A -> plus1();
	Array *B = new Array();
	for (int i = 0; i < 10; i++) { 
	cin >> B -> a[i];
	}
	cout << "sec arr + 1" <<endl;
	B -> plus1();
}
int main() {
	Array *A; 
	A = new Array();
	for (int i = 0; i < 10; i++) { 
	cin >> A -> a[i];
	}
	A -> plusArray();
	//Array_func();
	system("pause");
	return 0;
}
