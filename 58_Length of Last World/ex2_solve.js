/* 
Given a string [s] consisting of words and spaces, 
return the length of the last word in the string.

A word is a maximal substring consisting of non-
-space characters only.



Example 2:

    Input      : s = "   fly me   to   the moon  "
    Output     : 4
    Explanation: The last word is "moon" with length 4.

*/


const s = "   fly me   to   the moon   ";

function lengthOfLastWord(s) 
{
   s = s.trim();
   const words = s.split(" ");
   const lastWord = words[words.length - 1];

   return lastWord.length;
}


const output = lengthOfLastWord(s);
console.log(output); 

// => Output: 4
