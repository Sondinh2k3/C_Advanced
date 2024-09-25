/*
    Ta thường sử dụng function pointer khi một hàm muốn gọi đến một hàm khác
    => Thuật ngữ mà nó được gọi là callbackFn ==> Ta sẽ gặp lại nhiều trong JavaScript
*/
#include <stdio.h>

void sum(int a, int b)
{
    printf("Sum of %d and %d is: %d\n", a, b, a + b);
}
void subtract(int a, int b)
{
    printf("Subtract of %d by %d is: %d \n", a, b, a - b);
}
void multiple(int a, int b)
{
    printf("Multiple of %d and %d is: %d \n", a, b, a * b);
}
void divide(int a, int b)
{
    if (b == 0)
    {
        printf("Mau so phai khac 0\n");
        return;
    }
    printf("%d divided by %d is: %f \n", a, b, (double)a / (double)b);
}
void calculator(void (*ptr)(int, int), int a, int b)
{
    printf("Program calculate: \n");
    ptr(a, b);
}

int main()
{
    calculator(sum, 5, 2);
    calculator(subtract, 5, 2);
    calculator(multiple, 5, 2);
    calculator(divide, 5, 2);
    // void (*ptr[])(int, int) = {sum, divide, multiple};
    // ptr[0](5,6);
    // ptr[1](2,3);
    return 0;
}
