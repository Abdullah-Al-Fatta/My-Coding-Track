#include<stdio.h>
int main()
{
    int i,f1=0,f2=1,f,n;
    printf("How many Fibunacci numbers?: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%d\n",f1);
        }

        if(i>=1)

        {
            f=f1+f2;
            f2=f1;
            f1=f;
            printf("%d\n",f);
        }
    }
    return 0;
}
