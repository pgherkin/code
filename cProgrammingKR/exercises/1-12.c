#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in input */
main()
{
        int c, nl, nw, nc, state;

        state = OUT;

        while ((c = getchar()) != EOF) {
                if (c == ' ' || c == '\n' || c =='\t') {
                        if (state = IN)
                                state = OUT;
                                putchar('\n');
                }
                else {
                        state = IN;
                        putchar(c);
                }
        }
}
