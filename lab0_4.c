#include <stdio.h>
#include <locale.h>
void name()
{
    setlocale(LC_CTYPE, "RUS");
    puts("******************************************");
    puts("* тема: Разработка консольного приложения*");
    puts("*                                        *");
    puts("*Выполнил Калашников Д.А                 *");
    puts("******************************************");
}

void date()
{
    puts("     _             _  _    ");
    puts("/|    |   /| /|   | |  |   ");
    puts(" |    | .  |  | . |_|  |   ");
}




void main()
{
    name();
    date();
}