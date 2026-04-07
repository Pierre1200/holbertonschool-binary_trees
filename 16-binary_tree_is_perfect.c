#include"binary_trees.h"
#include<stdio.h>

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 if not perfect or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t h_l = 0, h_r = 0;

if (tree == NULL)
return (0);

/* 1. On calcule les hauteurs avec la helper */
h_l = tree_height(tree->left);
h_r = tree_height(tree->right);

	/* 2. On compare les hauteurs */
	if (h_l == h_r)
	{
		/* Si c'est une feuille, c'est parfait ! */
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		/* Sinon, on vérifie récursivement les deux enfants */
			return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	}

    /* 3. Si les hauteurs sont différentes, ce n'est pas parfait */
	return (0);
}
