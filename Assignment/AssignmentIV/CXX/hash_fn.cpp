/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.hpp

   Developer: Wan-Yun Chao <annam512ac@gmail.com>
 */
#include "hash_fn.hpp"

int myHashInt(int key, int m) {
    // TODO: replace with your own design
    int *array;
    array = new int[m+1];
    if(array[key % m] != 1){
        array[key % m] = 1;
        return key % m;
    }
    if(array[key % m] == 1){
        for(int i = key % m + 1; i < m; i++){
            if(array[i] != 1){
                array[i] = 1;
                return i;//linear probing
            }
        }
        for(int i = key % m - 1; i >= 0; i--){
            if(array[i] != 1){
                array[i] = 1;
                return i;//linear probing
            }
        }
        return key % m;//if the table is full, return the original hash value
    }
    // basic division method with linear probing
}

int myHashString(const std::string& str, int m) {
    unsigned long hash = 0;
    // TODO: replace with your own design
    return static_cast<int>(hash % m);  // basic division method
}
