function sumint(a,b){
    return (parseInt(a) + parseInt(b));
}

if (process.argv.length !==4){
    throw new Error('run script with 2 integer numbers as arguments');
}
let args = process.argv.slice(2);
let totalsum = sumint(...args);

console.log( "= " +totalsum);