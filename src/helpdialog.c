#include <stdio.h>

void printHelpDialog(char *argv0) {
        printf("--------------------------------------\n");
        printf("-------- quadratic-utils----v%s----\n", VER);
        printf("--------------------------------------\n");
        printf("USAGE:\n");
        printf("%s [options] [operation] [a] [b] [c]\n", argv0);
        printf("--------------------------------------\n");
        printf("OPTIONS:\n");
        printf("-h/--help - print this dialog\n");
        printf("-v/--version - print the version of the program\n");
        printf("-r/--roots - print the roots of a quadratic\n");
        printf("-f/--form <form> - print a quadratic form\n");
        printf("    Supported forms: factored\n");
        printf("--------------------------------------\n");
        return;
}