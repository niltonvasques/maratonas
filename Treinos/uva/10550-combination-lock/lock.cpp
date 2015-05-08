#include <stdio.h>
int main()
{
    int a,b,c,d,temp,n;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)== 4&&!(a==0 && b==0 && c==0 &&d==0)){
     n=1080;
     temp=a-b;
     if(temp<0)temp=temp+40;
     n=n+temp*9;
     printf("%d %d\n", temp, n);
     temp=c-b;
     if(temp<0)temp=temp+40;
     n=n+temp*9;
     printf("%d %d\n", temp, n);
     temp=c-d;
     if(temp<0)temp=temp+40;
     n=n+temp*9;
     printf("%d %d\n", temp, n);
     printf("%d\n",n);
    }
    return 0;
}
