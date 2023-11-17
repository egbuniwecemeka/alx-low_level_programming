#include "main.h"

/**
 * list_len - list the length of a linked list
 * @head: pointer to first node
 *
 * Return: size of list
 */

size_t list_len(const list_t *head)
{
	size_t i = 0;

	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}

/**
 * list_stringify - returns an array of strings of list->str
 * @head: pointer to first node
 *
 * Return: array of strings
 */

char **list_stringify(list_t *head)
{
	list_t *node = head;
	size_t i = list_len(head), j;
	char string;
	char str;

	if (!head || !i)
		return (NULL);

	string = malloc(sizeof(char *) * (i + 1));
	if (!str)
		return (NULL);
	for (i = 0; node; node = node->next, i++)
	{
		str = malloc(_strlen(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < i; j++)
				free(string[j]);
			free(string);
			return (NULL);
		}
		str = _strcpy(str, node->str);
		string[i] = str;
	}

	string[i] = NULL;
	return (string);
}

/**
 * print_list - print elements of a list_t
 * @head: pointer to first node
 *
 * Return: size of the linked list
 */

size_t print_list(const list_t *head)
{
	size_t i = 0;

	while (head)
	{
		_puts(convert_num(head->num, 10, 0));
		_putchar(":");
		_putchar(" ");
		_puts(head->str ? head->str : "(nil)");
		_puts("\n");
		head = head->next;
		i++;
	}
	return (i);
}


/**
 * node_start - return node with a certain match
 * @node: pointer to head node
 * @match: string to be matched
 * @c: character after match
 */

list_t *node_start(list_t *node, char *match, char c)
{
	char *ptr = NULL;

	while (node)
	{
		ptr = starts_word(node->str, match);
		if (ptr && ((c == -1) || (*ptr == c))
			return (node);
		node = node->next;
	}
	return (NULL);
}


/**
 * get_node - gets a node @ particular index
 * @head: pointer to list head
 * @node: pointer to node
 *
 * Return: index of node, else -1
 */

ssize_t get_node(list_t *head, list_t *node)
{
	size_t i = 0;

	while (head)
	{
		if (head == node)
			return (i);
		head = head->next;
		i++;
	}
	return (-1);
}
