#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: root node of the tree to count the nodes
 * Return: # of nodes with at least 1 child, 0 if null
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, total;

	if (tree == NULL)
	{
		return (0);
	}

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	total = left_nodes + right_nodes;

	if (tree->left != NULL || tree->right != NULL)
	{
		total++;
	}

	return (total);
}
