#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Description: This function determines the height of a binary tree,
 *			which is the distance from the root node to the furthest leaf node.
 *			The function considers the height of a leaf node (a node with no children)
 *			as 0. It returns 0 for NULL nodes as they do not contribute to the height.
 *
 * Return: The height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	/* Base case: If tree is NULL or it's a leaf, return 0 */
	if (!tree || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	/* Recursively get the height of the left subtree */
	height_left = binary_tree_height(tree->left);

	/* Recursively get the height of the right subtree */
	height_right = binary_tree_height(tree->right);

	/* The height of the current node is the max of the two heights plus 1 */
	if (height_left >= height_right)
	{
		return (height_left + 1);
	}
	else
	{
		return (height_right + 1);
	}
}
