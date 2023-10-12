#include <stdio.h>
int main(){
    int benimMatrism[2][3] = {{1,4,2},{3,6,8}};

    int i, j;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",benimMatrism[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}