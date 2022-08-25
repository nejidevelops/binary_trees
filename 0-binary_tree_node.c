#include "binary_trees.h"
/**
 * binary_tree_node - function creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put into new node
 * Description: 0. New node
 * Return: see below
 * 1. upon success, return pointer to new node
 * 2. upon fail, return NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Declare pointer to new node and pointer for insertion */
	binary_tree_t *new_node = NULL;

	/* Allocate memory for new node but if fail, return NULL */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Assign values or NULL  to new node */
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
