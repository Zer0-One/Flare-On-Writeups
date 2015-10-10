#include <stdio.h>

char* ciphertext = "\x00\xA8\x9A\x90\xB3\xB6\xBC\xB4\xAB\x9D\xAE\xF9\xB8\x9D\xB8\xAF\xBA\xA5\xA5\xBA\x9A\xBC\xB0\xA7\xC0\x8A\xAA\xAE\xAF\xBA\xA4\xEC\xAA\xAE\xEB\xAD\xAA\xAF";

int main(){
    int total = 0;
    for(int i = 1; i < 38; i++){
        total += ciphertext[i-1];
        printf("%c", (ciphertext[i] - (0x01 << (total & 0x03)) - 0x01) ^ 0xC7);
    }
    printf("\n");
}
