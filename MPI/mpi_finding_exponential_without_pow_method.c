/*
    This program is an example of finding the power of a number without using the pow () method.
    This program is a modification of the origial code selected from a free C-language tutorial on the www.studytonight.com website
    URL: https://www.studytonight.com/c/programs/numbers/finding-exponential-without-pow()-method
    
    Licensing:
    This code is distributed under the GNU LGPL license.
    
    OpenMP Modification:    
    30 January 2021 by Miguel Duarte Delgado, Universidad Industrial de Santander miguel.duarte1@correo.uis.edu.co                   
    
    This modification of MPI makes a parallelization of the original code as well as a modification in the use of the variables involved.
    
*/
#include<mpi.h> //include the mpi library
#include<stdio.h>
#include<stdlib.h>
int main( int argc, char *argv[])
{
    

    int n, exp, i, taskid, numtasks, resul;
    long long int value = 1;
    double t0, t1;
    MPI_Init(&argc, &argv); //initialize all data structures to allow communication between processes based MPI
	MPI_Comm_size(MPI_COMM_WORLD, &numtasks); //determine 
	MPI_Comm_rank(MPI_COMM_WORLD,&taskid);
	
	if (numtasks < 2) //mandatory tto use at least 2 processors
	{
		printf("You Have to use at least 2 processors to run this program\n");
		MPI_Finalize();
		exit(0);
	}
    if (taskid == 0) //root task 
    {
		printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
		printf("Enter the number (base) and its exponential:\n");
		//scanf("%d %d", &n, &exp);
		n = 18;
		exp = 12;
	
		t0 = MPI_Wtime(); //start time
	}
	//sends the same data to all processes in a communicator.
	MPI_Bcast(&n, 1, MPI_INT, 0, MPI_COMM_WORLD);
	MPI_Bcast(&exp, 1, MPI_INT, 0, MPI_COMM_WORLD);
	
	while(exp-- > 0)
    {
        value *= n; // multiply n to itself exp times
    }
	//takes data of input elements on each process and returns an array of output elements to the root process.
	MPI_Reduce(&value, &resul, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
    // printing results
    if (taskid == 0)
    {
		t1 = MPI_Wtime(); //end time
		printf("\n\n %d^%d = %lld\n\n", n, exp, value);
		printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
		printf("\n  T. ejec. (%d proc.) = %1.3f ms \n\n",numtasks,(t1-t0)*1000);
	}
    MPI_Finalize(); //allow finishing of a MPI session
    return 0;
}
