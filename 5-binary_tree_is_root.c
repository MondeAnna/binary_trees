#include "binary_trees.h"

/**
 * binary_tree_is_root - test if node is root
 * @node: pointer to node to check
 * Return: 1 if node is a leaf, 0 if NULL or otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (node->parent == NULL);
}
