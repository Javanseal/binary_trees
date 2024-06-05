#include "binary_trees.h"
/**
 * binary_tree_preorder -this script prints elements of tree using pre-order traversal
 * @tree: the tree to go through
 * @func: the function to use
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
