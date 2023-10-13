
# Personal DSA Repository - C++ Algorithms

This repository contains a collection of Data Structures and Algorithms (DSA) problems that I have solved using C++ language and Visual Studio Code (VS Code) as the development environment. The primary purpose of this repository is to showcase my problem-solving skills and understanding of fundamental algorithms.

## Prerequisites

- Install Visual Studio Code on your system.
- Ensure you have C++ compiler installed.







## Language Used : 

![Logo](https://seeklogo.com/images/C/c-logo-43CE78FF9C-seeklogo.com.png)


## Roadmap

- Arrays & Hashing
    * Basic Key Concepts

- Two Pointers
    * After Arrays & Hashing

- Stack
    * After Arrays & Hashing

- Binary Search
    * After Two Pointers

- Sliding Window
    * After Two Pointers

- Linked List
    * After Two Pointers




## LeetCode Problems I've Solved

| NAME                                              | LEVEL  | CATEGORY       | NOTES                                                                                                                                 |
|---------------------------------------------------|--------|----------------|---------------------------------------------------------------------------------------------------------------------------------------|
| 238. Product of Array Except Self                 | MEDIUM | Arrays         | create two vec first for prefix mul. and second for suffix + ans, return the second vec                                               |
| 36. Valid Sudoku                                  | MEDIUM | Arrays         | create 3 matrix for row, col & grid and check wheather all 3 are invalid for an element, return true after whole traversal            |
| 128. Longest Consecutive Sequence                 | MEDIUM | Arrays         | create a set then look for predecessor and discard, else(start of seq.) use freq. and keep incrementing                               |
| 125. Valid Palindrome                             | EASY   | Two Pointers   | create 2 ptrs, from '0' and 'len-1' index, discard every element except alphanum, compare islower of both pointer                     |
| 167. Two Sum II - Input Array Is Sorted           | MEDIUM | Two Pointers   | SAA, if sum is greater decrement right ptr and if sum is smaller inc. left ptr, while loop till both ptr intersect                    |
| 15. 3Sum                                          | MEDIUM | Two Pointers   | create two loop outer one for ptr1 traversal and inner one to implement 2 ptr technique                                               |
| 11. Container With Most Water                     | MEDIUM | Two Pointers   | create 2 ptrs from opp. Ends, calc area based on min element and traverse the array                                                   |
| 42. Trapping Rain Water                           | HARD   | Two Pointers   | intitalise 2 ptrs from opp. Ends, take 2 var. for max of both ends, calc. height by subtracting max end from ptr index & add to ans.  |
| 20. Valid Parentheses                             | EASY   | Stack          | implemented using basic stack operations                                                                                              |
| 155. Min Stack                                    | MEDIUM | Stack          | create another stack for minimum value till now                                                                                       |
| 150. Evaluate Reverse Polish Notation             | MEDIUM | Stack          | create a stack, 4 cases will be of operations and an else case to append operand in stack                                             |
| 22. Generate Parentheses                          | MEDIUM | Recursion      | create count for opening and closing, create recur. func. for 2 cases, when open < n & when closing< open                             |
| 739. Daily Temperatures                           | MEDIUM | Stack          | created a stack to store index then comp. index at stack top to that of element, loop is reversed. **                                 |
| 853. Car Fleet                                    | MEDIUM | Pair           | create a pair of pos. & ((target-pos.)/speed) then sort and reverse traverse, if .second is greater then curr. then inc. count        |
| 84. Largest Rectangle in Histogram                | HARD   | Stack          | implement stack, push index til the next element is smaller. Else calc area with top & comp. it with max, do this again to empty stk  |
| 704. Binary Search                                | EASY   | Binary Search  | basic implementation of binary search via left, right and mid ptrs                                                                    |
| 74. Search a 2D Matrix                            | MEDIUM | Binary Search  | implement binary search in 2D matrix                                                                                                  |
| 875. Koko Eating Bananas                          | MEDIUM | Binary Search  | implement binary search between 0 to max element in array then calc. total hours by ceiling(typecasting) return low of BS             |
| 153. Find Minimum in Rotated Sorted Array         | MEDIUM | Binary Search  | check for sorted array implement binary search to find min.                                                                           |
| 31. Next Permutation                              | MEDIUM | Two Pointers   | create 2 ptrs from right then decrease till nums[ptr1]>=nums[ptr2] and swap                                                           |
| 33. Search in Rotated Sorted Array                | MEDIUM | Binary Search  | apply binary search and check for 3 cond. To move left or right                                                                       |
| 981. Time Based Key-Value Store                   | MEDIUM | Binary Search  | "set" is just init. Values, for "get" ret. " " if value isn't present or no smaller element is present then apply binary search       |
| 121. Best Time to Buy and Sell Stock              | EASY   | Sliding Window | Take 2 ptrs, calculate diff. then take max in case of profit and set both ptrs. To same value in case of loss                         |
| 3. Longest Substring Without Repeating Characters | MEDIUM | Siding Window  | implement 2 ptrs,if duplicate found inc. start ptr. Then insert and calculate maximum                                                 |
| 424. Longest Repeating Character Replacement      | MEDIUM | Sliding Window | create an unordered map for 26 letters and implement sliding window                                                                   |
| 567. Permutation in String                        | MEDIUM | Sliding Window | create a map of int 128 and implement sliding window                                                                                  |
| 76. Minimum Window Substring                      | HARD   | Sliding Window | create 2 hashmaps and min. the window when hashmaps contain valid value, return answer through "substr"                               |
| 239. Sliding Window Maximum                       | HARD   | Sliding Window | use deque to store the max. value in a given window                                                                                   |
| 206. Reverse Linked List                          | EASY   | Linked List    | take 3 ptrs(prev,curr&next), update next then take next of curr as prev. take prev=curr and curr=next                                 |
| 21. Merge Two Sorted Lists                        | EASY   | Linked List    | take list L1 create a dummy node fill the min value and make it next of L1 return head of L1                                          |
| 143. Reorder List                                 | MEDIUM | Linked List    | check for default condition, find mid split it reverse the mid LL then merge both LL's                                                |
| 19. Remove Nth Node From End of List              | MEDIUM | Linked List    | take 2 ptrs approach, fast=fast.next till n, now while fast!=null, inc. fast and slow, now remove the slow node from LL               |
| 138. Copy List with Random Pointer                | MEDIUM | Linked List    | Take an ump, apply two passes one to store val of next in nhead and one to create the copy using ump                                  |

# Author

- [@Prashant Singh](https://www.github.com/prashantsinghraghuvanshi)


## Feedback

If you have any feedback, do reach out to me at singhprashant0314@gmail.com

