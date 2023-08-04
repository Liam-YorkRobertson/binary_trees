#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in binary tree
 * @tree: root node of the tree to count the leaves
 * Return: number of leaves in tree, 0 if null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves, total;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	total = left_leaves + right_leaves;

	return (total);
}