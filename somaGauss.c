#include <stdio.h>

int main(int argc, char** argv){
    int num, sum;
    printf("Digite um número: ");
    scanf("%d", &num);
    // printf(" %d", num);
    for( ; num > 0 ; num = num -1){
        sum = sum + num;
    };
    printf("Soma = %d\n", sum);


    return 0;
}
