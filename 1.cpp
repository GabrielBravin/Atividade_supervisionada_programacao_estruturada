#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

float potencia (int base, int expoente){
    int resultado = 1;
    
    for (int i=0 ; i<expoente ; i++)
        resultado *= base;
        
    return resultado;
}

float area(float base, float altura){
    float area;
    
    area = base * altura;
    
    return area;
}
/* Função não necessária pois, em um triângulo equilátero, um lado sempre será menor do que a soma do outro lado com a hipotenusa
bool eTriangulo(float ladoA, float ladoB, float ladoC){
    if ( ( ladoA < (ladoB + ladoC) ) && ( ladoB < ( ladoA + ladoC)  ) && ( ladoC < ( ladoA + ladoB ) ) ){
        return true;
    }else{
        return false;
    }
}
*/

int main(){
    //Setando o idioma para português
    setlocale(LC_ALL, "Portuguese");
    
    int cateto1;
    int cateto2;
    float hipotenusa;
    float areaTriangulo;
    
    int ladoQuadrado;
    float areaQuadrado;
    float diagonalQuadrado;
    
    
    // ---------------------------------------------Entrada de dados-----------------------------------------------
    printf("Digite, em metros, o valor 1º cateto do triângulo: ");
    scanf("%d",&cateto1);
    
    while(cateto1 <= 0){
        printf("\nO 1º cateto não pode ser negativo ou igual a zero.\nDigite, em metros, o valor 1º cateto do triângulo: ");
        scanf("%d",&cateto1);
    }
    
    printf("Digite, em metros, o valor 2º cateto do triângulo: ");
    scanf("%d",&cateto2);
    
    while(cateto2 <= 0){
        printf("\nO 2º cateto não pode ser negativo ou igual a zero.\nDigite, em metros, o valor 2º cateto do triângulo: ");
        scanf("%d",&cateto2);
    }
    
    printf("Digite, em metros, o valor do lado do quadrado: ");
    scanf("%d",&ladoQuadrado);
    
    while(ladoQuadrado <= 0){
        printf("\nO lado do quadrado não pode ser negativo ou igual a zero.\nDigite, em metros, o valor do lado do quadrado: ");
        scanf("%d",&ladoQuadrado);
    }
    //------------------------------------------Fim da entrada de dados--------------------------------------------
    
    
    //------------------------------------------Cálculos------------------------------------------
    hipotenusa = sqrt(potencia(cateto1,2) + potencia(cateto2,2));
    areaTriangulo = area(cateto1,cateto2) / 2;
    
    //A area de um quadrado é igual ao quadrado do lado
    areaQuadrado = potencia(ladoQuadrado,2);
    diagonalQuadrado = sqrt(potencia(ladoQuadrado,2) + potencia(ladoQuadrado,2));
    //--------------------------------------Fim dos cálculos--------------------------------------
    
    //------------------------------------------Impressão------------------------------------------
    printf("\n\n---------------------------------Triângulo---------------------------------");
    printf("\nÁrea: %7.2fm²", areaTriangulo);
    printf("\nHipotenusa: %7.2fm²", hipotenusa);
    
    printf("\n\n----------------------------------Quadrado---------------------------------");
    printf("\nÁrea: %7.2fm²", areaQuadrado);
    printf("\nDiagonal: %7.2fm²", diagonalQuadrado);
    //--------------------------------------Fim da impressao---------------------------------------
    printf("\n");
    system("pause");
    return 0;
}
