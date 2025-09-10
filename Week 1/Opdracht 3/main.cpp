#include <stdio.h>

void leesWaarden(float* geld, int rente[], int lengte, int* jaar);
void printTabel(float* s, int r[], int lengte, int* j);

int main()
{
    float start;
    int rente[100];
    int jaren;

//    start = 100;
//    rente = 1;
//    jaren = 0;
    leesWaarden(&start, rente, 100, &jaren);
    printTabel(&start, rente, 100, &jaren);

}

void leesWaarden(float* geld, int rente[], int lengte, int* jaar) {
    printf("Met hoeveel geld begint u te sparen?\n");
    scanf_s("%f", &*geld);

    printf("Hoeveel jaar wilt U sparen?\n");
    scanf_s("%d", &*jaar);

    printf("Geef per jaar het rente percentage op.");
    for (int i = 1; i <= *jaar; i++) {
        printf("\nHet rente percentage voor jaar %d is:", i);
        scanf_s("%d", &rente[i]);
    }

//    printf("Met hoeveel procent rente?\n");
//    scanf_s("%d", &*rente);

    printf("\n\n");
}

void printTabel(float* s, int r[], int lengte, int* j) {
    for (int i = 1; i <= *j; i++) {
        *s = (*s * (100 + r[i])) / 100;
        printf("U heeft na %d jaar %.2f euro gespaard.\n", i, *s);
    }
}
