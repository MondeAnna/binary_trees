#include "binary_trees.h"

/**
 * binary_tree_is_full - test if tree is full
 * @tree: pointer to tree's root being measured
 * Return: 1 if full else 0
 */
size_t binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (left == right);
}
