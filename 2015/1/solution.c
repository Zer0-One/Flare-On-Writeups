#include <stdio.h>

char* string = "\x1f\x08\x13\x13\x04\x22\x0e\x11\x4d\x0d\x18\x3d\x1b\x11\x1c\x0f\x18\x50\x12\x13\x53\x1e\x12\x10";
int size = 24;

int main(){
    for(int i = 0; i < size; i++){
        printf("%c", string[i]^0x7D);
    }
    printf("\n");
}
