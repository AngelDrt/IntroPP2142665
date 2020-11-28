En el directorio actual se encuentran los 5 archivos de la entrega de la evaluación 1:
- exponential_without_pow_method.c (archivo original)
- omp_exponential_without_pow_method.c
- exponential_without_pow_method.sbatch
- README.md
- output_exponential_without_pow_method.txt
### Descripcion del programa
El código calcula de manera básica la potencia de un número entero positivo sin utilizar el método pow() en el lenguaje C. La actividad consiste en paralelizar el codigo original (serial). 
### Ejecución del programa en Guane:
1. Usar el comando gcc -fopenmp omp_exponential_without_pow_method.c -o output_exponential_without_pow_method.txt
2. Usar el comando sbatch exponential_without_pow_method.sbatch
