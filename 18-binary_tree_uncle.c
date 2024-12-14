#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if the node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	/* Check if node or its parent is NULL */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;
	grandparent = parent->parent;

	/* If the parent has no grandparent (node is a root), return NULL */
	if (grandparent == NULL)
	{
		return (NULL);
	}

	/* Check if the parent is a left or right child of the grandparent */
	if (parent == grandparent->left)
	{
		return (grandparent->right); /* Uncle is the right child of grandparent */
	}
	else
	{
		return (grandparent->left); /* Uncle is the left child of grandparent */
	}
}

