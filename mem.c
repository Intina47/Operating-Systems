// Virtualizing Memory
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Usage: %s <value>\n", argv[0]);
    }

    int *p;
    p = malloc(sizeof(int));
    assert(p != NULL);
    printf("(%d) adddress pointed to by p:%p\n", (int) getpid(), p);

    *p = atoi(argv[1]);

    while(1){
        sleep_ms(1);
        printf("(%d) value of p:%d\n", getpid(), *p);
        *p = *p + 1;
    }
}