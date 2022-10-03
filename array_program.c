#include <stdio.h>


int main(int argc, char const *argv[]) {
    const size_t size = 10;
    int array[size];
    printf("%i\n", sizeof(array) / sizeof(array[1]));
    printf("%lu\n", size);
    for (size_t i = 0; i < size; i++)
    {
        array[i] = i*i;
    }
    for (size_t i = 0; i < size; i++)
    {
        printf("#%i: %i\n", i, array[i]);
    }
    return 0;
    
    

}