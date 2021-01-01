

#include <stdio.h>
#include <omp.h>

int main()
{
    printf("Inicio do main\n");
    #pragma omp parallel
    {
        int id;
        id = omp_get_thread_num();
        printf("Sou a Thread: %d !\n", id);
        if(id == 0)
        {
            int quantidade = omp_get_num_threads();
            printf("total = %d\n", quantidade);
        }
    }

    printf("Fim do main\n");

    return 0;
}


