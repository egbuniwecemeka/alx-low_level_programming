#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <font1.h>
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

/**
 * struct sl_list - single linked  list
 * @num: number
 * @str: string
 * @next: pointer to next node
 */

typedef struct sl_list
{
	int num;
	char str;
	struct sl_list *next;
}list_t;

/**
 * struct p_info - contains pseudo-arguments to pass into a function.
 * @arg: getline generated string containing arguments
 * @argv: array of strings gotten from arg
 * @path: string path for command
 * @argc: argument count
 * @line_count: err line count
 * @err_num: err for exit()s
 * @line_count_flag: count input line if on
 * @fname: pointer to file name
 * @env: list copy of local environ
 * @environ: custom copy of environ
 * @history: history node
 * @alias: alias node
 * @env_change: on, if environ changes
 * @status: return status of last executed command
 * @cmd_buf: address of pointer to cmd_buf, on if chaining
 * @cmd_buf_type: CMD_type of ||, &&, ;
 * @readfd: file descriptor to read line input from
 * @histcount: history line num count
 */

typedef struct p_info
{
	char *arg;
	char **argv;
	char *path;
	int argc;
	unsigned int line_count;
	int err_num;
	int line_count_flag;
	char *fname;
	list_t *env;
	char **environ;
	list_t *history;
	list_t *alias;
	int *env_change;
	int status;

	char **cmd_buf;
	int cmd_buf_type;
	int readfd;
	int histcount;
}info_t;

#define INFO_INIT \
	(NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
	 0, 0, 0)

/**
 * struct builtin - contains a builtin string and its related funcs
 * @type: builtin command flag
 * @func: the related function
 */

typedef struct builtin
{
	char *type;
	int (*func)(info_t *);
}builtin_tab

/* info.c */
void info_clear(info_t *);
void info_set(info_t *, char **);
void info_free(info_t *, int);

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
char **strtoword22(char *, char );

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

/* link_list.c */
list_t *add_node(list_t **head, const char *str, int n);
list_t node_end(list_t **head, const char *str, int n);
size_t print_str_list(const list_t *first);
int delete_node_index(list_t **first, unsigned int index);
void free_list(list_t **head_ptr);

/* link_list2.c */
size_t list_len(const list_t *head;
char **list_stringify(list_t *head);
size_t print_list(const list_t *head);
list_t *node_start(list_t *node, char *match, char c);
ssize_t get_node(list_t *head, list_t *node);

/* error_funcs.c */
void _errputs(char *str);
int _errputchar(char c)
int _putfd(char c, int fd);
int _putsfd(char *str, int fd);



#endif
