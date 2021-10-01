class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length()==1 || numRows==1) return s;
        numRows = min(numRows, (int)s.length());
        vector<string> zigZag(numRows);
        int start=0;
        bool goingDown = false;
        for(int i=0;i<s.length();i++){
            zigZag[start]+= s[i];

            if(start==0 || start==numRows-1) goingDown = !goingDown;
            start+= goingDown ? 1:-1;
        }

        string ans;
        for(string s:zigZag) ans+=s;
        return ans;
    }
};
