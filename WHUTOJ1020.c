#include <stdio.h>
#include <string.h>
typedef struct person
{
	char name[7];
	int birth;
}Person;

int main(){
	int N,aval=0;
	int maxp=0,minp=0;
	char name[7],input[20],date[15];
	char *year,*month,*day;
	scanf("%d",&N);
	Person p[N];
	for(int i=0;i<N;i++){
		scanf("%s %s",p[i].name,input);
		year=strtok(input,"/");
		month=strtok(NULL,"/");
		day=strtok(NULL,"/");
		memset(date,0,sizeof(date));
		strcpy(date,year);
		if(strlen(month)<2)
			strcat(date,"0");
		strcat(date,month);
		if(strlen(day)<2)
			strcat(date,"0");
		strcat(date,day);
		//puts(date);
		sscanf(date,"%d",&(p[i].birth));
		//printf("%d",p[i].birth);
		if(p[i].birth>=18140906 && p[i].birth<=20140906)
			aval++;
		else
			continue;
		if(i)
			if(p[i].birth<p[maxp].birth)
				maxp=i;
			else if(p[i].birth>p[minp].birth)
				minp=i;
			else
				continue;
	}
	printf("%d %s %s",aval,p[maxp].name,p[minp].name);
}