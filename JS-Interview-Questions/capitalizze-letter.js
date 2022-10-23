function getCapsString( word ){
    let capsWord = word.charAt(0).toUpperCase() + word.slice(1);
    return capsWord;
}

let Name = "nilesh deshmukh";

let arr = Name.split(" ");
let output = arr.map( word => getCapsString( word ) );

console.log( output.join(" ") );