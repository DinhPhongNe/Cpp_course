#include <iostream>
#include <math.h>

bool is_prime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int total_prime(int numbers[], int n) 
{ 
    int sum = 0; 
    for (int i = 0; i < n; i++) 
    { 
        if (is_prime(numbers[i]) == true) 
        {
        	sum += numbers[i];
        }
    }
    return sum;
}

int main()
{
    int n;
    int numbers[10];

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << total_prime(numbers, n);

    return 0;
}
