#include <stdio.h>

// Funkcja do wyszukiwania litery w ci¹gu znaków
void znajdz_litere(char* str, char litera) {
    char* ptr = str;
    int znaleziono = 0;
    int i;
    for (i = 0; i < (sizeof(str)/sizeof(str)); i++) {
        if (*ptr == litera) {
            printf("Znaleziono literê '%c' na pozycji: %ld\n", litera, ptr - str);
            znaleziono = 1;
        }
        ptr++;
    }
    if (!znaleziono) {
        printf("Litera '%c' nie zosta³a znaleziona w ci¹gu.\n", litera);
    }
}

int main() {
    char ciag[] = "Dupa, sraka to epidemia taka";
    char litera_do_znalezienia = 'a';

    znajdz_litere(ciag, litera_do_znalezienia);

    return 0;
}
