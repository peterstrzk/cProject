#include <stdio.h>


static void znajdz_litere(char* str, char litera) {
    char* ptr = str;
    int znaleziono = 0;
    int i;
    for (ptr = str; *ptr != '\0'; ptr++) {
        if (*ptr == litera) {
            printf("Znaleziono litere '%c' na pozycji: %ld\n", litera, ptr - str);
            znaleziono = 1;
        }
        
    }
    if (!znaleziono) {
        printf("Litera '%c' nie zostala znaleziona w ciagu.\n", litera);
    }
}

int main() {

    char ciag[100];
    
    fgets(ciag, sizeof(ciag), stdin);
    
    char litera_do_znalezienia;
    scanf_s("%c", &litera_do_znalezienia, 1);
    

    znajdz_litere(ciag, litera_do_znalezienia);

    return 0;
}
