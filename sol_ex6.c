#include <stdio.h>

void ordenacionShell (double a[], int n);

int main(void){
    int n;
    double f;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("La cantidad de elementos debe ser impar\n");
        return -1;
    }
    double a[n];
    for(int i=0;i<n;i++){
        printf("Ingrese el elemento %d: ",i+1);
        scanf("%lf",&f);
        a[i]=f;
    }

    ordenacionShell(a,n);
    printf("La mediana es %.1f",a[n/2]);

    return 0;
}

void ordenacionShell(double a[], int n){
    int intervalo, i, j, k;
    intervalo = n /2;
    
    while(intervalo > 0){
        
        for(i = intervalo; i < n; i++)
        {
            j = i -intervalo;
            
            while(j>=0){
                k= j+ intervalo;
                
                if (a[j]<= a[k]) {
                    j=-1;
                }
                else
                {
                    double temp;
                    temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                    j -=intervalo;
                }
            }
        }
        intervalo= intervalo/2;
    }
}
