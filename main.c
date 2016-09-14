#include <stdio.h>
#include "fila.h"

int main () {
  FILA alunos = novaFila();
  inserirNovo(alunos, 9);
  inserirAntigo(alunos, 8);
  inserirNovo(alunos, 3);
  inserirAntigo(alunos, 10);

  imprimirFila(alunos);

  removerAntigo(alunos);
  imprimirFila(alunos);
  removerNovo(alunos);
  imprimirFila(alunos);
  
  while(!filaVazia(alunos))
    printf ("removido: %d \n", remover(alunos));


  inserir(alunos, 10);
  inserir(alunos, 32);
  
  imprimirFila(alunos);

  destroiFila(alunos);
  return 0;
}
