#include<stdio.h>
#include<math.h>
int main (){
	int j=1,i=0;
	long long giaithua=1;
	double tong=0;
	float e, x;
	printf("nhap vao so x ");
	scanf("%f",&x);
	printf("nhap vao so eps ");
	scanf("%f", &e);
	x=x*3.14/180; 
	float o=x;
	while (fabs(o)>e){
		o=(pow(x,j)/giaithua)*pow(-1,i);
		tong+=o;
		giaithua=giaithua*(j+2)*(j+1);
		j+=2;
		i+=1;
	}
	printf("%lf",tong);
}
