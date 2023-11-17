#include "main.h"

/**
 * add_node - adds a node to the beginning of a list
 * @head: pointer address to nead node
 * @str: node string field
 * @n: node index
 *
 * Return: node_list size
 */

list_t *add_node(list_t **head, const char *str, int n)
{
	list_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	
	_memset((void *)new, 0, sizeof(list_t));
	new->n = n;

	if (str)
	{
		new->str = _strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * node_end - adds a node to the end of a list
 *  * @head: pointer address to nead node
 * @str: node string field
 * @n: node index
 *
 * Return: node_list size
 */

list_t node_end(list_t **head, const char *str, int n)
{
	list_t *new, *node;

	if (!new)
		return (NULL);

	node = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	_memset((void *)new, 0, sizeof(list_t));
	new->n = n;

	if (str)
	{
		new->str = _strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new;
	}
	else
		*head = new;
	return (new);
}

/**
 * print_list - prints the str element in a list
 * @first: pointer to first node
 *
 * Return: node_list size
 */

size_t print_str_list(const list_t *first)
{
	size_t i = 0;

	while (first)
	{
		_puts(first->str ? first->str : "(nil)");
		_puts('\0');
		first = first->next;
		i++;
	}
	return (i);
}


/**
 * delete_node_index - deletes node @particular index
 * @first: pointer to first node
 * @index: node index to be deleted
 *
 * Return: 1 if successful, otherwise 0
 */

int delete_node_index(list_t **first, unsigned int index)
{
	list_t *node, *prev_node;
	unsigned int i = 0;

	if (!first || !*first)
		return (0);

	if(!index)
	{
		node = *first;
		*first = (*first)->next;
		free(node->str);
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev_node->next = node->next;
			free(node->str);
			free(node);
			return (1);
		}
		i++;
		prev_node = node;
		node = node->next;
	}
	return (0);

}

/**`:
 * free_list - frees node from a list
 * @head_ptr: address of head pointer to node 
 *
 * Return: void
 */

void free_list(list_t **head_ptr)
{
	list_t *node, *next_node, *head;
	
	if (!head_ptr || !*head_ptr)
		return;
	head = *head_ptr;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);

		node = next_node;
	}
	*head_ptr = NULL;
}
