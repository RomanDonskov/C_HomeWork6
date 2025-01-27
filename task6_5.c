// Дана строка из английских символов, пробелов и знаков препинания. В конце
// строки символ точка. Необходимо реализовать рекурсивную функцию,
// которая считывает данную строку со стандартного потока ввода и возвращает
// целое число – количество символов 'a' в данной строке.
#include <stdio.h>
#include <locale.h>

int counter_a(void)
{
    char si;
    scanf("%c", &si);
    if (si == '.') return 0;
    else return (si == 'a') + counter_a();
    
}

int main (void)
{
    printf("Введите строку. '.' - окончание ввода: \n");
    int count = counter_a();
    printf("Количество букв 'a' во введенной строке: %d\n", count);
    return 0;
}