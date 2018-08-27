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
                
                if (a[j][6]<= a[k][6]) {
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
    ordenacionShell(lista,n);

    for(int i=0;i<n+1;i++){
        
            printf("%f  %f  %f  %f  %f  %f  %f\n",lista[i][0],lista[i][1],lista[i][2],lista[i][3],lista[i][4],lista[i][5],lista[i][6]);

    }
    return 0;
}
