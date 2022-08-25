#include "binary_trees.h"
binary_tree_t *recurse_for_ancestor(binary_tree_t *root,
	const binary_tree_t *first, const binary_tree_t *second);
/**
 * binary_trees_ancestor - find lowest common ancestor
 * @first: first node to find ancestor for
 * @second: second node to find ancestor for
 *
 * Return: pointer to lowest common ancestor; NULL on failure
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *root = NULL;

	if (!first || !second)
		return (NULL);

	/* find root node */
	root = (binary_tree_t *)first;
	while (root->parent != NULL)
		root = root->parent;

	/* perform lowest common anscestor detection */
	return (recurse_for_ancestor(root, first, second));
}
/**
 * recurse_for_ancestor - recursive component to find LCA
 * @root: pointer to root of tree
 * @first: pointer to one child
 * @second: pointer to other child
 *
 * Return: pointer to LCA
 */
binary_tree_t *recurse_for_ancestor(binary_tree_t *root,
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *leftLCA = NULL, *rightLCA = NULL;

	if (root == NULL || first == NULL || second == NULL)
		return (NULL);

	if (root == first || root == second)
		return (root);

	leftLCA = recurse_for_ancestor(root->left, first, second);
	rightLCA = recurse_for_ancestor(root->right, first, second);

	if (leftLCA && rightLCA)
		return (root);

	if (leftLCA != NULL)
		return (leftLCA);
	return (rightLCA);
}
