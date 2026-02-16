# First Unique Frequency

A C++ solution to find the first element in an array whose frequency is unique.

---

## 📌 Problem Statement
Given an integer array `nums`, return the first element whose frequency is unique.
If no such element exists, return `-1`.

---

## 🧠 Approach
1. Count frequency of each element.
2. Count frequency-of-frequency.
3. Traverse array to find first element whose frequency occurs only once.

This solution uses hashing for efficient lookup.

---

## ⚙️ Complexity
- Time Complexity: O(n)
- Space Complexity: O(n)

---

## ▶️ Example
Input:
nums = [2,3,1,2,4,5,5,6,6,2]
Output:
2
---

## 📂 Project Structure
