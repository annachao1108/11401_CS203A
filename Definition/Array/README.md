# Array (co-authorized with gpt)

## Definition
An array is a linear data structure that stores elements of the same
data type in contiguous memory locations. Each element can be accessed
directly using its index.

## Explanation from Cplusplus.com
Array class
Arrays are fixed-size sequence containers: they hold a specific number of elements ordered in a strict linear sequence.

Internally, an array does not keep any data other than the elements it contains (not even its size, which is a template parameter, fixed on compile time). 
It is as efficient in terms of storage size as an ordinary array declared with the language's bracket syntax ([]). 
This class merely adds a layer of member and global functions to it, so that arrays can be used as standard containers.
Unlike the other standard containers, arrays have a fixed size and do not manage the allocation of its elements through an allocator: they are an aggregate type encapsulating a fixed-size array of elements. 
Therefore, they cannot be expanded or contracted dynamically (see vector for a similar container that can be expanded).
Zero-sized arrays are valid, but they should not be dereferenced (members front, back, and data).
Unlike with the other containers in the Standard Library, swapping two array containers is a linear operation that involves swapping all the elements in the ranges individually, which generally is a considerably less efficient operation. 
On the other side, this allows the iterators to elements in both containers to keep their original container association.
Another unique feature of array containers is that they can be treated as tuple objects: The <array> header overloads the get function to access the elements of the array as if it was a tuple, as well as specialized tuple_size and tuple_element types.

## Characteristics
- Fixed size (static array)
- Contiguous memory allocation
- Random access supported
- Sequence

## Common Operations
- Access
- Update
- Traversal
- Insertion
- Deletion
- Searching

## Time Complexity
| Operation | Time |
|---------|------|
| Access  | O(1) |
| Update  | O(1) |
| Search  | O(n) |
| Insert  | O(n) |
| Delete  | O(n) |

## Space Complexity
- O(n)

## When to Use
- When fast random access is required
- When data size is known in advance
- When memory layout needs to be simple

## When NOT to Use
- Frequent insertions or deletions
- Dynamic data size without resizing strategy

## Common Mistakes
- Index out of bounds
- Forgetting array size limits
- Confusing array index with element value

## Implementations
atcoder319A.cpp
cses1069.cpp
uva00272.cpp
uva00490.cpp
uva10008.cpp
zerojudge_a005.cpp
zerojudge_a009.cpp
zerojudge_a013.cpp
zerojudge_a015.cpp
