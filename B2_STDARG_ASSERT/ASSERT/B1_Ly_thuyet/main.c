/*
    Thư viện assert.h cung cấp cho chúng ta hàm assert(). Mục đích của hàm này là kiểm tra xem điều kiện bên
    trong nó là đúng hay sai, nếu sai thì sẽ thông báo thông điệp lỗi ra terminal và dừng chương trình
    ==> Rất hữu dụng trong quá trình debug
 */
#include <stdio.h>
#include <assert.h>

int main()
{
    int x = 5;

    // check error
    assert(x == 8);

    // Chương trình sẽ tiếp tục thực thi nếu điều kiện trong assert() là đúng.
    printf("x is %d:\n", x);
    return 0;
}