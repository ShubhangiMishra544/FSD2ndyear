const EventEmitter = require("events");

const studentSystem = new EventEmitter();

// Student joined event
studentSystem.on("studentJoined", (name) => {
    console.log("Student " + name + " joined the session.");
});

// Course selected event
studentSystem.on("courseSelected", (course) => {
    console.log("Course selected: " + course);
});

// Session ended event
studentSystem.on("sessionEnded", (code) => {
    console.log("Session ended. Code: " + code);
});

// Trigger events
studentSystem.emit("studentJoined", "Rahul");
studentSystem.emit("courseSelected", "Full Stack Development");
studentSystem.emit("sessionEnded", 0);