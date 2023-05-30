#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	int a, b, n;
	cout << "Type number A:";
	cin >> a;
	cout << "Type number B:";
	cin >> b;
	n = 0;
	if (a<b) {
		for (int i = a; i <= b; i++) {
			cout << "Numbers from A to B: " << i << endl;
			n++;
		}
		cout << "Number of int: " << n;
	}	
}
