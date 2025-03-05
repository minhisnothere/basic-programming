#include<stdio.h>
#include<math.h>
int main(){
	int s=0;
	scanf("%d",&s);
	int u=0;
	for (int j=1; j<=int(pow(s,0.5)); j++){
		if ((s%j)==0){
			u+=2;
		}
		if (u>2){
			break;
		}
	}
	if (u==2){
		printf("%d la so nguyen to",s);
	}else{
		printf("%d khong la so nguyen to",s);
	}
} 
//code chua toi uu huhuuu
