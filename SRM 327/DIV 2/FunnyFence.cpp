#include <string>

using namespace std;

class FunnyFence {

public:
	int getLength(string s){
		int ret = 0;
		int counter = 1;
		
		for (int i = 1; i < s.length() ; ++i){
			if(s[i] == s[i-1]){
				if(counter > ret){
					ret = counter;
				}
				counter = 1;
			} else{
				counter++;
			}
		}
		
		if(counter > ret){
			ret= counter;
		}
		
		return ret;
	}

};
