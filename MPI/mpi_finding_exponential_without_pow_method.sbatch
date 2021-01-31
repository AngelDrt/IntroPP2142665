#!/bin/bash

#SBATCH --partition=normal  # Nombre de la particion - Los nombres se obtienen con el comando sinfo
#SBATCH --job-name=MPI   # Nombre de la tarea a ejecutar - puede ser cualquiera
#SBATCH --nodes=2           # Cantidad de nodos a usar
#SBATCH --ntasks=2          # Numero de tareas a ejecutar
#SBATCH --cpus-per-task=4  # Numero de cores asignados a cada tarea
#SBATCH --ntasks-per-node=1 # Numero total de tareas a ejecutar por nodo
#SBATCH --output=output_finding_exponential_without_pow_method.txt # Archivo de salida donde se encuentran los resultados de la ejecucion
#SBATCH --error=err_finding_exponential_without_pow_method.err  # Archivo que contiene los errores de ejecucion

module load devtools/mpi/openmpi/4.0.1    # Modulo que contiene el software a usar

if [ -n "$SLURM_CPUS_PER_TASK" ]; then
  omp_threads=$SLURM_CPUS_PER_TASK
else
  omp_threads=1
fi

export OMP_NUM_THREADS=$omp_threads
 
mpirun -np 2 ./mpi_finding_exponential_without_pow_method

