#include "binary_trees.h"

/**
 * binary_tree_is_full - Vérifie si un arbre binaire est complet.
 * @tree: Un pointeur vers le nœud racine de l'arbre.
 *
 * Return: 1 si l'arbre est complet,
 * sinon 0 si l'arbre est vide ou non complet.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Si l'arbre est vide, il n'est pas complet */
	if (tree == NULL)
		return (0);

	/* Si un nœud est une feuille (sans enfants), il est complet */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Si un nœud a à la fois un enfant gauche et un enfant droit,*/
	   /*on vérifie récursivement les sous-arbres gauche et droit */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* Si un nœud a un seul enfant, l'arbre n'est pas complet */
	return (0);
}

