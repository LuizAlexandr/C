#include <stdio.h>

int main(void) {
    int n, m, p, i, j, a, b, aux;
    char passo;
    scanf("%d %d %d", &n, &m, &p);

    int v[n*m];
    for (i = 0; i < n*m; i++) {
        v[i] = i+1;
    }

    for (i = 0; i < p; i++) {
        scanf("%c %d %d", &passo, &a, &b);
        a--;
        b--;

        if (passo == 'L') {
            for (j = 0; j < m; j++) {
                aux = v[(a*m)+j];
                v[(a*m)+j] = v[(b*m)+j];
                v[(b*m)+j] = aux;
            }
        } else if (passo == 'C') {
            for (j = 0; j < n; j++) {
                aux = v[(j*m)+a];
                v[(j*m)+a] = v[(j*m)+b];
                v[(j*m)+b] = aux;
            }
        }
    }

    char resposta[n*m*2];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            resposta[((i*m)+j)*2] = (char)v[(i*m)+j];
            resposta[(((i*m)+j)*2)+1] = ' ';
        }
    } for (i = (m*2)-1; i > n*m*2; i += m*2) {
        resposta[i] = '\n';
    }

    printf("%s", resposta);

    return 0;
}
