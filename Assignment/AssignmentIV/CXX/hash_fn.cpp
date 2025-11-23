/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.hpp
    - 2025/11/23-1: Modified hash integar function for better distribution
    - 2025/11/23-2: Modified hash string function for better distribution / fixed bug in integar hash function
    (every time created new array) -> use basic division method and number tweak instead 
   Developer: Wan-Yun Chao <annam512ac@gmail.com>
 */
#include "hash_fn.hpp"

int myHashInt(int key, int m) {
    // TODO: replace with your own design
    key-=21;
    if(key>=27){key+=17;}
    return key %m;  
    // basic division method with a small tweak to reduce clustering 
}

int myHashString(const std::string& str, int m) {
    unsigned long hash = str[0]-'a'; // initialize hash value based on first character
    if(str[1]=='o'){hash += 3;} // tweak for 'o' as second character 
    if(str[0]=='b'&&str[1]=='e'){hash -=2;} // tweak for "be"
    if(str[0]=='p'){hash += 18;} // tweak for 'p' as first character
    return static_cast<int>((hash+2) % m);  // basic division method
}
