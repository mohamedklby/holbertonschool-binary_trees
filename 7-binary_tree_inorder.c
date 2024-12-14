#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs an in-order traversal on a binary tree.
 * @tree: Pointer to the root of the binary tree to traverse.
 * @func: Pointer to a function to call for each node's value.
 *
 * Description: This function traverses the binary tree in an in-order manner,
 *			meaning it visits the left subtree, the root, and then the right subtree
 *			recursively. For each node visited, it calls the given function passing
 *			the node's value. The traversal only occurs if both the tree and function
 *			pointers are non-null.
 *
 * Return: None (void function).
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* Recursively visit left subtree */
	binary_tree_inorder(tree->left, func);

	/* Call the passed function on the current node's value */
	func(tree->n);

	/* Recursively visit right subtree */
	binary_tree_inorder(tree->right, func);
}
