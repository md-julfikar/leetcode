class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        ans={};
        for word in strs:
            sorted_word=''.join(sorted(word))
            if sorted_word not in ans:
                ans[sorted_word]=list()
            ans[sorted_word].append(word)
        return [val for _,val in ans.items()]
    
ans=Solution();
print(ans.groupAnagrams(["eat","tea","tan","ate","nat","bat"]))
        