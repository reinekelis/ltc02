
 function bottles(x){
     if (x < 1){
        console.log("No more bottles of beer on the wall, no more bottles of beer");
        console.log("We've taken them down and passed them around; now we're drunk and passed out!\n");
    } else {
        console.log(x +" bottles of beer on the wall, "+ x +" bottles of beer");
        console.log("Take one down, pass it around");
        bottles(--x);
    }
}

let x = 99;
bottles(x);