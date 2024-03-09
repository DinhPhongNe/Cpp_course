#include <iostream>

int max(int numbers[10], int n)
{
    // Hãy hoàn thành hàm max
    // theo yêu cầu đề bài nhé
    int max = numbers[0];
    for (int i = 0; i < n - 1; i++) {
        if (numbers[i] < numbers[i + 1]) {
            max = numbers[i + 1];
        }
    }
    return max;

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

    std::cout << max(numbers, n);

    return 0;
}