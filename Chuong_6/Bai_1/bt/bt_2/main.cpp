#include <iostream>

unsigned long long factor(int n)
{
    if(n <= 1){
        return 1;
    }
    return n * factor(n - 1);
}

int main()
{
    int n;

    std::cin >> n;

    std::cout << factor(n);

    return 0;
}
