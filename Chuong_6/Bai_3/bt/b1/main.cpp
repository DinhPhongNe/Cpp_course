#include <iostream>

int total_odd(int numbers[10], int n)
{
    // Hãy hoàn thành hàm total_odd
    // theo yêu cầu đề bài nhé
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 1) {
            sum += numbers[i];
        }
    }
    return sum;
}

int main()
{
    int numbers[10];
    int n;

    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << total_odd(numbers, n);

    return 0;
}
