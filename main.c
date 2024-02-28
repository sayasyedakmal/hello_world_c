/*
    Constant

    - cant be modified
    - common practice - the const variable is written in UPPERCASE

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int NUM = 5;
    printf("%d\n",NUM);
    NUM = 8; //will throw error
    printf("%d",NUM);
    return 0;
}
