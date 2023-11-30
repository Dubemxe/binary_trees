#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a tree with atleast 1 child.
 * @tree: The tree to check for nodes and count.
 *
 * Return: The number of nodes found, or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += (tree->left || tree->left) ? 1 : 0;
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
	}
	return (count);
}
