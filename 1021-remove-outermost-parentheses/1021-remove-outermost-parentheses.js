/**
 * @param {string} s
 * @return {string}
 */
var removeOuterParentheses = function(S) {
    let res='';
    let open=0;
    for (let i=0; i<S.length; i++) {
        if (S[i] === '('){
            if (open > 0){ 
				res+= '(';
			}
			open++;
        } 
        else if (S[i] === ')'){
            if (open > 1){ 
				res+= ')'; 
			}
			open--;
        }
    }
    return res;
};