#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myChar = 'D';
    int myInt = 2147483647;
    long int myNumber = 9223372036854775807;
    // long long int(%lld) kullanımına da bakınız.
    float myFloat = 2.56;
    double myDouble = 436.203;

    
    printf("%c\n",myChar);
    printf("%d\n",myInt);
    printf("%ld\n",myNumber);
    printf("%f\n",myFloat);
    printf("%lf\n",myDouble);

    return 0;
}