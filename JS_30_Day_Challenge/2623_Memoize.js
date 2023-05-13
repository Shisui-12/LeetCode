/**
 * @param {Function} fn
 */
function memoize(fn) {
    const memoized_values = {};
    return function(...args) {
        const arguments = JSON.stringify(args);
        if(arguments in memoized_values)
            {
                return memoized_values[arguments];
            }
        const result = fn.apply(this, args);
        memoized_values[arguments] = result;
        return result;
    }
}



//   let callCount = 0;
//   const memoizedFn = memoize(function (a, b) {
//  	 callCount += 1;
//     return a + b;
//   })
//   memoizedFn(2, 3) // 5
//   memoizedFn(2, 3) // 5
//   console.log(callCount) // 1 
