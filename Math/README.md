# Day 01 — Reverse Integer

- **Platform:** LeetCode
- **Problem:** [7. Reverse Integer](https://leetcode.com/problems/reverse-integer/)
- **Submission:** [View my accepted submission](https://leetcode.com/problems/reverse-integer/submissions/2197572321/)
- **Difficulty:** Medium
- **Topic:** Mathematics / Integer Manipulation
- **Language:** C
- **Status:** Accepted

## Problem

Given a signed 32-bit integer `x`, return the integer obtained by reversing its digits. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2^31, 2^31 - 1]`, return `0`.

## Examples

| Input | Output |
|---|---:|
| `123` | `321` |
| `-123` | `-321` |
| `120` | `21` |
| `1534236469` | `0` (overflow) |

## Approach

1. Extract the last digit with the remainder operator: `x % 10`.
2. Append that digit to the reversed value: `rev = rev * 10 + rem`.
3. Remove the last digit from the input with integer division: `x = x / 10`.
4. After each step, check that the reversed value remains within the signed 32-bit integer range.
5. Return `0` if it overflows; otherwise return the reversed value.

The solution uses a `long long` temporary value so the overflow check can be performed safely before converting the result back to `int`.

## Complexity

- **Time:** `O(log10(|x|))` — one iteration per digit.
- **Auxiliary space:** `O(1)` — uses a fixed number of variables.

## Source code

See [Day01_ReverseInteger.c](Day01_ReverseInteger.c).
