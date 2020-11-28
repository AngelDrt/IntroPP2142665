/*
    This program is an example of finding the power of a number without using the pow () method.
    This program is a modification of the origial code selected from a free C-language tutorial on the www.studytonight.com website
    URL: https://www.studytonight.com/c/programs/numbers/finding-exponential-without-pow()-method

    OpenMP Modification:
    
    27 July 2020 by Miguel Duarte Delgado, Universidad Industrial de Santander miguel.duarte1@correo.uis.edu.co                   
    
    This modification of OpenMP makes a parallelization of the original code as well as a modification in the
    main loop (replacing while loop for for loop) and in the use of the variables involved.
*/
#include<omp.h>
#include<stdio.h>
int main( int argc, char *argv[])
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int n, exp, tid, i, nthreads;
    long long int value = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter its exponential: ");
    scanf("%d",&exp);
    //define the parallel region
    #pragma omp parallel private(tid)
    {
        #pragma omp for private(i) //divide the task / number of threads
        // tihs for loop replaces while loop of the original code.
        for(i=1;i<=exp;i++) 
        {
            #pragma omp critical //specifies this region of code is executed by only one thread at a time.
            value *= n;            
        }
    }//end of parallel region
    printf("\n\n %d^%d = %lld\n\n", n, exp, value); //print calculation result by master thread.
    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
