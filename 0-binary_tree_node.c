#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 * 
 * Description: This function allocates memory for a new binary tree node,
 * assigns the value and parent pointer, and initializes the left and right
 * child pointers to NULL.
 *
 * Return: Pointer to the newly created node, or NULL if memory allocation fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        /* If memory allocation fails, return NULL */
        return (NULL);
    }

    /* Initialize the new node with the given value and parent */
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;  /* Set left child to NULL */
    new_node->right = NULL; /* Set right child to NULL */

    return (new_node); /* Return the pointer to the new node */
}
