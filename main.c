#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//============================================================================================

struct pokemon {
    int id_pokemon;
    bool status;
    char nome_pokemon [50];
    char tipo_pokemon [50];
    int nivel;
    int hp;
    int combatpoints;
};
typedef struct pokemon TPokemon;

//============================================================================================

int cadastrar_pokemon (char nome_pokemon[]) {
    int cadopcao;
    printf("=====CADASTRO DE POKEMONS=====");
    printf("1- Cadastrar pokemon\n");
    printf("2- sair\n");
    scanf("%d", &cadopcao);
    printf("=====INSIRA O NOME DO POKEMON A SER CADASTRADO=====\n");
    scanf("%s", pokemon.nome_pokemon);
    if (strlen(nome_pokemon)==0 || strlen(nome_pokemon) < 3) {
        printf("insira um nome válido!\n");
    }
    else {
        printf("cadastrando pokemon\n");
}
//=============================================================================================
int main(void) {
    struct pokemon * pokedex;
    int quantidade = 0;
    TPokemon pokemon;

    int opcao = -1;
    while (opcao != 0) {
        printf("\n ====== POKEDEX ====== \n");
       printf("1- Cadastrar pokemon\n");
        printf("2- listar pokemons\n");
        printf("3- buscar pokemon\n");
        printf("4- atualziar pokedex\n");
        printf("5- remover pokemon\n");
        printf("6- filtrar pokemon\n");
        printf("0- Sair\n");
        printf(" ===================== \n");
            scanf("%d", &opcao);

        switch (opcao) {
            case 1: //menu de cadastro
                cadastrar_pokemon(char nome_pokemon[] -> int);
                break;
            }
            case 2:// listagem de pokemons








        }
    }

    return 0;
}