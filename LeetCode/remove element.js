var removeElement = function(nums, val) {
    for(let i = 0 ;i < nums.length;i++){
        if(nums[i] == val){
            nums[i] = "_";
            i++;
        }
    }

    let a =  nums.sort();
    return a;
};





console.log(removeElement([3,2,2,3],3)) 