#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node in a binary tree is a leaf.
 * @node: Pointer to the node to check.
 *
 * Description: A leaf node is a node that does not have any children.
 *              This function checks if the provided node is a leaf node.
 *              If the node is NULL, it's not considered a leaf.
 *
 * Return: 1 if the node is a leaf, 0 otherwise or if node is NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check if the node is NULL */
	if (node == NULL)
		return (0);

	/* A node is a leaf if it has no left and no right children */
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
