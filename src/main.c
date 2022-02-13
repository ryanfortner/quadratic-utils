#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/versiondialog.h"
#include "include/helpdialog.h"

#include "include/getroots.h"

// quadratic forms
#include "include/factoredform.h"

int main(int argc, char **argv) {
    if(argc == 1) {
        printHelpDialog(argv[0]);
    }
    while(argc > 1) {
        if((!strcmp(argv[1], "--help"))||(!strcmp(argv[1], "-h"))) {
            printHelpDialog(argv[0]);
            break;
        } else if((!strcmp(argv[1], "--version"))||(!strcmp(argv[1], "-v"))) {
            printVersionDialog();
            break;
        } else if((!strcmp(argv[1], "roots"))||(!strcmp(argv[1], "getroots"))) {
            getRoots(argc, argv);
            break;
        } else if((!strcmp(argv[1], "--form"))||(!strcmp(argv[1], "-f"))) {
            if((!strcmp(argv[1], "factored"))) {
                getFactoredForm(argc, argv);
                break;
            } else {
                fprintf(stderr, "Error: operation not supported.\n");
                break;
            }
        } else {
            fprintf(stderr, "Error: operation not supported.\n");
            break;
        }
    }
    return 0;
}
