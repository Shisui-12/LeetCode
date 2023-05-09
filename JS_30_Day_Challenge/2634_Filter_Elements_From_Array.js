/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let newArray = []
    let j = 0;
    for(let i = 0; i < arr.length; i++)
        {
            if(fn(arr[i],i))
                {
                    newArray[j] = arr[i];
                    j++;
                }
        }
    return newArray
};
