const arr = [1, 2, 3, 4, 5, 6, 7];

//print all array elements
for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
}

//remove the last element of the array
arr.pop();
for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
}

//remove the first element of the array and add at the first index in the array
arr.shift();
arr.unshift(0);
for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
}

//find a element in the array it returns a first element of the array
const result = arr.find((num) => num > 5);
console.log(result);

const res = arr.map(num => num * 2)
console.log(res)