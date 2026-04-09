#include "binary_trees.h"

/**
 * tree_is_perfect - Checks if a binary tree is perfect using depth and level
 * @tree: Pointer to the root node
 * @d: Depth of the leftmost leaf
 * @level: Current level of the node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int tree_is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (tree_is_perfect(tree->left, d, level + 1) &&
		tree_is_perfect(tree->right, d, level + 1));
}

/**
 * tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node
 */
int tree_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 if not perfect or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = tree_depth(tree);

	return (tree_is_perfect(tree, d, 0));
}
