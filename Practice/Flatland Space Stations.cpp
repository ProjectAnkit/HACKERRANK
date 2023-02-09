int flatlandSpaceStations(int n, vector<int> c) {
      
    vector< int>exact;
    int min,p,max;
        vector<int>values;
    
    for(int a=0;a<n;a++)
      {
    for(int i=0;i<c.size();i++)
       {
        p = abs(c[i]-a);
        values.push_back(p);
      }
       min = *min_element(values.begin(),values.end());
      exact.push_back(min);
      values.clear();
      
    }
     max=*max_element(exact.begin(),exact.end());
     cout<<max;
    return max;
    
}
