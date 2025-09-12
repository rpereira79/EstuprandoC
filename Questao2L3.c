/*
Construir um programa que permita ao usuário
calcular a área de uma figura geométrica. Para
isto, o usuário deverá escolher a figura desejada
([C]írculo, [R]etângulo, [Q]uadrado ou
[T]riângulo) e fornecer as informações
necessárias para que a área desta figura possa
ser calculada.
*/
#include <stdio.h>

void main(){
  char fig;
  int r, l, h, b; // raio, lado, altura, base


  printf("Escolha a figura desejada dentre as:\n [C]irculo,\n [Q]uadrado,\n [T]riangulo \nDigite [S] para sair do programa...\n");
  scanf("%c", &fig);

  switch (fig) {
      case 'C':
      case 'c':
        printf("\nInsira o raio do circulo: ");
        scanf("%d", &r);
        printf("A area do circulo e: %.2f\n", 3.14 * r * r);
        break;

      case 'Q':
      case 'q':
        printf("\nInsira o lado do quadrado: ");
        scanf("%d", &l);
        printf("A area do quadrado e: %d\n", l * l);
        break;

      case 'T':
      case 't':
        printf("\nInsira a base e a altura do triangulo: ");
        scanf("%d %d", &b, &h);
        printf("A area do triangulo e: %.2f\n", 0.5 * b * h);
        break;

      case 'S':
      case 's':
        printf("Saindo do programa...\n");
        break;

      default:
        printf("Opcao invalida. Tente novamente.\n");
    }

}