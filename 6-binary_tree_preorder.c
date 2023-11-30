#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses through a tree using pre-order traversal.
 * @tree: Tree to traverse through.
 * @func: The function to call for each node.
 *
 * Return: Nothing!
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	}
}
