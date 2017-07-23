#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct data
{
	double val;
	int flag;
}Data;

Data check(char *str){
	int a,b,c,d;
	char tstr1[50],tstr2[50],tstr3[50];
	double temp;
	Data dat;
	if(str[0]=='+'){
		for(int i=0;i<strlen(str)-1;i++)
			str[i]=str[i+1];
		str[strlen(str)-1]='\0';
	}
	a=sscanf(str,"%lf",&temp);
	sprintf(tstr1,"%.2lf",temp);
	sprintf(tstr2,"%.1lf",temp);
	sprintf(tstr3,"%.0lf",temp);
	b=strcmp(str,tstr1);
	c=strcmp(str,tstr2);
	d=strcmp(str,tstr3);
	//printf("%d %d %d %d %s %s\n",!b,!c,!d,(!b||!c||!d),str,tstr1);
	if(!a||(temp<-1000)||(temp>1000)||!(!b||!c||!d)){
		printf("ERROR: %s is not a legal number\n",str);
		dat.val=dat.flag=0;
	}
	else{
		dat.val=temp;
		dat.flag=1;
	}
	return dat;
}

int main(){
	int N,flag=1;
	int cor=0;
	Data temp;
	char str[50];
	double avr=0;
	do{
		scanf("%d",&N);
		if(!N)
			break;
		for(int i=0;i<N-1;i++){
			scanf("%s ",str);
			temp=check(str);
			avr+=temp.val;
			if(temp.flag)
				cor++;
		}
		scanf("%s",str);
		temp=check(str);
		avr+=temp.val;
		if(temp.flag)
			cor++;
		if(cor==1)
			printf("The average of 1 number is %.2lf\n",avr);
		else if(cor>1)
			printf("The average of %d numbers is %.2lf\n",cor,avr/cor);
		else
			printf("The average of 0 numbers is Undefined\n");
		avr=0;
		cor=0;
	}while(1);
}

