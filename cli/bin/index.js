
import yargs from 'yargs';
import chalk from 'chalk';
import boxen from 'boxen';

const usage = chalk.blue("\nUsage: mycli -l <language>  -s <sentence> \n"
+ boxen(chalk.green("\n" + "Translates a sentence to specific language" + "\n"), {padding: 1, borderColor: 'green', dimBorder: true}) + "\n");

const argv = yargs.options({
    a: {alias: "all", describe: "Parse all shell scripts (current dir)", demandOption: false},
    p: {alias: "path", type: "string", describe: "Set path of shell scripts", demandOption: false, default: "./"}
})
.usage(usage)
.argv;

console.log(argv);