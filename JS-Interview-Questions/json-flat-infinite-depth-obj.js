const obj = {
    "one": 1,
    "two": {
        "three": 3
    },
    "four": {
        "five": 5,
        "six": {
            "seven": 7
        },
        "eight": 8
    },
    "nine": 9
};

//  My Implementation

function flattenObj(obj, res, prevKey) {

    for (const key in obj) {

        if (typeof obj[key] !== 'object') {
            res[prevKey + key] = obj[key];
        } else {
            flattenObj(obj[key],res , prevKey + key+ '.');
        }
    }

    return res;
}

let result = {};
let prevKey = "";
console.log(flattenObj( obj , result , prevKey ));