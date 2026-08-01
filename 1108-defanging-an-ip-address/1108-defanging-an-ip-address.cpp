class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size()-1;

        for(int i = 0; i < n; i++){
            if(address[i] == '.'){
                address.insert(i, 1, '[');
                i = i+2;
                address.insert(i, 1, ']');
                n = n+2;
            }
        }

        return address;
    }
};