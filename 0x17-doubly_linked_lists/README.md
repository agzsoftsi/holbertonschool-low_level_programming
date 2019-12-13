# 0x17. C - Doubly linked lists

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf and exit
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called lists.h
- Don’t forget to push your header file
- All your header files should be include guarded


## More Info
Please use this data structure for this project:
´´´
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

´´´

## Tasks

0 - 0-print_dlistint.c - Write a function that prints all the elements of a dlistint_t list.

- Prototype: size_t print_dlistint(const dlistint_t *h);
- Return: the number of nodes
- Format: see example


1 - 1-dlistint_len.c - Write a function that returns the number of elements in a linked dlistint_t list.

- Prototype: size_t dlistint_len(const dlistint_t *h);

2 - 2-add_dnodeint.c - Write a function that adds a new node at the beginning of a dlistint_t list.

- Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed

3 - 3-add_dnodeint_end.c - Write a function that adds a new node at the end of a dlistint_t list.

- Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed

4 - 4-free_dlistint.c - Write a function that free a dlistint_t list.

- Prototype: void free_dlistint(dlistint_t *head);

5 - 5-get_dnodeint.c - Write a function that returns the nth node of a dlistint_t linked list.

- Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
- where index is the index of the node, starting from 0
- if the node does not exist, return NULL

6 -6-sum_dlistint.c - Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

- Prototype: int sum_dlistint(dlistint_t *head);
- if the list is empty, return 0


7 - 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c - Write a function that inserts a new node at a given position.

- Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
- where idx is the index of the list where the new node should be added. Index starts at 0
- Returns: the address of the new node, or NULL if it failed
- if it is not possible to add the new node at index idx, do not add the new node and return NULL
- Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction


8 - 8-delete_dnodeint.c - Write a function that deletes the node at index index of a dlistint_t linked list.

- Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
- where index is the index of the node that should be deleted. Index starts at 0
- Returns: 1 if it succeeded, -1 if it failed
