/**
 * @param {string[]} strs
 * @return {number}
 */
var minDeletionSize = function(strs) {
    const n = strs[0].length;
    const m = strs.length;
    var prevChar;
    var minColumn = 0;
    for(var i=0; i<n; i++){
        prevChar = strs[0][i];
        for(var j=1; j<m; j++){
            if(strs[j][i] < prevChar) {
                minColumn++;
                break;
            }else {
                prevChar = strs[j][i];
            }
        }
    }
    return minColumn;
};