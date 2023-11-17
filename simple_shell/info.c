#include "main.h"

/**
 * info_clear - initialize struct info_t
 * @info: struct address
 */

void info_clear(info_t *info)
{
	info->arg = NULL;
	info->argv = NULL;
	info->path = NULL;
	info->argc = 0;
}

/**
 * info_set - initialize struct info_t
 * @info: struct address
 * @av: argument vector
 */

void info_set(info_t *info, char **av)
{
	int i = 0;

	info->fname = av[0];

	if (info->arg)
	{
		info->argv = 
	}
}
