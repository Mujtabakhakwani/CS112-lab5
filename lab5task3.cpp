#include<iostream>
using namespace std;
class stringtype {
private:
	string str1;
	string str2;
	int l1 = 0;
	int l2 = 0;
  /*  string st1;
    string st2;*/

	
public:
	void setvalues(string st1,string st2) {
		str1=st1;
		str2=st2;

	}
	void printvalues() {
		cout << "string 1 is " << str1 << endl;
		cout << "string 2 is " << str2 << endl;
	}
	int maxlenght() {
		//int l1, l2;
		int i = 0;
		int j = 0;
		while (str1[i] != '\0') {
			l1++;
			i++;
		}
		while (str2[j] != '\0') {
			l2++;
			j++;
		}
		int maxlenght = l2;
		if (l1> l2)
			maxlenght = l1;
        return maxlenght;
	}
	int compare(string s1, string s2) {
		//int l1, l2;
		int maxlen = l1;
		if (l2 > l1)
			maxlen = l2;
		for (int i = 0; i < maxlen; i++) {
			if (str1[1] > str2[i]) {
				return 1;
			}
			if (str1[i] < str2[i]) {
				return -1;
			}
		}
	}
	void copy(string source, string &destiaton) {
		destiaton = source;
	}
	string concatenate(string s1, string s2) {
		string cat = str1 + str2;
		return cat;
	}
	int searchWord(string word) {
        if(word==str1){
            cout<<"word found"<<endl;
        }
        if(word==str2){
            cout<<"word found"<<endl;
        }
        if(word!=str1 && word!=str2){
            cout<<"no word found"<<endl;
        }
	}
	int searchChar(char ch) {
        for (int i = 0; i < str1.length(); i++) {
            if (ch == str1[i]) {
                cout << "char exist in string 1" << endl;
                return 1;
            }
        }
        for (int i = 0; i < str2.length(); i++) {
            if (ch == str2[i]) {
                cout << "char exist in string 2" << endl;
            return 1;
            }
	    }
        return 0;
    }
};
int main() {
	int option;
	string word;
    char ch;
	stringtype st;
	string str1, str2;
	cout << "enter string 1" << endl;
	cin >> str1;
	cout << "enter string 2" << endl;
	cin >> str2;
    st.setvalues(str1,str2);


	while (true) {
		cout << "enter option " << endl;
		cin >> option;

		cout << "enter 1 for print value" << endl;
		cout << "enter 2 for max lenght" << endl;
		cout << "enter 3 for compare" << endl;
		cout << "enter 4 for copy string" << endl;
		cout << "enter 5 for concatenation" << endl;
		cout << "enter 6 for search word" << endl;
		cout << "enter 7 for search char" << endl;
		cout << "enter 8 for exit" << endl;

		switch (option) {
		case 1:
			st.printvalues();
			break;
		case 2:
			cout << "maxlenght is " << st.maxlenght() << endl;

			break;
		case 3:
			cout << st.compare(str1, str2) << endl;
			break;
		case 4:
			st.copy(str1, str2);
            cout<<str2<<endl;
			break;
		case 5:
			cout << st.concatenate(str1, str2) << endl;
			break;
		case 6:
            cout<<"enter word to find"<<endl;
            cin>>word;
			st.searchWord(word);
			break;
		case 7:
        cout<<"enter character to find"<<endl;
        cin>>ch;
			cout << st.searchChar(ch) << endl;
			break;

		}



	}




}
	

