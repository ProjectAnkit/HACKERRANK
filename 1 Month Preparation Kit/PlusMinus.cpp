void plusMinus(vector<int> arr) {
    double count1=0;
    double count2=0;
    double count3=0;
    double x,y,z;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>0)
        {
            count1++;
        }
        else if(arr[i]<0)
        {
            count2++;
        }
        else if(arr[i]==0)
        {
           count3++; 
        }
    }
    x = count1/arr.size();
    y = count2/arr.size();
    z = count3/arr.size();
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}
