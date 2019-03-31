function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
  }

 async function print_poem(){
    console.log("у попа была собака, он её любил");
    console.log("она съела кусок мяса, он её убил");
    console.log("в землю закопал");
    console.log("и надпись написал, что ");
    await sleep(2000);
    print_poem();

}

print_poem();