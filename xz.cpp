#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int n)
{ 
  if (n == 2) return true;
  if (n == 1 || n % 2 == 0) return false;
  for (int i = 3; i*i < n+1; i += 2) {if (n % i == 0) return false;}
  return true;
}
class Mass {
private:
	int m[10];
	Mass(int *m1)
	{
		for (int i = 0; i < 10; i++) {
		this->m[i]=m1[i];
		}
	};
public: 
	Mass(){
	m[0]=0;}
	class builder
	{
	private:
		int m[10];
		int num;
	public:
		builder(int numb)
		{

			int c = 0;
			int k = numb;
			while (c < 10) {
				if (is_prime(k) ==true && k > numb) {m[c] = k; c++;}
				k++;
			}};
		Mass build()
		{
			return Mass(m);
		}

	};
	void show()
	{
		for (int i = 0; i < 10; i++) 
			cout << m[i] << endl;
	}
};
class Massmass {
private:
	Mass m[10];
	Massmass(Mass *m1)
	{
		for (int i = 0; i < 10; i++) {
		this->m[i]=m1[i];
		}
	};};


int main() {
	int t;  
	cin >> t; 
	Mass x=Mass::builder(t).build();
	x.show();
	system("pause");
}
