/*  Program to find exponential without using pow() method 
    This program was selected from a free C-language tutorial on the www.studytonight.com website
    URL: https://www.studytonight.com/c/programs/numbers/finding-exponential-without-pow()-method

*/
#include <sys/time.h>
#include<stdio.h>
int main()
{
    struct timeval  t0, t1;
    double tej;
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int n, exp, exp1;
    long long int value = 1;

    printf("Enter the number and its exponential:\n\n");
    scanf("%d%d",&n, &exp);
	gettimeofday(&t0,0);
    exp1 = exp;   // storing original value for future use

    // same as while((--exp)!=-1)
    while(exp-- > 0)
    {
        value *= n; // multiply n to itself exp times
    }
	gettimeofday(&t1,0);
	tej = (t1.tv_sec - t0.tv_sec) + (t1.tv_usec - t0.tv_usec)/1e6;
    printf("\n\n %d^%d = %lld\n\n", n, exp1, value);
    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    printf("  T. ejec. (serie) = %1.3f sec \n\n", tej*1000);
    return 0;
}
