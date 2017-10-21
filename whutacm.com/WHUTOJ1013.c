#include <stdio.h>
int main( )
{  
    int sex,height,father,mother,realh;
    scanf("%d%d%d%d",&sex,&father,&mother,&realh);
    if(sex>2||sex<1){
        printf("输入的性别错误");
        return 0;
    }
    if(sex==1)  
        height=(father+mother)*1.08/2+0.5;
    else
        height=(father*0.923+mother)/2+0.5;
    printf("%d\n",height);
    if((height-realh)<=3 && (realh-height)<=3)
        printf("符合\n");
    else 
        printf("不符合\n");
}
