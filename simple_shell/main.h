#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

/* command chaining */
#define CMD_NORM	0
#define CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	3

/* for read/write buffer */
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH - 1

/* for converting numbers() */
#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/* for system getline */
#define USE_GETLINE 0
#define USE_STRTOK 0

#define HIST_FILE	".simple_shell_history"
#define HIST_MAX	4096

extern char **env;

/* string_funcs.c */
int _strlen(char *);
int _strcmp(char *, char *);
char *starts_word(const char *, const char *);
char *_strcat(char *, char *);

/* string_funcs2.c */
char *_strcpy(char *, char *);
char *_strdup(const char *);
void _puts(char *);
int _putchar(char);

/* string_funcs3.c */
char *_strncpy(char *, char *, int);
char *_strncat(char *, char *, int);
char *_strchar(char *, char);

/* string_funcs4.c */
char **strtoword(char *, char *);
char **strtoword(char *, char );

/* memset_funcs.c */
char *_memset(char *, char , unsigned int);
void b_free(char **);
void *_realloc(void *, unsigned int, unsigned int);

/* mem_funcs2.c */
int p_free(void **);

/* other_functions.c */
int shell_intact(info_t info);
int is_delim(char c, char *delim);
int is_alpha(int c);
int _atoi(char *str);

/* err_func.c */
int _erratoi(char *str);
void print_err(info_t *info, char *str);
int print_d(int inp, int fd);
char *convert_num(long int num, int base, int flag);
void rem_comment(char *str);




#endif
