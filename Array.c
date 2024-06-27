#include<stdio.h>
int main(){
    //1D Arrays

// int marks[7] = {50,60,80,40,78,36,90};
// char alphabet[10] = {'a','b','c','d','e','f','g','h','i','j'};
// int i;
 int sum = 0;
// for (i= 0; i < 7; i++)
// {
//     sum =sum + marks[i];
//     printf("mark[%d] is %d\n",i,marks[i]);

// }
// printf("%d\n", sum);
// printf("The size of the memory is %d ", sizeof(alphabet));


//2D Array
    // int matrix[2][3] = {{2, 3, 4}, {4, 6, 8}};
    // int i, j;

    // for (i = 0; i < 2; i++) {
    //     for (j = 0; j < 3; j++) {
    //         printf("%d\n", matrix[i][j]);
    //     }
    // }


//3D Array
int matrix[2][3][3] = {{{2, 3, 4},{1,2,3}}, {{4, 6, 8},{5,6,8}}, {{8,9,0},{3,6,5}}};
for (int i = 0; i < 2; i++)
{
    for (int j= 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d\n", matrix[i][j][k]);
            sum = sum + matrix[i][j][k];
            printf("%d",sum);
        }
        
    }
    
}

    return 0;
}
