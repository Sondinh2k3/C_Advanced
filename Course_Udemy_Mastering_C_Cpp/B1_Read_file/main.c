#include <stdio.h>
#include <stdlib.h>

struct ngaySinh
{
    /* data */
    int ngay;
    int thang;
    int nam;
};

int main()
{
    FILE *f;

    // 1. Tao file
    // 2. Mo file
    f = fopen("bai_1.bin", "rb");

    if (f == NULL)
    {
        printf("\n Loi khoi tao hoac mo file");
        exit(1);
    }
    // 3. Doc hoac ghi file
    struct ngaySinh n1;

    fread(&n1, sizeof(struct ngaySinh), 1, f);

    printf("\nNgay sinh: %d/%d/%d\n", n1.ngay, n1.thang, n1.nam);
    // 4. Dong file
    fclose(f);
    return 0;
}