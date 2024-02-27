#include "binary_trees.h"

/**
 * binary_tree_preorder - a function to traverse tree using preorder.
 * @tree: the root of the tree.
 * @func: a function that performs a specific task after the data of node
 *		given as argument.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
