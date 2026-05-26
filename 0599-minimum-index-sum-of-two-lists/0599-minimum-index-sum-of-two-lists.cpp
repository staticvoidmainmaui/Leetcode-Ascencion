class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        // i would first do overarching while loop to check for common strings in the first place, 
            //body : map all of the first ones to a index,  then check across the other one if it exists , i dont think we need the index of the next vecotr as we can pull that out as we findmatching strings
            //next we can make sure to have a variable tracking the lowest index sum match when it does happen, only updating when it is less than the one saved
        unordered_map<string, int> setofList1;
        vector<string> returnList;
        for(int i=0; i< list1.size(); i++){
            setofList1[list1[i]]= i;
        }
        
        int lowestsum=INT_MAX;

        for(int i=0; i<list2.size();i++){
            //check if key() matches vector value(string) , so key should also be string
            if(setofList1.count(list2[i])) { //count is the identifying tag
                int indexsum = setofList1[list2[i]] + i; //adding index value , only known by seeing what restuarant tag we are checking right now + the index of i of list 2.
                if(indexsum<lowestsum){
                    lowestsum=indexsum;
                    //returnlist pushback
                    returnList.clear();
                    returnList.push_back(list2[i]);
                } else if(indexsum == lowestsum){
                    returnList.push_back(list2[i]);
                }

            }

        }
        //we have to track all the strings containing that lowet sum , if it gets updated as we go , the lowest sum , we add identifiers to it as we go ,updating the lowest sum and the list if we do
        return returnList;
                
    }
};