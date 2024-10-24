#include <stdio.h>
#include<stdlib.h>

int main()
{
    int rows = 2;
    int columns = 2;
    int *ptr;
    ptr = (int*)malloc(rows*columns*sizeof(int));

    printf("Enter matrix elements\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("Elements at [%d] [%d]\n",i,j);
            scanf("%d",ptr+(i*columns+j));
        }

    }
    printf("Matrix elements are\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {

            printf("%d ",*(ptr+(i*columns+j)));
        }
        printf("\n");

    }
    free(ptr);

    return 0;
}
