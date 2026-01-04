# Binary Trees

This project covers the implementation and manipulation of binary trees in C.

## Learning Objectives
- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Data Structures
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

## Tasks
0. **New node**: Function that creates a binary tree node.
1. **Insert left**: Function that inserts a node as the left-child of another node.
2. **Insert right**: Function that inserts a node as the right-child of another node.
3. **Delete**: Function that deletes an entire binary tree.
4. **Is leaf**: Function that checks if a node is a leaf.
5. **Is root**: Function that checks if a given node is a root.
6. **Pre-order traversal**: Function that goes through a binary tree using pre-order traversal.
7. **In-order traversal**: Function that goes through a binary tree using in-order traversal.
8. **Post-order traversal**: Function that goes through a binary tree using post-order traversal.
9. **Height**: Function that measures the height of a binary tree.
10. **Depth**: Function that measures the depth of a node in a binary tree.
11. **Size**: Function that measures the size of a binary tree.
12. **Leaves**: Function that counts the leaves in a binary tree.
13. **Nodes**: Function that counts the nodes with at least 1 child in a binary tree.
14. **Balance factor**: Function that measures the balance factor of a binary tree.
15. **Is full**: Function that checks if a binary tree is full.
16. **Is perfect**: Function that checks if a binary tree is perfect.
17. **Sibling**: Function that finds the sibling of a node.
18. **Uncle**: Function that finds the uncle of a node.