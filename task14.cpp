#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int N, N2;
	cout << "Type value of N: ";
	cin >> N;
	for (int i = 0; i <= N; i++){
		N2 += N+(2*N-1);
		cout << "Square of N is equal: "<< N2 << endl;
		
	}
}
