/* 
Given a string [s] consisting of words and spaces,
return the length of the last word in the string.

A word is a maximal substring consisting of non-
-space characters only.



Example 3:

    Input      : s = "luffy is still joyboy"
    Output     : 6
    Explanation: The last word is "joyboy" with length 6.

*/


const s = "luffy is still joyboy";

function lengthOfLastWord(s) 
{
   s = s.trim();
   const words = s.split(" ");
   const lastWord = words[words.length - 1];

   return lastWord.length;
}


const output = lengthOfLastWord(s);
console.log(output); 

// => Output: 6
