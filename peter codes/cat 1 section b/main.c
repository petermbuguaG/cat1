#include <stdio.h>

int main()
{
    int num1,num2;
    float result;
    char ch; //to store operator choice

    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);

    printf("choose operation to perform( +,-,*,/,%):");
    scanf("%c",&ch);

    result=0;
    switch(ch)
    {
        case'+':
            result=num1+num2;
        break;

        case'-':
            result=num1-num2;
        break;

        case'*':
            result=num1*num2;
        break;

        case'/':
            result=num1/num2;
            break;

        case'%':
            result=num1%num2;
            break;
        default:
            printf("invalid operation.\n");

    }
    printf("result:%d%c%d=%f\n",num1,ch,num2,result);
    return 0;
}
