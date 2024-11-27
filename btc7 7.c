#include <stdio.h>

int main() {
    int n,i;
    printf("Nhap so vao: ");
    scanf("%d", &n,&i);
    int a[n];
    for (i = 0; i < n; i++) {
        do {
            printf("Nhap so a[%d] (le): ", i);
            scanf("%d", &a[i]);
        } while (a[i] % 2 == 0);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
