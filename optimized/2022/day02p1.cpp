#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);

    int score = 0;

    char a, b;

    while (std::scanf("%c %c\n", &a, &b) != EOF)
        score += (b - a - 1) % 3 * 3 + b - 87;

    std::cout << score << std::endl;
}