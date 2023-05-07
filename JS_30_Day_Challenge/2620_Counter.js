/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    n = n- 1;
    return function() {
        n = n + 1
        return n;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */
