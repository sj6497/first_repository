#include<stdio.h>
int main(){
int row,col;
int i,j;
scanf("%d %d",&row,&col);
int arr[row][col],arr1[col][row];
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
    }
}

for(i=0;i<row;i++){
    for( j=0;j<col;j++){
        arr1[j][i]=arr[i][j];
    }
}

for(i=0;i<col;i++){
    for(j=0;j<row;j++){
        printf("%d\n",arr1[i][j]);
    }
}

}
