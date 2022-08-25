#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse tree using in-order method
 * @tree: pointer to root node
 * @func: function pointer to be called for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func) /* if either pointer is NULL */
		return;

	/* recurse leftwards */
	binary_tree_inorder(tree->left, func);

	func(tree->n);

	/* recurse rightward */
	binary_tree_inorder(tree->right, func);
}
