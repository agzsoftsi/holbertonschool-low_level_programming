# 0x13. C - More singly linked lists

# Files


| File | Information |
| ------ | ------ |
| n-main.c | main file of task |
| n-function.c | function of the task |
| letter | Exe file of the task |

# Data structure for this project:

```sh
/**
 * struct listint_s - singly linked list
  * @n: integer
   * @next: points to the next node
    *
     * Description: singly linked list node structure
      * for Holberton project
       */
       typedef struct listint_s
       {
           int n;
	       struct listint_s *next;
	       } listint_t;
	       ```

	       # Header file - lists.h:

	       ```sh
	       #ifndef LISTS_H
	       #define LISTS_H
	       #include <stdio.h>
	       #include <stdlib.h>
	       #include <string.h>
	       #include <stddef.h>
	       /**
	        * struct listint_s - singly linked list
		 * @n: integer
		  * @next: points to the next node
		   *
		    * Description: singly linked list node structure
		     * for Holberton project
		      */
		      typedef struct listint_s
		      {
		      int n;
		      struct listint_s *next;
		      } listint_t;
		      size_t print_listint(const listint_t *h);
		      size_t listint_len(const listint_t *h);
		      listint_t *add_nodeint(listint_t **head, const int n);
		      listint_t *add_nodeint_end(listint_t **head, const int n);
		      void free_listint(listint_t *head);
		      void free_listint2(listint_t **head);
		      int pop_listint(listint_t **head);
		      listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
		      int sum_listint(listint_t *head);
		      listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
		      int delete_nodeint_at_index(listint_t **head, unsigned int index);
		      listint_t *reverse_listint(listint_t **head);
		      #endif
		      ```

		      # TASKS: 0-print_listint.c
		      ### print list
		      Write a function that prints all the elements of a listint_t list.
		      Prototype: size_t print_listint(const listint_t *h);
		      - Return: the number of nodes
		      - You are allowed to use printf

		      # TASKS: 1-listint_len.c
		      ### List length
		      Write a function that returns the number of elements in a linked listint_t list.
		      Prototype: size_t listint_len(const listint_t *h);
		      - Return: the number of nodes
		      - You are allowed to use printf

		      # TASKS: 2-add_nodeint.c
		      ### List length
		      Write a function that adds a new node at the beginning of a listint_t list.
		      Prototype: listint_t *add_nodeint(listint_t **head, const int n);
		      - Return: the address of the new element, or NULL if it failed
		      - Return: the number of nodes
		      - You are allowed to use printf

		      # TASKS: 3-add_nodeint_end.c
		      ### Add node at the end
		      Write a function that adds a new node at the end of a listint_t list.
		      Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
		      - Return: the address of the new element, or NULL if it failed

		      # TASKS: 4-free_listint.c
		      ### Free list
		      Write a function that frees a listint_t list.
		      Prototype: void free_listint(listint_t *head);

		      # TASKS: 5-free_listint2.c
		      ### Free
		      Write a function that frees a listint_t list.
		      Prototype: void free_listint2(listint_t **head);
		      - The function sets the head to NULL

		      # TASKS: 6-pop_listint.c
		      ### Pop
		      Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
		      Prototype: int pop_listint(listint_t **head);
		      - if the linked list is empty return 0

		      # TASKS: 7-get_nodeint.c
		      ### Get node at index
		      Write a function that returns the nth node of a listint_t linked list.
		      Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
		      - where index is the index of the node, starting at 0
		      - if the node does not exist, return NULL

		      # TASKS: 8-sum_listint.c
		      ### Sum list
		      Write a function that returns the sum of all the data (n) of a listint_t linked list.
		      Prototype: int sum_listint(listint_t *head);
		      - if the list is empty, return 0

		      # TASKS: 9-insert_nodeint.c
		      ### Insert
		      Write a function that inserts a new node at a given position.
		      Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
		      - where idx is the index of the list where the new node should be added. Index starts at 0
		      - Returns: the address of the new node, or NULL if it failed
		      - if it is not possible to add the new node at index idx, do not add the new node and return NULL

		      # TASKS: 10-delete_nodeint.c
		      ### Delete at index
		      Write a function that deletes the node at index index of a listint_t linked list.
		      Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
		      - where index is the index of the node that should be deleted. Index starts at 0
		      - Returns: 1 if it succeeded, -1 if it failed


		      ## AUTHOR: Carlos Andres Garcia Morales
		      twiiter: [@karlgarmor](https://twitter.com/karlgarmor)
		      Cali - Colombia - 2019