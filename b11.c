#include<stdio.h>
#include<math.h>
int main (){
	int n,i=0,j=1,s=0;
	scanf("%d",&n);
	int a=n, b=n;
	while (n>0){
		i=n%2;
		n=n/2;
		s+=i*j;
		j*=10;
	}
	printf("%d\n",s);
	int u=0,y=1,m=0;
	while (a>0){
		u=a%8;
		a=a/8;
		m+=u*y;
		y*=10;
	}
	printf("%d\n",m);
	printf("%X",b);
}
