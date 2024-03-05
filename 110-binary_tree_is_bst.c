#include "binary_trees.h"
#include <limits.h>

int max(binary_tree_t *tree);
int min(binary_tree_t *tree);

/**
 * binary_tree_is_bst - a function that checks if the binary tree is bst.
 * @tree: the root of the tree.
 *
 * Return: 1 if it is bst, 0 otherwise.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && max(tree->left) >= tree->n)
		return (0);
	if (tree->right && min(tree->right) <= tree->n)
		return (0);
	if (!binary_tree_is_bst(tree->left) || !binary_tree_is_bst(tree->right))
		return (0);
	return (1);
}

/**
 * min - a function that returns the minimum value from the given tree.
 * @tree: the root of the tree.
 * 
 * Return: the min value
*/
int min(binary_tree_t *tree)
{
	int val, left, right;

	if (!tree)
		return (1000000000);
	val = tree->n;
	left = min(tree->left);
	right = min(tree->right);
	
	if (left < val)
		val = left;
	if (right < val)
		val = right;
	return (val);
}

/**
 * max - a function that computes the maximum of value of the given tree
 * @tree: the root of the tree
 * 
 * Retrun: the max value
*/

int max(binary_tree_t *tree)
{
	int val, left, right;
	if (!tree)
		return (0);

	left = max(tree->left);
	right = max(tree->right);

	if (left > right)
		val = left;
	else
		val = right;
	if (tree->n > val)
		val = tree->n;
	return (val);
}