#include <stdio.h>
#include <stdlib.h>

#include "constantes.h"
#include "estruturas.h"
#include "funcoes_auxiliares.h"
#include "funcoes_ficheiros.h"
#include "funcoes_menu.h"
#include "funcoes_ucs.h"


int main() {
  MenuPrincipal();
  return 0;
}

void MenuPrincipal() {
  int opcao;

  printf("GESTOR DE AULAS ONLINE\n\n");
  printf("1. Gerir UCs\n");
  printf("2. Gerir Aulas\n");
  printf("3. Estatistica\n");
  opcao = LerInteiro("Opcao", 1, 3);

  switch (opcao) {
    case 1:
      MenuUCs();
      break;
    case 2:
      break;
    case 3:
      break;

    default:
      printf("0");
      break;
  }
}

void MenuUCs() {
  int opcao;
  tipoUC ucs[MAX_UCS];

  printf("\nGESTOR DE UCs\n");
  printf("1. Registar UC\n");
  printf("2. Editar UC\n");
  printf("3. Listar UCs\n");
  opcao = LerInteiro("Opcao", 1, 3);

  switch (opcao) {
    case 1:
      ucs[0] = RegistarUC();
      break;
    case 2:
      break;
    case 3:
     // mostrarUCs(int quantUCs, tipoUC vUCs[MAX_UCS]);
      break;
    default:
      break;
  }
}