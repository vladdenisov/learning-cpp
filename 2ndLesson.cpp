#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std; 

struct cords_dot {
int x, y;
};

int Dot() {
	cords_dot a;
	cout << "Enter Dot Cords:" << endl;
	cout <<"x: ";
	cin >> a.x;
	cout <<"y: ";
	cin >> a.y;
	cout <<"x = "<< a.x << endl;
	cout <<"y = "<< a.y << endl;
	return 0;
}
int Polygon11() {
	int n, x1, x2, y1, y2, x, y; 
    double sum = 0;
	cout << "Enter angles number: ";cin >> n;
	cout << "Now enter x then y cords for all dots one by one" << endl;
    cout << "x1: "; cin >> x;
	cout << "y1: " ; cin >> y; 
    x1=x; 
    y1=y; 
    for (int i = 0; i < (n - 1); i++) { 
		cout << "x"<< i + 2 <<": "; cin >> x2;
		cout << "y"<< i + 2 <<": ";  cin >> y2; 
        sum=sum+(x1+x2)*(y2-y1); 
        x1=x2; 
        y1=y2; 
    } 
    sum = sum + (x + x2) * (y - y2);
	cout << "Area of your polygon: "; 
	cout << fixed << setprecision(1) << abs(sum) / 2 << endl;
	return 0;
}
int menu() {
	system("CLS");
	int n; 
	cout << "1 - Dots Function" << endl;
	cout << "2 - Polygon Function" << endl;
	cout << "0 - Exit" << endl;
	cin >> n;
	if ( n == 0 ) {cout << "Exiting..."; Sleep(2000); exit(1);}
	if ( n == 1 ) {Dot(); system("pause"); menu();};
	if ( n == 2 ) {Polygon11(); system("pause"); menu();};
	return 0;
}
int main() {
	menu();
	system("pause");
	return 0;
}
