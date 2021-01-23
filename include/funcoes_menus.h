#ifndef FUNCOES_MENU_H_INCLUDED
#define FUNCOES_MENU_H_INCLUDED

#include "estruturas.h"

int MenuPrincipal(int nUCs, tipoAula vAulas[], int nAulas);
int MenuUCs();
int MenuAulas();
int DadosEstatisticos(tipoUC vUCs[], int nUCs, tipoAula vAulas[], int nAulas);

#endif /* FUNCOES_MENU_H_INCLUDED */