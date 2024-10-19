#include <stdio.h>
#include <stdlib.h> //Thư viện stdlib.h dùng cho các hàm cấp phát động như malloc, calloc, realloc, free.

// Tạo một kiểu dữ liệu Node trong danh sách liên kết
typedef struct Node
{
    int value;         // dữ liệu của node
    struct Node *next; // trỏ đến địa chỉ của Node tiếp theo trong linked list
} Node;

// Hàm khởi tạo một Node
Node *CreatNode(int value)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->value = value;
    ptr->next = NULL;
    return ptr;
}

int main()
{
    // Khởi tạo Node
    Node *node1 = CreatNode(2);
    Node *node2 = CreatNode(7);
    Node *node3 = CreatNode(4);

    // Gán địa chỉ cho các Node
    node1->next = node2;
    node2->next = node3;

    // Lấy giá trị của Node 2:
    int value = (node1->next)->value;
    printf("Value: %d\n", value);

    return 0;
}