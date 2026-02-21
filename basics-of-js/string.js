function reversString(atring) {
    return atring.split('').reverse().join('');
}

console.log(reversString('samarth'));


const str = "muskan Wagh";
const res = str.charAt(3);
console.log(res);

const replace = str.replace("muskan", "kunal");
console.log(replace);

str.split('');
console.log(str);


//swap
let a = 5;
let b = 10;

[a, b] = [b, a];
console.log(a, b);
