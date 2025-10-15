//filer - select elements
//get even numbers
const numbers = [1,2,3,4,5,6];
const evens = numbers.filter((num) => num % 2 === 0);
console.log(evens);

//get long words
const words = ["cat","elephant","dog","butterfly"];
const longWords = words.filter((word) => word.length > 4);
console.log(longWords);

//get affordable items
const prices = [50,15,200,30,500];
const affordable = prices.filter((price) => price < 100);
console.log(affordable);

//get adults only
const people = [
  { name: "Alice", age: 25 },
  { name: "Bob", age: 30 },
  { name: "Charile", age: 30 },
  { name: "Diana", age: 16 },
];
const adults = people.filter((person) => person.age >= 18);
console.log(adults);

