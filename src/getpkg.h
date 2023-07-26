#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void install_npm_packages(char *packages[], int num_packages)
{
    char command[1000] = "npm install"; // Comando inicial

    // Concatenando os nomes dos pacotes no comando
    for (int i = 0; i < num_packages; i++)
    {
        strcat(command, " ");         // Adiciona um espaço entre os pacotes
        strcat(command, packages[i]); // Adiciona o nome do pacote
    }

    // Exibindo o comando final
    // printf("Comando para instalar pacotes no npm: %s\n", command);
    run_in_terminal(command);
}

void run_in_terminal(char *buffer)
{
    system(buffer);
    return;
}

void add_gitignore()
{
    FILE *gitignore = fopen("gitignore.txt", "w");
    fprintf(gitignore, "%s", "node_modules/");
    fclose(gitignore);
}

void initJson()
{
    const char *command = "npm init -y";
    system(command);
}