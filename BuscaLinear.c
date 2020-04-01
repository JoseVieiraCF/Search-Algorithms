/* José Vieira */
#include <stdio.h>

/* Busca Linear */
int LinearSearch(int array[], int length, int element){
    for (int i = 0; i < length; i++)
    {
        if (array[i] == element)
        {
            
            return i; //retorna o indice em que o elemento foi encontrado
        }
    }

    return -1; //retorna -1 caso o elemento não seja encontrado
    
}



int main(int argc, char const *argv[])
{
    int array[] = {3,6,12,15};
    int resultdado = LinearSearch(array,4,39);
    if (resultdado != -1)
    {
        printf("Elemento encontrado no indice %d do vetor",resultdado);    
    }else
    {
        printf("Elemento nao encontrado");
    }
    
    
    
    return 0;
}
