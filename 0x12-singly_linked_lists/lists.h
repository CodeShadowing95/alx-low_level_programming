#ifndef MAIN_H
#define MAIN_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char);

size_t print_list(const list_t *);

size_t list_len(const list_t *);

int length(const char *);

list_t *add_node(list_t **, const char *);

#endif
