#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

char generate_random_char(void)
{
	int choice = rand() % 3;
       	switch (choice) {
        case 0: // Uppercase letter
            return 'A' + rand() % 26;
        case 1: // Lowercase letter
            return 'a' + rand() % 26;
        case 2: // Digit
            return '0' + rand() % 10;
        default:
            return 'A';
    }
}

void generate_password(char *password, int length) {
    for (int i = 0; i < length; i++) {
        password[i] = generate_random_char();
    }
    password[length] = '\0';
}

int main() {
    srand(time(NULL));  // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1];  // +1 for the null terminator

    generate_password(password, PASSWORD_LENGTH);
    printf("Generated password: %s\n", password);

    return 0;
}

