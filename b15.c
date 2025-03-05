#include<stdio.h>
#include<math.h>
int main (){
	int a,n;
	printf("nhap vao so tien gui\n");
	scanf(" %d",&a);
	printf("nhap vao so thang gui\n");
	scanf("%d",&n);
	printf("%f", a*pow(1.0045,n));
}
