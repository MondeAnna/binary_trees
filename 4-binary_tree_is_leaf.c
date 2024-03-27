#include "binary_trees.h"

/**
 * binary_tree_is_leaf - tests if node is leaf
 * @node: pointer to node to check
 * Return: 1 if node is a leaf, 0 if NULL or otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int TRUE = 1;
	int FALSE = 0;

	if (!node)
		return (FALSE);

	if (!node->left && !node->right)
		return (TRUE);

	return (FALSE);
}
