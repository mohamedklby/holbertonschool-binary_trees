#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a value as the left child of a given node.
 * @parent: Pointer to the node to insert the left child into.
 * @value: The value to insert into the tree.
 *
 * Description: This function creates a new node with the
 *				specified value
 *              and inserts it as the left child of the provided
 *				parent node. If the parent
 *              already has a left child, the new node takes its
 *				place and the old left child
 *              becomes the left child of the new node.
 *				The function handles memory allocation
 *              and updates parent-child relationships accordingly.
 *
 * Return: A pointer to the new node, or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_l;

	if (!parent)
	{
		return (NULL);
	}

	new_node_l = malloc(sizeof(binary_tree_t));
	if (!new_node_l)
	{
		return (NULL);
	}

	new_node_l->n = value;
	new_node_l->parent = parent;
	new_node_l->left = parent->left;
	new_node_l->right = NULL;

	if (new_node_l->left)
	{
		new_node_l->left->parent = new_node_l;
	}

	parent->left = new_node_l;

	return (new_node_l);
}
