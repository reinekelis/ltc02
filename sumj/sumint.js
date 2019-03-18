function sumint(a,b)
{
    return (parseInt(a) + parseInt(b));
}

let args = process.argv.slice(2);
let totalsum = sumint(...args);

console.log( "= " +totalsum);