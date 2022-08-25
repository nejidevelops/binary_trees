#include "binary_trees.h"
/**
 * binary_tree_nodes - count non-leaf nodes
 * @tree: pointer to root
 *
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree && (tree->left || tree->right))
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	return (0);
}
