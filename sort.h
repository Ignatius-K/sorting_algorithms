#ifndef SORT_H
#define SORT_H


#include <stdlib.h>
#include <stdio.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to previous element of list
 * @next: Pointer to next element of list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int*, size_t);

void print_list(const listint_t *);

void bubble_sort(int *, size_t);





#endif /* SORT_H */
