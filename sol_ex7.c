
#include <stdio.h>

void ordenacionShell(double a[][7], int n){
    int intervalo, i, j, k;
    intervalo = n /2;
    
    while(intervalo > 0){
        
        for(i = intervalo; i < n; i++)
        {
            j = i -intervalo;
            
            while(j>=0){
                k= j+ intervalo;
                
                if (a[j][6]>= a[k][6]) {
                    j=-1;
                }
                else
                {
                    double temp;
                    temp = a[j][0];
                    a[j][0] = a[k][0];
                    a[k][0] = temp;;
                    temp = a[j][1];
                    a[j][1] = a[k][1];
                    a[k][1] = temp;;
                    temp = a[j][2];
                    a[j][2] = a[k][2];
                    a[k][2] = temp;;
                    temp = a[j][3];
                    a[j][3] = a[k][3];
                    a[k][3] = temp;;
                    temp = a[j][4];
                    a[j][4] = a[k][4];
                    a[k][4] = temp;
                    temp = a[j][5];
                    a[j][5] = a[k][5];
                    a[k][5] = temp;
                    temp = a[j][6];
                    a[j][6] = a[k][6];
                    a[k][6] = temp;
                    j -=intervalo;
                }
            }
        }
        intervalo= intervalo/2;
    }
}

int main(void){
    int n,m,t,b;
    double nota,pNotas;
    double f;
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d",&n);
    int copiaN=n;
    double lista[n+1][7];
    for(int i=0;i<n;i++){
        for(int j=1;j<6;j++){
            printf("Ingrese la nota del alumno %d para la asignatura %d: ",i+1,j);
            scanf("%lf",&nota);
            lista[i][j]=nota;
            printf("%d  %d   %.2f\n",i,j,lista[i][j]);
        }

    }
    for(int i=0;i<n;i++){
        pNotas=0;
        lista[i][0]=i+1;
        pNotas=lista[i][1]+lista[i][2]+lista[i][3]+lista[i][4]+lista[i][5];
        lista[i][6]=pNotas/5;
    }
    for(int k=1;k<7;k++){
        //printf("hola");        
        double promMateria=0;
        //printf("%f \n",lista[k][0]);
        //printf("llego");
        for(int j=0;j<copiaN;j++){
            promMateria=promMateria+lista[j][k];
        }
        lista[copiaN][k]=promMateria/copiaN;
    }
    do{
    printf("Coloque el numero de lo que desea seleccionar:\n");
    printf("0-media de cada alumno\n");
    printf("1-media de la asignatura 1\n");
    printf("2-media de la asignatura 2\n");
    printf("3-media de la asignatura 3\n");
    printf("4-media de la asignatura 4\n");
    printf("5-media de la asignatura 5\n");
    printf("6-la media total de la clase\n");
    printf("7-Ordenar los alumnos por orden decreciente de notas medias individuales \n");
    scanf("%d",&m);
    switch ( m )
   {
      case 0 : printf("Ingrese el alumno: ");
               scanf("%d",&t);
               printf( "%.2f\n",lista[t][6] );
               break;
      case 1 : printf( "%.2f\n",lista[n][1] );
               break;
      case 2 : printf( "%.2f\n",lista[n][2] );
               break;
      case 3 : printf( "%.2f\n",lista[n][3] );
               break;
      case 4 : printf( "%.2f\n",lista[n][4] );
               break;
      case 5 : printf( "%.2f\n",lista[n][5] );
               break;
      case 6 : printf( "%.2f\n",lista[n][6] );
               break;
      case 7 : ordenacionShell(lista,n);

               break;
   default : printf( "\n   ERROR: numero incorrecto." );
   }
   printf("Si quiere terminar marque 0: ");
    scanf("%d",&b);
    }while(b!=0);

    /*for(int i=0;i<n+1;i++){
        
            printf("%.2f  %.2f  %.2f  %.2f  %.2f  %.2f  %.2f\n",lista[i][0],lista[i][1],lista[i][2],lista[i][3],lista[i][4],lista[i][5],lista[i][6]);

    }*/
    return 0;
}
