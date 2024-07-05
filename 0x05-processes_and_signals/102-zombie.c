#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Function declaration for infinite loop
int infinite_while(void);

int main(void)
{
    pid_t child_pid;
    int i;

    for (i = 0; i < 5; i++) {
        child_pid = fork();

        if (child_pid > 0) {
            // Parent process
            printf("Zombie process created, PID: %d\n", child_pid);
            sleep(1); // Let parent wait a bit before creating the next child
        } else if (child_pid == 0) {
            // Child process
            exit(0); // Child exits immediately, becoming a zombie
        } else {
            // Error handling
            perror("fork");
            return 1;
        }
    }

    // Infinite loop to keep the program running
    return infinite_while();
}

// Function definition for infinite loop
int infinite_while(void)
{
    while (1) {
        sleep(1);
    }
    return (0);
}
