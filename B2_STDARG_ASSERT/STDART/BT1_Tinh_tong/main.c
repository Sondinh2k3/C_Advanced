/*
    Để thực hành thư viện STDARG, đầu tiên là một bài toán khá cơ bản đó là tính tổng các số nhập vào
    Bình thường nếu như ta viết hàm tính tổng thông thường, thì số đối số truyền vào sẽ cố định.
    Nhưng khi ta muốn nhập vào bao nhiêu số cũng được và nó sẽ tính toán tổng của các số đó, thì ta sẽ sử dụng STDARG
*/
#include <stdio.h>
#include <stdarg.h>
#include <math.h>

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);

    int result = 0;
    for (int i = 0; i < count; i++)
    {
        result += va_arg(args, int);
    }
    va_end(args);

    return result;
}

int main()
{
    printf("Sum = %d\n", sum(5, 1, 2, 3, 4, 5));
    return 0;
}