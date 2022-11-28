#include<stdio.h>
#include<math.h>
int main(){
	
	int note;
	printf("notunuzu girin: ");
	scanf("%d",&note);
	if(note >=50){
		printf("gectiniz notunuz:%d",note);
	}
	else{
		printf("kladiniz notunuz:%d ",note);
	}
int a=5,b=3;
printf("\ntoplam %d ", (++a) * (b--));
return 0;
}
