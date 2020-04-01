/* José Vieira */
#include <stdio.h>

/* Busca Binária Recursiva */

int BinarySearch(int array[], int l, int r, int element){
    int m = (l+r)/2;
    if (array[m] == element)
    {
        return m;
    }
    if (l >= r)
    {
        return -1;
    }else
    {
        if (array[m] < element)
        {
            return BinarySearch(array,m+1,r,element);
        }else
        {
            return BinarySearch(array,l,m-1,element);
        }
        
        
    }
    
    
    

    return -1; //retorna -1 caso o elemento não seja encontrado
    
}


int main(int argc, char const *argv[])
{
    int array[] = {3,6,12,15,22,35};
    printf("%d",BinarySearch(array,0,5,25));
    return 0;
}
