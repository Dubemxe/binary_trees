#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of another node.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to be stored in the new node.
 *
 * Return: A pointer to the created node or NULL is fails..
 * or if parent = NULL.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;

	return (newNode);
}
