#include <stdio.h>
#include <locale.h>

void print_odd_num()
{
    int num;
    scanf("%d", &num);
    if (num == 0)
    {
        return;
    }
    if (num % 2 == 1)
    {
        printf("%d ", num);
    }
    print_odd_num();
}

int main (void)
{
    printf("Введите последовательность чисел через пробел. 0 - окончание ввода: \n");
    print_odd_num();
    return 0;
}