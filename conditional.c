#include <stdio.h>

int main()
{

    int taka;
    printf("Please give taka: ");
    scanf("%d", &taka);

    if (taka >= 100)
    {
        printf("Burger Khabo!");
    }
    else if (taka >= 50)
    {
        printf("Fuchka khabo!");
    }
    else
    {
        printf("Khabo na!");
    }

    return 0;
}