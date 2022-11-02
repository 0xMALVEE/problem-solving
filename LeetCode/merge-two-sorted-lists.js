var mergeTwoLists = function(list1, list2) {
    
    let fa = []

    list1.map(n =>{
        fa.push(n)
    })

    list2.map(n =>{
        fa.push(n)
    })

    return fa.sort();
    
};