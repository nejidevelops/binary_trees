#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node as left child
 * @parent: pointer to parent node
 * @value: value stored in node
 *
 * Return: pointer to created node; NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	/* create new node */
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	/* initialize new node */
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	/* if parent already has left node */
	if (parent->left != NULL)
	{
		new->left = parent->left; /* old left is now new's left */
		parent->left->parent = new; /* set old left's parent to new */
	}
	parent->left = new; /* point parent's left to new node */

	return (new);
}
