#include <stdio.h>

// Funkcja do wyszukiwania litery w ci�gu znak�w
void znajdz_litere(char* str, char litera) {
    char* ptr = str;
    int znaleziono = 0;
    int i;
    for (ptr = str; *ptr != '\0'; ptr++) {
        if (*ptr == litera) {
            printf("Znaleziono liter� '%c' na pozycji: %ld\n", litera, ptr - str);
            znaleziono = 1;
        }
        
    }
    if (!znaleziono) {
        printf("Litera '%c' nie zosta�a znaleziona w ci�gu.\n", litera);
    }
}

int main() {
    char ciag[] = "Dupa, sraka to epidemia taka";
    char litera_do_znalezienia = 'a';

    znajdz_litere(ciag, litera_do_znalezienia);

    return 0;
}
