#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

/**
 * struct command - A string - function pair
 *
 * @buf:  the command
 * @execute: Special function implemented to print data of a given
 * specifier to stdout
 *
 * Description: A specifier - function pair
 */
typedef struct command
{
	char *buf;
	int (*execute)(char **args);
} command;


#endif /* !SHELL_H */
