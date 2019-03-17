#include <stdio.h>

int sumint(int a, int b)
{
    int c =0;
    c = a+b;
    return (c);
    
}

int  main()
{
    int param1 =0;
    int param2 = 0;
    
    printf("Enter an integer number: ");
    scanf("%d",&param1);
    printf("Enter second integer number: ");
    scanf("%d",&param2);

    int sum = 0;
    sum = sumint(param1, param2);
    printf(" The sum is %d", sum);
    printf("\n");
    
    return 0;
}
