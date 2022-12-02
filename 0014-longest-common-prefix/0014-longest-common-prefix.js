/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let start = strs[0];
    let n = strs.length;
    let matched = "";
    for(let i=0; i<n; i++){
        let tmp = strs[i];
        let m = Math.min(start.length, tmp.length);
        let currMatch = "";
        for(let i=0; i<m; i++){
            if(tmp[i] === start[i]){
                currMatch += tmp[i];
            }
            else {
                break;
            }
        }
        if(currMatch === "") return currMatch;
        matched = currMatch;
        start = matched;
    }
    return matched;
};