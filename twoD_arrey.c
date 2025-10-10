#include<stdio.h>
int main()
{
    int data[4][4];

    printf("Please enter you data (matrix) in Rows & Coloumn (3*3): \n");
    for(int y=0; y<4; y++)
    {
        for(int z=0; z<4; z++)
        {
            scanf("%d",&data[y][z]);
        }
    }

    printf("Your Data Matrix: ");

    for(int y=0; y<4; y++)
    {
        printf("\n\n");
        for(int z=0; z<4; z++)
        {
            printf(" %d ",data[y][z]);
        }
    }

    return 0;
    
}