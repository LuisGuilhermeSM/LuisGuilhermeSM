#include <stdio.h>

int main(int argc, char** argv){
    int num1, num2;
    scanf("Digite dois números: %d %d", &num1, &num2);
    printf(" %d \n %d", num1, num2);
    
    printf("%d + %d = %d  \n", num1, num2, num1+num2);
    printf("%d - %d = %d  \n", num1, num2, num1-num2);
    printf("%d * %d = %d  \n", num1, num2, num1*num2);
    printf("%d / %d = %d  \n", num1, num2, num1/num2);
    printf("%d %% %d = %d \n", num1, num2, num1%num2);
    return 0;

}