#include <stdio.h>

int main(int argc, char** argv){
    int num, sum;
    scanf("Digite um numero: %d ", &num);
    printf(" %d", num);
    for(num ; num > 0 ; num = num -1){
        sum = sum + num;
    };
    printf("Soma = %d", sum);


    return 0;
}
