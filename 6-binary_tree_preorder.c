#include "binary_trees.h"

/**
 * binary_tree_preorder - Pre-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node's value.
 *
 * Description: Traverses a binary tree in pre-order (root, left, right).
 *              Applies func to each node's value. If tree or func is NULL,
 *              the function does nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* If tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* Process the root node */
	func(tree->n);

	/* Traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
