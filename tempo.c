#include <stdio.h>
#include <windows.h>

int main() {
    int h, s, N = 0;

    for (h = 59; h >=0; h--) {
        for (s = 59; s >= 0; s--) {
            printf("%d:%d\n", h, s);
            N++;
            // Sleep (1000);
        }
    }

    printf ("%d interações", N);

    return 0;
}