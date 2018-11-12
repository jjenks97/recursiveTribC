#include <stdio.h>
#include <stdlib.h>


int tribonacci(int t0, int t1, int t2, int n) {
    //adds t2, t1, and t0 and sets it equal to temp
    int temp = t2 + t1 + t0;
    if (n > 0) {
        // calls tribonnacci again with n = n-1
        temp = tribonacci(t1, t2, temp, n - 1);
    }
    // returns temp when n <= 0
    return temp;
}

int main() {
    
    // takes the values of trib 1, 2, 3, and n while making sure they are >= 0

    int trib0 = -1;
    while (trib0 < 0) {
        printf("Enter tribonacci(0): \n");
        scanf("%d", &trib0);
    }


/////////////////////////////////////////////

    

    int trib1 = -1;

     while (trib1 < 0) {
         printf("Enter tribonacci(1): \n");
        scanf("%d", &trib1);
    }


/////////////////////////////////////////////


    int trib2 = -1;

    while (trib2 < 0) {
        printf("Enter tribonacci(2): \n");
        scanf("%d", &trib2);
    }

     int n = -1;

     while (n < 0) {
        printf("Enter n: \n");
        scanf("%d", &n);
    }



    int tribN;  
    int nTerm = n - 3;

    if (n > 2) {
        // calls the tribonnacci function
        tribN = tribonacci(trib0, trib1, trib2, nTerm);
    }
    else if (n == 2) {
        tribN = trib2;

    }
    else if (n == 1) {
        tribN = trib1;

    }
    else if (n == 0) {
        tribN = trib0;

    }
    //prints the results

    printf("Tribonnacci(%d) = %d \n", n, tribN);

    return 0;

}