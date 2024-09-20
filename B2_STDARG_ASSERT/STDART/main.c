#include <stdio.h>
#include <stdarg.h>
#include <math.h>

int sum(int count, ...)
{
    // va_list => tạo ra một con trỏ để lưu một mảng các địa chỉ mà ta không xác định được số lượng
    va_list args;
    // va_start => Dùng để tạo ra một vùng nhớ khởi tạo cho vị trí để lưu các địa chỉ của ... mà args sẽ có thể trỏ tới để dùng
    // có thể hiểu là nó cấp phát động một vùng nhớ
    va_start(args, count);

    int result = 0;
    for (int i = 0; i < count; i++)
    {
        // va_arg => Dịch chuyển con trỏ đến vị trí tiếp theo và lấy giá trị tại địa chỉ cũ vừa bị dịch chuyển
        result += va_arg(args, int);
    }
    // va_end => giải phóng vùng nhớ mà va_arg cấp phát động
    va_end(args);

    return result;
}

int main()
{
    printf("Sum: %d\n", sum(4, 1, 2, 3, 4));
    return 0;
}