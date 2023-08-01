## 0-print_listint.c (Print list)

Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf

## 1-listint_len.c (List length)

Write a function that returns the number of elements in a linked listint_t list

## 2-add_nodeint.c (Add node)

Write a function that adds a new node at the beginning of a listint_t list

## 3-add_nodeint_end.c (Add node at the end)

Write a function that adds a new node at the end of a listint_t list

## 4-free_listint.c (Free list)

Write a function that frees a listint_t list

## 5-free_listint2.c (Free)

Write a function that frees a listint_t list

## 6-pop_listint.c ( Pop)

Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n)

## 7-get_nodeint.c ( Get node at index)

Write a function that returns the nth node of a listint_t linked list

## 8-sum_listint.c (Sum list)

Write a function that returns the sum of all the data (n) of a listint_t linked list.

## 9-insert_nodeint.c (Insert)

Write a function that inserts a new node at a given position.

## 10-delete_nodeint.c (Delete at index)

Write a function that deletes the node at index index of a listint_t linked list.

## 100-reverse_listint.c (Reverse list)

Write a function that reverses a listint_t linked list

## 101-print_listint_safe.c Print (safe version)

Write a function that prints a listint_t linked list.

Prototype: size_t print_listint_safe(const listint_t *head);
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98

## 102-free_listint_safe.c Free (safe version)

Write a function that frees a listint_t list.

Prototype: size_t free_listint_safe(listint_t **h);
This function can free lists with a loop
You should go though the list only once
Returns: the size of the list that was free’d
The function sets the head to NULL

## 103-find_loop.c (Find the loop)

Write a function that finds the loop in a linked list

Prototype: listint_t *find_listint_loop(listint_t *head);
Returns: The address of the node where the loop starts, or NULL if there is no loop
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function
