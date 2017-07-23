#include <stdio.h>
#include <math.h>
int main(){
	int origin,tot=0,output[5];
	scanf("%d",&origin);
	for(int i=0;i<5;i++){
		output[i]=origin/(int)pow(10,4-i);
		origin-=output[i]*(int)pow(10,4-i);
		//printf("%d\n",origin);
	}
	for(int i=5;i;i--)
		tot+=output[i-1]*(int)pow(10,i-1);
	printf("%d\n",tot);
}