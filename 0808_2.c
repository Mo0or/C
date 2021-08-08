#include <stdio.h>
// int main(void){
    
//     int f;

//     scanf("%d", &f);

//     int i;
    
//     for (i = 0; i <= f; i++){
//         printf("%d", i);
//     }

    
// }
int main(void) {
    
    int fn, sn;
    char o;

    printf("첫번째 값을 입력해주세요. : "); scanf("%d", &fn);
    printf("두번째 값을 입력해주세요. : "); scanf("%d", &sn);
    printf("연산자를 입력해주세요. : "); scanf("\n %c", &o);

    if (o == '+') {
        printf("%d", fn + sn);
    }
    else if (o == '-') {
        printf("%d", fn - sn);
    }
    else if (o == '*') {
        printf("%d", fn * sn);
    }
    else if (o == '/') {
        printf("%d", fn / sn);
    }
}