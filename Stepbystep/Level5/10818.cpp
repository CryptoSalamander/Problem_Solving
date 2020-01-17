#include <cstdio>

int main() {
    int num;
    int* array;
    int max = -1000000;
    int min = 1000000;

    scanf("%d",&num);
    array = new int[num];
    for(int i = 0; i < num; i++)
    {
        scanf("%d",&array[i]);
        if(array[i] > max)
        {
            max = array[i];
        }
        else if(array[i] < min)
        {
            min = array[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}