function minRepeats(s1, s2) {
    let n = s1.length, m = s2.length;

    // Iterate over all characters of s1 
    // and start comparing with s2
    for (let i = 0; i < n; i++) {
        let rep = 1, idx1 = i;
        let found = true;

        // Compare each character of s2 with s1
        for (let idx2 = 0; idx2 < m; idx2++) {
            if (s1[idx1] !== s2[idx2]) {
                found = false;
                break;
            }
            idx1++;

            // If we have reached the end of s1, 
            // reset the index to 0
            if (idx1 === n) {
                idx1 = 0;

                // If we have remaining character in s2, then
                // s1 needs to repeated again so increment
                // repetitions by 1
                if (idx2 !== m - 1)
                    rep++;
            }
        }

        // If s2 is found, return the number of times 
        // s1 has been repeated
        if (found)
            return rep;
    }

    // If no occurrence of s2 is found, return -1
    return -1;
}

// Driver code
let s1 = "abac";
let s2 = "cabaca";
console.log(minRepeats(s1, s2));
