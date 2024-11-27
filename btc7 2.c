#include<stdio.h>
int main(){
    int n, u[5];
	printf("nhap n : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap a[%d] :",i);
		scanf("%d",&u[i]);
	}
	printf("phan tu duoc nhap la:");
	for(int i=0; i<n;i++){
		printf("%d",u[i]);
	}
	
	return 0;
}
