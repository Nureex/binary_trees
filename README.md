# 0x1D C - Binary Trees :pencil2:

> C is a powerful general-purpose programming language. It can be used to develop software such as operating systems, databases, and compilers. This project covers the concepts of binary trees! This was a collaborative project with contributions from my peer in many other software engineering projects.

At the end of this project, we were able to understand these concepts:

* **What is a binary tree**: A data structure in which each node has at most two children, referred to as the left child and the right child.
* **Difference between a binary tree and a Binary Search Tree (BST)**: In a BST, the left subtree contains only nodes with values less than the parent node, and the right subtree only nodes with values greater than the parent node.
* **Possible gain in terms of time complexity compared to linked lists**: Binary trees can provide faster search, insert, and delete operations compared to linked lists, especially when balanced.
* **Depth, height, size of a binary tree**: 
  * Depth: The number of edges from the node to the tree's root node.
  * Height: The number of edges on the longest path from a node to a leaf.
  * Size: The total number of nodes in the tree.
* **Different traversal methods**: Methods to visit all the nodes in a binary tree, including pre-order, in-order, and post-order traversal.
* **Complete, full, perfect, balanced binary trees**:
  * Complete: All levels are fully filled except possibly the last level, which is filled from left to right.
  * Full: Every node other than the leaves has two children.
  * Perfect: All internal nodes have two children and all leaves are at the same level.
  * Balanced: The height of the left and right subtrees of any node differ by no more than one.

## Tasks :heavy_check_mark:

0. **Function that creates a binary tree node**: Initializes a new binary tree node with a given value and parent pointer.
1. **Function that inserts a node as the left-child of another node**: Adds a node as the left child of a specified parent node.
2. **Function that inserts a node as the right-child of another node**: Adds a node as the right child of a specified parent node.
3. **Function that deletes an entire binary tree**: Frees all the nodes in a binary tree.
4. **Function that checks if a node is a leaf**: Determines if a node has no children.
5. **Function that checks if a given node is a root**: Checks if a node is the root of the tree (i.e., has no parent).
6. **Function that goes through a binary tree using pre-order traversal**: Visits nodes in the order: root, left subtree, right subtree.
7. **Function that goes through a binary tree using in-order traversal**: Visits nodes in the order: left subtree, root, right subtree.
8. **Function that goes through a binary tree using post-order traversal**: Visits nodes in the order: left subtree, right subtree, root.
9. **Function that measures the height of a binary tree**: Calculates the height from the root to the deepest leaf.
10. **Function that measures the depth of a node in a binary tree**: Computes the distance from the node to the root.
11. **Function that measures the size of a binary tree**: Counts the total number of nodes in the tree.
12. **Function that counts the leaves in a binary tree**: Counts nodes with no children.
13. **Function that counts the nodes with at least 1 child in a binary tree**: Counts nodes that have at least one child.
14. **Function that measures the balance factor of a binary tree**: Determines the difference in height between the left and right subtrees.
15. **Function that checks if a binary tree is full**: Determines if every node has either zero or two children.
16. **Function that checks if a binary tree is perfect**: Checks if all internal nodes have two children and all leaves are at the same level.
17. **Function that finds the sibling of a node**: Identifies the node's sibling (the other child of its parent).
18. **Function that finds the uncle of a node**: Finds the sibling of the node's parent.
19. **Function that finds the lowest common ancestor of two nodes**: Identifies the deepest node that is an ancestor of both given nodes.
20. **Function that goes through a binary tree using level-order traversal**: Visits nodes level by level from the root downwards.
21. **Function that checks if a binary tree is complete**: Verifies if the tree is complete as defined earlier.
22. **Function that performs a left-rotation on a binary tree**: Rotates nodes to the left to maintain balance or other properties.
23. **Function that performs a right-rotation on a binary tree**: Rotates nodes to the right to maintain balance or other properties.
24. **Function that checks if a binary tree is a valid Binary Search Tree (BST)**: Ensures the tree follows the BST properties.
25. **Function that inserts a value in a Binary Search Tree**: Adds a value in the correct location to maintain BST properties.
26. **Function that builds a Binary Search Tree from an array**: Creates a BST using values from an array.
27. **Function that searches for a value in a Binary Search Tree**: Locates a value within a BST.
28. **Function that removes a node from a Binary Search Tree**: Deletes a node and restructures the BST to maintain properties.
29. **Average time complexities of operations on a Binary Search Tree**: 
    * Search: O(log n) on average, O(n) in the worst case.
    * Insertion: O(log n) on average, O(n) in the worst case.
    * Deletion: O(log n) on average, O(n) in the worst case.
30. **Function that checks if a binary tree is a valid AVL Tree**: Verifies if the tree is an AVL tree (a self-balancing BST).
31. **Function that inserts a value in an AVL Tree**: Adds a value and rebalances the tree if necessary to maintain AVL properties.
32. **Function that builds an AVL tree from an array**: Creates an AVL tree from an array of values.
33. **Function that removes a node from an AVL tree**: Deletes a node and rebalances the tree to maintain AVL properties.
34. **Function that builds an AVL tree from an array**: [Duplicate task; possibly meant to be another function or clarification needed].
35. **Average time complexities of operations on an AVL Tree**: 
    * Search: O(log n)
    * Insertion: O(log n)
    * Deletion: O(log n)
36. **Function that checks if a binary tree is a valid Max Binary Heap** (Task in progress): Validates Max Binary Heap properties.
37. **Function that inserts a value in Max Binary Heap** (Task in progress): Adds a value and maintains Max Heap properties.
38. **Function that builds a Max Binary Heap tree from an array** (Task in progress): Constructs a Max Heap from an array.
39. **Function that extracts the root node of a Max Binary Heap** (Task in progress): Removes the maximum value and restructures the heap.
40. **Function that converts a Binary Max Heap to a sorted array of integers** (Task in progress): Sorts the values in a Max Heap.
41. **Average time complexities of operations on a Binary Heap**: 
    * Insert: O(log n)
    * Extract-max: O(log n)
    * Build-heap: O(n)

