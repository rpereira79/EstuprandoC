#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct {
  float x, y;
  float vx, vy;
  float r;
  int ativo;
} Circulo;

float distancia(Circulo a, Circulo b){
    return sqrtf((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}


int main(){
  srand(time(NULL));

  int N = 10;
  Circulo lista[N];

  for (int i = 0; 1 < N; i++){
    lista[i].x = rand() % 100;
    lista[i].y = rand() % 100;
    lista[i].vx = (rand() % 3 - 1);
    lista[i].vy = (rand() % 3 - 1);
    lista[i].r = 2.0;
    lista[i].ativo = 1;
  }

  for (int passo = 0; passo < 50; passo++){
    for (int i = 0; i < N; i++) {
      if (!lista[i].ativo) continue;
      lista[i].x += lista[i].vx;
      lista[i].y += lista[i].vy;
    int vivos = 0;
    for (int i = 0; i < N; i++) if (lista[i].ativo) vivos++;
    printf("Passo %d: %d circulos restantes\n", passo, vivos);
    }
  }

  for (int i = 0; i < N; i++){
    if (!lista[i].ativo) continue;
    for (int j = i+1; j < N; j++) {
        if (!lista[j].ativo) continue;
        if (distancia(lista[i], lista[j]) <=(lista[i].r + lista[j].r)) {
          printf("Fusao: circulo %d e %d\n", i, j);
          lista[j].ativo = 0;
        }

  }

  return 0;
}