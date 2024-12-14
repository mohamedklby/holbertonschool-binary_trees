#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs post-order traversal on a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Function to apply to each node's value.
 *
 * Description: Traverses a binary tree in post-order (left, right, root),
 *              executing func on each node's value. If either tree or func
 *              is NULL, the function exits without performing any actions,
 *              providing a safeguard against null pointer dereferencing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Exit if either tree or func is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* Recursively traverse left subtree */
	binary_tree_postorder(tree->left, func);

	/* Recursively traverse right subtree */
	binary_tree_postorder(tree->right, func);

	/* Execute func on the current node's value */
	func(tree->n);
}
