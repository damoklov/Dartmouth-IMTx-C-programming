#include<stdio.h>
#define SIZE 51


int main(void) {
    //! showArray(list, cursors=[i])
    // Sorting from smallest to largest
    char word[SIZE];
    int i, j, result=0, n=0;
    int swap;

    scanf("%s", word);

    while(word[n] != '\0')
    {
        n++;
    }

    for (j=0; j<n-1; j++) {
        for (i=0; i<n-1; i++) {
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i] = word[i+1];
                word[i+1] = swap;
            }
        }
    }

    i = 0;
    while (i<n-1) {
        if (word[i]==word[i+1]) {
            result++;
            j=i+2;

            while (j<n && word[i]==word[j]) 
                j++;
            i = j;
        } else {
            i++;
        }
    }

    printf("%d", result);
    return 0;
}