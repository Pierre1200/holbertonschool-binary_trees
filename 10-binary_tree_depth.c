#include"binary_trees.h"
#include<stdio.h>
#include<stdlib.h>

/**
* binary_tree_depth - Measures the depth of a node in a binary tree
* @tree: A pointer to the node to measure the depth
*
* Return: The depth of the node, or 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	/*Vérif noeud existe ?*/
	if (tree == NULL)
		return (0);

	/*Vérif si parent vide ?*/
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	else
		depth = 0;

	return (depth);
}
