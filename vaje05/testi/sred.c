#include <stdio.h>

char line[10001];

int len(char line[10001]){
 int i;
 int r = 0;
 for(i = 0; i < 10001; i++){
 if(line[i] == '\0')
  break;
  r++;
 }
 return r;
}

int put(char line[], char word[], int l){

int i;
 for(i = 0; i < l; i++){
  line[i] = word[i];
 }
 return 0;
}

int clearLine(){

 int i;
 for(i = 0; i < 10001; i++){
  line[i] = 0;
 }

 return 0;
}


int main(){

 int n;
 scanf("%d", &n);

 char word[10001];
 char in = scanf("%s", word);

 int l;
 int li = 0;

 while(in != EOF){
  l = len(word);
  if(li + l + 1 <= n){
  if(li > 0){
   line[li] = ' ';
   li++;
  }
  }else if(li > 0){
   clearLine();
   li = 0;
  }

  put(line + li, word, l);

  li += l;

  //printf("%s\n", line);
  in = scanf("%s", word);

  l = len(word);
  if((li + l + 1 > n && li > 0) || in == EOF){
   int presledki = (n - len(line))/2;
   int i;
   for(i = 0; i < presledki; i++)
    printf(" ");
   printf("%s\n", line);
  }

 }
 return 0;
}
