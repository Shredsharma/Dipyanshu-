let person ={
    name: "Shred",
    age: "30",
    city:"New york"
};
console.log(person.name);
console.log(person.age);
console.log(person.city);

let numbers = [1,2,3,4,5];
console.log(numbers[0]);
console.log(numbers[1]);
console.log(numbers[2]);


let mixedArray = [1,"Hello",true,{name:"Alice"},[1,2,3]];
console.log(mixedArray[0]);
console.log(mixedArray[1]);
console.log(mixedArray[2]);
console.log(mixedArray[3]);
console.log(mixedArray[4]);

let newarray = [1,3,4,5];
let squaredArray=newarray.map(num => num * num);
console.log(squaredArray);

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
const add = (a,b) =>  a+b;
console.log(add(2,3));



