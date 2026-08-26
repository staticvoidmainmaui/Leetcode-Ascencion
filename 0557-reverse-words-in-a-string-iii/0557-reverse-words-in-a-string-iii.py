class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s=list(s)
        n=len(s)
        start=0
        
        end=0
        while(start<n):
            #next char with end=start
            end=start
            # seperated by a sinlge space only ...
            while(end<n and s[end] !=' '): 
                #iterate foward till end of word or end of string
                end+=1
            left= start
            right=end-1
            while(left<right) :
                s[left], s[right] = s[right], s[left]
                left+=1
                right= right-1
            # seperated by single space- after condition is clear move on to next char 
            start= end+1
    
        return ''.join(s)
        