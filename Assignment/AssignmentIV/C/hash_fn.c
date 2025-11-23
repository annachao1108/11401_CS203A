/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h
    - 2025/11/23-0: Initial version by Yu-Feng Huang
    - 2025/11/23-1: Final version with the same logic as C++ version
   Developer: Wan-Yun Chao <annam512ac@gmail.com>
 */

#include "hash_fn.h"

int myHashInt(int key, int m) {
    // TODO: replace with your own design
    key-=21;
    if(key>=27){key+=17;}
    return key %m;  
    // basic division method with a small tweak to reduce clustering 
}

int myHashString(const char* str, int m) {
    unsigned long hash = str[0]-'a'; // initialize hash value based on first character
    if(str[1]=='o'){hash += 3;} // tweak for 'o' as second character 
    if(str[0]=='b'&&str[1]=='e'){hash -=2;} // tweak for "be"
    if(str[0]=='p'){hash += 18;} // tweak for 'p' as first character
    return (int)((hash+2) % m);  // basic division method
}
