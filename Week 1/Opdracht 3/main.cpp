#include <stdio.h>

void leesWaarden(float* s, int* r, int* j);
void printTabel(float* s, int* r, int* j);

int main()
{
    float sp;
    int rp, jp;

    sp = 100;
    rp = 1;
    jp = 0;
    leesWaarden(&sp, &rp, &jp);
    printTabel(&sp, &rp, &jp);

}

void leesWaarden(float* geld, int* rente, int* jaar) {
    printf("Met hoeveel geld begint u te sparen?\n");
    scanf_s("%f", &*geld);

    printf("Met hoeveel procent rente?\n");
    scanf_s("%d", &*rente);

    printf("Hoeveel jaar wilt U sparen?\n");
    scanf_s("%d", &*jaar);

    printf("\n\n");
}

void printTabel(float* s, int* r, int* j) {
    for (int i = 1; i <= *j; i++) {
        *s = (*s * (100 + *r)) / 100;
        printf("U heeft na %d jaar %.2f euro gespaard.\n", i, *s);
    }
}
