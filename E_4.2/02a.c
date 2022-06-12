#include <stdio.h>

int main()
{
    int  newspaper[3][7], total[3]={0};

    for(int i=0; i<3; i++) {
        for(int j=0; j<7; j++) {
            scanf("%d", &newspaper[i][j]);
            total[i] += newspaper[i][j];
        }
    }

  for(int i=0; i<3; i++) {
    printf("Newspaper %d: %d\n", i+1, total[i]);
  }

    return 0;
}
