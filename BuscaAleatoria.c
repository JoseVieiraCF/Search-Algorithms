/* José Vieira */
#include <stdio.h>
#include <stdlib.h>

/* Busca Aleatória */

int RandomSearch(int array[], int element, int n){
    while (1)
    {
        int i = rand() %n;
        printf("%d\n",i);
        if(array[i] == element){
            return i; //retorna o indice em que o elemento foi encontrado
        }
        
    }
    
    
}


int main(int argc, char const *argv[])
{
    int array[] = {3,6,12,5,22,35};
    
    printf("Encontrado no indice : %d",RandomSearch(array,5,6));
    return 0;
}
