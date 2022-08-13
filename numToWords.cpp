#include<iostream>
#include<string>
using namespace std;
string NumberToWord(long n){
    switch(n){
        case 0:
            return "zero";
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        case 10:
            return "ten";
        case 11:
            return "eleven";
        case 12:
            return "tweleve";
        case 13:
            return "thirteen";
        case 14:
            return "fourteen";
        case 15:
            return "fifteen";
        case 16:
            return "sixteen";
        case 17:
            return "seventeen";
        case 18:
            return "eighteen";
        case 19:
            return "nineteen";
        case 20:
            return "twenty";
        case 30:
            return "thirty";
        case 40:
            return "fourty";
        case 50:
            return "fifty";
        case 60:
            return "sixty";
        case 70:
            return "seventy";
        case 80:
            return "eighty";
        case 90:
            return "ninety";
        default:
            return "";
}
}
string TwoDigitsNumberToWord(long n){
    int a, b;
    string WordA, WordB;
    if(n<=20){
        return NumberToWord(n);
    }
    b = n%10;
    a = n - b;

    WordA = NumberToWord(a);
    WordB = NumberToWord(b);
    if(b==0){
        return WordA;
    }
    return WordA + " " + WordB;
}
//786
string ThreeDigitsNumberToWord(long n){
    int c, d;
    string WordC, WordD;
    if(n<=99){
        return TwoDigitsNumberToWord(n);
    }
    c = n%100;
    d = n/100;

    WordC = NumberToWord(d);
    WordD = TwoDigitsNumberToWord(c);
    if(c==0){
        return WordC + "  Hundred  ";
    }
    return WordC + " Hundred " + WordD;
}

int main(){
    long num;
    cin>>num;
    string ans;
    // for(long i=0; i<=20; i++){
    //     ans = NumberToWord(i);
    //     cout<<ans<<endl;
    // }
    ans = ThreeDigitsNumberToWord(num);
    cout<<num<<" "<<ans<<endl;
}