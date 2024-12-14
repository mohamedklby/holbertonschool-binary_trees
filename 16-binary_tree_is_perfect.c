#include "binary_trees.h"

/**
 * tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description: Computes the height by recursively finding the greater height
 *              of the left and right subtrees and adding one to it.
 *
 * Return: Height of the tree as a size_t value. Returns 0 if tree is NULL.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively calculate height of left and right subtrees */
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	/* Return the greater of the two heights plus one */
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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description: Determines if a binary tree is perfect by calculating the depth
 *              using tree_height and then using is_perfect_rec to check if
 *              all levels are filled and all leaves are at the same depth.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. Returns 0 for NULL tree.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect;

	perfect = binary_tree_balance(tree);
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL &&
			perfect == 0)
	{
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
