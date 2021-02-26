#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max){
    //указатель на ячейки динамической памяти
    int *array;
    //счетчик
    int i = 0;
    if(min >= max)
    {
        return NULL;
    }

    array = (int)malloc((max - min) * 4);
    if(array == NULL){
        return NULL;
    }

    //заполняем указатель
    while((max - min - 1) >= i){
        array[i] = min + i;
        i++;
    }
    return array;
}
int main(){
    int test[] = ft_range(1, 10);
    printf("%d", test[0]);
    return 0;
}