#include <stdio.h>
//funções de comfirmação
void comfirmacao1(){
    printf(">>registrado com exito<<\n<><><><><><><><><><><><><><><><><><><><><><>\n\n");
}
void comfirmacao2(){
    printf(">>>carta registrada com exito<<<\n<><><><><><><><><><><><><><><><><><><><><><>\n\n");
}

int main() {
    //inicializador do loop. so usei o que eu sabia de js e acabou dando certo kkkkk
    char play;

    printf("gostaria de jogar?? se sim digite 'y' se nao digite 'n'\n-[y/n]- >>>> ");
    scanf("%c",&play);
    printf("\n\n");

    if(play=='y'){
        do{
          
        // definem variaveis para a coleta de informações das cartas  para o estado 'x'     
        char nome_do_estado[2];//codigo do estado 'x' como rj mg 

        //carta 1:              utiliza um moledo que se repete por todas as cartas presentes em cada paragrafo em main() da lina 
        char nomec1[20];
            int populacaoc1;
            float area_em_KM2c1;
            float PIBc1;
            int Numero_de_pontos_turisticosc1;
        //carta2:
        char nomec2[20];
            int populacaoc2;
            float area_em_KM2c2;
            float PIBc2;
            int Numero_de_pontos_turisticosc2;
        //carta3:
        char nomec3[20];
            int populacaoc3;
            float area_em_KM2c3;
            float PIBc3;
            int Numero_de_pontos_turisticosc3;
        //carta4:
        char nomec4[20];
            int populacaoc4;
            float area_em_KM2c4;
            float PIBc4;
            int Numero_de_pontos_turisticosc4;
        
        //coleta efetiva de dados
        printf("BEM VINDO \n a area de registro para as cartas do\n SUPER TRUNFO\n de tema cidades\npor favor digite a inicial do estado que desejar \n assim como as informacoes requeridas logo apos\n-----------------------------------------------------------------------\n \n digite a inicial do estado desejado: \n---------------ex---------------\n              -Rj- \n >>>");
        scanf("%s",&nome_do_estado );

        comfirmacao1();

        printf("agora vamos registrar a carta\n *nome da cidade* \n===================\n>>>");

        scanf("%s",&nomec1);

        comfirmacao1();

        printf("*quantidade populacional*\n===================\n>>>");

        scanf("%d",&populacaoc1);

        comfirmacao1();

        printf("sua area em KM2\n=====================\n>>>");

        scanf("%f",&area_em_KM2c1);

        comfirmacao1();

        printf("*seu P.I.B*\n=====================\n>>>");

        scanf("%f",&PIBc1);

        comfirmacao1();

        printf("*numero de pontos turisticos*\n=====================\n>>>");

        scanf("%d",&Numero_de_pontos_turisticosc1);

        comfirmacao1();

        comfirmacao2();

        printf("vamos agora registrar a segunda carta para a cidade %s\n",nome_do_estado);

        //carta 2
        printf("*nome da cidade* \n===================\n>>>");

        scanf("%s",&nomec2);

        comfirmacao1();

        printf("*quantidade populacional*\n===================\n>>>");

        scanf("%d",&populacaoc2);

        comfirmacao1();

        printf("sua area em KM2\n=====================\n>>>");

        scanf("%f",&area_em_KM2c2);

        comfirmacao1();

        printf("*seu P.I.B*\n=====================\n>>>");

        scanf("%f",&PIBc2);

        comfirmacao1();

        printf("*numero de pontos turisticos*\n=====================\n>>>");

        scanf("%d",&Numero_de_pontos_turisticosc2);

        comfirmacao1();

        comfirmacao2();

        printf("vamos agora registrar a terceira carta para a cidade %s\n",nome_do_estado);


        //carta  3
        printf("*nome da cidade* \n===================\n>>>");

        scanf("%s",&nomec3);

        comfirmacao1();

        printf("*quantidade populacional*\n===================\n>>>");

        scanf("%d",&populacaoc3);

        comfirmacao1();

        printf("sua area em KM2\n=====================\n>>>");

        scanf("%f",&area_em_KM2c3);

        comfirmacao1();

        printf("*seu P.I.B*\n=====================\n>>>");

        scanf("%f",&PIBc3);

        comfirmacao1();

        printf("*numero de pontos turisticos*\n=====================\n>>>");

        scanf("%d",&Numero_de_pontos_turisticosc3);

        comfirmacao1();

        comfirmacao2();

        printf("vamos agora registrar a quarta carta para a cidade %s\n",nome_do_estado);

        //carta4
        printf("*nome da cidade* \n===================\n>>>");

        scanf("%s",&nomec4);

        comfirmacao1();

        printf("*quantidade populacional*\n===================\n>>>");

        scanf("%d",&populacaoc4);

        comfirmacao1();

        printf("sua area em KM2\n=====================\n>>>");

        scanf("%f",&area_em_KM2c4);

        comfirmacao1();

        printf("*seu P.I.B*\n=====================\n>>>");

        scanf("%f",&PIBc4);

        comfirmacao1();

        printf("*numero de pontos turisticos*\n=====================\n>>>");

        scanf("%d",&Numero_de_pontos_turisticosc4);

        comfirmacao1();

        comfirmacao2();

        printf("AGORA MOSTRAREMOS SUAS CARTA!!!\n+++++++++++++++++++++++++++++\n\n");

        printf("nome do estado: %s  ----  nome da cidade: %s\n população: %d \n area em km2: %f \n seu PIB: %f\n numero de pontos turisticos: %d \n+++++++++++++++++++++++++++++\n\n",nomec1,populacaoc1,area_em_KM2c1,PIBc1,Numero_de_pontos_turisticosc1);

        printf("nome do estado: %s  ----  nome da cidade: %s\n população: %d \n area em km2: %f \n seu PIB: %f\n numero de pontos turisticos: %d \n+++++++++++++++++++++++++++++\n\n",nomec2,populacaoc2,area_em_KM2c2,PIBc2,Numero_de_pontos_turisticosc2);

        printf("nome do estado: %s  ----  nome da cidade: %s\n população: %d \n area em km2: %f \n seu PIB: %f\n numero de pontos turisticos: %d \n+++++++++++++++++++++++++++++\n\n",nomec3,populacaoc3,area_em_KM2c3,PIBc3,Numero_de_pontos_turisticosc3);

        printf("nome do estado: %s  ----  nome da cidade: %s\n população: %d \n area em km2: %f \n seu PIB: %f\n numero de pontos turisticos: %d \n+++++++++++++++++++++++++++++\n\n",nomec4,populacaoc4,area_em_KM2c4,PIBc4,Numero_de_pontos_turisticosc4);

        //finalização muda play para n para o jogad\or decidir reiniciar o loop ou não
        play='n';

        printf("\n\n deseja jogar novamente??\n-[y/n]->>>");

        scanf("%s",&play);

        printf("\n");

        }while(play=='y');//se play não for igual a 'y' ele seguira para a finalização do codigo


    }//se não finalizara o codigo 
        printf(">>>>obrigado por jogar<<<< \n\n");
        
        return 0;
}
