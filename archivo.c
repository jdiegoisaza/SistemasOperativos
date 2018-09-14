#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  srand(time(NULL)); // Inicializacion del generador
  char filename[80];
  char line[201];
  int cantChar,cantLin,cantPal;
  char ch,pal;
  char *p1;
  FILE *inputFile,*copiaC,*copiaL;
  printf("Ingrese el nombre de la cadena de ADN a generar: ");
  scanf("%[^\n]s",filename); // Formato para que la entrada pueda aceptar espacios
  inputFile = fopen(filename,"r");
  if (inputFile == NULL) {
    printf("Error al abrir el archivo %s\n", filename);
    exit(-1);
  }
  copiaC=fopen(filename,"r");
  copiaL=fopen(filename,"r");
  /*//imprime la cantidad de caracteres
  do {
    ch = getc(copiaC); 
    cantChar++; 
  } while(ch != EOF);
  printf("LA cantidad de caracteres es: %d\n",cantChar);

    //imprime la cantidad de lineas
  while(fgets(line, 1000, inputFile)!=NULL) {
    printf("%-5d",++cantLin);
    printf("%s",line);
  }
  printf("LA cantidad de lineas es: %d\n",cantLin);
    */
  //Cuenta las palabras
  int bol=1;
  do {
    pal = getc(copiaC); 
    if(pal==' '||pal=='\n'){
        if(bol=0){cantPal++;} 
        bol=1;
    }else{
        bol=0;
    }
  } while(pal != EOF);
  printf("La cantidad de palabras es: %d\n",cantPal);

  printf("\n");
  fclose(inputFile);
  exit(0);
}
