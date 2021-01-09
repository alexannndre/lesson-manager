
#include <stdio.h>
#include <stdlib.h>

#include "constantes.h"
#include "estruturas.h"
#include "funcoes_auxiliares.h"
#include "funcoes_menu.h"
#include "funcoes_ucs.h"



void gravaFicheiroBinarioUcs(int UnidadeCurricular novaUc, UnidadeCurricular vUcs[MAX_UCS]){

    FILE *ficheiro;
    int quantEscrito;

    ficheiro = fopen("dados.dat", "wb");

    if (ficheiro == NULL){
        printf("Erro ao abrir o ficheiro\n");
    }
    else{//conseguiu abrir o ficheiro
        quantEscrito = fwrite(&novaUc, sizeof(int), 1, ficheiro);
        if (quantEscrito != 1){
            printf("Erro ao escrever a quantidade de estudantes no ficheiro\n");
        }
        else{
            quantEscrito = fwrite(vUcs, sizeof(UnidadeCurricular), novaUc, ficheiro);
            if (quantEscrito != novaUc){
                printf("Erro ao escrever a informacao do vetor\n");
            }
            else{
                printf("Gravado com sucesso no ficheiro binario\n");
            }
        }
        fclose(ficheiro);
    }
}

void lerFicheiroBinario(int UnidadeCurricular novaUc , UnidadeCurricular vUcs[MAX_UCS]){

    FILE *ficheiro;
    int quantLido;

    ficheiro = fopen("dados.dat", "rb");

    if (ficheiro == NULL){
        printf("Erro ao abrir o ficheiro\n");
    }
    else{//conseguiu abrir o ficheiro

        quantLido = fread(, sizeof(int), 1, ficheiro);
        // ou quantLido = fread(&*quantEstudantes, sizeof(int), 1, ficheiro);
        if (quantLido != 1){
            printf("Erro ao ler a quantidade de estudantes a partir do ficheiro\n");
        }
        else{
            quantLido = fread(vEstudantes, sizeof(tipoEstudante), *novaUc, ficheiro);
            if (quantLido != *novaUc){
                printf("Erro ao ler a informacao do vetor\n");
            }
            else{
                printf("Leitura de ficheiro com sucesso \n");
                printf("Dados de estudantes importados \n");
            }
        }
        fclose(ficheiro);
    }
}

void gravaFicheiroTextoUcs(int UnidadeCurricular novaUc , UnidadeCurricular vUcs[MAX_UCS]){

    FILE *ficheiro;
    int i;

    ficheiro = fopen("dados.txt", "w");

    if (ficheiro == NULL){
        printf("Erro ao abrir o ficheiro\n");
    }
    else{//conseguiu abrir o ficheiro

        fprintf(ficheiro, "\tQuantidade estudantes: %d\n\n", novaUc);
        for (i=0; i<quantEstudantes;i++){
            fprintf ("Os dados s�o:\nNome: %s \n Obrigatoria: %c \n Semestre: %d \nHorario %c \nAulas previstas: %d \nTipo de aula:%s/n %s",vUcs.designacao, obrigatoria, vUcs.semestre, diurno, vUcs.num_tipo_aulas_previstas, tipoDes,duracao);

        }

        fclose(ficheiro);
    }
}



























