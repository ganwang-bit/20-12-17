//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,j,a;
    printf("请输入矩阵的行:");
    scanf("%d",&n);
    printf("请输入矩阵的列:");
    scanf("%d",&m);
    int arr1[n][m];
    int arr2[m][n];
    printf("请输入第一个矩阵的值:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("请输入第二个矩阵的值:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int arr3[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            arr3[i][j]=0;
            for(a=0;a<n;a++)
            {
                    arr3[i][j]+=arr1[i][a]*arr2[a][j];
            }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%4d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
