const input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "./input.txt")
  .toString()
  .trim()
  .split("\n")
  .map((el) => el.trim().split(" "));

const N = Number(input[0][0]);
const sites = input.slice(1, N + 1);
const siteMap = new Map(sites);

const searches = input.slice(N + 1).flat();
const want = searches.map((site) => siteMap.get(site));
console.log(want.join("\n"));
