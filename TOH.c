#include <stdio.h>

void TOH(int n,int s,int a,int d)
{
    if(n==1)
    printf("Move %d to %d\n",s,d);
    else
    {
        TOH(n-1,s,d,a);
        printf("Move %d to %d\n",s,d);
        TOH(n-1,a,s,d);
    }
}

int main()
{
    TOH(4,1,2,3);
    return 0;
}