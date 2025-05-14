#include <stdio.h>
int main(){
    int i,j;
    int row,col;
    
    printf("enter the rows and col:");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    printf("enter the elements of matrixA:");
    for(i=0;i<row;i++){0
    
    
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);}
        }
        printf("enter the elements of matrix B:");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&b[i][j]);}
        }
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
}
printf("Sum matrix is:\n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("%6d",c[i][j]);
    }
    printf("\n");
}
}
