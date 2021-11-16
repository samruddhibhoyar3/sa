class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
       
    int xornums=0;
    for(int i=0;i<n;i++)
    {
        xornums^=arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        xornums^=i;
    }
    int x,y;
    int rsb=xornums & -xornums;
    for(int i=1;i<=n;i++)
    {
        if((i&rsb)==0)
        {
            x=x^i;
        }
        else
        {
            y=y^i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if((arr[i]&rsb)==0)
        {
            x=x^i;
        }
        else
        {
            y=y^i;
        }
    }
    int missing=0,repeating=0;
int *ans = new int[2];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            repeating=x;
            missing=y;
            break;
        }
        else if(arr[i]==y)
        {
            repeating=y;
            missing=x;
            break;
        }
    }
  
     
        ans[0] = repeating;
        ans[1] = missing;
        return ans;
        
    
};
