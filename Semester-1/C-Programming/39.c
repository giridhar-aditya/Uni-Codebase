#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[50];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The vowels in the string are: ");
    for (i = 0; i < strlen(str); i++) {
        switch (tolower(str[i])){
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("%c", str[i]);
                break;
        }
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else
            str[i] = toupper(str[i]);
    }
    printf("\nThe modified string is \"%s\".\n", str);
    return 0;
}
