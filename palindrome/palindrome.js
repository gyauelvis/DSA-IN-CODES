// Stacks
// first in last out

// using stacks to build a palindrome

let arr = []; //stack

let word = "racecar"
let  rword = "";

for(let i = 0; i<word.length; i++) {
    arr.push(word[i]);
}

console.log(arr);

for(let i = 0; i < word.length; i++) {
    rword+= arr.pop();
}

console.log(rword);
