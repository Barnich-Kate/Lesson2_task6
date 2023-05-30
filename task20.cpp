#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int N;
	double f, x;
	cout << "Type value of N: ";
	cin >> N;
	f = 1;
	for (int i = 1; i<=N; i++) {
		f *= i;
		x += f;
		cout << i << ": ";
		cout << f << ": ";
		cout << x << endl;
		
	}
	cout << "Result: "<< x;
}
    
