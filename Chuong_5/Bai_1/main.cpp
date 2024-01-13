#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int n;

    cout <<"Nhap n:";
    cin >>n;
    cin.ignore();
    
    cout <<"Nhap chuoi: ";
    

    getline(cin, str);
    cout << "Chuoi vua nhap: " << str;

    return 0;
}