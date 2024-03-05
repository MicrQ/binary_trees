#include "binary_trees.h"

/**
 * bst_insert - a function that inserts new node in a bst.
 * @tree: double pointer to a root of the tree.
 * @value: the data of the new node.
 *
 * Return: the new nodes address or NULL.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node = binary_tree_node(*tree, value);

	if (!node)
		return (NULL);
	if (!*tree)
	{
		*tree = node;
		return (node);
	}
	while (1)
	{
		if (node->n == (*tree)->n)
		{
			free(node);
			return (*tree);
		}
		else if (node->n < (*tree)->n)
		{
			if ((*tree)->left)
				*tree = (*tree)->left;
			else
			{
				(*tree)->left = node;
				break;
			}
		}
		else
		{
			if ((*tree)->right)
				*tree = (*tree)->right;
			else
			{
				(*tree)->right = node;
				break;
			}
		}
	}
	return (node);
}
