#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std; 
void Power_two(int n) {
	if (n % 2 ==0 && n/2 != 1) {
	n = n/2;
	Power_two(n);
	}
	else if (n/2 == 1 && n % 2 ==0) {
	cout << "Yes" << endl;
	}
	else {
	cout << "NO" << endl;
	}
}
void Print_parts(int n) {
	int k;
	int t = log10(n);
	if (t == 0) {
		cout << n << endl;
	}
	else { 
		k = (int)(n / pow(10, t)); 
		cout << k << endl;
		int l = n - (k * pow(10, t));
		Print_parts(l);
	}
}

void Simple_divide(int n, int t = 2) {
	if (n == 1) {system("pause"); exit(1);}
	if (n%t==0) {
		cout << t << " ";
		n = n/t;
		Simple_divide(n, t);
	}
	else {
		if (t == 2)
      Simple_divide(n, t + 1);
		else
			Simple_divide(n, t + 2);}
} 

void fourth() {
int t; 
cin >> t;
int temp;
if (t!=0) {
	if (t % 2 != 0) {
	cout << t << endl;
	}
	fourth();
}
}
int main() {
	int t; 
	cin >> t; 
	//Power_two(t);
	//cout << 1 << " "; 
	//Simple_divide(t);
	fourth();
	system("pause");
	return 0;
}
