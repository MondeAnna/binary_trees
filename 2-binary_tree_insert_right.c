#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right child
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node; NULL on failure or if NULL parent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(*parent));

	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;

	node->left = NULL;

	node->right = parent->right;
	parent->right = node;

	if (node->right)
		node->right->parent = node;

	return (node);
}
