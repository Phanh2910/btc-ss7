#include <stdio.h>

int main() {
    int b,c;
    printf("Nhap so hang cua mang: ");
    scanf("%d", &b);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &c); 
    int numbers[b][c];
    for(int i=0; i<b; i++) {   
        for(int a=0; a<c; a++) {
            printf("number[%d][%d] = ", i,a);
            scanf("%d", &numbers[i][a]); 
        } 
    }
        	for(int i=0; i<b; i++){ 
	for(int a=0; a<c; a++){
		printf(" %d",i,a,numbers[i][a]);
    }
        printf("\n");  
    }

          return 0;
}
