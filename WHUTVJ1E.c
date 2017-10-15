#include<stdio.h>
int main(){
	int num,tri[30][30];
	while(scanf("%d",&num)!=EOF){
		for(int i=0;i<num;i++){
			tri[i][0]=1;
			tri[i][i]=1;
			printf("1");
			for(int j=1;j<=i;j++){
				if(j!=i)
					tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
				printf(" %d",tri[i][j]);
			}
			putchar('\n');
		}
		putchar('\n');
	}
}