#include <stdio.h>
int main(){
	int N,h,v,vu,vd,o;
	char c;
	scanf("%d",&N);
	getchar();
	while(N--){
		scanf("%c %d",&c,&o);
		getchar();
		vu=(o-3)/2;
		h=vd=(o-3)-vu;
		v=o/6+1;
		for(int i=0;i<v;i++)
			putchar(' ');
		for(int i=0;i<h;i++)
			putchar(c);
		putchar('\n');
		for(int i=0;i<vu;i++){
			for(int j=0;j<v;j++)
				putchar(c);
			for(int j=0;j<h;j++)
				putchar(' ');
			for(int j=0;j<v;j++)
				putchar(c);
			putchar('\n');
		}
		for(int i=0;i<v;i++)
			putchar(' ');
		for(int i=0;i<h;i++)
			putchar(c);
		putchar('\n');
		for(int i=0;i<vd;i++){
			for(int j=0;j<v;j++)
				putchar(c);
			for(int j=0;j<h;j++)
				putchar(' ');
			for(int j=0;j<v;j++)
				putchar(c);
			putchar('\n');
		}
		for(int i=0;i<v;i++)
			putchar(' ');
		for(int i=0;i<h;i++)
			putchar(c);
		putchar('\n');
		if(N)
			putchar('\n');
	}
}