#include <stdio.h>
int main () {
    double h;
    int F;
    while (1) {
        printf("Nhap vao thoi gian do xe trong 1 ngay (don vi gio): "); scanf("%lf", &h);
        if (h>=0 && h<=24) {
            break;
        }
        else {
            printf("Gia tri khong hop le, hay nhap lai \n");
        }
    }
    if (h<=3) {
        F = 5;
    }
    else if (h>3 && h<=9) {
        F = 6*((int)(h+1));
    }
    else {
        F = 60;
    }
    printf("So tien can tra la: %d USD", F);
    return 0;
}