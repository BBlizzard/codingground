#include <stdio.h>

int main()
{
    int a[5] = {71,609,3,906,72};
    int i=0; int j=0, temp=0;
    
    for (i=0;i<4;i++)
    {
        for (j=i+1;j<5;j++)
        {
            if (a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for (i=0;i<5;i++)
        printf("%d, ",a[i]);
}

