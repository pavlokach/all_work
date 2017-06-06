#include <stdio.h>
#include <stdlib.h>

int main() {
    // I added two programs in one file because of error I get on CMS.
    int n;
    int m;
    printf("Enter width: ");
    scanf("%d", &n);
    printf("Enter length: ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (j%2 == 1 || ((i == 0  || i == n - 1))) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }



    // some sample variables
    char c = 'g';
    double d, j;
    float f = 1.2;
    int i = 1;
    printf("Let`s add char variable to int variable 'i'.\n");
    i = i + c;
    printf("i = i + c\n");
    printf("After adding int variable 'i' is still int because char variable was converted to int.\n");
    printf("Now our int variable 'i' is 104 which equals 1(given value) + 103(ASCII value of letter 'g').\n");
    printf("So this is example of char variable converting to int\n\n");
    printf("Let`s add float variable to int variable.\n");
    f = i + 1.0;
    printf("f = i + 1.0\n");
    printf("After adding float variable is still float but to do this adding int variable was converted to float.\n");
    printf("So this is example of int variable converting to float\n\n");
    return 0;
}