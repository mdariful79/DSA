<h2><a href="https://leetcode.com/problems/maximum-repeating-substring/description/">1668. Maximum Repeating Substring</a></h2><h3>Easy</h3><hr><div>

<p>For a string <code>sequence</code>, a string <code>word</code> is <code>k</code>-repeating if <code>word</code> concatenated k times is a substring of <code>sequence</code>.
 The word's maximum <code>k</code>-repeating value is the highest value <code>k</code> where word is <code>k</code>-repeating in <code>sequence</code>.
 If word is not a substring of <code>sequence</code>, word's maximum <code>k</code>-repeating value is 0.</p>

<p>Given strings <code>sequence</code> and <code>word</code>, return the maximum <code>k</code>-repeating value of word in sequence.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> sequence = "ababc", word = "ab"
<strong>Output:</strong> 2
<strong>Explanation:</strong> "abab" is a substring in "ababc".
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> sequence = "ababc", word = "ba"
<strong>Output:</strong> 1
<strong>Explanation:</strong> "ba" is a substring in "ababc". "baba" is not a substring in "ababc".
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> sequence = "ababc", word = "ac"
<strong>Output:</strong> 0
<strong>Explanation:</strong> "ac" is not a substring in "ababc". 
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>1 <= sequence.length <= 100</li>
	<li>1 <= word.length <= 100</li>
	<li><code>sequence</code> and <code>word</code> contains only lowercase English letters</li>
	
</ul>
