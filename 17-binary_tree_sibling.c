#include"binary_trees.h"
#include<stdio.h>

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node,
 * NULL if node is NULL, the parent is NULL, or no sibling exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((node == NULL) || (node->parent == NULL))
		return (NULL);

	/* Si je suis l'enfant de gauche de mon parent */
	if (node->parent->left == node)
		return (node->parent->right);
	/* Sinon (si je suis l'enfant de droite) */
	return (node->parent->left);
}
