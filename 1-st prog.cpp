#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main() {
	int arr_length; 
	cout << "Enter array length:" << endl; 
	cin >> arr_length;
	cout << "Enter "<< arr_length << " array items (Only Nums!)" << endl;
	vector<int> b(arr_length);
	for (int i = 0; i < arr_length; i++) {
		cin >> b[i];
	}
	cout << "Searching for duplicates.." << endl;
	vector<int> c;
	for (int i = 0; i < arr_length; i++) {
		int a = 0;
		int val = b[i];
		for (int l = i + 1; l < arr_length; l++) {
			if (b[i] == b[l]) {
				a = a + 1;
			}
		}
		if (a) {
			if (find(c.begin(), c.end(), val) != c.end()) {}
			else {
				c.push_back(b[i]);
				cout << b[i] << " repeats for " << a + 1 << " times" << endl;
			}
		}
	}
	if (c.size() == 0) {cout << "Nothing Found" << endl;}
	system("pause");
	return 0;
}

