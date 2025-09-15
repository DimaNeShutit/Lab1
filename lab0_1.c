#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_CTYPE, "RUS");
    puts("Нажмите Enter для продолжения...");
    getchar();
    puts("Продолжение программы");
    return 0;
}