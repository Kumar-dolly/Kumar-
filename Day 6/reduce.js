//reduce
//sum of numbers
const numbers = [1, 2, 3, 4, 5];
const sum = numbers.reduce((total,num) => total + num, 0);
console.log(sum);

//find maximum
const scores = [85,42,90,65,95];
const maxScore = scores.reduce((max, score) => Math.max(max,score), scores[0]);
console.log(maxScore);

//combine words
const words = ["Hello","world","!"];
const sentence = words.reduce((text,word) => text + " " + word,"");
console.log(sentence.trim());

//shopping cart total
const cart = [
  { item: "Book", price: 20, quantity: 2 },
  { item: "Pen", price: 3, quantity: 5 },
  { item: "Notebook", price: 8, quantity: 1 },
];
const total = cart.reduce((sum, item) => sum + item.price * item.quantity, 0);
console.log(total);