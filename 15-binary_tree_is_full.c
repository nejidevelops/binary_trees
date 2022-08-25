#include "binary_trees.h"
int recurse_full(const binary_tree_t *tree);
/**
 * binary_tree_is_full - check if tree is full
 * @tree: pointer to root of tree
 *
 * Return: 1 if full; 0 if not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (recurse_full(tree));
}
/**
 * recurse_full - recursive component of full check
 * @tree: root of tree
 *
 * Return: 1 if full, 0 if not full
 */
int recurse_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (recurse_full(tree->left) * recurse_full(tree->right));
}
