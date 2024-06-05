#include "binary_trees.h"
/**
 * file- binary_tree_delete - to free an entire tree using recursion to  free the node
 * and when the node left and right are NULL
 * @tree: the  tree to free
 * Return: do return Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
