#include"binary_trees.h"
#include<stdio.h>

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 if not full or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*C'est une feuille (0 enfant)*/
	if ((tree->right == NULL) && (tree->left == NULL))
		return (1);

	/*Si les deux enfants existent*/
	if (tree->left && tree->right)
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/*Pas full*/
	return (0);
}
