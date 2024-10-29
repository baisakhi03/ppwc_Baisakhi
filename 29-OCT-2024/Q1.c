#include<stdio.h>
int main(){
    char s[100]; 

    printf("Enter a number: ");
    fgets(s, sizeof(s), stdin);

    // Iterate through the string and replace characters
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '0') {
            s[i] = '1';
        } else if (s[i] == '1') {
            s[i] = '0';
        }
    }

    printf("Modified number is : %s", s);
    return 0;
}




