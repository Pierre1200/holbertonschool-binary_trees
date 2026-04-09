#include "binary_trees.h"

/**
 * h_balance - Measures the height of a binary tree for balance factor
 * @tree: Pointer to the node to measure
 *
 * Return: Height of the tree, or 0 if NULL
 */
static size_t h_balance(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = h_balance(tree->left);
	right_h = h_balance(tree->right);

	return (1 + (left_h > right_h ? left_h : right_h));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	/* On calcule la hauteur du sous-arbre gauche et droit */
	left_h = (int)h_balance(tree->left);
	right_h = (int)h_balance(tree->right);

	return (left_h - right_h);
}


