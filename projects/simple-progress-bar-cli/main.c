#include <stdio.h>
#include <unistd.h>

void progressBarCLI(int iFill, char cFill, char* sSide) {
    char sFill[iFill];
    for (int i = 0; i < iFill; i++) {
        sFill[i] = cFill;
    }
    sFill[iFill] = '\0';
    printf("\r%3d%% %c%-100s%c", iFill, sSide[0], sFill, sSide[1]);
    fflush(stdout);
}

int main() {
    progressBarCLI(0, '#', "[]");
    for (int i = 1; i < 101; i++) {
        usleep(100000); // 100000 micros = 0.1 s
        progressBarCLI(i, '#', "[]");
    }
    printf("\n");

    return 0;
}