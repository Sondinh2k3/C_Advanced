#include <stdio.h>
#include "math_utils.h" //include file tiêu đề

// Định nghĩa hàm đã khai báo trong file tiêu đề
int add(int a, int b)
{
    return a + b;
}

int main()
{
    printf("sum of 3 and 5 is: %d\n", add(3, 5));
    return 0;
}