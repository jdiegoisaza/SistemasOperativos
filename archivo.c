#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(int argc,char *argv[]) {
  srand(time(NULL)); // Inicializacion del generador
  char line[201];
  int cantChar=0,cantLin=0,cantPal=0,cantWh=0,cantMy=0,cantMn=0,cantDi=0;
  char ch,pal,wh,my,mn,di,*cad,*cad2;
  FILE *copiaC,*copiaL,*copiaP,*copiaW,*copiaMa,*copiaMi,*copiaD,*output;
  cad=argv[1];
  copiaC=fopen(cad,"r");
  if (copiaC == NULL) {
    printf("Error al abrir el archivo %s\n", cad);
    exit(-1);
  }
  printf("Obteniendo estadisticas...\n");
  //imprime la cantidad de caracteres
  do {
    ch = getc(copiaC); 
    cantChar++; 
  } while(ch != EOF);
  printf("chars: %d\n",cantChar);
  fclose(copiaC);
    //imprime la cantidad de lineas
  copiaL=fopen(cad,"r");
  while(fgets(line, 1000, copiaL)!=NULL) {
    ++cantLin;
  }
  printf("lines: %d\n",cantLin);
  fclose(copiaL);
  //Cuenta las palabras
  copiaP=fopen(cad,"r");
  int bol=1;
  do {
    pal = getc(copiaP); 
    if(pal==' '||pal=='\n'||pal==','||pal=='.'){//aclaramos que los caracteres , y . no cuentan como palabra
        if(bol==0){cantPal++;}
        bol=1;
    }else{
        bol=0;
    }
  } while(pal != EOF);
  printf("words: %d\n",cantPal);
  fclose(copiaP);
  //Cuenta whitespaces
  copiaW=fopen(cad,"r");
  do {
    wh = getc(copiaW); 
    if(wh==' '||wh=='\n'){
        cantWh++;
    }
  } while(wh != EOF);
  printf("whitespaces: %d\n",cantWh);
  fclose(copiaW);
  //Cuenta Mayusculas
  copiaMa=fopen(cad,"r");
  do {
    my = getc(copiaMa); 
    if(my<91&&my>64){
        cantMy++;
    }
  } while(my != EOF);
  printf("uppercases: %d\n",cantMy);
  fclose(copiaMa);
  //Cuenta minusculas
  copiaMi=fopen(cad,"r");
  do {
    mn = getc(copiaMi); 
    if(mn<123&&mn>96){
        cantMn++;
    }   
  } while(mn != EOF);
  printf("lowercases: %d\n",cantMn);
  fclose(copiaMi);
  //Cuenta digitos
  copiaD=fopen(cad,"r");
  do {
    di = getc(copiaD); 
    if(di<58&&di>47){
        cantDi++;
    }
  } while(di != EOF);
  printf("digits: %d\n",cantDi);
  fclose(copiaD);
  cad2=strcat( cad, "_stats.txt" );
  printf("%s --> generando reporte %s\n",cad,cad2);
  printf("Estadisticas culminadas\n");
  output=fopen(cad2,"w");
  fputs("chars: ", output);
  fputs("\nlines: ", output);
  fputs("\nwords: ", output);
  fputs("\nwhitespaces: ", output);
  fputs("\nuppercasess: ", output);
  fputs("\nlowercases: ", output);
  fputs("\ndigits: ", output);
  printf("\n");
  exit(0);
}
