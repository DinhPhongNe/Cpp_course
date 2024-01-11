#include <iostream>
using namespace std;

int main() {
    int n;
    int numbers[10];
    int sum = 0;

    cout << "";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    cout << "" << sum;

    return 0;
}
