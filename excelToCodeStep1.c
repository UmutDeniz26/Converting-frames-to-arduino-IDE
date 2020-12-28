#include <stdio.h>
int framecounter;
int breaker;
int main(void){
	//paste the excel data and convert to frame array
 	frameToCode(""); //  <---- Paste Here
	  }
void frameToCode(char excel[]) {
  int counter = 0, k = 0, c = 0, m = 9, i = 0, t = 0,f=0;
  char frameOrder[999999];
  char result[999999];
  framecounter++;
  
while (1 == 1) {
    if (excel[i] == '1'&&excel[i-2] != 'u') {
      frameOrder[t] = excel[i];
      //printf("\n%c - %d - %d ",excel[i],i,t);
      t++;
    }
    else if (excel[i] == 'n'&&excel[i-1] != 'u') {
      frameOrder[t] = excel[i];
      //printf("\n%c - %d - %d",excel[i],i,t);
      t++;
    }
    else if (excel[i] == 'm') {
      breaker=t;
	  break;
    }
    i = i + 1;
  }
  while(f<60){
    //printf("\n%d. frame FrameOrder : %d  -  Symbol : %c",framecounter,f,frameOrder[f]);
	f++;
  }
  int l;
while (counter < 999999) {
    char x = frameOrder[counter];
    if (k % 10 == 0 && k != 0)
    {
      c++;
    }
    k++;
    if (c % 2 == 0) {
      if (x == '1') {
      	result[counter]=x;
      	//printf("Odd row (1) - Order : %d\n",counter);
      }

      if (x == 'n') {
      	result[counter]=x;
      	//printf("Odd row (n) - Order : %d\n",counter);
      }
    }

    if (c % 2 == 1) {
      if (x == '1') {
      	result[counter+m]=x;
      	//printf("Even row (1) - Order : %d\n",counter+m);
      }

      if (x == 'n') {
      	result[counter+m]=x;
      	//printf("Even row (n) - Order : %d\n",counter+m);
      }
      m = m - 2;
      if (m < -9) {
        m = 9;
      }
    }
    counter++;
  }
  int kas=0,kasa=0;
  while(kas<999999){
  	printf("%c",result[kas]);
  	if(kas==breaker){
  		break;
	  }
	  kas++;
	  if(kas%60==0){
	  	printf(" ");//%d. line - ",kasa+2);
	  	kasa++;
	  }
  }
}
