#include "binary_trees.h"

/*
 * binary_tree_insert_right - Inserts a node as a right-child of another node.
 * parent: A pointer to the node to insert the right-child in.
 * value: The value to be stored in the new node.
 *
 * Return: A pointer to the created node or NULL is fails.. or if parent = NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return NULL;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}
