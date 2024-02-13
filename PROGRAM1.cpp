#include<stdio.h>
int main()
{
    char op;
    float a,b;
    printf("/nEnter any two numbers as arithmetic operands");
    scanf("%f%f",&a,&b);
    printf("/nChoose any arithmetic operation among + - * / √ ^");
    scanf("%*c%c",&op);
    switch(op)
    {
        case '+':
        printf("%f+%f=%f",a,b,a+b);
        break;
        case '-':
        printf("%f-%f=%f",a,b,a-b);
        break;
        case '*':
        printf("%f*%f=%f",a,b,a*b);
        break;
        case '/':
        printf("%f/%f=%f",a,b,a/b);
        break;
        case '√':
        printf("√%f=%f",a,√a);
        break;
        case '^':
        printf("%f^%f=%f",a,b,a^b);
        break;
    }
    return 0;
}

