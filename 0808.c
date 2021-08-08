#include <stdio.h>
int main(void){
    int x, y;

    printf("좌표를 입력하세요 : "); scanf("%d %d", &x, &y);

    if ( 0 < x && 0 < y ){
        printf("이 점은 제1사분면 안에 속해있습니다.");
    }
    else if ( x < 0 && 0 < y ){
        printf("이 점은 제2사분면 안에 속해있습니다.");
    }
    else if ( x < 0 && y < 0 ){
        printf("이 점은 제3사분면 안에 속해있습니다.");
    }
    else{
        printf("이 점은 제4사분면 안에 속해있습니다.");
    }
}