# [1486. XOR Operation in an Array](https://leetcode.com/problems/xor-operation-in-an-array/)

[Math](../README.md) / [All problems](../../README.md)

| Difficulty | Status | Submissions | First tried | Solved on |
| --- | --- | --- | --- | --- |
| Easy | Solved | 1 | 2025-09-05 | 2025-09-05 |

**Topics:** Math, Bit Manipulation

## My code

| Language | Result | Runtime | Memory | Date |
| --- | --- | --- | --- | --- |
| [cpp](solution.cpp) | Accepted | 0 ms | 7.6 MB | 2025-09-05 |

## Submission history

| Date | Result | Language | Runtime | Memory |
| --- | --- | --- | --- | --- |
| 2025-09-05 | Accepted | cpp | 0 ms | 7.6 MB |

## Problem

<details>
<summary>Show description</summary>

<p>You are given an integer <code>n</code> and an integer <code>start</code>.</p>

<p>Define an array <code>nums</code> where <code>nums[i] = start + 2 * i</code> (<strong>0-indexed</strong>) and <code>n == nums.length</code>.</p>

<p>Return <em>the bitwise XOR of all elements of</em> <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 5, start = 0
<strong>Output:</strong> 8
<strong>Explanation:</strong> Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where &quot;^&quot; corresponds to bitwise XOR operator.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 4, start = 3
<strong>Output:</strong> 8
<strong>Explanation:</strong> Array nums is equal to [3, 5, 7, 9] where (3 ^ 5 ^ 7 ^ 9) = 8.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 1000</code></li>
	<li><code>0 &lt;= start &lt;= 1000</code></li>
	<li><code>n == nums.length</code></li>
</ul>

</details>
