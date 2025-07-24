#include "chrstk.h"

chrstk_t* init()
{
    chrstk_t* top;

    top = (chrstk_t*) malloc(sizeof(chrstk_t));
    top->nxt = NULL;

    return top;
}

int is_empty(chrstk_t* top)
{
    return (top->nxt == NULL);
}

void push(chrstk_t* top, char c)
{
    chrstk_t* el;

    el = (chrstk_t*) malloc(sizeof(chrstk_t));
    el->chr = c;

    el->nxt = top->nxt;    
    top->nxt = el; 
}

char get_top_char(chrstk_t* top)
{
    if (top->nxt != NULL)
        return top->nxt->chr;
    else
        return '\0';
}

chrstk_t* pop(chrstk_t* top)
{
    chrstk_t* el;

    el = top->nxt;
    if (top->nxt != NULL)
        top->nxt = top->nxt->nxt;

    return el;
}

void print_all(chrstk_t* top)
{
    chrstk_t* ptr;

    ptr = top;
    while((ptr = ptr->nxt) != NULL)
        printf("%c\n", ptr->chr);
}
