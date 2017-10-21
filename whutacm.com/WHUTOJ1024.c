#include <stdio.h>  
#include <math.h>  
int sol=0;
int q[10];
int find(int i,int k)    
{  
	for(int j=1;j<i;j++)
		if(q[j]==k || abs(j-i)==abs(q[j]-k))   
            return 0;  
   	return 1;
}  

void place(int k,int n)    
{   
    if(k>n)  
        sol++;
    else  
        for(int j=1;j<=n;j++)
            if(find(k,j))  
            {  
                q[k] = j;  
                place(k+1,n);  
            }   
}  
  
int main(void)  
{  
    int n;  
    scanf("%d",&n);  
    place(1,n);
    printf("%d\n",sol);
    return 0;        
}  