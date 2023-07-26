#include <stdio.h>
#include <locale.h>
#include <string.h>
int cli(int *argc, char *argv[])
{
    char *str = "\\
                Usage: program <function> <args> \\
                \nFunction:                        \\
                \ncreate_crud     generates a default crud\\
                \nexit            close the program.    \\"                                                 
                                                    ;

                  setlocale(LC_ALL, "");

    if (strcmp(argv[1], "--help") || strcmp(argv[1], "-h"))
    {
        puts(str);
    }
    

    return 1;
}