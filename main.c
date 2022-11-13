#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

static char* to_upper(char* str) {
    if (str != "") {
        for (size_t i = 0; str[i] != '\0'; i++) {
            /*
                This loop goes through the entire string
                until it reaches the strings null terminator.
            */
            char let = str[i];
            char up_let;

            if (let >= 'a' && let <= 'z') {
                int n = (int) let - 32;
                /* This turns the character into an ascii code,
                and lets say our character is "d", it's ascii code
                is 100, now minus 32, that would give us D. */

                up_let = (char) n;
                /* Now we can use that number to
                cast it back as a character, which gives us the capital letter. */

                str[i] = up_let;
                /* Then we go back to that character in the string,
                and change it to the "up_let" variable. */
            }

            else {
                // Do nothing. //
            }
        }
    }

    return str;
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        /* This if statement checks if there is any
        arguments when running code. */
        printf("No arguments please.\n");
        exit(1);
    }

    char name[] = "johnny"; /* This string can be whatever you want. */
    char* uppername = to_upper(name);

    printf("%s\n", uppername);

    getch();
    return 0;
}