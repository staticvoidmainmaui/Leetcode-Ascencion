class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> stoT; //s-> t mapping
        unordered_map<char,char> ttoS; //t-S mapping
        
        
        if(s.length()!=t.length()) return false;
        
        for(int i=0; i< s.length(); i++) {
            char charFromS=s[i];
            char charFromT=t[i];
            //mapping[s[i]]=t[i]; egg->add g->d g-> else
            if(stoT[s[i]]==charFromT){
                continue;
            }else{
                if(stoT[s[i]]=='\0'){ //use "\0" for bool check for chars and cheks if didnt exsit then check if already used b->d with reverse check of if 
                    if(ttoS.count(charFromT)) { //checks if already mapped
                        if(ttoS[t[i]]!=charFromS) return false; //checcking the reverse map and if equal to current S
//if it does not then its owned by something different !
                    }
                    stoT[s[i]]=charFromT;//add new value if appended with default value 
                    ttoS[t[i]]=charFromS;                         
                } else{
                    return false;
                }
            }
            
        }
        return true; 
        }
    };