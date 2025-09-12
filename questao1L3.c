#include <stdio.h>

void main(){
    int ano1, mes1, dia1, ano2, mes2, dia2;
    int ano_r, mes_r, dia_r;

    // Pede e recebe as datas
    printf("Digite a primeira data (DD/MM/AAAA): \n");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);

    printf("Digite a segunda data (DD/MM/AAAA): \n");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    // Comparando os anos
    if (ano1 > ano2) {
        ano_r = ano1;
        mes_r = mes1;
        dia_r = dia1;
    } else if (ano1 < ano2) {
        ano_r = ano2;
        mes_r = mes2;
        dia_r = dia2;
    } else {
        // Comparando os meses
        if (mes1 > mes2) {
            ano_r = ano1;
            mes_r = mes1;
            dia_r = dia1;
        } else if (mes1 < mes2) {
            ano_r = ano2;
            mes_r = mes2;
            dia_r = dia2;
        } else {
            // Comparando os dias
            if (dia1 > dia2) {
                ano_r = ano1;
                mes_r = mes1;
                dia_r = dia1;
            } else if (dia1 < dia2) {
                ano_r = ano2;
                mes_r = mes2;
                dia_r = dia2;
            } else {
                // Caso as datas sejam iguais
                printf("As duas datas sao iguais: %02d/%02d/%04d\n", dia1, mes1, ano1);
                return 0;
            }
        }
    }

    // Chamando o resultado
    printf("A data mais recente e: %02d/%02d/%04d\n", dia_r, mes_r, ano_r);
}
