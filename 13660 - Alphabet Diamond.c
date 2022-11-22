#include <stdio.h>

char diamond[26][100];

int main() {
    char ch;
    scanf("%c", &ch);
    
    for (int i = 0; i <= ch - 'A'; i++) {
        int idx = 0;
        
        for (int k = 0; k < (ch-'A') - i; k++) {
            // You can use diamond[i][idx++] = ' '; instead.
            diamond[i][idx] = ' ';
            idx++;
        }
        
        for (int k = 'A'; k < i + 'A'; k++) {
            diamond[i][idx] = k;
            idx++;
        }
        
        for (int k = i + 'A'; k >= 'A'; k--) {
            diamond[i][idx] = k;
            idx++;
        }
    }
    
    for (int i = 0; i < ch - 'A'; i++)
        printf("%s\n", diamond[i]);
    for (int i = ch - 'A'; i >= 0; i--)
        printf("%s\n", diamond[i]);
}
