#include "binary_trees.h"

/**
 * check_is_full - Checks if a binary tree is full recursively.
 * @tree: A pointer to the tree to check.
 *
 * Return: 0 if tree is not full else return 1.
 */
int check_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    check_is_full(tree->left) == 0 ||
		    check_is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the tree to check.
 *
 * Return: 0 if tree is NULL or is not full else return 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_is_full(tree));
}
