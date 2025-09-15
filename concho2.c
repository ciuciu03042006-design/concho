#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    int tich = a * b;

    printf("Tong hai so la: %d\n", tich);
    
    return 0;
}

