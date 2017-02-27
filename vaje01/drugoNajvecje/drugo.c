#include <stdio.h>

int main(){

 int n;
 scanf("%d", &n);
 int i;

 int prva;
 int druga;
 for(i = 0; i < n; i++){
  int st;
  scanf("%d", &st);
  if(st > prva){
   druga = prva;
   prva = st;
  }else if(st > druga){
   druga = st;
  }
 }

 printf("%d\n", druga);

 return 0;
}
