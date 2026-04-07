#include"binary_trees.h"
#include<stdio.h>

/**
 * tree_height - Measures the height of a binary tree for balance factor
 * @tree: A pointer to the root node of the tree to measure
 *
 * Return: The height of the tree, 0 if tree is NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	size_t left = tree_height(tree->left);
	size_t right = tree_height(tree->right);

	if (left > right)
		return (1 + left);
	else
		return (1 + right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

return ((int)tree_height(tree->left) - (int)tree_height(tree->right));
}

