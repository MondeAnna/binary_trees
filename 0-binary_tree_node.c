#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node; NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(*parent));

	if (!node)
		return (node);

	node->parent = parent;
	node->n = value;

	node->left = NULL;
	node->right = NULL;

	if (!parent)
		parent = node;

	return (node);
}
