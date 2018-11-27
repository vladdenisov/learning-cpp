#include <iostream>
#include <exception>
#include <string>
using namespace std;
struct element {
	int key; 
	string value;};
class mass {
private: 
	element m[10]; 
	int k;
public: 
	mass() {k = -1;} 
	void inse(int tmp_key, string tmp_str) {
	k++;
	m[k].key = tmp_key; 
	m[k].value = tmp_str; 
	} 
	int put_all() {
		for (int i = 0; i < 10; i++, k++) {
			int t; 
			string t_str; 
			cout << "Enter " << i << " key: OR You can enter 0 to stop pushing items "; 
			cin >> t; 
			if (t == 0) {break;}
			cout << "Enter " << i << " value: "; 
			cin >> t_str; 
			m[i].key = t; 
			m[i].value = t_str;
		}
		return 0;
	}
	string return_val(int tmp_key) {
		for (int i = 0; i < k; i++) {if (tmp_key = m[k].key){return m[k].value;}} 
	}
};




int main() {
	mass x;
	x.put_all();
	int t; 
	cin >> t;
	cout << x.return_val(t); 
	system("pause");
	return 0;
}
