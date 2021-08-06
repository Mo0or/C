#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
    int a, b;
    double c;

    printf("체중 : "); scanf("%d", &a);
    printf("키 : "); scanf("%d", &b);
    c = b*0.01;

    if (a / (c * c) < 18){
        printf("저체중입니다.");
    }
    else if (a / (c * c) <= 23){
        printf("정상입니다.");
    }
    else if (a / (c * c) <= 25){
        printf("비만입니다.");
    }
    else{
        printf("고도 비만입니다.");
    }
}