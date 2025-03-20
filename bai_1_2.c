#include <stdio.h> 
int main () {
    int n[3],i;
    for (i=0;i<3;i++) {
        printf("Nhap vao so thu %d: ", i+1);
        scanf("%d", &n[i]);
    }
    printf("Ghep 3 so vua nhap lai ta duoc so: %d", n[0]*100+n[1]*10+n[2]);
    return 0;
}