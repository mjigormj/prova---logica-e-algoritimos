#include<stdio.h>
#define SIZE 10;
void main(){
	
/*
a) #define SIZE 100;
b) define SIZE = 10;
c) int b[10] = {0}, i;
for(i=0;i<=10;i++){

b[i]=1;

}*/



int b[10], i, tot;
for(i=0;i<=9;i++){
b[i]=1;
tot = i * SIZE;
printf("\n %d %d %d", i, b[i], tot);
}

}
