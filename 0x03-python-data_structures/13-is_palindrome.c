#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: pointer to pointer to the head of the linked list
 *
 * Return: 1 if the list is a palindrome, 0 otherwise
 */
int is_palindrome(struct Node** head)
{
	struct Node *slow = *head, *fast = *head;
	/* Finding the middle node of the list */
	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}

	struct Node *prev = NULL;
	/* Reversing the second half of the list */
	while (slow) {
		struct Node* curr = slow;
		slow = slow->next;
		curr->next = prev;
		prev = curr;
	}

	struct Node *left = *head, *right = prev;
	/* Comparing the first and second halves of the list */
	while (left && right) {
		if (left->data != right->data) {
			return 0;
		}
		left = left->next;
		right = right->next;
	}

	right = prev;
	prev = NULL;
	/* Restoring the original list */
	while (right) {
		struct Node* curr = right;
		right = right->next;
		curr->next = prev;
		prev = curr;
	}

	return 1;
}

