#include <stdio.h>

int main(){
  int col1, col2, row1 , row2, sum = 0;

  int m1[10][10], m2[10][10], result[10][10];

  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &col1, &row1);
  printf("Enter elements for first matrix: \n");

  for(int i = 0; i < col1; i++){
    for(int j= 0; j < row1; j++){
      printf("[%d][%d]: ", i, j);
      scanf("%d", &m1[i][j]);
    }
  }

  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &col2, &row2);


  if(row1 != col2){
    printf("The matries can't be multiplied with each other.\n");
    return 1;
  }
  else{
    printf("Enter elements for second matrix: \n");
    for(int i = 0; i < col2; i++){
      for(int j= 0; j < row2; j++){
        printf("[%d][%d]: ", i, j);
        scanf("%d", &m2[i][j]);
      }
    }
    // Multiply 2 matries
    for(int i = 0; i < col1; i++){
      for(int j = 0; j < row2; j++){
        for(int k = 0; k < col2; k++){
          sum = sum + m1[i][k]* m2[k][j];
        }
        result[i][j] = sum;
        sum = 0;
      }
    }

    printf("Result matrix: \n");

    for(int i = 0; i < col1; i++){
      for(int j = 0; j < row2; j++){
        printf("%d\t", result[i][j]);
      }
      printf("\n");
    }
  }

  return 0;

}
