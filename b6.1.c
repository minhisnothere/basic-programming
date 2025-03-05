#include<stdio.h>
#include<math.h>
#include<algorithm>
int main(){
	int a,b;
	scanf ("%d",&a);
	scanf ("%d",&b);
	int c=a*b;
	while (a!=b){
		if (a>=b){
			a-=b;
		}else{
			b-=a;
		}
	} 
	printf("UCLN la %d\n",a);
	printf("BCNN la %d", c/a );
}
