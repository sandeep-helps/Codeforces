# 🍉 Watermelon

## Problem Description

One hot summer day Pete and his friend Billy decided to buy a watermelon.
They chose the biggest and ripest one. After weighing it, the watermelon
weighed **w** kilos.

They want to divide the watermelon into two parts such that both parts have
a positive and even weight.

Your task is to determine whether it is possible to divide the watermelon
according to these conditions.

## Input

The input contains a single integer **w**, representing the weight of the
watermelon in kilograms.

**Constraints:** 1 ≤ w ≤ 100

## Output

Print **YES** if the watermelon can be divided into two positive even-weight
parts. Otherwise, print **NO**.

## Test Cases

### Example 1

**Input:** 8

**Output:** YES

**Explanation:**  
8 can be divided into 2 + 6. Both parts are positive and even.

---

### Example 2

**Input:** 5

**Output:** NO

**Explanation:**  
5 is an odd number, so it cannot be divided into two even parts.

---

### Example 3

**Input:** 2

**Output:** NO

**Explanation:**  
The only possible division is 1 + 1, but both parts are odd.

---

### Example 4

**Input:** 100

**Output:** YES

**Explanation:**  
100 can be divided into 40 + 60. Both parts are positive and even.
