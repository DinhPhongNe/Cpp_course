#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void print_message(string message){
    cout << "Message: " << message << endl;
}

int sum(int a, int b){

    int d = a + b;

    return d;
}

void kiem_tra_so_nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << n << " Khong la so nguyen to" << endl;
            return;
        }
    }

    cout << n << " la so nguyen to" << endl;
    return;
}

int main(){

    int x = 3;
    int y = 4;

    kiem_tra_so_nt(y);
    kiem_tra_so_nt(x);

    string c = "Hello cac ban 2.";
    print_message(c);
    print_message("Hello cac ban.");
    cout << sum(1, 2);

    
    return 0;
}