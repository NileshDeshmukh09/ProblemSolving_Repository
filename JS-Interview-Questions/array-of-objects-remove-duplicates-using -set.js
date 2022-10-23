const arr = [
    {id: 1, name: 'Tom'},
    {id: 1, name: 'Tom'},
    {id: 1, name: 'Tom'},
    {id: 1, name: 'Tom'},
    {id: 1, name: 'Tom'},
    {id: 1, name: 'Tom'},
    {id: 2, name: 'Nick'},
    {id: 2, name: 'Nick'},
    {id: 2, name: 'Nick'},
    {id: 2, name: 'Nick'},
  ];

let set = new Set();

const filterArr = arr.filter(val =>{
    const isDuplicate = set.has( val.id );

    set.add( val.id );
    console.log(set);
    return !isDuplicate;
})

console.log( filterArr );