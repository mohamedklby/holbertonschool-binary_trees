#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Description: Calculates the height of a binary tree. The height is the
 *              number of edges on the longest downward path between the root
 *              and a leaf. The function uses recursion to find the height
 *              of both left and right subtrees and returns the greater of
 *              the two, plus one to account for the root node. If the tree
 *              pointer is NULL, it returns 0, indicating the tree is empty.
 *
 * Return: The height of the tree as a size_t. Returns 0 if the tree is NULL.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* Handle NULL tree case */
	if (tree == NULL)
		return (0);

	/* Calculate height of left and right subtrees */
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	/* Return the greater height plus one */
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Description: Calculates the balance factor of a binary tree, which is the
 *              difference in heights between the left and right subtrees.
 *              A balanced tree will have a factor close to 0. The function
 *              uses the binary_tree_height function to find the heights of
 *              the left and right subtrees and returns their difference. If
 *              the tree pointer is NULL, it returns 0, indicating the tree
 *              is either empty or does not exist.
 *
 * Return: The balance factor as an int. Returns 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* Calculate height of left and right subtrees */
	int left_height;
	int right_height;

	/* Handle NULL tree case */
	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	/* Return the difference in heights */
	return (left_height - right_height);
}
