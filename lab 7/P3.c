#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x,i,prime;
    for(x = 50; x <= 100; ++x)
    {
        prime = 1; //0 - False Prime Number, 1 - True prime number
        for(i=2;i<=x-1;++i) //One for loop for the range, another for the divisor
        {
            if(x%i == 0)
            {
                prime = 0;
                break;
            }
        }
        if(prime == 1)
        {
            printf("%d\n",x);
        }
    }
    return(0);
}
