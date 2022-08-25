#include "binary_trees.h"
/**
 * binary_tree_delete - deletes entire tree
 * @tree: pointer to root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		/* recurse left */
		binary_tree_delete(tree->left);
		/* recurse right */
		binary_tree_delete(tree->right);

		free(tree);
	}
}
