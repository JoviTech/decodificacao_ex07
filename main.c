#include<stdio.h>
#define MAX_FRASE 100

int main()
{
  char frase[MAX_FRASE];
  int tam;

  fgets(frase,MAX_FRASE,stdin);
  tam = strlen(frase);

  for(int i=0; i<tam; i++){
    switch (frase[i])
    {
    case 'v':
      frase[i] = 'u';

      break;
    
    default:
      break;
    }
  }
  printf("%s",frase);
  
  return 0;
}