#include <iostream>
#include <stdlib.h>
#include <vector>
#ifdef _WIN32
    #define WINPAUSE system("pause")
#endif
using namespace std;
int main() {
	int b[10]; 
	for (int i = 0; i < 10; i++) {
	cin >> b[i];
	}
	cout << "Searching.."<< endl;
	vector<int> c;
	for (int i = 0; i < 10; i++) {
		int a = 0;
		int val = b[i];
		for (int l = i +1; l < 10; l++) {
			if (b[i] == b[l]) {
				a = a + 1; 
			} 
		}
		if (a) {
		if (find(c.begin(), c.end(), val) != c.end() ) {}
		else {
			c.push_back(b[i]);
			cout << b[i] << " repeats for " << a + 1 << " times" << endl; }}
	}
	system("pause");
	return 0;
}

