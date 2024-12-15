#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures the balance factor of a binary
 * tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0, the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left = 1 + binary_tree_balance(tree->left);
	}	
	if (tree->right != NULL)
	{
		right = 1 + binary_tree_balance(tree->right);
	}
		return (left - right);
}
