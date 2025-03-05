#include<stdio.h>
#include<math.h>
int main(){
	int n, a=1, b=1, s=0;
	scanf ("%d",&n);
	for (int i=1; i<=n; i++){
		s=a+b;
		a=b;
		b=s;
	}
	printf("%d",s);
}
