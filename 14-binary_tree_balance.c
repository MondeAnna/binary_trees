#include "binary_trees.h"

/**
 * height - most path edges
 * @tree: pointer to tree's root being measured
 * Return: height
 */
size_t height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	left = height(tree->left) + 1;
	right = height(tree->right) + 1;

	return (left >= right ? left : right);
}

/**
 * binary_tree_balance - measure balance factor
 * @tree: pointer to tree's root being measured
 * Return: number of non-leaves
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (!left && tree->left)
		left++;

	if (!right && tree->right)
		right++;

	return (left - right);
}
