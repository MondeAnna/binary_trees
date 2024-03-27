#include "binary_trees.h"

/**
 * binary_tree_leaves - determine number of nodes
 * @tree: pointer to tree's root being measured
 * Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
