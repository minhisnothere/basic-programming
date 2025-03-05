#include<stdio.h>
#include<math.h>
int main(){
	int a;
	float s=0;
	scanf ("%d",&a);
	for (float i=1; i<=a; i++){
		s+=1/i;
	}
	printf("%f", s);
}
