#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: Is a pointer to the parent node of the node to create.
 * @value: Is te value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree = NULL;

	new_tree = malloc(sizeof(binary_tree_t));

	if (new_tree == NULL)
	{
		return (NULL);
	}

	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;

	new_tree->n = value;

	return (new_tree);
}
