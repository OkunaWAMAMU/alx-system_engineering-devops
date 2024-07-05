#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Function prototype for infinite_while
int infinite_while(void);

/**
 * infinite_while - Creates an infinite loop for demonstrating
 *                   zombie processes.
 *
 * Return: Always returns 0.
 */
int infinite_while(void)
{
    while (1)
    {
        sleep(1);
    }
    return (0);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0.
 */
int main(void)
{
    pid_t child_pid;
    int i;

    for (i = 0; i < 5; i++)
    {
        child_pid = fork();
        if (child_pid > 0)
        {
            // Parent process
            printf("Zombie process created, PID: %d\n", child_pid);
            sleep(1);  // Give some time for child to become zombie
        }
        else if (child_pid == 0)
        {
            // Child process
            exit(0);
        }
        else
        {
            // Error handling if fork fails
            perror("fork");
            return (1);
        }
    }

    infinite_while(); // Infinite loop to keep the program running

    return (0);
}
