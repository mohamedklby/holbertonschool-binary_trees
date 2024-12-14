#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is the root of a binary tree.
 * @node: Pointer to the node to check.
 *
 * Description: This function evaluates whether a specified
 *			node is the root node
 *			of a binary tree. A node is considered the root if it exists
 *			and its parent pointer is NULL.
 *			The function returns 0 if the node is NULL or not the root.
 *
 * Return: 1 if the node is the root, 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return (node->parent == NULL);
}
