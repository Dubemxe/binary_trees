#include "binary_trees.h"

/* binary_tree_node - Creates a new Binary tree with a new node.
 * parent: A pointer to the parent node of the binary tree.
 * value: The value to be added in the new node.
 *
 * Return: a pointer to the new Node or NULL if fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Node;

	new_Node = malloc(sizeof(binary_tree_t));
	if (new_Node == NULL)
		return (NULL);

	new_Node->parent = parent;
	new_Node->n = value;
	new_Node->left = NULL;
	new_Node->right = NULL;

	return (new_Node);
}
