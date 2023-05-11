/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
	return function(x) {
        let len = functions.length;
        if (len == 0)
            {
                return x;
            }
        let ans = functions[len - 1](x);
        for(let i = len - 2; i >= 0; i--)
            {
                ans = functions[i](ans);
            }
        return ans;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */
