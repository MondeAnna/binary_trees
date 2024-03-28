#include "binary_trees.h"

/**
 * sibling - get node's sibling
 * @node: pointer to the node under investigation
 * Return: pointer to node's sibling else null
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (node);

	parent = node->parent;

	if (!parent)
		return (parent);

	if (parent->left != node)
		return (parent->left);

	return (parent->right);
}

/**
 * binary_tree_uncle - get node's uncle
 * @node: pointer to the node under investigation
 * Return: pointer to node's uncle else null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (node);

	parent = node->parent;

	return (sibling(parent));
}
