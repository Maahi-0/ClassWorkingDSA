function brute_force(arr, n) {
  for (let st = 0; st < n; st++) {
    for (let end = st; end < n; end++) {
      for (let i = st; i < end; i++) {
        console.log(arr[i]);
      }
      console.log(" ");
    }
  }
}
function kadans_algorithm(arr, n) {
  let curr_sum = 0;
  let max_sum = 0;
  for (let i = 0; i < n; i++) {
    curr_sum += arr[i];
    max_sum = Math.max(curr_sum, max_sum);
    if (curr_sum < 0) curr_sum = 0;
  }
  return max_sum;
}

brute_force([1, 2, 3, 4, 5, 6], 6);
console.log(
  "the maximum sub array sum is :  ",
  brute_force_max_sum([1, 2, 3, 4, 5, 6], 6),
);

console.log(
  "the maximum sub array sum using kadans algorithm :  ",
  kadans_algorithm([1, 2, 3, 4, 5, 6], 6),
);
