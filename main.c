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
//============================FUNÇÃO DE LISTAGEM=========================================
void listar_pokemon (TPokemon pokemons[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%s\n",pokemons[i].nome_pokemon);
    }
}

//============================FUNÇÃO DE BUSCA POR NOME========================================
void buscar_pokemon (TPokemon pokemons[], int tamanho) {
    char nome_busca [50];
    int encontrado = 0;

    printf("digite o nome do pokemon\n");
    scanf("%s", nome_busca);

    for (int i = 0; i < tamanho; i++) {
        if (strcmp(pokemons[i].nome_pokemon, nome_busca) == 0) {
           printf("=====POKEMON ENCONTRADO!=====\n");
           printf("%s\n",pokemons[i].nome_pokemon);
           printf("%s\n",pokemons[i].tipo_pokemon);
           printf("%s\n",pokemons[i].nivel);
            printf("%s\n",pokemons[i].hp);
            printf("%s\n",pokemons[i].combatpoints);

            encontrado ==1;

        }
    }

        if (encontrado == 0) {
            printf("=====POKEMON NÃO ENCONTRADO!=====\n");
        }
}

//===========================FUNÇÃO DE ATUALIZAÇÃO DA POKEDEX===================================
void atualizar_pokedex (TPokemon pokemons[], int tamanho) {
    char nome [50];

    printf("=====DIGITE O NOME DO POKEMON PARA ATUALIZAR=====\n");
    scanf("%s", nome);
          for (int i = 0; i < tamanho; i++) {
              if (strcmp(nome, pokemons[i].nome_pokemon) == 0) {
                  printf("=====INSIRA O NOVO TIPO DO POKEMON=====\n");
                  scanf("%d", &pokemons[i].tipo_pokemon);

                  printf("=====INSIRA O NOVO NIVEL DO POKEMON=====\n");
                  scanf("%d", &pokemons[i].nivel);

                  printf("=====INSIRA O NOVO HP DO POKEMON=====\n");
                  scanf("%d", &pokemons[i].hp);

                  printf("=====INSIRA O NOVO COMBAT POINTS DO POKEMON=====\n");
                  scanf("%d", &pokemons[i].combatpoints);

                  printf("=====POKEMON ATUALIZADO!=====\n");
                  return;
              }

          }
               printf("=====POKEMON NAO ENCONTRADO=====\n");
}

//=================================FUNÇAO DE REMOÇÃO DE POKEMON======================================
void remover_pokemon (TPokemon pokemons[], int tamanho) {
    char nome [50];

    printf("=====INSIRA O NOME DO POKEMON QUE DESEJA REMOVER=====\n");
    scanf("%s", nome);
            for (int i = 0; i < tamanho; i++) {
                if ( pokemons[i].status == 1 && strcmp(pokemons[i].nome_pokemon, nome) == 0) {
                    pokemons[i].status = 0;
                    printf("=====POKEMON REMOVIDO!=====");
                    return;
                }
            }
                printf("=====POKEMON NAO ENCONTRADO=====\n");
}

//==========================================FUNÇÃO DE FILTRAGEM POR TIPO=================================
void filtro_tipo (TPokemon pokemons[], int tamanho) {
    char tipo [50];
    int pokemon_filtrado = 0;

    printf ("=====INSIRA O TIPO DO POKEMON QUE PROCURA=====");
    scanf("%s", tipo);

        for (int i = 0; i < tamanho; i++) {
          if (pokemons[].status == 1 && strcmp(pokemons[i].tipo_pokemon, tipo) == 0) {
              printf("%s \n", pokemons[i].nome_pokemon);
              printf("%s \n", pokemons[i].tipo_pokemon);
              printf("%d \n", pokemons[i].nivel);
              printf("%d \n", pokemons[i].hp);
              printf("%d \n", pokemons[i].combatpoints);
              pokemon_filtrado = 1;
          }
    }

    if (!pokemon_filtrado) {
        printf("=====NENHUM POKEMON ENCONTRADO!=====");
    }
}

//=========================================================================================
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
            case 3: //buscar pokemon por nome
                buscar_pokemon(pokemons, contador);
                break;
            case 4://atualizar pokedex/pokemon
                atualizar_pokedex(pokemons, contador);
                break;
            case 5://remover pokemon da pokedex
                remover_pokemon(pokemons, contador);
                break;
            case 6://filtrar pokemons cadastrados
                filtro_tipo(pokemons, contador);
                break;
            }

        }
    return 0;
    }