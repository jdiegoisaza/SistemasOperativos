#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL)); // Inicializacion del generador
  char filename[80];
  char line[201];
  int cantChar;
  char ch;
  char *p1;
  FILE *inputFile;
  printf("Ingrese el nombre de la cadena de ADN a generar: ");
  scanf("%[^\n]s",filename); // Formato para que la entrada pueda aceptar espacios
  inputFile = fopen(filename,"r");
  if (inputFile == NULL) {
    printf("Error al abrir el archivo %s\n", filename);
    exit(-1);
  }
  /*//imprime la cantidad de caracteres
  do {
    ch = getc(inputFile);    
  } while(ch != EOF);
  printf("LA cantidad de caracteres es: %d\n",cantChar);*/

    //imprime la cantidad de lineas
  while(fgets(line, 201, inputFile)!=NULL) {
    printf("%-5d",cantChar++);
    printf("%s",line);
  }
  printf("LA cantidad de lineas es: %d\n",cantChar);



  printf("\n");
  fclose(inputFile);
  exit(0);
}
