#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
    int a;

    printf("점수를 입력하세요 : "); scanf("%d", &a);
    
    if (90 <= a){
        if (95 <= a){
            printf("당신의 학점은 A+입니다.");
        }
        else{
            printf("당신의 학점은 A입니다.");
        }
    }
    else if (80 <= a){
        if (85 <= a){
            printf("당신의 학점은 B+입니다.");
        }
        else{
            printf("당신의 학점은 B입니다.");
        }
    }
    else if (70 <= a){
        if (75 <= a){
            printf("당신의 학점은 C+입니다.");
        }
        else{
            printf("당신의 학점은 C입니다.");
        }
    }
    else if (60 <= a){
        if (65 <= a){
            printf("당신의 학점은 D+입니다.");
        }
        else{
            printf("당신의 학점은 D입니다.");
        }
    }
    else if (50 <= a){
        if (55 <= a){
            printf("당신의 학점은 E+입니다.");
        }
        else{
            printf("당신의 학점은 E입니다.");
        }
    }
    else{
        printf("당신은 낙제입니다.");
    }
    
}