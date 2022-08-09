function permutations(arr){
    
    // base Case
    if(arr.length === 1){
        return [arr];
    }

    // General Case  
    let [first ,  ...rest] = arr;
    let subPermutations = permutations(rest);
    console.log("\n" , "first : ", first);
    console.log("Rest : ", rest , "\n");

    var cnt = 0;
    let allPermutations = [];
    for(let permutation of subPermutations){
        console.log("permutation : ", cnt, "-", permutation);
        cnt++;
        for(let p = 0; p <= subPermutations.length ; p++){
            console.log("------------")
            let left = permutation.slice(0,p); 
            console.log("left : ", left);
            let right = permutation.slice(p);
            console.log("right : ", right);
            let perm = left.concat([first]).concat(right);
            allPermutations.push(perm);
        }
    }

    return allPermutations;
    
}

console.log(permutations([1,2,3]));