En el directorio actual se encuentran los archivos de la entrega de la evaluación 1:
- finding_exponential_without_pow_method.c (archivo original)
- omp_finding_exponential_without_pow_method.c
- README.md
- finding_exponential_without_pow_method.sbatch
### Descripcion del programa
El código calcula de manera básica la potencia de un número entero positivo sin utilizar el método pow() en el lenguaje C. La actividad consiste en paralelizar el codigo original (serial). 
### Ejecución del programa en pc:
1. Usar el comando gcc -fopenmp omp_finding_exponential_without_pow_method.c -o omp_finding_exponential_without_pow_method
2. Usar el comando ./omp_finding_exponential_without_pow_method

### Ejecucion en GUANE
1. Usar el comando gcc -fopenmp omp_finding_exponential_without_pow_method.c -o omp_finding_exponential_without_pow_method
2. Usar el comando sbatch finding_exponential_without_pow_method.sbatch
