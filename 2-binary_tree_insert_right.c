#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Description: Inserts a new node as the right child of a parent node.
 *              It replaces an existing right child if any, ensuring the
 *              old right child becomes the right child of the new node.
 *              Handles memory allocation and tree structure maintenance.
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if parent is NULL */
	if (!parent)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	/* Initialize the new node */
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	/* Adjust pointers if parent already has a right child */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Set the new node as the right child of the parent */
	parent->right = new_node;

	return (new_node);
}
