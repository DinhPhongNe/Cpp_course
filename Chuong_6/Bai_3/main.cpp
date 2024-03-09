#include <iostream>
using namespace std;

void func_a(int a, int b = 1){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int main(){
    func_a(4,3);
    func_a(4);
    return 0;
}