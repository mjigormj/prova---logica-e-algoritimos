#include<stdio.h>
#include<math.h>
#define SIZE 100
void main(){
int x = 1;
int soma = 0, contador;

//a
for(contador=1; contador <= 99; contador = contador+1){
  if (contador%2!=0){
     soma = soma + contador;
  }
}

//b
float a = pow(2.5, 3);
printf("%10.2f \n",a);
//0000015.63

//c
while(x<=20){

  printf("%d", x);

  if(x%5 == 0){ printf ("\n");
  }

  else { printf("\t"); }
  
  x=x+1;
}


}
