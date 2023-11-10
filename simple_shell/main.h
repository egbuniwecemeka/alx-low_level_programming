#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

int myppid(void);
char *str_token(char *str, const char *delim);
size_t mystr_len(char *str);
int execve_func(char *line);

#endif
