#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0, 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (left == right)
	{
		return (1);
	}
	return (0);
}
