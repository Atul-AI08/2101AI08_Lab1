#include <stdio.h>
void main(){
    char a;
    begin:
    printf("Enter the operation to be performed:\n'+' for addition\n'-' for subtraction\n'*' for multiplication \n'/' for divison\nInput: ");
    scanf("%1s",&a);
    int b,c;
    if (a=='+'){
        printf("Enter the first number: ");
        scanf("%d",&b);
        printf("Enter the second number: ");
        scanf("%d",&c);
        printf("The sum of the numbers %d and %d is %d",b,c,b+c);
        printf("Want to use the calculator again? y/n: ");
        char d;
        scanf("%1s",&d);
        if (d=='y'){
            goto begin;
        }
    }
    else if (a=='-'){
        printf("Enter the first number: ");
        scanf("%d",&b);
        printf("Enter the second number: ");
        scanf("%d",&c);
        printf("The difference of the numbers %d and %d is %d",b,c,b-c);
        printf("Want to use the calculator again? y/n: ");
        char d;
        scanf("%1s",&d);
        if (d=='y'){
            goto begin;
        }
    }
    else if (a=='*'){
        printf("Enter the first number: ");
        scanf("%d",&b);
        printf("Enter the second number: ");
        scanf("%d",&c);
        printf("The product of the numbers %d and %d is %d",b,c,b*c);
        printf("Want to use the calculator again? y/n: ");
        char d;
        scanf("%1s",&d);
        if (d=='y'){
            goto begin;
        }
    }
    else if (a=='/'){
        printf("Enter the first number: ");
        scanf("%d",&b);
        printf("Enter the second number: ");
        scanf("%d",&c);
        printf("The divison of the numbers %d and %d is %d",b,c,b/c);
        printf("Want to use the calculator again? y/n: ");
        char d;
        scanf("%1s",&d);
        if (d=='y'){
            goto begin;
        }
    }
    else{
        printf("\nEnter the correct operation!!\n");
        goto begin;
    }
}