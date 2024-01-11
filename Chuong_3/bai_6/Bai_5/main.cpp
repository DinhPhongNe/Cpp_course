#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cout << "n = ";
	cin>> n;
	
	int s = 0;
	int i = 1;
	while (i <= n) {
		int ten = pow(10, i);
		int num = n/ten;
		i++;
		if(num < 10 && num > 0) {
			n = n - num*ten;
			i = i/i;
			s += num;
		}		
	}
	s = s + n;
	cout << "Ket qua la " << s;
}