#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cout << "n = ";
	cin>> n;
	
    int sum = 0;

    for(int i = 1; i <= n; i++){
        if ( i % 2 == 1){
            sum += i;
        }
    }
    cout << "Ket qua la " << sum;
    return 0;
}