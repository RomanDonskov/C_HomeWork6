// Написать рекурсивную функцию возведения целого числа n в степень p.

#include <stdio.h>
#include <locale.h>

int pov(int n, int p)
{
    if (p == 0) return 1;
    else
    {
        return n*pov(n,p-1);
    }    
}

int main (void)
{
    int n,p;
    printf("Введите основание и показатель степени через пробел:");
    scanf("%d %d", &n, &p);
    int res = pov(n,p);
    printf("%d^%d = %d", n, p, res);
    return 0;
}