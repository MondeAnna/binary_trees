#include "binary_trees.h"

/**
 * max - bigger of two operands
 * @left: left operand
 * @right: right operand
 * Return: bigger of two operands
 */
size_t max(size_t left, size_t right)
{
	return (left >= right ? left : right);
}

/**
 * _height - most path edges
 * @tree: pointer to tree's root being measured
 * Return: height
 */
size_t _height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	left = _height(tree->left);
	right = _height(tree->right);

	return (1 + max(left, right));
}

/**
 * binary_tree_is_perfect - test if tree is perfect
 * @tree: pointer to tree's root being measured
 * Return: 1 if perfect else 0
 */
size_t binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);

	left = _height(tree->left);
	right = _height(tree->right);

	return (left == right);
}
