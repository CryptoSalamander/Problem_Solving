#include <stdio.h>
int main(){
    int i;
    int num,f,t;
    int temp;
    scanf("%d",&num);
    f = num/5;
    temp = num%5;
    if(num%5 == 0)
    {
        printf("%d",f);
        return 0;
    }
    else
        if((num%5)%3 == 0)
        {
            t = (num%5)/3;
            printf("%d",f+t);
            return 0;
        }
        else
        {
            for(i = f-1;i >= 0; --i)
            {
                temp = temp +5;
                printf("i: %d f: %d t: %d temp : %d \n",i,f,t,temp);
                if(temp%3 == 0)
                {
                    printf("enter here!\n");
                    t = temp/3;
                    printf("%d",i+t);
                    return 0;
                }
            }
        }
    printf("%d",-1);
    return 0;
   
    
    
}
