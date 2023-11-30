#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse through a tree using post-order traversal.
 * @tree: The tree to traverse through.
 * @func: The function to call for each node
 *
 * Return: Nothing!
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		binary_tree_inorder(tree->right, func);
		func(tree->n);
	}
}
