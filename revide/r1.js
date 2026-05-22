//strng qustions
// 1: reverse a string
function reverse_string(str) {
  return str.split("").reverse().join("");
}

let res = "muskan";
console.log(reverse_string(res));

//2: check if a string is a palindrome
function is_palindrome(str) {
  if (str === "") {
    return str;
  }
  let start = 0;
  let end = str.length - 1;
  while (start <= end) {
    if (str[start] === str[end]) {
      return true;
    }
    start++;
    end--;
  }
  return false;
}
let str = "racecar";
console.log(is_palindrome(str));

//3: check if a string is an anagram of another string
function is_anagram(s1, s2) {
  if (s1.length !== s2.length) {
    return false;
  }
  return s1.split("").sort().join("") === s2.split("").sort().join("");
}
let s1 = "listen";
let s2 = "silent";
console.log(is_anagram(s1, s2));

//4: longest substring without repeating characters
function longest_substring(str) {
  let end = 0;
  let max_sum = 0;
  let s = new Set();

  for (let start = 0; start < str.length; start++) {
    while (s.has(str[start])) {
      s.delete(str[end]); // ✅ correct
      end++;
    }

    s.add(str[start]);
    max_sum = Math.max(max_sum, start - end + 1);
  }

  return max_sum;
}
let str1 = "abcabcbb";
console.log(longest_substring(str));

//5: is_subsequence
function is_subsequence(s1, s2) {
  let i = 0;
  let j = 0;
  while (i < s1.length && j < s2.length) {
    if (s1[i] === s2[j]) {
      i++;
    }
    j++;
  }
  return i === s1.length;
}
let see = "abc";
let see2 = "ahbgdc";
console.log(is_subsequence(see, see2));
