#include <stdio.h>
int main(void)
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a+b < 10)
    {
        printf("a+b는 10보다 작습니다.");
    }

    else if (a+b > 10)
    {
        printf("a+b는 10보다 큽니다.");
    }
    if (c%2 >= 1)
    {
        printf("c는 홀수입니다.");
    }
    printf("%f", ((a+b)-c)/c);
    
}