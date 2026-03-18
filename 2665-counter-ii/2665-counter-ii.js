/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let p=init;
    const increment=()=>{
        p++;
        return p;
    }
    const decrement=()=>{
        p--
        return p;
    }
    const reset=()=>{
        p=init
        return p;
    }
    return {increment,decrement,reset};
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */