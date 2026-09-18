const EventEmitter = require("events");

const application = new EventEmitter();

// Input event
application.on("input", (text) => {
    console.log("Entered text: " + text);
});

// Button click event
application.on("buttonClick", () => {
    console.log("Button was clicked.");
});

// Form submit event
application.on("formSubmit", () => {
    console.log("Form submitted successfully.");
});

// Extra event - logout
application.on("logout", (name) => {
    console.log(name + " logged out.");
});

// Trigger events
application.emit("input", "Hello Node.js");
application.emit("buttonClick");
application.emit("formSubmit");
application.emit("logout", "Rahul");