let a1 = [1 , 4 , 7, 8,10];
let a2 = [ 2 ,3 ,9 ];

function sortedArr( a2 ){
    let maxx = a2[0];

    let n = a2.length;
    for(let i = 0 ; i < n ; i++){

        if(a2[i]>maxx){
            
            maxx = a2[i];
        }
    }
}

function MergeTwoSortedArray( a1 , a2){
    let idx = 0;
    let n = a1.length;
    let m = a2.length;
    let z = n+m;
    let newArr = new Array(z);
    for(let i = 0; i < n ; i++){

        if(a1[i] > a2[0]){
            [a1[i] , a2[0]] = [ a2[0] , a1[i]];
            a2.sort();
        }
    }
    a2.sort();

    for(let i = 0; i < m; i++){
        console.log(a2[i]);
    }
    return a1 + a2;
}

console.log(MergeTwoSortedArray( a1 , a2))