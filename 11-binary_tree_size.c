#include "binary_trees.h"

/**
 * binary_tree_size - determine number of nodes
 * @tree: pointer to tree's root being measured
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
