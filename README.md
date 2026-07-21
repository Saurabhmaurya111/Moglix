# Longest Valid Parentheses

## Problem Statement

Given a string containing only the characters `'('` and `')'`, return the length of the longest valid (well-formed) parentheses substring.

### Examples

#### Example 1

**Input**

```text
s = "(()"
```

**Output**

```text
2
```

**Explanation**

The longest valid parentheses substring is `"()"`.

---

#### Example 2

**Input**

```text
s = ")()())"
```

**Output**

```text
4
```

**Explanation**

The longest valid parentheses substring is `"()()"`.

---

#### Example 3

**Input**

```text
s = ""
```

**Output**

```text
0
```

---

## Constraints

- `0 <= s.length <= 3 × 10^4`
- `s` contains only `'('` and `')'`

---

## Solution Approach

This solution uses a **stack-based approach** to efficiently find the length of the longest valid parentheses substring.

### Algorithm

1. Initialize a stack and push `-1` as a base index.
2. Traverse the string from left to right.
3. If the current character is `'('`, push its index onto the stack.
4. If the current character is `')'`:
   - Pop the top index from the stack.
   - If the stack becomes empty, push the current index as the new base.
   - Otherwise, calculate the current valid substring length using:
     ```
     currentIndex - stack.top()
     ```
   - Update the maximum length if necessary.
5. Return the maximum length found.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| Time Complexity | **O(n)** |
| Space Complexity | **O(n)** |

where **n** is the length of the input string.

---

## Project Structure

```
.
├── longest_valid_parentheses.cpp
└── README.md
```

---

## Build and Run

### Compile

```bash
g++ longest_valid_parentheses.cpp -o longest_valid_parentheses
```

### Run

```bash
./longest_valid_parentheses
```

### Example

```text
Enter the string of parentheses: )()())

The length of the longest valid parentheses substring is: 4
```

---

## Language

- C++17

---

## Author

**Saurabh Maurya**