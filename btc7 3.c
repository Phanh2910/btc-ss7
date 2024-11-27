#include<stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int Even = 0;
    printf("cac so chan co trong mang la: \n");
    for(int i = 0; i < 5; i++) {
        if(a[i] % 2 == 0) {
            printf("%d ", a[i]);
            Even = 1;
        }
    }
    if (!Even)
	 printf("Mang khong chua so chan");
    return 0;
}
