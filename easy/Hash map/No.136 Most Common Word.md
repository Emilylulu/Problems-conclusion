### Description
Given a paragraph and a list of banned words, return the most frequent word that is not in the list of banned words. It is guaranteed there is at least one word that isn't banned, and that the answer is unique.

Words in the list of banned words are given in lowercase, and free of punctuation. Words in the paragraph are not case sensitive. The answer is in lowercase.

### Example
Example1<br>
Input:  paragraph = "Bob hit a ball, the hit BALL flew far after it was hit." and banned = ["hit"]<br>
Output: "ball"<br>
Explanation:<br>
"hit" occurs 3 times, but it is a banned word.<br>
"ball" occurs twice (and no other word does), so it is the most frequent non-banned word in the paragraph. <br>
Note that words in the paragraph are not case sensitive,<br>
that punctuation is ignored (even if adjacent to words, such as "ball,"), <br>
and that "hit" isn't the answer even though it occurs more because it is banned.<br>

Example2<br>
Input:  paragraph = "a a a b b c c d" and banned = ["a","b"]<br>
Output: "c"<br>
Explanation:<br>
"a" and "b" are banned words<br>
"c" occurs 2 times and "d" occurs only once<br>
So output "c"<br>
### Notice
1 <= paragraph.length <= 1000.<br>
1 <= banned.length <= 100.<br>
1 <= banned[i].length <= 10.<br>
The answer is unique, and written in lowercase (even if its occurrences in paragraph may have uppercase symbols, and even if it is a proper noun.)
paragraph only consists of letters, spaces, or the punctuation symbols !?',;.<br>
Different words in paragraph are always separated by a space.<br>
There are no hyphens or hyphenated words.<br>
Words only consist of letters, never apostrophes or other punctuation symbols.<br>
