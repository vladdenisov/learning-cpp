#include <iostream>
#include <cstdlib>
using namespace std; 

void sredn(float k = 0, float sum = 0) { 
	float t;
	cin >> t; 
	if (t != 0) {
		k++;
		sum +=t;
		sredn(k, sum); 
	} 
	if (t == 0) cout << sum/k;
}
void second_big(int big = 0, int second = 0) {
	int t; 
	cin >> t; 
	if (t == 0) {cout << second; system("pause"); exit(1);} 
	if (big == 0) {big = t; second_big(big, second);};
	if (big > 0 && second == 0 && t < big) {second = t; second_big(big, second);} 
	if (t < big && t > second) {second = t; second_big(big, second);}
	if (t > big && big != 0) {second = big; big = t;  second_big(big, second);}
	else {second_big(big, second);}
} 
void counter(int k = 0, int big = 0) {
	int t;
	cin >> t; 
	if (big == 0) {big = t; counter(k,big);}
	if (t > big) {big = t; counter(k,big);}
	if (big == t) {k++; counter(k,big);} 
	if (t == 0) {cout << k; system("pause"); exit(1);} 
	else {counter(k, big);}
} 
void dop_1(int k = 0, int l = 0) {
	if (l == 0 && k == 0) {
		int t; 
		cin >> t; 
		l = t; 
		dop_1(k,l);
	} 
	if (l == 0 && k !=0 ) {cout<<k; system("pause"); exit(1);};
	if (l == 1) { k += 4; l--; dop_1(k,l);}
	if (l == 2) { k += 3; l--; dop_1(k,l);}
	if (l > 2 && l%2==0) { k += 2; l--; dop_1(k,l);}
	if (l > 2 && l%2!=0) { k += 3; l--; dop_1(k,l);}

}
int main() {
	dop_1();

	system("pause");
	return 0;
}
