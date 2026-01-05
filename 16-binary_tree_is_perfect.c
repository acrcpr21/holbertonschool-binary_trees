#include "binary_trees.h"

/**
 * binary_tree_is_perfect_h - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_is_perfect_h(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree->left ? 1 + binary_tree_is_perfect_h(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_is_perfect_h(tree->right) : 0;

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_is_perfect_s - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree. If tree is NULL, return 0
 */
size_t binary_tree_is_perfect_s(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_is_perfect_s(tree->left) +
			binary_tree_is_perfect_s(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t expected_nodes = 1;
	size_t i;

	if (tree == NULL)
		return (0);

	height = binary_tree_is_perfect_h(tree);
	nodes = binary_tree_is_perfect_s(tree);

	for (i = 0; i <= height; i++)
		expected_nodes *= 2;

	return (expected_nodes - 1 == nodes);
}
