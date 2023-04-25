
const yargs = require('yargs');

const argv = yargs.options({
    a: {alias: "all", describe: "Parse all shell scripts (current dir)", demandOption: false},
    p: {alias: "path", type: "string", describe: "Set path of shell scripts", demandOption: false, default: "./"}
}).argv;

console.log(argv);