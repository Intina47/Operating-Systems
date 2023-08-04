// virtualization
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Usage: %s <string>\n", argv[0]);
        exit(1);
    }

    char *str = argv[1];

    while(1){
        printf("%s\n", str);
        sleep_ms(1);
    }
    return 0;
}
