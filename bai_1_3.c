#include <stdio.h> 
int main () {
    int n,a,b,c;
    printf("Nhap vao so nguyen bat ki co 3 chu so: ");
    scanf("%d", &n);
    a = n/100;
    b = (n%100)/10;
    c = n - a*100 - b*10;
    printf("So da nhap sau khi bi dao nguoc thu tu tro thanh: %d", c*100+b*10+a);
    return 0;
}