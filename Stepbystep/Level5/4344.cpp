//
// Created by 하현수 on 2020/01/22.
//
#include <cstdio>

int main() {
    int count;
    scanf("%d",&count);
    int **array = new int*[count];
    float *means = new float[count];
    int sum = 0;
    int goodstudent = 0;
    for (int i = 0; i < count; i++)
    {
        array[i] = new int[1001];
    }
    for (int i = 0; i < count; i++)
    {
        sum = 0;
        scanf("%d",&array[i][0]);
        for (int j = 1; j <= array[i][0]; j++)
        {
            scanf("%d",&array[i][j]);
            sum += array[i][j];
        }
        means[i] = (float)sum / array[i][0];
        for (int j = 1; j <=array[i][0]; j++)
        {
            if(array[i][j] > means[i])
            {
                goodstudent++;
            }
        }
        printf("%.3f%%\n",(float)goodstudent/array[i][0] * 100);
        goodstudent = 0;
    }
    return 0;
}
