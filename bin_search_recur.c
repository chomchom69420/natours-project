#include<stdio.h>
#include <stdlib.h>

int binsearch(int A[], int x, int L, int R)
{
    printf("\nL=%d R=%d Window size=%d", L, R, R-L+1);

    //base case
    if(L==R)
    {
        return (x==A[L])?1:0;
    }

    int M;

    M=(L+R)/2;
    if(x<=A[M])
    {
        return binsearch(A,x, L, M);
    }
    else
    {
        return binsearch(A,x,M+1,R);
    }
}

int main()

{
    int n=10;
    int A[]={3,5,14,16,16,16,21,25,32,35,40};
    int x;
    
    printf("x= ");
    scanf("%d", &x);
    if(binsearch(A,x,0,n-1))
    {
        printf("\nFound\n");
    }
    else
    {
        printf("\nNot found\n");
    }
    
    return 0;

}