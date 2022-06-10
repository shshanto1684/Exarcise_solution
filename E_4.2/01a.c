 #include <stdio.h>

 int main()
 {
     int  nudus[2][12], total[12] = {0};

     for(int i=0; i <2; i++) {
        for(int j=0; j <12; j++) {
            scanf("%d", &nudus[i][j]);
            total[j] = total[j] + nudus[i][j];
        }
     }

    if(total[0]>total[1]) {
        printf("Best seller is Bison moja");
    }
        else {
            printf("Best seller is Akhon khabo");
        }
     return 0;
 }
