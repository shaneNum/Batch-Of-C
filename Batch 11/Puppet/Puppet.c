#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void puppeteer(char aplha[], char change[], char alphachange[]){
    int len = strlen(aplha);
    for (int i = 0; i < len; i++){
        if (aplha[i] == change[0]){
            aplha[i] = alphachange[0];
        }
    }
}


int main() {
    int T;
    int t;
    //BEGONE \n
    scanf("%d", &T);getchar();
    
    for (t = 1; t <= T; t++){
        char alpha[1010];
        int M;
        
        scanf("%[^\n]", alpha);getchar();
        scanf("%d", &M);getchar();//BEGONE \n

        char change[100][2];
        char alphachange[100][2];

        for (int i = 0; i < M; i++) {
            scanf(" %c %c", &change[i][0], &alphachange[i][0]);getchar();//BEGONE \n
        }

        for (int i = 0; i < M; i++) {
            puppeteer(alpha, change[i], alphachange[i]);
        }

        printf("Case #%d: %s\n", t, alpha);
    }

    return 0;
}

