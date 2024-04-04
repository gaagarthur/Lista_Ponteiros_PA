#include <stdio.h>
#include <stdlib.h>

int main(void){

int ***mat;
int height, length, width;

printf(" entre com altura,\n largura e profundidade ma matriz:");
scanf("%d %d %d", &height, &length, &width);


mat = (int***)malloc(width*sizeof(int**));//alocar matriz auxiliar 1

mat[0] = (int**)malloc(width*height*sizeof(int*));//alocar matriz auxiliar 2
  for(int i=1;i<height; i++){
    mat[i] = mat[i-1]+height;
  }
mat[0][0] = (int*)malloc(width*height*length*sizeof(int));
  for(int i=1; i<(width*height); i++){
     

  }


}