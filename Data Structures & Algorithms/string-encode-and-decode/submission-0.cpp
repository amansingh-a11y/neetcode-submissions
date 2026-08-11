class Solution {
public:

    string encode(vector<string>& strs) {
        string encode;
        for(const string& s: strs){
            encode += to_string(s.length())+"#"+s;
    }
        return encode;

    }

    vector<string> decode(string s) {
        vector<string>decoded;
        int i=0;
        while(i<s.size()){
            int delmitrpos=s.find('#',i);
            int stringlen=stoi(s.substr(i,delmitrpos-i));
            i=delmitrpos+1;
            string str=s.substr(i,stringlen);
            decoded.push_back(str);
            i+=stringlen;
        }
        return decoded;


    }
};
