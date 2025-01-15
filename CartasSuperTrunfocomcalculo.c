#include <stdio.h>
//#include <locale.h>>
//setlocale(LC_ALL,"portuguese");

//funções de comfirmação
void comfirmacao1(){
    printf(">>registrado com exito<<\n<><><><><><><><><><><><><><><><><><><><><><>\n\n");
}
void comfirmacao2(){
    printf(">>>carta registrada com exito<<<\n<><><><><><><><><><><><><><><><><><><><><><>\n\n");
}
void erro(){
    printf("e esperado 'y' ou 'n', tente novamente\n");
}

int main() {
    
    //resultado esperado é 'y' ou 'n'
    char play='n';//inicializador do loop. so usei o que eu sabia de js e acabou dando certo kkkkk
        do{

        
        printf("\ngostaria de jogar?? se sim digite 'y' se nao digite 'n'\n-[y/n]- >>>> ");
        scanf("%c",&play);
        if(play!='y'&&play!='n'){
            erro();
            }
        
    } while(play!='y'&&play!='n');
    
    printf("\n\n");

    if(play=='y'){
        do{
          
        // definem variaveis para a coleta de informações das cartas  para o estado 'x'     
        char nome_do_estado[2];//codigo do estado 'x' como rj mg 

        //carta 1:              utiliza um moledo que se repete por todas as cartas presentes em cada paragrafo em main()
        //cata carta e identificata com o nome do estado e suas carta 'c'arta + qual carta é '1a4'
        char nomec1[20];
            int populacaoc1;
            float area_em_KM2c1;
            float PIBc1;
            int Numero_de_pontos_turisticosc1;
            double pibpercapitac1;
            double densidadepopulacionalc1;
        //carta2:
        char nomec2[20];
            int populacaoc2;
            float area_em_KM2c2;
            float PIBc2;
            int Numero_de_pontos_turisticosc2;
            double pibpercapitac2;
            double densidadepopulacionalc2;
        //carta3:
        char nomec3[20];
            int populacaoc3;
            float area_em_KM2c3;
            float PIBc3;
            int Numero_de_pontos_turisticosc3;
            double pibpercapitac3;
            double densidadepopulacionalc3;
        //carta4:
        char nomec4[20];
            int populacaoc4;
            float area_em_KM2c4;
            float PIBc4;
            int Numero_de_pontos_turisticosc4;
            double pibpercapitac4;
            double densidadepopulacionalc4;
        
        //coleta efetiva de dados
        printf("BEM VINDO \n a area de registro para as cartas do\n SUPER TRUNFO\n de tema cidades\npor favor digite a inicial do estado que desejar \n assim como as informacoes requeridas logo apos\n-----------------------------------------------------------------------\n \n digite a inicial do estado desejado: \n---------------ex---------------\n              -Rj- \n >>>");
        scanf("%s",&nome_do_estado );
        //executa comfirmacao1
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
        //executa comfirmacao2,indicando que a as quatro cartas da cidade x foram registradas
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
        //aqui são cauculadas ambos pib per capita e densidade populacional
        pibpercapitac1= PIBc1/populacaoc1;
        pibpercapitac2= PIBc2/populacaoc2;
        pibpercapitac3= PIBc3/populacaoc3;
        pibpercapitac4= PIBc4/populacaoc4;
        densidadepopulacionalc1=populacaoc1/area_em_KM2c1;
        densidadepopulacionalc2=populacaoc2/area_em_KM2c2;
        densidadepopulacionalc3=populacaoc3/area_em_KM2c3;
        densidadepopulacionalc4=populacaoc4/area_em_KM2c4;


        printf("AGORA MOSTRAREMOS SUAS CARTAS!!!\n+++++++++++++++++++++++++++++\n\n");

        printf("nome do estado: %s01    nome da cidade: %s\n população: %d \n area em km2: %.2f \n seu PIB: %.2f\n numero de pontos turisticos: %d \ndensidade populacional: %.2f \nPIB per capita: %.2f \n+++++++++++++++++++++++++++++\n\n",nome_do_estado,nomec1,populacaoc1,area_em_KM2c1,PIBc1,Numero_de_pontos_turisticosc1,densidadepopulacionalc1,pibpercapitac1);

        printf("nome do estado: %s02    nome da cidade: %s\n população: %d \n area em km2: %.2f \n seu PIB: %.2f\n numero de pontos turisticos: %d \ndensidade populacional: %.2f \nPIB per capita: %.2f \n+++++++++++++++++++++++++++++\n\n",nome_do_estado,nomec2,populacaoc2,area_em_KM2c2,PIBc2,Numero_de_pontos_turisticosc2,densidadepopulacionalc2,pibpercapitac2);

        printf("nome do estado: %s03    nome da cidade: %s\n população: %d \n area em km2: %.2f \n seu PIB: %.2f\n numero de pontos turisticos: %d \ndensidade populacional: %.2f \nPIB per capita: %.2f \n+++++++++++++++++++++++++++++\n\n",nome_do_estado,nomec3,populacaoc3,area_em_KM2c3,PIBc3,Numero_de_pontos_turisticosc3,densidadepopulacionalc3,pibpercapitac3);

        printf("nome do estado: %s04    nome da cidade: %s\n população: %d \n area em km2: %.2f \n seu PIB: %.2f\n numero de pontos turisticos: %d \ndensidade populacional: %.2f \nPIB per capita: %.2f \n+++++++++++++++++++++++++++++\n\n",nome_do_estado,nomec4,populacaoc4,area_em_KM2c4,PIBc4,Numero_de_pontos_turisticosc4,densidadepopulacionalc4,pibpercapitac4);

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
