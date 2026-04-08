#include "binary_trees.h"

/**
 * h_balance - Mesure la hauteur pour le facteur de balance
 * @tree: Le nœud à mesurer
 * Return: La hauteur
 */
size_t h_balance(const binary_tree_t *tree)
{
    size_t left, right;

    if (tree == NULL)
        return (0);

    left = h_balance(tree->left);
    right = h_balance(tree->right);

    return (1 + (left > right ? left : right));
}

/**
 * binary_tree_balance - Measures the balance factor
 * @tree: A pointer to the root node
 * Return: Balance factor, or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_h, right_h;

    if (tree == NULL)
        return (0);

    /* On force le cast en int pour permettre les résultats négatifs */
    left_h = (int)h_balance(tree->left);
    right_h = (int)h_balance(tree->right);

    return (left_h - right_h);
}


