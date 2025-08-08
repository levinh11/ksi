#include <stdio.h>
#include <stdlib.h>
int main(){
	int a, b;
    int A, B;
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d%d", &a, &b);
    A=abs(a - 10);
    B=abs(b - 10);
    if(A<B){
    	printf("So gan 10 hon la: %d\n",a);
	}else{
		if(A>B){
			printf("So gan 10 hon la: %d\n",b);
		}else{
			printf("Bang nhau\n");
		}
	}
}