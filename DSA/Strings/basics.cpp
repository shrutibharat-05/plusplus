#include <iostream>
using namespace std;

// strings does not consider-tab,enter,space

//1-->length of string 
  int getLen(char name[]){
        int count=0;
        for(int i=0; name[i]!='\0';i++){
            count++;
        }
        return count;

}
//2--> reverse
void reverse(char s[],int n){
    int i = 0, j = n - 1;
    while (i < j){
        swap(s[i++],s[j--]);
    }
}

//3-->palindrome:
bool palind(char str[],int n){
    int i = 0, j = n - 1;
    while (i < j){
        if(str[i++] != str[j--]){
            return false;
            i++;
            j--;
}
        else{
            return true;
        }
    }

}



//4--> strict palindrome(including long strings)
#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.
        int start = 0; 
        int last = s.length()-1;
        while(start<last){
		// Move left index to the right while it's not an alphabetic character
            while(start<last && !isalnum(s[start])){
                start++;
            }
			 // Move right index to the left while it's not an alphabetic character
            while(start<last && !isalnum(s[last])){
                last--;
            }
			// Compare characters, if they don't match return false
            if(tolower(s[start]) != tolower(s[last])){
                return false;
            }
			// Move towards the center
            start++;
            last--;
        }
		// If we went through the whole string, it's a palindrome
        return true;
}


//5--> to lowercase:
char lowercase(char ch){
    if((ch >= 'a' && ch <= 'z')|| (ch>=0 && ch<=9)){
       return ch;
}
else{
    char temp= ch - 'A'+'a';
    return temp;
}
}
//MAIN FUNCTION;
int main(){
    char name[20];
    cout<< "enter your name:";
    cin>>name;
    //name[2]='\0'; ---> this will cut the string *from 2nd index--> /0 is null char
    cout<<"your name is "<<name <<endl;
    int len=getLen(name);

    
    cout<<"length is "<< getLen(name) <<endl;
    reverse(name,len);
    cout<<"reverse name is "<< name<<endl;
    cout<<"is palindrome "<<palind(name,len)<<endl;

    }
    

