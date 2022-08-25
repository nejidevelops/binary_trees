#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_sibling - determine sibling node
 * @node: node to find sibling of
 *
 * Return: pointer to sibling node; NULL on failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* determine if node is left or right child */
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
		return (node->parent->left);
}
