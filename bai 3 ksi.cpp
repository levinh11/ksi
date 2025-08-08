#include <stdio.h>
    int main(){
	int n;
	 printf("Nhap mot chu so (0-9): ");
    scanf("%d", &n);
    if(0<=n<=9){
    	if(n==0){
    	    printf("khong\n");
    	    
		}else if(n==1){
			printf("Mot\n");
		}else if (n == 2) {
        printf("Hai\n");
    } else if (n == 3) {
        printf("Ba\n");
    } else if (n == 4) {
        printf("Bon\n");
    } else if (n == 5) {
        printf("Nam\n");
    } else if (n == 6) {
        printf("Sau\n");
    } else if (n == 7) {
        printf("Bay\n");
    } else if (n == 8) {
        printf("Tam\n");
    } else if (n == 9) {
        printf("Chin\n");
	}else{
        printf("Khong hop le\n");
    }
}
}
