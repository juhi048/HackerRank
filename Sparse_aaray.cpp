vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int>mp;
    for(int i=0;i<stringList.size();i++){
        mp[stringList[i]]++;
    }
    vector<int>result;
    for(int i=0;i<queries.size();i++){
        if(mp.find(queries[i])==mp.end()){
            result.push_back(0);
        }
        else{
            result.push_back(mp[queries[i]]);
        }
    }
    return result;
}
