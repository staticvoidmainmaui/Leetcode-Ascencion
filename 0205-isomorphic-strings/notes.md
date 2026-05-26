to be able to add mapping
1) check the mapping doesnt already exists      -                   why? because then we dont have to check
2) check reverse mapping, if key is already seen(counted) then      it has already been mapped, we lookup mapping in ttoS, looking for what it maps to 
3) check if ttoS value of key is not equal to current char of S     why? becuase then it was seen and it is not mapping to the same one

4) explanatin=on: what is in the map , has a value attached to what its mapped to or should be currently seeing
5) so if we see it then the mapping should equal the same char we are currently looking at.

everthing needs to map, if a new char to check then make sure it equals the current value backwards, 
if it is a new mapping , then yes of course
if it is not , and there is a preexisitng mapping then double check whats stored is the char you are checking

Lastly the foward check , is that if it the original s and t character review doesnt equal eachother, which means it doesnt map to itself. 

Then if the new mapping for that character is not new (if(stoT[s[i] !=/0) ) meaning it maps to a char not from t, not the current one we are wathching.

 In other words:
  - stoT[s[i]] != charFromT AND stoT[s[i]] != '\0' → Conflict! One s-char mapping to multiple t-chars
