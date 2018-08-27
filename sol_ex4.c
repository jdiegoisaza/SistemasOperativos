    printf("Ingrese palabra: ");
    scanf("%s",palabra);
    stringToMayuscula(palabra);

  /*testVolverMayuscula();
  testEsLetra();
  testStringToMayuscula();
  */return 0;
}

/*********************************************************/
/*             Definiciones de las funciones             */
/*********************************************************/

/* Funciones del programa */

/**  
 *   @brief  Determina si un caracter alfabetico
 *  
 *   @param  ch es el caracter a verificar
 *   @return 1 si el caracter es una letra del alfabeto y 0 si es otro simbolo.
 */
int esLetra(char ch) {
  if(ch>96&&ch<123)return 1;
  else return 0;
}
/**  
 *   @brief  Convierte un caracter en mayuscula
 *  
 *   @param  ch es el caracter ingresado
 *   @return void
 */
void volverMayuscula(char *ch) {
  *ch=*ch-32;

}
/**  
 *   @brief  Convierte en mayusculas la cadena de caracteres ingresada.
 *  
 *   @param  s es una cadena de caracteres ingresada y la cual despues del proceso en la funciC3n tendra los caracteres en mayuscula.
 *   @return void
 */
void stringToMayuscula(char s[]) {
  char *p1,n;
  //p1=s;
  while(strcmp(s, "\0") != 0){
    p1=s;
    int i=esLetra(*p1);
    if(i==1){
      volverMayuscula(p1);
    }
  printf("%c",*p1);
    s=s+1;
  }

}
