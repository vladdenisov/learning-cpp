#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector> 
using namespace std; 

//инкапсуляция - сокрытие от пользователя чего либо по многим причинам. К примеру: Безопасность, удобство, частичное сокрытие ф-ционала

class Point {
private: 
	double x;
	double y;
public: 
	Point(float x, float y) {
	this -> x = x;
	this -> y = y;
	}
	double GetX (){
	return x;
	}
	double GetY (){
	return y;
	}
};

class Line {
private: 
	Point *A;
	Point *B;
	Point *C;
	float Lena; 
	float Lenb;
	float Lenc;
	float Area_res;

	void L() {
		Lena = sqrt(pow(A -> GetX() - C -> GetX(), 2) + pow(A -> GetY() - C -> GetY(), 2));
		Lenb = sqrt(pow(A-> GetX() - B -> GetX(), 2) + pow(A -> GetY() - B -> GetY(), 2));
		Lenc = sqrt(pow(C -> GetX() - B -> GetX(), 2) + pow(C -> GetY() - B -> GetY(), 2));
	};
	void Area() {
		float p = (Lena + Lenb + Lenc) / 2;
		Area_res = sqrt(p*(p-Lena)*(p-Lenb)*(p-Lenc));
		
	};
	
public:
	Line(Point *At, Point *Bt, Point *Ct){
	A = new Point(At -> GetX(), At -> GetY()); 
	B = new Point(Bt -> GetX(), Bt -> GetY()); 
	C = new Point(Ct -> GetX(), Ct -> GetY()); 
	L();
	};
	float Areaa() {
	Area();
		return Area_res;};
	
};

class Stack{
private: 
	int len;
	vector<int> a;
	int el;
public: 
	Stack() {};
	void in() {
		int elt;
		cin >> elt;
		a.push_back(elt);
	}
	void out() {
		el = a.back();
		cout << el;
	}; 
};
int main() {
	Stack A();
	*A.out();
	system("pause");
	return 0;
}
