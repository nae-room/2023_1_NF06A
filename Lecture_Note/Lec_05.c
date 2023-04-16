#include <stdio.h>
#include <math.h>
#define NTimes 5

void main()
{
    int i;
    float x;
    float rootx;

    printf("Hi!\n");
    printf("I will compute %d square roots\n", NTimes);

    for(i=0; i<NTimes; i++)
    {
        printf("Enter a number : ");
        scanf("%f", &x);
        if(x<0) printf("The number %f does not have a square root\n", x);
        else
        {
            rootx=sqrt(x);
            printf("The number %f has the following square root : %f\n", x, rootx);
        }
    }
    printf("Bye!");
}