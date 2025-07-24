#include "chrstk.h"

/* Usage: ./ritchie-1-24 < changeme.txt */

int main()
{
    int i;
    char c, e;
    chrstk_t* top;

    top = init();
    i = 0;
    while((c = getchar()) != EOF) {
        ++i;
        if (c == '(' || c == '[' || c == '{')
            push(top, c);
        else if (c == ')' || c == ']' || c == '}') {
            if (c == ')')
                e = c - 1; /* '(' */
            else
                e = c - 2; /* '[' or '{' */

            if (get_top_char(top) != e) {
                printf("Unexpected '%c' found at position %d\n", c, i);
                return 1;
            } else
                pop(top);
        }
    }

    if (!is_empty(top)) {
        printf("Unexpected EOF reached at position %d\n", i + 1);
        printf("Stack is\n");
        print_all(top);
        return 2;
    }

    return 0;
}
