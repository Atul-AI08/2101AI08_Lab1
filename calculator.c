#include <stdio.h>
void main(){
    char a;
    printf("Enter the operation to be performed:\n'+' for addition\n'-' for subtraction\n'*' for multiplication \n'/' for divison\nInput: ");
    scanf("%c",&a);
    int b,c;
    if (a=='+'){
        printf("Enter the first number: ");
        scanf("%d",&b);
        printf("Enter the second number: ");
        scanf("%d",&c);
        printf("The sum of the numbers %d and %d is %d",b,c,b+c);
    }
}