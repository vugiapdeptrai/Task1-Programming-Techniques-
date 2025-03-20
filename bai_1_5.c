#include <stdio.h>
#include <math.h>
int main () {
    double n;
    printf("Nhap vao dung luong tren nhan o cung (don vi GB): ");
    scanf("%lf", &n);
    printf("Dung luong o cung thuc te la: %.2lf GB", (n*pow(10,9))/pow(2,30));
    return 0;
} 