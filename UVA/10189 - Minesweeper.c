#include <stdio.h>

#define MINE '*'

int main (int argc, const char * argv[]) {
        long n;
        long m;
        long i, j;
        long fieldNumber = 0;

        while(scanf("%ld %ld", &n, &m) != EOF) {
                if (!n && !m) {
                        return 0;
                } else {
                        if (fieldNumber > 0) {
                                printf("\n");
                        }
                }
                char inputField[n+2][m+2];
                int outputField[n+2][m+2];
                char line[m];
                for (i = 0; i < n+2; i++) {
                        for (j = 0; j < m+2; j++) {
                                outputField[i][j] = 0;
                        }
                }
                for (i = 0; i < n; i++) {
                        scanf("%s\n",line);
                        for (j = 1; j < m+1; j++) {
                                inputField[i+1][j] = line[j-1];
                        }
                }
                for (i = 1; i < n+1; i++) {
                        for (j = 1; j < m+1; j++) {
                                if (inputField[i][j] == MINE) {
                                        outputField[i-1][j-1]++;
                                        outputField[i-1][j]++;
                                        outputField[i-1][j+1]++;
                                        outputField[i][j-1]++;
                                        outputField[i][j+1]++;
                                        outputField[i+1][j-1]++;
                                        outputField[i+1][j]++;
                                        outputField[i+1][j+1]++;
                                }
                        }
                }
                printf("Field #%ld:\n",fieldNumber);
                for (i = 1; i < n+1; i++) {
                        for (j = 1; j < m+1; j++) {
                                if (inputField[i][j] == MINE)
                                        printf("%c", MINE);
                                else
                                        printf("%d",outputField[i][j]);
                        }
                        printf("\n");
                }

        }

    return 0;
}
