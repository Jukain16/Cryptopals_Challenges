#include <stdio.h>
int main(int argc, char **argov) {
        const char hexstring[] = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
        unsigned char val[12];

        for (size_t count = 0; count < sizeof val/sizeof *val; count++){
                sscanf(pos, "%2hhx", &val[count]);
                pos += 2;
        }
        printf("0x");
        for(size_t count = 0; count < sizeof val/sizeof *val; count++) {
                printf("%02x", val[count]);
                printf("\n");
        }
        return 0;
}
