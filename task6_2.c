// Составить рекурсивную функцию. Выведите все числа от A до B
// включительно, в порядке возрастания, если A < B, или в порядке убывания в
// противном случае.
#include <stdio.h>
#include <locale.h>

void between_numbers(int a, int b)
{
    if (a+1<b)
    {
        between_numbers(a,b-1);
        printf("%d ",b-1);
    }
    else if (a-1>b)
    {
        between_numbers(a,b+1);
        printf("%d ",b+1);
    }    
}

int main(void)
{
    int x,y;
    printf("Введите 2 целых числa: ");
    scanf("%d %d", &x, &y);
    between_numbers(x,y);
    
    return 0;    
} 
   