#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3];
    int i, j;
    printf("enter elements");
    {
        for (i = 0; i < 3; i = i + 1)
        {
            for (j = 0; j < 3; j = j + 1)
                scanf("%d\t", &a[i][j]);
        }
         
         for (i = 0; i < 3; i = i + 1)
           {
            for (j = 0; j < 3; j = j + 1)
            
                printf("%d\t  ", a[i][j]);
                printf("\n");
            }
        
    }
    getch();
}