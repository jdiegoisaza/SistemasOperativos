#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  srand(time(NULL)); // Inicializacion del generador
  char filename[80];
  char line[201];
  int cantChar,cantLin,cantPal,cantWh,cantMy,cantMn,cantDi;
  char ch,pal,wh,my,mn,di;
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
    printf("%-5d",++cantLin);//muestra el numero de la linea en la que se encuentra
    printf("%s",line);
  }
  printf("LA cantidad de lineas es: %d\n",cantLin);

  //Cuenta las palabras
  int bol=1;
  do {
    pal = getc(inputFile); 
    if(pal==' '||pal=='\n'||pal==','||pal=='.'){//aclaramos que los caracteres , y . no cuentan como palabra
        if(bol==0){cantPal++;}
        bol=1;
    }else{
        bol=0;
    }
  } while(pal != EOF);
  printf("La cantidad de palabras es: %d\n",cantPal);
    do {
    wh = getc(inputFile); 
    if(wh==' '||wh=='\n'){
        cantWh++;
    }
  } while(wh != EOF);
  printf("La cantidad de whitespaces o saltos es: %d\n",cantWh);
  do {
    my = getc(inputFile); 
    if(my<91&&my>64){
        cantMy++;
    }
  } while(my != EOF);
  printf("La cantidad de Mayusculas es: %d\n",cantMy);
  do {
    mn = getc(inputFile); 
    if(mn<123&&mn>96){
        cantMn++;
    }   
  } while(mn != EOF);
  printf("La cantidad de minusculas es: %d\n",cantMn);*/
  do {
    mn = getc(inputFile); 
    if(di<58&&di>47){
        cantDi++;
    }
  } while(di != EOF);
  printf("La cantidad de digitos es: %d\n",cantDi);


  printf("\n");
  fclose(inputFile);
  exit(0);
}
