
# Find the Closest Palindrome

## 📌 Problem Description

Given a string `n` representing an integer, return the closest integer (excluding itself) that is a palindrome.

The closest palindrome is defined as the number that minimizes the absolute difference with `n`.  
If there is a tie, return the smaller palindrome.

---

## 🎯 Task

Given a numeric string `n`, find and return the nearest palindromic number (as a string), excluding `n` itself.

---

## 📥 Input

- A string `n` representing a positive integer.
- The string contains only digits.
- No leading zeros.

---

## 📤 Output

- Return a string representing the closest palindromic integer.

---

## 📝 Examples

### Example 1
```

Input:  n = "123"
Output: "121"

```

### Example 2
```

Input:  n = "1"
Output: "0"

Explanation:
0 and 2 are both closest palindromes,
but we return the smaller one → 0.

```

---

## ⚙️ Constraints

- `1 <= n.length <= 18`
- `n` contains only digits
- `n` has no leading zeros
- `1 <= n <= 10^18 - 1`

---

## 💡 Approach (Hint)

- Generate possible palindrome candidates by:
  - Mirroring the first half of `n`
  - Adjusting the middle part by +1 and -1
  - Considering edge cases like:
    - `10...01`
    - `9...9`
- Compare all candidates.
- Select the one with minimum absolute difference.
- In case of tie, choose the smaller value.

---

## 🛠️ Implementation Language

- C Programming Language

---

## 📚 Category

- Strings
- Math
- Palindrome
- LeetCode Hard Problem

