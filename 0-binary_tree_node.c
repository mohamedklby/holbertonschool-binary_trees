#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node, or NULL if it fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)  /* Check if memory allocation fails */
		return (NULL);

	new_node->n = value;        /* Set the value of the node */
	new_node->parent = parent;  /* Set the parent of the node */
	new_node->left = NULL;      /* Initially, no left child */
	new_node->right = NULL;     /* Initially, no right child */

	return (new_node);  /* Return the new node */
}

