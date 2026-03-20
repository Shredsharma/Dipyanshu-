let jsonString = '{"name": "Shred", "age": 20}';
let obj = JSON.parse(jsonString);

console.log(obj.name);
console.log(obj.age);

JSON.stringify(obj);
console.log(obj);
