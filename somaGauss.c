#include <stdio.h>

int main(int argc, char** argv){
    int num, soma;
    soma = 0 ;
    printf("Digite um número: ");
    scanf("%d", &num);
    //printf(" %d \n ", num);
    for( ; num > 0 ; num = num -1){
        printf(" %d \n", num);
        soma = soma + num;
        printf(" %d \n", soma);

    };
    printf("Soma = %d\n", soma);


    return 0;
}
