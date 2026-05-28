int main(){
    int R,C;
    printf("Enter the R");
    scanf("%d",&R);
    printf("Enter the C");
    scanf("%d",&C);
//for negate a value 
for(int i=0;i<R;i+=2){
    for(int j=0;j<C;j++){
        matrix[i][j]=-matrix[i][j];
    }
}
//reverse everey coloumn
for(int j=0;j<C;j++){
    int top=0;
    int bottom=R-1;
    while(top<bottom){
    int temp=matrix[top][j];
    matrix[top][j]=matrix[bottom][j];
    matrix[bottom][j]=temp;
    top++;
    bottom--;
    }
  }
}