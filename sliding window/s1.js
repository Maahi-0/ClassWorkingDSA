//sliding window is used to find the maximum sum of the subarray of size k
function maxSubArray(arr, k, n) {
  let max_sum = 0;
  for (let i = 0; i < n - k - 1; i++) {
    let current_sum = 0;
    for (let j = 0; j < k; j++) {
      current_sum += arr[i + j];
    }
    max_sum = Math.max(current_sum, max_sum);
  }
  return max_sum;
}

const arr = [2, 4, 5, 6, 62, 1];
let k = 3;
let n = arr.length;
console.log(maxSubArray(arr, k, n));

function slidingWindo(arr, k, n) {
  let maxSum = 0;
  for (let i = 0; i < n - k - 1; i++) {
    let cuurentSum = 0;
    for (let j = 0; j < k; j++) {
      cuurentSum += arr[i + j];
    }
    maxSum = Math.max(cuurentSum, maxSum);
  }
  return maxSum;
}
