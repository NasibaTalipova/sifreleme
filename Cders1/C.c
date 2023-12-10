#include <stdio.h>
#include <string.h>

// Vigenere �ifreleme Algoritmas�
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

// Vigenere �ifre ��zme Algoritmas�
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
    
   

    // �ifreleme
    encrypt(text, key);
    printf("�ifrelenmi�  Text: %s\n", text);

    // �ifre ��zme
    decrypt(text, key);
    printf("�ifresi ��zulmu� Text: %s\n", text);

    return 0;
}
