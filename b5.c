#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf ("%d",&a);
	for (int i=1; i<=(pow(a,0.5));i++){
		if (a%i==0){
			printf("%d %d ", i , a/i );
		}
	}
}
