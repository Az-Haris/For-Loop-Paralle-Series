#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, sum=0;

    for(a=1; a<=100; a++)
    {
        sum=sum+a;
    }

    printf("1+2+3+......+100 = %d\n", sum);

    getch();
    return 0;
}
