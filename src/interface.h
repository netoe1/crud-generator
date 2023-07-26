#include <stdio.h>
#include <locale.h>
#include <string.h>
int cli(int *argc, char *argv[])
{
    char *str = { "
                  Usage : crudgen<fn><args>\

                  "};

                  setlocale(LC_ALL, "");

    if (strcmp(argv[1], "--help") || strcmp(argv[1], "-h"))
    {
        puts(
            "\\
            \ncrudgen<function><arguments> "

        );
    }

    return 1;
}