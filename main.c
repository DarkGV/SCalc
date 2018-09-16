#include "project.h"

char prompt[100];

int builtin(char**);

int main(){
    char* args[64];
    char read[1024];

    strcpy(prompt, "SCalc> ");
    while(1){
        printf("%s", prompt);

        fgets(read, 1023, stdin);

        if(strlen(read) == 1) continue;

        parse(args, read);

        builtin(args);
    }

}

int builtin(char**args){
    if(!strcmp(args[1], "+")){
        if(isdigit(args[0][0]) && isdigit(args[0][4])){
            sum((args[0][0]) - 48, (args[0][4]) - 48);
        }
        return 1;
    }

    if(!strcmp(args[1], "*")){
        if(isdigit(args[0][0]) && isdigit(args[0][4])){
            mul((args[0][0]) - 48, (args[0][4]) - 48);
        }
        return 1;
    }
    if(!strcmp(args[1], "/")){
        if(isdigit(args[0][0]) && isdigit(args[0][4])){
            division((args[0][0]) - 48, (args[0][4]) - 48);
        }
        return 1;
    }

    if(!strcmp(args[1], "-")){
        if(isdigit(args[0][0]) && isdigit(args[0][4])){
            sub((args[0][0]) - 48, (args[0][4]) - 48);
        }
        return 1;
    }

    if(strcmp(args[1], "exit")) exit(0);

    return 0;
}