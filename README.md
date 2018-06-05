# HackerRank - Forming a Magic Square

## Table of Contents
<!-- TOC -->

- [HackerRank - Forming a Magic Square](#hackerrank---forming-a-magic-square)
    - [Table of Contents](#table-of-contents)
    - [Description](#description)
    - [Example](#example)
    - [Input Format](#input-format)
    - [Constraints](#constraints)
    - [Output Format](#output-format)
    - [Samples](#samples)
        - [Sample Input 0](#sample-input-0)
        - [Sample Output 0](#sample-output-0)
        - [Explanation 0](#explanation-0)
        - [Sample Input 1](#sample-input-1)
        - [Sample Output 1](#sample-output-1)
        - [Explanation 1](#explanation-1)
    - [Solving](#solving)
        - [Algorithm](#algorithm)

<!-- /TOC -->

## Description
* Define a [magic square](https://en.wikipedia.org/wiki/Magic_square) to be an _n x n_ matrix of distinct positive integers from **1** to **n^2** where the sum of any row, column, or diagonal of length _n_ is always equal to the same number: the _magic constant_
* Given a **3** x **3** matrix _s_ of integers in the inclusive range **[1, 9]**
* Convert any digit **a** to any other digit **b** in the inclusive range **[1, 9]** at cost of **| a - b |**
* Given _s_, convert it into a magic square at _minimal_ cost
* Print cost on a new line
* **Note:** The resulting magic square must contain distinct integers in the inclusive range **[1, 9]**

## Example
* Start with the following matrix _s_:
```
5 3 4
1 5 8
6 4 2
```

* Convert it to the following magic square:
```
8 3 4
1 5 9
6 7 2
```

* This took three replacements at a cost of | 5 - 8 | + | 8 - 9 | + | 4 - 7 | = **7**

## Input Format
* Each of the lines contains three space-separated integers of row _s_[_i_]

## Constraints
* **_s_[_i_][_j_]** \in **[1, 9]**

## Output Format
* Print an integer denoting the minimum cost of turning matrix _s_ into a magic square

## Samples

### Sample Input 0
```
4 9 2
3 5 7
8 1 5
```

### Sample Output 0
```
1
```

### Explanation 0
* If we change the bottom right value, **_s_[2][2]**, from 5 to 6 at a cost of | 6 - 5 | = **1**, _s_ becomes a magic square at the minimum possible cost

### Sample Input 1
```
4 8 2
4 5 7
6 1 6
```

### Sample Output 1
```
4
```

### Explanation 1
Using 0-based indexing, if we make
* **_s_[0][1]** -> 9 at a cost of | 9 - 8 | = **1**
* **_s_[1][0]** -> 3 at a cost of | 3 - 4 | = **1**
* **_s_[2][0]** -> 8 at a cost of | 8 - 6 | = **2**

then the total cost will be 1 + 1 + 2 = **4**

## Solving


### Algorithm
