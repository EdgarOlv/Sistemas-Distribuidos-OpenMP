include<stdio.h>
#include<omp.h>
#include<math.h>

int main()
{
    int i;
    int x[2000000];
    for(i=0; i<2000000; i++)
        x[i]=2;

    #pragma omp parallel for
    for(i=0; i<2000000; i++)
        x[i] = sqrt(x[i])+ sqrt(x[i])+ sqrt(x[i])*100;

return 0;
}

