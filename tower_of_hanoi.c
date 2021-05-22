#include <stdlib.h>
#include <stdio.h>

int ToH(int n, char src, char tgt, char via)
{
    int cnt;
    
    //base case for terminating recursion
    if(n==1)
    {
        printf("Move disc %d from peg %c to peg %c\n", n, src, tgt);
        return 1;
    }

    cnt=0;

    //src->A target->C via->B
    cnt+=ToH(n-1,src, via, tgt);
    printf("Move disc %d from peg %c to peg %c\n", n, src, tgt);
    ++cnt;
    cnt+=ToH(n-1, via, tgt, src);

    return cnt;
}
int main()
{
    int n;

    int nsteps=0; 

    printf("n= ");
    scanf("%d", &n);
    nsteps += ToH(n, 'A', 'B', 'C');
    printf("Number of steps: %d\n", nsteps);

    return 0;

}