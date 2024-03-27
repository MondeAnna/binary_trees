#include "binary_trees.h"

/**
 * binary_tree_nodes - number of non-leaves
 * @tree: pointer to tree's root being measured
 * Return: number of non-leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total = 0;
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	total += left + right;

	if (tree->left || tree->right)
		total++;

	return (total);
}
