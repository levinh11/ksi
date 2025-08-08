#include <stdio.h>
int main(){
	int x;
	printf("nhap gia tien:\n");
	scanf("%d",&x);
	float stft;
	if(x>= 500){
		stft=x-(x*0.1);
	}else if(200<=x<500){
		stft=x-(x*0.05);
	}else if(x<200){
		stft=x;
	}else{
		printf("ko hop le");
	}
	printf("so tien phai tra:%f",stft);
}