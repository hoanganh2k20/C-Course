#include <stdio.h>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

int Compare_array(const int *array1, size_t size1, const int* array2, size_t size2){

    if(size1 != size2){
        return 0;
    }
    for(size_t i = 0;i < size1;i++){
        if(array1[i] == array2[i]){
            return 1;
        }
    }

    return 0;

}

int main(int argc, char const *argv[])
{
    /* code */
    int array1[5] = {1,2,3,4,5};
    int array2[3] = {2,4,6};
    int array3[5] = {1,2,3,4,5};
    int array4[6] = {0,3,5,6,7,9};

    printf("%d\n", Compare_array(array1, SIZE_OF_ARRAY(array1), array1, SIZE_OF_ARRAY(array1)));
    printf("%d\n", Compare_array(array1, SIZE_OF_ARRAY(array1), array2, SIZE_OF_ARRAY(array2)));
    printf("%d\n", Compare_array(array1, SIZE_OF_ARRAY(array1), array3, SIZE_OF_ARRAY(array3)));
    printf("%d\n", Compare_array(array1, SIZE_OF_ARRAY(array1), array4, SIZE_OF_ARRAY(array4)));

    return 0;
}
