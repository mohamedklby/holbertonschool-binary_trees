#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 *
 * Description: This function traverses the binary tree in a post-order fashion
 *              first deleting both the left and right subtrees before
 *				deleting the root node.
 *              This ensures that all child nodes are properly removed before
 *				freeing the parent,
 *              preventing any memory leaks. The function does nothing if
 *				the tree pointer is NULL.
 *
 * Return: None (void function).
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/* delete right and left subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* free current node */
	free(tree);
}
