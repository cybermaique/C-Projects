#include <stdio.h>
#include <math.h>

main (){
//variaveis
    float d,h,r,V,pi=3.14,vd;
//entrada de dados
    printf("\nPrograma para Calculo de Volume Disponivel\n");
    printf("\nInsira os Dados Solicitados do Reservatorio em Metros:\n");
    printf("\nQual a Dimensao do RAIO?\n");
    scanf("%f",&r);
    printf("\nQual a Dimensao da Altura?\n");
    scanf("%f",&h);
    printf("\nQuais os Valores Medidos pelo Sensor?\n");
    scanf("%f",&d);
//processamento
    V=pi*pow(r,2)*h;
    vd=pi*pow(r,2)*d;
//apresentaçao de resultados
    printf("\nO Volume Total do Cilindro e de:\n%f Metros Cubicos.\n%f Litros.",V,V*1000);
    printf("\n\n\nE o Volume Disponivel no Cilindro e de:\n%f Metros Cubicos.\n%f Litros.",vd,vd*1000);

	system ("pause");
    return 0;
}