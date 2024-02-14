#include <stdio.h>
#include <string.h>

//Saya takut salah karena ini sangat baru, maka saya tanya teman..... Apaan ini....


int main() {
    int a = 0, b = 0;
    FILE *p = fopen("testdata.in", "r");

    

    fscanf(p, "%d", &a);

    char name[a][50], pohon[a][50];

    char line[100]; // Assuming the maximum line length is 100 characters

    // Consume the newline character after reading 'a'
    fgets(line, sizeof(line), p);

    for (int i = 0; i < a; i++) {
        if (fgets(line, sizeof(line), p) != NULL) {
            sscanf(line, "%[^#]#%[^\n]", name[i], pohon[i]);
        }
    }

    fscanf(p, "%d", &b);

    // Consume the newline character after reading 'b'
    fgets(line, sizeof(line), p);

    char pilih[b][50];

    for (int j = 0; j < b; j++) {
        if (fgets(line, sizeof(line), p) != NULL) {
            sscanf(line, "%[^\n]", pilih[j]);
        }
    }

    fclose(p);

    for (int i = 0; i < b; i++) {
        int found = 0;
        for (int j = 0; j < a; j++) {
            if (strcmp(pilih[i], name[j]) == 0) {
                printf("Case #%d: %s\n", i + 1, pohon[j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Case #%d: N/A\n", i + 1);
        }
    }

    return 0;
}

