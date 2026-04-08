#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node
 *
 * Return: The height of the tree (counting nodes)
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left > right)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node
 *
 * Return: The balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	/* On récupère les hauteurs en les castant en int pour le calcul */
	left_h = (int)tree_height(tree->left);
	right_h = (int)tree_height(tree->right);

	return (left_h - right_h);
}

