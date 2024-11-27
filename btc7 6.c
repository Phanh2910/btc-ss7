#include <stdio.h>

int main() {
    int numbers[5], i; 
    for (int i = 0; i < 5; i++) {
        printf("Nhap gia tri phan tu %d: ",i);
        scanf("%d", &numbers[i]);
    }
    for (int i=0; i<5; i++) {
        if (numbers[i]%2 == 0) {
            numbers[i]+= 3; 
        } else {
            numbers[i]+= 2; 
        }
        printf("Gia tri thu %d sau khi thay doi la %d \n", i, numbers[i]);
    }

    return 0;
}
