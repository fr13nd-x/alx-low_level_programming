# 0x17. C - Doubly linked lists

0-print_dlistint.c - a function that prints all the elements of a dlistint_t list.
rototype: size_t print_dlistint(const dlistint_t *h);

1-dlistint_len.c - a function that returns the number of elements in a linked dlistint_t list.
Prototype: size_t dlistint_len(const dlistint_t *h);

2-add_dnodeint.c - a function that adds a new node at the beginning of a dlistint_t list.
Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);

3-add_dnodeint_end.c - a function that adds a new node at the end of a dlistint_t list.
Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

4-free_dlistint.c - a function that frees a dlistint_t list.
Prototype: void free_dlistint(dlistint_t *head);

5-get_dnodeint.c - a function that returns the nth node of a dlistint_t linked list.
Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
where index is the index of the node, starting from 0

6-sum_dlistint.c - a function that returns the sum of all the data (n) of a dlistint_t linked list.
Prototype: int sum_dlistint(dlistint_t *head);

7-insert_dnodeint.c - a function that inserts a new node at a given position.
Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL

8-delete_dnodeint.c - a function that deletes the node at index index of a dlistint_t linked list.
Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0

100-password - Find the password for crackme4.
link for the file crackme4
[https://github.com/alx-tools/0x17.c] 

102-result -  palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.

103-keygen.c - Usage of the crackme: ``./crackme5 username key``
The crackme will segfault if you do not enter the correct key for the user
Usage for your keygen: ``./keygen5 username``
Your keygen should print a valid key for the username
link for the file crackme5
[https://github.com/alx-tools/0x17.c]

