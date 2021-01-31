En el directorio actual se encuentran los archivos de la entrega de la evaluación 2:
- finding_exponential_without_pow_method.c (archivo original)
- mpi_finding_exponential_without_pow_method.c
- mpi_finding_exponential_without_pow_method.sbatch
- output_finding_exponential_without_pow_method.txt
- README.md
### Descripcion del programa
El código calcula de manera básica la potencia de un número entero positivo sin utilizar el método pow() en el lenguaje C. La actividad consiste en paralelizar el codigo original (serial) mediante el uso de MPI. 
### Ejecución del programa en pc:
1. Usar el comando gcc -lm mpi_finding_exponential_without_pow_method.c -o mpi_finding_exponential_without_pow_method
2. Usar el comando mpirun ./mpi_finding_exponential_without_pow_method

### Ejecucion en GUANE
1. Usar el comando mpicc -lm mpi_finding_exponential_without_pow_method.c -o mpi_finding_exponential_without_pow_method
2. Usar el comando sbatch mpi_finding_exponential_without_pow_method.sbatch
3. Abrir el archivo output_finding_exponential_without_pow_method.txt
