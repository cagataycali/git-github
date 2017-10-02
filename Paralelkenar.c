#include <stdio.h>

  int main() {
    int i;
    int z;
    int j;
    int a, b;
    int bosluk = 1;
    printf("Uzun kenarda kaç yıldız olsun istersin:");
    scanf("%d", &a);

    printf("Kısa kenarda kac yıldız olmasını istersin:");
    scanf("%d", &b);

    for (i = 0; i < b; i++) {
      for (j = 0; j < a; j++) {
        printf("*");
      }

      printf("\n");

      for (z = 0; z < bosluk; z++) {
        printf(" ");
        if (bosluk == b)
          break;
      }
      bosluk = bosluk + 1;
    }
    return 0;
  }
