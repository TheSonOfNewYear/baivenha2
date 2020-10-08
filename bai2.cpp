#include <stdio.h>
int main(){
	int a;
	printf("Nhap a =");
	scanf("%d",&a);
	int b;
	printf("Nhap b =");
	scanf("%d",&b);
	
	if(a>=b){
		printf("%d",a/b);	
	}else{
		printf("%d",a*b);
	}	
}	
