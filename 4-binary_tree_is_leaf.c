#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a  node is a leaf.
 * @node: Node to check.
 *
 * Return: 1 if node is a tree or 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
