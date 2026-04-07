#include"binary_trees.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 *
 * * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t temp_left;
	size_t temp_right;

	if (tree == NULL)
	return (0);

	/*Mesure longueur coté Gauche*/
	if (tree->left)
		temp_left = 1 + binary_tree_height(tree->left);
	else
		temp_left = 0;

	/*Mesure longueur coté Droit*/
	if (tree->right)
		temp_right = 1 + binary_tree_height(tree->right);
	else
		temp_right = 0;

	/*Comparaison des longeurs (gauche/droit)*/
	if (temp_left > temp_right)
		return (temp_left);
	else
		return (temp_right);
}
