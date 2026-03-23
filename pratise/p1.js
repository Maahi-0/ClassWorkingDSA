function container_with_most_water(arr) {
    let n = arr.length;

    let start = 0;
    let end = n - 1;

    let maxWater = 0;

    while (start <= end) {
        let height = Math.min(arr[start], arr[end]);
        let width = end - start;
        let area = height * width;

        maxWater = Math.max(area, maxWater);

        arr[start] < arr[end] ? start++ : end--;
    }
    return maxWater;
}

console.log(container_with_most_water([1, 8, 6, 2, 5, 4, 8, 3, 7]));