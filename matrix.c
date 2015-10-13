#include<stdio.h>
#define N 100
#define M 100
typedef int matrix[N][M];
int n1,n2,m1,m2,i,j,k;
matrix a,b,c;

int main()
{
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    scanf("%d %d",&n1,&m1); //read matrix a
        for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
        scanf("%d ",&a[i][j]);
    scanf("%d %d",&n2,&m2); //read matrix b
        for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
        scanf("%d ",&b[i][j]);
    if (m1!=n2){printf("Rows of matrix a and columns of matrix b don't match");return 0;}
    for(i=0;i<n1;i++)       //calculate matrix c=a*b
        for(k=0;k<m2;k++)
            for(j=0;j<m1;j++)
            c[i][k]+=a[i][j]*b[j][k];
    for(i=0;i<n1;i++)       //print matrix c
    {
        for(j=0;j<m2;j++)printf("%d ",c[i][j]);
        printf("\n");
    }
    fclose(stdout);
    return 0;
}
