#ifndef CHRSTK_H
#define CHRSTK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct chrstk_t {
    char chr;
    struct chrstk_t* nxt;
} chrstk_t;

chrstk_t* init();
int isempty(chrstk_t* top);
void push(chrstk_t* top, char c);
char gettopchr(chrstk_t* top);
chrstk_t* pop(chrstk_t* top);
void printall(chrstk_t* top);

#endif
