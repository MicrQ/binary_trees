#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree.
 * 
 * @parent: the parent of the newly created node.
 * @value: the data for the newly created node.
 * 
 * Return: the newly created nodes address or NULL on failure.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

if (!node)
    return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	return (node);
}
