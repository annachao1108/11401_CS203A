# Hash Table(co-authorized with gpt)

## Definition
A hash table is a data structure that maps keys to values using a
hash function to compute an index.

## Explanation from Cplusplus.com
Default hash function object class
Unary function object class that defines the default hash function used by the standard library.
The functional call returns a hash value of its argument: A hash value is a value that depends solely on its argument, returning always the same value for the same argument (for a given execution of a program).
The value returned shall have a small likelihood of being the same as the one returned for a different argument (with chances of collision approaching 1/numeric_limits<size_t>::max).
Other function object types can be used as Hash for unordered containers provided they behave as defined above and they are at least copy-constructible, destructible function objects.

## Collision Resolution
- Separate Chaining
- Open Addressing
  - Linear Probing
  - Quadratic Probing
  - Double Hashing

## Common Operations
- Insert
- Delete
- Search

## Time Complexity
| Operation | Average | Worst |
|---------|---------|-------|
| Search  | O(1)    | O(n)  |
| Insert  | O(1)    | O(n)  |
| Delete  | O(1)    | O(n)  |

## Space Complexity
- O(n)

## When to Use
- Fast lookup required
- Dictionary / symbol table

## Common Mistakes
- Poor hash function
- Ignoring load factor
- Infinite probing loop

## Exam Focus
- Collision handling
- Load factor analysis

## Implementation
-Leetcode1.cpp
