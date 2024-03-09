#include <iostream>
#include <array>

int total(const std::array<int, 10>& numbers, int n)
{
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += numbers[i];
    }
    return sum;
}

int main()
{
    std::array<int, 10> numbers;
    int n;

    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << total(numbers, n);

    return 0;
}