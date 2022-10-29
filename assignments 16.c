/* 1
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter the first arrays elements ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n enter the second array elements ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }
    printf(" \n sum is two matrix \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf(" %d  ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/* 2
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("enter the first arrays elements ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n enter the second arrays elements ");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }
    printf("\n product matrix is this \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d ",c[i][j]);
            sum=0;
        }
         printf("\n");

    }

    return 0;


}*/
/* 3
#include<stdio.h>
int main()
{
    int row,column,a[10][10],b[10][10],i,j;
    printf("enter the row and column numbers an arrays ");
    scanf("%d%d",&row,&column);
    printf("enter the first arrays elements ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n************************************************************\n");
    printf("\n give matrix \n ");
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            printf(" %d  ",a[i][j]);
            printf("\n");
    }
    printf("\n*****************************************************************\n");
    printf("\n transpose matrix \n");
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            b[i][j]=a[j][i];
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    return 0;

}*/
/* 4
#include<stdio.h>
int main()
{
    int row , column ,a[10][10],i,j,sum=0;
    printf("enter the an arrays row and column numbers ");
    scanf("%d%d",&row , &column);
    printf("enter arrays elements ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n give a matrix \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(a[i]==a[j])
                sum=sum+a[i][j];
        }
    }
    printf("\n sum is right diagonal matrix is %d",sum);
    return 0;
}*/
/* 5
#include<stdio.h>
int main()
{
    int row,column,a[10][10],i,j,sum=0,m=0;
    printf("enter the row and column in arrays ");
    scanf("%d%d",&row,&column);
    printf("enter the arrays elements ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n give matrix is this \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }
    m=row;
    for(i=0;i<row;i++)
    {
        m=m-1;
        for(j=0;j<column;j++)
        {
            if(j==m)
                sum=sum+a[i][j];
        }
    }
    printf("\n left diagonal matrix sum is [%d]",sum);
    return 0;
}*/
/* 6
#include<stdio.h>
int main()
{
    int row,column,a[10][10],i,j,sum=0;
    printf("enter the row and column numbers an arrays  ");
    scanf("%d%d",&row,&column);
    printf("enter the array elements ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n give matrix is this \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            sum=sum+a[i][j];
        }
        printf("\n [%d] row sum is %d",i,sum);
        sum=0;
    }
    printf("\n***************************************\n");
     for(i=0;i<column;i++)
    {
        for(j=0;j<row ;j++)
        {
            sum=sum+a[j][i];
        }
        printf("\n [%d] column sum is %d",i,sum);
        sum=0;
}
return 0;
}*/
/* 7
#include<stdio.h>
int main()
{
    int row,column,a[10][10],i,j;
    printf("enter the row and column numbers ");
    scanf("%d%d",&row,&column);
    printf("enter the arrays elements ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n***********************************************\n");
    printf("give matrix is this \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            printf("%d  ",a[i][j]);
            printf("\n");
    }
    printf("\n***********************************************\n");
    printf("lower triangle matrix \n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i<j)
            {
                a[i][j]=0;
                printf("%d  ",a[i][j]);
            }
            else
                printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/* 8
#include<stdio.h>
int main()
{
    int row,column,a[10][10],i,j;
    printf("enter the row and column numbers ");
    scanf("%d%d",&row,&column);
    printf("enter the arrays elements ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n***********************************************\n");
    printf("give matrix is this \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            printf("%d  ",a[i][j]);
            printf("\n");
    }
    printf("\n***********************************************\n");
    printf("upper triangle matrix \n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i>j)
            {
                a[i][j]=0;
                printf("%d  ",a[i][j]);
            }
            else
                printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/* 9
#include<stdio.h>
int main()
{
    int row , column,a[10][10],i,j,count=0;
    printf("enter the row and column numbers ");
    scanf("%d%d",&row,&column);
    printf("enter the arrays elements ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n give a matrix is this\n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            printf("%d  ",a[i][j]);
            printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>(row*column/2))
        printf("\n give matrix is a sparse matrix ");
    else
        printf("\n give matrix is a determine matrix ");
    return 0;
}*/

#include<stdio.h>
int main()
{
    int row,column,a[10][10],i,j,sum=0,max=0,index=0;
    printf("enter the row and column numbers an arrays ");
    scanf("%d%d",&row,&column);
    printf("enter the arrays elements ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n give matrix is this\n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(a[i][j]==1)
                sum=sum+a[i][j];
        }
        if(sum>max)
           {
               max=sum;
           index=i;
           }
           sum=0;


    }
    printf("\n row with maximum 1 numbers %d",index);
}
