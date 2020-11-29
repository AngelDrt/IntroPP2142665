/*  Program to find exponential without using pow() method 
    This program was selected from a free C-language tutorial on the www.studytonight.com website
    URL: https://www.studytonight.com/c/programs/numbers/finding-exponential-without-pow()-method
    
    Licensing:
    This code is distributed under the GNU LGPL license.

*/
#include<stdio.h>
int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int n, exp, exp1;
    long long int value = 1;

    printf("Enter the number and its exponential:\n\n");
    scanf("%d%d",&n, &exp);

    exp1 = exp;   // storing original value for future use

    // same as while((--exp)!=-1)
    while(exp-- > 0)
    {
        value *= n; // multiply n to itself exp times
    }

    printf("\n\n %d^%d = %lld\n\n", n, exp1, value);
    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
