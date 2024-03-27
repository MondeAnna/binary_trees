#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left child
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node; NULL on failure or if NULL parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(*parent));

	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;

	node->right = NULL;

	node->left = parent->left;
	parent->left = node;

	if (node->left)
		node->left->parent = node;

	return (node);
}
