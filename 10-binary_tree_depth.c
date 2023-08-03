#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of node in binary tree
 * @tree: node to measure the depth
 * Return: depth of node, or 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t depth = 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
