# ĐỀ BÀI: MỞ RỘNG VÀ TÙY CHỈNH HỆ THỐNG XỬ LÝ LỖI TRONG LẬP TRÌNH C

### Mục đích bài tập:

> - Mục tiêu của bài tập này là để bạn hiểu rõ hơn về việc sử dụng MACRO trong lập trình C, cũng như cách thiết lập một hệ thống xử lý lỗi linh hoạt và hiệu quả. Bạn sẽ xử dụng đoạn code đã cung cấp như là cơ sở để mở rộng và tùy chỉnh.

**Nhiệm vụ cụ thể:**

_Hiểu và phân tích code đã cho_

- Nghiên cứu đoạn code mẫu đã cung cấp. Hiểu rõ về cách các hàm Macro được sử dụng để xử lý các tình huống lỗi khác nhau

_Thêm hành động xử lý lỗi_

- Bổ xung thêm ít nhất 2 hành động xử lý lỗi mới vào hệ thống
- Ví dụ:

```C
// Hành động 1: In thông điệp lỗi
void printError(const char *message) {
   printf("Error: %s\n", message);
}
// Hành động 2: In thông điệp cảnh báo
void printWarning(const char *message) {
   printf("Warning: %s\n", message);
}
```

_Tùy chỉnh MACRO **HANDLE_ERROR**:_

- Sửa đổi MACRO HANDLE_ERROR để nó có thể hỗ trợ các loại hành động xử lý lỗi mới mà bạn đã thêm vào
- Đảm bảo rằng các sửa đổi của bạn không làm mất đi tính linh hoạt và đa dạng của Macro
- Ví dụ:

```C
HANDLE_ERROR(x == 10, printError, "x is not equal to 10");
HANDLE_ERROR(x < 10, printWarning, "x is less than 10");
```

> Code mẫu:

```C
#include <stdio.h>

// Hành động 1: In thông điệp lỗi
void printError(const char *message) {
   printf("Error: %s\n", message);
}

// Hành động 2: In thông điệp cảnh báo
void printWarning(const char *message) {
   printf("Warning: %s\n", message);
}

//Bổ sung nội dung vào

// Hành động 3: In thông điệp thông tin
void printInfo(const char *message) {
}

// Hành động 4: In thông điệp gỡ lỗi
void printDebug(const char *message) {
}

// Hành động 5: In thông điệp khẩn cấp
void printCritical(const char *message) {
}

// Hành động 6: In thông điệp thành công
void printSuccess(const char *message) {
}


// Macro xử lý lỗi
#define HANDLE_ERROR(condition, action, message) do { \
   //Bổ sung nội dung chương trình vào đây
} while(0)

int main() {
   int x = 5;

   // Sử dụng HANDLE_ERROR với các hành động khác nhau
   HANDLE_ERROR(x == 10, printError, "x is not equal to 10");
   HANDLE_ERROR(x < 10, printWarning, "x is less than 10");
   return 0;
}
```

> Kết quả:

```Terminal
Error: x is not equal to 10
```
