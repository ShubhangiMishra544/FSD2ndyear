console.log("1. Start of program");

process.nextTick(() => {
    console.log("3. process.nextTick()");
});

setTimeout(() => {
    console.log("4. setTimeout()");
}, 0);

setImmediate(() => {
    console.log("5. setImmediate()");
});

console.log("2. End of synchronous code");