const likeButton = document.querySelector(".btn-like");
const unlikeButton = document.querySelector(".btn-unlike");
const likeCount = document.querySelector(".like-count");

let likes = 0;

likeButton.addEventListener("click", () => {
  likes++;
  likeCount.textContent = `${likes} ${likes === 1 ? "Like" : "Likes"}`;
});

unlikeButton.addEventListener("click", () => {
  if (likes > 0) {
    likes--;
    likeCount.textContent = `${likes} ${likes === 1 ? "Like" : "Likes"}`;
  }
});
