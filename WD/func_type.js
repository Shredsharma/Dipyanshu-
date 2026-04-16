// function declaration
function greet(){
    console.log("Hello World")
}
greet();

function mul(a,b){
    return a*b;
}
console.log(mul(2,3));
// fuction expression


let mult=
    function(a,b){
        return(a*b);
    };
function sayHi() {
    return console.log("Hi!");
}
console.log(sayHi());

// arrow function
const add = (a,b) =>  a+b;
console.log(add(2,3));