#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree->left ? 1 + binary_tree_height_b(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_height_b(tree->right) : 0;

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor. If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = tree->left ? (int)binary_tree_height_b(tree->left) + 1 : 0;
	right_h = tree->right ? (int)binary_tree_height_b(tree->right) + 1 : 0;

	return (left_h - right_h);
}
