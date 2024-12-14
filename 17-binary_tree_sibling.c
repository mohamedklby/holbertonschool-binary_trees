#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if the node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	/* If node or its parent is NULL, return NULL */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

	/* If node is the left child, sibling is the right child */
	if (node == parent->left)
	{
		return (parent->right);
	}
	/* If node is the right child, sibling is the left child */
	else if (node == parent->right)
	{
		return (parent->left);
	}

	return (NULL); /* Node has no sibling */
}

