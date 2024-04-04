// Дано натуральное число N. Выведите все его цифры по одной, в прямом
// порядке, разделяя их пробелами или новыми строками. Необходимо
// реализовать рекурсивную функцию
#include <stdio.h>
#include <locale.h>

void forward_numbers(int n)
{

    if (n/10!=0)
        forward_numbers(n/10);
    printf("%d\n",n%10);    
}

int main(void)
{
    int x;
    printf("Введите  целое положительное числ0: ");
    scanf("%d", &x);
    forward_numbers(x);
    
    return 0;    
}
   