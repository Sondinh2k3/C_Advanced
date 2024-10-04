#include <stdio.h>

// Hành động 1: In thông điệp lỗi
void printError(const char *message)
{
    printf("Error: %s\n", message); // với %s thì ta chỉ cần truyền vào địa chỉ ==> Nó sẽ in ra hết bắt đầu từ địa chỉ đó
}

// Hành động 2: In ra thông điệp cảnh báo
void printWarning(const char *message)
{
    printf("Warning: %s\n", message);
}

// Hành động 3: In ra thông điệp thông tin
void printInfo(const char *message)
{
    printf("Info: %s\n");
}

// Hành động 4: In ra thông điệp gỡ lỗi
void printDebug(const char *message)
{
    printf("Debug: %s\n", message);
}

// Hành động 5: In thông điệp khẩn cấp
void printCritical(const char *message)
{
    printf("Critical: %s\n", message);
}

// Hành động 6: In thông điệp thành công
void printSuccess(const char *message)
{
    printf("Success: %s\n", message);
}

// Macro xử lý lỗi
#define HANDLE_ERROR(condition, action, message) \
    do                                           \
    {                                            \
        if (condition)                           \
        {                                        \
            action(message);                     \
        }                                        \
    } while (0)

int main()
{
    int x = 5;

    // Sử dụng HANDLE_ERROR với các hành động khác nhau
    HANDLE_ERROR(x > 10, printError, "x is not greater than 10");
    HANDLE_ERROR(x == 10, printError, "x is not equal to 10");
    HANDLE_ERROR(x < 10, printWarning, "x is less than 10");
    HANDLE_ERROR(x == 5, printSuccess, "x is equal to 5");
    return 0;
}