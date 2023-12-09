#include<stdio.h>
#include<conio.h>
void main()
{
    int n,odd=0,even=0,i,a[10],sum;
    printf("enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter elements numbers%d",i+1);
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    odd++;
    else
    even++;
}
}
printf("odd numbers\n",odd);
printf("even numbers\n",even);
printf("sum of odd and even",sum);
getch();
}

