//fibonacci
#include <stdio.h>

// Fn = Fn-1 + Fn-2 para n>2.

long int fibonacci(int n)
{
    if ((n == 1) || (n == 2))
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%ld", fibonacci(n));



    return 0;
}

