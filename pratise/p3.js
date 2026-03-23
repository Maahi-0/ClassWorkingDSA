function move_zeros(arr) {
    let j = 0;
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] != 0) {
            [arr[i], arr[j]] = [arr[j], arr[i]];
            j++;
        }
    }
    return arr;
}

console.log(move_zeros([1, 0, 2, 0, 3, 0, 4]));