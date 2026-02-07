
# Roman to Integer

## 📌 Problem Description

Roman numerals are represented by seven different symbols:

| Symbol | Value |
|--------|--------|
| I      | 1      |
| V      | 5      |
| X      | 10     |
| L      | 50     |
| C      | 100    |
| D      | 500    |
| M      | 1000   |

For example:
- `II` = 2
- `XII` = 12
- `XXVII` = 27

Roman numerals are usually written from largest to smallest from left to right.  
However, in some cases, subtraction is used.

### Subtraction Rules

There are six cases where subtraction applies:

- `I` before `V` and `X` → 4 and 9  
- `X` before `L` and `C` → 40 and 90  
- `C` before `D` and `M` → 400 and 900  

Examples:
- `IV` = 4
- `IX` = 9
- `XL` = 40
- `CM` = 900

---

## 🎯 Task

Given a Roman numeral string `s`, convert it into an integer.

---

## 📥 Input

- A string `s` representing a Roman numeral.

---

## 📤 Output

- Return the integer value of the Roman numeral.

---

## 📝 Examples

### Example 1
```

Input:  s = "III"
Output: 3
Explanation: III = 3

```

### Example 2
```

Input:  s = "LVIII"
Output: 58
Explanation: L = 50, V = 5, III = 3

```

### Example 3
```

Input:  s = "MCMXCIV"
Output: 1994
Explanation:
M = 1000
CM = 900
XC = 90
IV = 4
Total = 1994

```

---

## ⚙️ Constraints

- `1 <= s.length <= 15`
- `s` contains only: `'I'`, `'V'`, `'X'`, `'L'`, `'C'`, `'D'`, `'M'`
- `1 <= value <= 3999`
- It is guaranteed that `s` is a valid Roman numeral.

---

## 💡 Approach (Hint)

- Traverse the string from left to right.
- If the current value is smaller than the next value, subtract it.
- Otherwise, add it.
- Accumulate the result.

---

## 🛠️ Implementation Language

- C Programming Language

---

## 📚 Category

- Strings
- Greedy Algorithm
- LeetCode Easy Problem

