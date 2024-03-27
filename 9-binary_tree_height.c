#include "binary_trees.h"

/**
 * binary_tree_height - longest edge path
 * @tree: pointer to tree's root being measured
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	return (left >= right ? left : right);
}
