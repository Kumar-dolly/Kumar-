//map
const numbers = [1,2,3,4,5];
const doubled = numbers.map((num) => num * 2);
console.log(doubled);

// convert to uppercase
const fruits = ["apple","banana","orange"];
const upperFruits = fruits.map((fruits) => fruits.toUpperCase());
console.log(upperFruits);

//Add $ to prices
const prices = [10,20,30];
const priceTags = prices.map((price) => "$" + price);
console.log(priceTags);

//Add tax to prices
const products = [100,50,200];
const withTax = products.map((price) => price * 1.08);
console.log(withTax);

//Get names from objects
const users = [
  { name: "Alice", age: 25 },
  { name: "Bob", age: 30 },
  { name: "Charile", age: 35 },
];
const names = users.map((user) => user.name);
console.log(names);

//Calculate areas
const rectangles = [
  { width: 10, height: 5 },
  { width: 8, height: 3 },
  { width: 15, height: 10 },
];
const areas = rectangles.map((rect) => rect.width * rect.height);
console.log(areas);