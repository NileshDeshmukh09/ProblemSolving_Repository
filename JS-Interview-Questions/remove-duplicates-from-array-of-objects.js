let books = [
    { title : "C++" , author : "bjarne"},
    { title : "C++" , author : "bjarne"},
    { title : "C++" , author : "bjarne"},
    { title : "Java" , author : "James"},
    { title : "Python" , author : "Guido"},
    { title : "Python" , author : "Guido"},
    { title : "Java" , author : "James"},
]
function removeDuplicates( books ){
    
    let newArray = [];

    let uniqueObj = {};

    for(let i in books){
        objTitle = books[i]['title'];

        uniqueObj[objTitle] = books[i];
    }

    for( i in uniqueObj){
        newArray.push( uniqueObj[i]);
    }

    return newArray;
}

console.log(removeDuplicates(books))