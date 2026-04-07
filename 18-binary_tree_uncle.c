#include"binary_trees.h"
#include<stdio.h>

/**
* binary_tree_uncle - Finds the uncle of a node
* @node: A pointer to the node to find the uncle
*
* Return: A pointer to the uncle node,
* NULL if node is NULL, has no parent or no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
/*trouve le frère d'un nœud*/
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);

	/* Si mon parent est l'enfant de GAUCHE du grand-parent */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right); /* L'oncle est à droite */

	/* Sinon (mon parent est à droite), l'oncle est à gauche */
		return (node->parent->parent->left);
	}
