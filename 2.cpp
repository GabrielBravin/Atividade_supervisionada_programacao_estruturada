#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float volume(float base, float altura, float profundidade){
    float volume;
    
    volume = base * altura * profundidade;
    
    return volume;
}

float area(float base, float altura){
    float area;
    
    area = base * altura;
    
    return area;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    
    float base;
    float altura;
    float profundidade;
    
    float areaLateral;
    float areaBase;
    float volumeParalelepipedo;
    float volumeLitros;
    
    //----------------------------------------------Entradas----------------------------------------------
    
    printf("Digite a base do paralelepípedo: ");
    scanf("%f", &base);
    
    printf("Digite a altura do paralelepípedo: ");
    scanf("%f", &altura);
    
    printf("Digite a profundidade do paralelepípedo: ");
    scanf("%f", &profundidade);
    
    //------------------------------------------Fim das entradas--------------------------------------------
    
    //----------------------------------------------Cálculos------------------------------------------------
    areaLateral = ( 2 * area(base,altura) ) + ( 2 * area(base,profundidade) ) + ( 2 * area(altura,profundidade) );
    
    areaBase = area(base,profundidade);
    
    volumeParalelepipedo = volume(base,altura,profundidade);
    volumeLitros = volumeParalelepipedo / 1000;
    //------------------------------------------Fim dos cálculos--------------------------------------------
    
    //----------------------------------------------Impressão-----------------------------------------------
    printf("\n\n---------------------------------Paralelepípedo------------------------------");
    printf("\nÁrea da base: %fcm²", areaBase);
    printf("\nÁrea lateral: %fcm²", areaLateral);
    printf("\nVolume em litros: %14.4fl", volumeLitros);
    //------------------------------------------Fim da impressão--------------------------------------------
    
    printf("\n");
    system("pause");
    
    return 0;
}
