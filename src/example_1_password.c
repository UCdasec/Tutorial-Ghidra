#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <string.h>
#include <stdbool.h>

#define PASSWORD "pass" 

#define MAX_LENGTH 10

bool password_check(char input[]) {
    bool flag = 0;
    if (strncmp(input, PASSWORD, MAX_LENGTH) == 0) {
        flag = 1;
    }

    if (flag == 1)  {
        printf("Correct\n");
    } else {
        printf("Wrong\n");
    }

    return flag;
}

int main(){
    char input[MAX_LENGTH + 1];  
    printf("Enter the password (max %d characters): ", MAX_LENGTH);

    bool flag = 0;

    if (fgets(input, sizeof(input), stdin) != NULL) {
        if (strchr(input, '\n') == NULL) {
            flag = 0;
        }
        else {
            input[strcspn(input, "\n")] = '\0';
        };
        flag = password_check(input);
    };

    return 0;
}
