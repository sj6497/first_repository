#include<stdio.h>
int main(){
int row,col;
int i,j;
scanf("%d %d",&row,&col);
int arr[row][col];
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
    }
}

for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        if(i>j){
            int t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[i][j]=t;
        }
    }
}

for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("%d\n",arr[i][j]);
    }
}

}
