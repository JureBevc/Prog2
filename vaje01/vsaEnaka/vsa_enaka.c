#include <stdio.h>

int main(){

 int n;
 scanf("%d", &n);

 int r = 1;
 int prva;
 int i = 0;
 while(i < n){
  int temp;
  scanf("%d", &temp);
  if(i == 0)
   prva = temp;
  else if(prva != temp)
   r = 0;
  i++;
 }

 printf("%d\n", r);
 return 0;
}
