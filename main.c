#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//==========================STRUCT DA POKEDEX======================================

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

//==========================FUNÇÃO DE CADASTRO=====================================

void cadastrar_pokemon (TPokemon pokemons[], int posicao) {
    int cadopcao; TPokemon pokemon;
    printf("=====CADASTRO DE POKEMONS=====\n");
    printf("1- Cadastrar pokemon\n");
    printf("2- sair\n");
    scanf("%d", &cadopcao);
    printf("=====INSIRA O NOME DO POKEMON A SER CADASTRADO=====\n");
    scanf("%s", pokemon.nome_pokemon);
    if (strlen(pokemon.nome_pokemon) == 0 || strlen(pokemon.nome_pokemon) < 3) {
        printf("insira um nome válido!\n");
    }
    else {
        printf("=====INSIRA O TIPO DO POKEMON A SER CADASTRADO=====\n");
        scanf("%s", pokemon.tipo_pokemon);
    }
    if (strlen(pokemon.tipo_pokemon) == 0) {
        printf("insira um nivel valido");
    }
    else {
        printf("=====INSIRA O NIVEL DO POKEMON A SER CADASTRADO=====\n");
        scanf("%d", &pokemon.nivel);
    }
    if (pokemon.nivel == 0) {
        printf("insira um nivel valido!\n");
    }
    else {
        printf("=====INSIRA O HP DO POKEMON A SER CADASTRADO=====\n");
        scanf("%d", &pokemon.hp);
    }
    if (pokemon.hp == 0) {
        printf("insira um hp valido!\n");
    }
    else {
        printf("=====INSIRA OS COMBAT POINTS DO POKEMON A SER CADASTRADO=====\n");
        scanf("%d", &pokemon.combatpoints);
    }
    if (pokemon.combatpoints == 0) {
        printf("insira um combat point valido!\n");
    }
    else {
        printf("=====CADASTRANDO POKEMON=====");
        pokemons[posicao] = pokemon;
    }
}
//=============================================================================================
void listar_pokemon (TPokemon pokemons[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%s\n",pokemons[i].nome_pokemon);
    }
}

//=============================================================================================
int main() {
       TPokemon pokemons[10];
    struct pokemon * pokedex;
    int contador = 0;
    int opcao = -1;
    while (opcao != 0) {
        printf("\n ====== POKEDEX ====== \n");
        printf("1- Cadastrar pokemon\n");
        printf("2- listar pokemons\n");
        printf("3- buscar pokemon\n");
        printf("4- atualiziar pokedex\n");
        printf("5- remover pokemon\n");
        printf("6- filtrar pokemon\n");
        printf("0- Sair\n");
        printf(" ===================== \n");
            scanf("%d", &opcao);

        switch (opcao) {
            case 1://menu de cadastro
                cadastrar_pokemon(pokemons, contador);
                contador++;
                break;
            case 2://listar pokemons cadastrados
                listar_pokemon(pokemons, contador);
                default:
                break;
            }

        }
    return 0;
    }
