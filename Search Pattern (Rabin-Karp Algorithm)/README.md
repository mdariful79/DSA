# [Search Pattern (Rabin-Karp Algorithm)](https://www.geeksforgeeks.org/problems/search-pattern-rabin-karp-algorithm--141631/1)
## Medium

Given two strings, one is a text string and other is a pattern string. The task is to print the indexes of all the occurences of pattern string in the text string. For printing, Starting Index of a string should be taken as 1.
The strings will only contain lowercase English alphabets ('a' to 'z').

#### Example 1:
````
Input: 
text = "birthdayboy"
pattern = "birth"
Output: 
[1]
Explanation: 
The string "birth" occurs at index 1 in text.
````
#### Example 2:
`````
Input:
text = "geeksforgeeks"
pattern = "geek"
Output: 
[1, 9]
Explanation: 
The string "geek" occurs twice in text, one starts are index 1 and the other at index 9.
`````

#### Constraints:
````
1<=|text|<=5*105
1<=|pattern|<=|text|
````
