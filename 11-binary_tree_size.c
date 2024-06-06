#include "binary_trees.h"

/*
 * binary_tree_size - Function that returns the size of a tree
 * @tree: Pointer to the root node of the tree to measure the size
 * 
 * Description:
 * This function calculates the size of a binary tree. The size is defined as
 * the total number of nodes in the tree. The function performs a recursive
 * traversal of the tree, summing the sizes of the left and right subtrees
 * and adding one for the current node.
 * 
 * Return: Size of the tree. If the tree is NULL, the function returns 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0; /* Variable to hold the total size of the tree */
	size_t r = 0;    /* Variable to hold the size of the right subtree */
	size_t l = 0;    /* Variable to hold the size of the left subtree */

	if (tree == NULL)
	{
		/* If the tree is NULL, there are no nodes, so the size is 0 */
		return (0);
	}
	else
	{
		/* Recursively calculate the size of the left subtree */
		l = binary_tree_size(tree->left);
		
		/* Recursively calculate the size of the right subtree */
		r = binary_tree_size(tree->right);
		
		/* Total size is the sum of left and right subtree sizes plus one for the current node */
		size = r + l + 1;
	}
	return (size);
}
