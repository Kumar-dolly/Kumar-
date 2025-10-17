import React, { useState, useEffect, useRef } from "react"; // ✅ import useRef too

export default function App() {
  //  Step 3.2: State for tasks and input
  const [tasks, setTasks] = useState([]);
  const [newTask, setNewTask] = useState("");

  //  Step 3.6: Create reference for input box
  const inputRef = useRef();

  //  Step 3.3: Add a new task
  const addTask = () => {
    if (newTask.trim() === "") return;
    setTasks([...tasks, { id: Date.now(), text: newTask, done: false }]);
    setNewTask("");
  };

  //  Step 3.4: Toggle task completion
  const toggleTask = (id) => {
    setTasks(tasks.map((t) => (t.id === id ? { ...t, done: !t.done } : t)));
  };

  //  Step 3.4: Delete a task
  const deleteTask = (id) => {
    setTasks(tasks.filter((t) => t.id !== id));
  };

  //  Step 3.5 (Part 1): Load saved tasks when app starts
  useEffect(() => {
    const saved = JSON.parse(localStorage.getItem("tasks"));
    if (saved) setTasks(saved);
  }, []);

  //  Step 3.5 (Part 2): Save tasks whenever they change
  useEffect(() => {
    localStorage.setItem("tasks", JSON.stringify(tasks));
  }, [tasks]);

  //  Step 3.6: Auto-focus input when app loads
  useEffect(() => {
    inputRef.current.focus();
  }, []);

  // UI (return)
  return (
    <div style={{ textAlign: "center", marginTop: "50px" }}>
      <h1>📝 My To-Do App (React Hooks)</h1>

      {/* Input + Add Button */}
      <input
        ref={inputRef} // connects useRef to this input
        type="text"
        placeholder="Enter a new task"
        value={newTask}
        onChange={(e) => setNewTask(e.target.value)}
      />
      <button onClick={addTask}>Add</button>

      {/* Task List */}
      <ul style={{ listStyle: "none", padding: 0, marginTop: "20px" }}>
        {tasks.map((t) => (
          <li
            key={t.id}
            style={{
              textDecoration: t.done ? "line-through" : "none",
              marginBottom: "10px",
            }}
          >
            <input
              type="checkbox"
              checked={t.done}
              onChange={() => toggleTask(t.id)}
            />
            {t.text}
            <button
              onClick={() => deleteTask(t.id)}
              style={{ marginLeft: "10px" }}
            >
              ❌
            </button>
          </li>
        ))}
      </ul>
    </div>
  );
}
