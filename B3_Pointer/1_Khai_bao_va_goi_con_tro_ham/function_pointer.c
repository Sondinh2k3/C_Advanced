#include <stdio.h>

// Hàm mẫu 1
void greetEnglish()
{
    printf("Hello \n");
}

// Hàm mẫu 2:
void greetFrench()
{
    printf("Bonjour \n");
}

int main()
{
    // Khai báo con trỏ hàm:
    void (*ptrToGreet)();

    // Gán giá trị của hàm greetEnglish cho con trỏ hàm:
    ptrToGreet = greetEnglish;

    // Gọi hàm thông qua con trỏ hàm
    (*ptrToGreet)();

    // Gán giá trị của greetFrench cho con trỏ hàm
    ptrToGreet = greetFrench;

    // Gọi hàm thông qua con trỏ hàm (cách 2)
    ptrToGreet();

    return 0;
}