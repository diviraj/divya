#include<stdio.h>
int main(){
    int num,r,sum=0,temp=0,u,a[100],i; 
    scanf("%d",&u);
    for(i=0;i<u;i++)
    {
    	scanf("%d",&a[i]);
    	temp+=a[i];
    }
    num=temp;
    while(num){
         r=num%10;
         num=num/10;
         sum=sum*10+r;
    }
    if(temp==sum)
         printf("%d is a palindrome",temp);
    else
         printf("%d is not a palindrome",temp);

    return 0;
}
