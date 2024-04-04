// Дано натуральное число N. Посчитать количество «1» в двоичной записи
// числа.
#include <stdio.h>
#include <locale.h>

int count1(int n)
{
    int count = 0;
    while (n)
    {
       if (n & 1) count++;
       n = n>>1;
    }  
   return count;
}

int main(void)
{
    int x;
    printf("Введите  числ0: ");
    scanf("%d", &x);
    printf("Количество единиц в двоичной записи числа %d: %d",x,count1(x));
        
    return 0;    
}
