/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let object1 = {
      value : init,
      og : init
    };
        object1.increment = function()
    {
        this.value = this.value + 1;
        return this.value;
    }
   
        object1.decrement = function()
    {
        this.value = this.value - 1;
        return this.value;
    }
   
    object1.reset = function()
    {
        r = this.og;
        this.value = r;
        return r;
    }

return object1;
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
