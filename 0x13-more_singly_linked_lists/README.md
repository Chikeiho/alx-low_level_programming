Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
How to use linked lists
Start to look for the right source of information without too much help
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder he Betty style. It will be checked using betty-styof the project is mandatory
Your code should use tle.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed aresh _putchar.c, we will use our file. If you do it  malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to puwon’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t prototypes of all your functions and the prototypehave to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The  of the function _putchar should be included in your header file called lists.h
Don’t forget to push your header file
All your header files should be include guarded

0. Print list
mandatory
Write a function that prints all the elements of a listint_t list.

1. List length
mandatory
Write a function that returns the number of elements in a linked listint_t list.


2. Add node
mandatory
Write a function that adds a new node at the beginning of a listint_t list.

3. Add node at the end
mandatory
Write a function that adds a new node at the end of a listint_t list

4. Free list
mandatory
Write a function that frees a listint_t list.

5. Free
mandatory
Write a function that frees a listint_t list.

6. Pop
mandatory
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

7. Get node at index
mandatory
Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_indeode does not exist, return NULLx(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the n

8. Sum list
mandatory
Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0

9. Insert
mandatory
Write a function that inserts a new node at a given position.

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL

10. Delete at index
mandatory
Write a function that deletes the node at index index of a listint_t linked list.

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed

11. Reverse list
#advanced
Write a function that reverses a listint_t linked list.

Prototype: listint_t *reverse_listint(listint_t **head);
RetYou are not allowed to use malloc, free or arrays
urns: a pointer to the first node of the reversed list
You are not allowed to use more than 1 loop.
You can only declare a maximum of two variables in your function

12. Print (safe version)
#advanced
Write a function that prints a listint_t linked list.

Prototype: size_t print_listint_safe(const listint_t *head);
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
Output format: see example

13. Free (safe version)
#advanced
Write a function that frees a listint_t list.

Prototype: size_t free_listint_safe(listint_t **h);
This functithat was free’d
The function sets the head to NULLon can free lists with a loop
You should go though the list only once
Returns: the size of the list 

14. Find the loop
#advanced
Write a function that finds the loop in a linked list.

Prototype: listint_t *find_listint_loop(listint_t *head);
Re1~turns: The address of the node where the loop starts, or NULL if there is no loop
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function14. Find the loop
#advanced
Write a function that finds the loop in a linked list.

Prototype: listint_t *find_listint_loop(listint_t *head);
Returns: The address of the node where the loop starts, or NULL if there is no loop
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function
