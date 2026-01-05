# Linked List(co-authorized with gpt)

## Definition
A linked list is a linear data structure where elements (nodes) are
stored non-contiguously. Each node contains data and a pointer to the
next node.

## Types
- Singly Linked List
- Doubly Linked List
- Circular Linked List

## Common Operations
- Insertion
- Deletion
- Traversal
- Search

## Time Complexity
| Operation | Time |
|---------|------|
| Access  | O(n) |
| Search  | O(n) |
| Insert  | O(1)* |
| Delete  | O(1)* |

\* Given pointer to the node

## Space Complexity
- O(n)

## When to Use
- Dynamic memory allocation
- Frequent insertions/deletions
- Unknown data size

## When NOT to Use
- Fast random access required
- Memory overhead is critical

## Common Mistakes
- Losing head pointer
- Incorrect pointer updates
- Memory leaks

## Implementations

- HW: Linked list insertion/deletion
- Exam: Pointer tracing

## links from website
[https://www.geeksforgeeks.org/cpp/cpp-linked-list/] struct跟pointer去實作
