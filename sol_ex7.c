#include <stdio.h>

//void ordenacionShell (double a[], int n);

int main(void){
    int n;
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
    for(int k=1;k<6;k++){
        //printf("hola");        
        double promMateria=0;
        //printf("%f \n",lista[k][0]);
        //printf("llego");
        for(int j=0;j<copiaN;j++){
            promMateria=promMateria+lista[j][k];
        }
        lista[copiaN][k]=promMateria/copiaN;
    }

    for(int i=0;i<n+1;i++){
        
            printf("%f  %f  %f  %f  %f  %f  %f\n",lista[i][0],lista[i][1],lista[i][2],lista[i][3],lista[i][4],lista[i][5],lista[i][6]);

    }
    return 0;
}
