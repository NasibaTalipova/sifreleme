#include <stdio.h>
#include <string.h>

// Vigenere Þifreleme Algoritmasý
void encrypt(char *text, char *key) {
    int n = strlen(text);
    int i;
    for (i = 0; i < n; i++) {
        if (isalpha(text[i])) {
            int ch = toupper(text[i]) + toupper(key[i % strlen(key)]) - 2 * 'A';
            ch %= 26;
            text[i] = ch + 'A';
        }
    }
}

// Vigenere Þifre Çözme Algoritmasý
void decrypt(char *text, char *key) {
    int n = strlen(text);
    int i;
    for (i = 0; i < n; i++) {
        if (isalpha(text[i])) {
            int ch = toupper(text[i]) - toupper(key[i % strlen(key)]) + 26;
            ch %= 26;
            text[i] = ch + 'A';
        }
    }
}

int main() {
    char text[] = "The quick brown fox";
    char key[] = "123";
    
   

    // Þifreleme
    encrypt(text, key);
    printf("Þifrelenmiþ  Text: %s\n", text);

    // Þifre çözme
    decrypt(text, key);
    printf("þifresi çözulmuþ Text: %s\n", text);

    return 0;
}
