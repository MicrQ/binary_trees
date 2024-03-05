#include "binary_trees.h"

/**
 * bst_search - a function that searches for a value in a BST.
 * @tree: the root of the tree.
 * @value: the value to be searched in a node.
 *
 * Return: a pointer to the found node or NULL if not found.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree)
	{
		if (tree->n == value)
			return (tree);
		if (value < tree->n)
			bst_search(tree->left, value);
		if (value > tree->n)
			bst_search(tree->right, value);
	}
	return (NULL);
}
