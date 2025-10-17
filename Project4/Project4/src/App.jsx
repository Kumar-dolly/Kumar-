import axios from "axios";
import { useState } from "react";

const App = () => {
  const [user, setUser] = useState({});

  const searchGithub = async (username) => {
    const { data } = await axios.get("https://api.github.com/users/Kumar-dolly");

    console.log(data);

    setUser(data);
    console.log(user);
  };
  searchGithub();
  return (
    <>
      <h1>Github Search</h1>
      <img src={user.avatar_url} alt="" width={"10%"} />
      <h2>{user.name}</h2>
      <p>{user.bio}</p>
    </>
  );
};
export default App;