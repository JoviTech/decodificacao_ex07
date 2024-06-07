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
    case 'z':
      frase[i] = 'A';
      break;
    case 'y':
      frase[i] = 'E';
      break;
    case 'w':
      frase[i] = 'O';
      break;
    case 'k':
      frase[i] = 'T';
      break;
    case 'K':
      frase[i] = 'T';
      break;
    case 'b':
      frase[i] = 'M';
      break;
    case 'd':
      frase[i] = 'N';
      break;
    case 'f':
      frase[i] = 'P';
      break;

    default:
      break;
    }
  }
  printf("%s",frase);
  
  return 0;
}