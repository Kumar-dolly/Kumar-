//foreach
//update objects
const users = [
  { name: "Alice", active: false },
  { name: "Bob", active: false },
  { name: "Charlie", active: false },
];
users.forEach((user) => (user.active = true));
console.log(users);

//send notifications
const userDetails = [
  { name: "Alice", email: "alice@email.com" },
  { name: "Bob", email: "bob@email.com" },
  { name: "Charlie", email: "charlie@email.com" },
];
const notifications = [];
userDetails.forEach((user) => {
    notifications.push(`Email sent to ${user.name} at ${user.email}`);
});
console.log(notifications);