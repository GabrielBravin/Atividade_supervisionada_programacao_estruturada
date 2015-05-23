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
    
    printf("Digite a base do paralelep�pedo: ");
    scanf("%f", &base);
    
    printf("Digite a altura do paralelep�pedo: ");
    scanf("%f", &altura);
    
    printf("Digite a profundidade do paralelep�pedo: ");
    scanf("%f", &profundidade);
    
    //------------------------------------------Fim das entradas--------------------------------------------
    
    //----------------------------------------------C�lculos------------------------------------------------
    areaLateral = ( 2 * area(base,altura) ) + ( 2 * area(base,profundidade) ) + ( 2 * area(altura,profundidade) );
    
    areaBase = area(base,profundidade);
    
    volumeParalelepipedo = volume(base,altura,profundidade);
    volumeLitros = volumeParalelepipedo / 1000;
    //------------------------------------------Fim dos c�lculos--------------------------------------------
    
    //----------------------------------------------Impress�o-----------------------------------------------
    printf("\n\n---------------------------------Paralelep�pedo------------------------------");
    printf("\n�rea da base: %fcm�", areaBase);
    printf("\n�rea lateral: %fcm�", areaLateral);
    printf("\nVolume em litros: %14.4fl", volumeLitros);
    //------------------------------------------Fim da impress�o--------------------------------------------
    
    printf("\n");
    system("pause");
    
    return 0;
}
