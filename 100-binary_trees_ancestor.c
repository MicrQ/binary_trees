#include "binary_trees.h"

size_t depth(const binary_tree_t *tree);
binary_tree_t *find_LCA(const binary_tree_t *f,
const binary_tree_t *s, size_t df, size_t ds);

/**
 * binary_trees_ancestor - a function that finds the lowest common ancestor of
 *				to given tree nodes.
 * @first: the first node.
 * @second: the second node.
 * Return: the address of the ancestor or NULL if not found.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	size_t fd = depth(first), sd = depth(second);

	return (find_LCA(first, second, fd, sd));
}

/**
 * find_LCA - a function that finds the LCA.
 * @f: first node.
 * @s: second node.
 * @df: depth of first node(f).
 * @ds: depth of second node(s).
 *
 * Return: the LCA or NULL.
 */

binary_tree_t *find_LCA(const binary_tree_t *f, const binary_tree_t *s,
size_t df, size_t ds)
{
	if (!f || !s)
		return (NULL);
	if (df > ds)
		return (find_LCA(f->parent, s, df - 1, ds));
	if (ds > df)
		return (find_LCA(f, s->parent, df, ds - 1));

	return ((f == s)
			? (binary_tree_t *)f : find_LCA(f->parent, s->parent, df - 1, ds - 1));
}


/**
 * depth - a function that measures the depth of a tree.
 * @tree: a pointer to a tree node to measure the depth.
 * Return: the depth.
 */

size_t depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (depth(tree->parent) + 1);
}
