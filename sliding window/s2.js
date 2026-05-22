function max_sub_string_sum(s) {
  let set = new Set();
  let start = 0;
  let max_len = 0;

  for (let end = 0; end < s.length; end++) {
    while (set.has(s[end])) {
      set.delete(s[start]);
      start++;
    }
    set.add(s[end]);
    max_len = Math.max(max_len, end - start + 1);
  }
  return max_len;
}

console.log(max_sub_string_sum("abcabcbb")); // 3
