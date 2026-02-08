
# Reverse Words in a String

## Problem Statement

Given an input string `s`, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in `s` will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note:
- `s` may contain leading or trailing spaces.
- `s` may contain multiple spaces between words.
- The returned string should only have a single space separating the words.
- Do not include extra spaces.

---

## Examples

### Example 1
**Input:**
```

"the sky is blue"

```
**Output:**
```

"blue is sky the"

```

### Example 2
**Input:**
```

"  hello world  "

```
**Output:**
```

"world hello"

```

### Example 3
**Input:**
```

"a good   example"

```
**Output:**
```

"example good a"

```

---

## Constraints

- 1 <= s.length <= 10⁴
- `s` contains:
  - Upper-case letters
  - Lower-case letters
  - Digits
  - Spaces (' ')
- There is at least one word in `s`.

---

## Goal

Reverse the order of words in the string while:
- Removing extra spaces
- Keeping exactly one space between words
- Avoiding leading and trailing spaces
