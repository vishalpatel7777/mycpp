#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main()
{

    string s = " 2 1.20 4.24242 here is can say Hello World";
    stringstream ss; // create a stringstream object with the string s

    ss << s; // insert the string s into the stringstream object

    int a = 0;
    float b = 0.0;
    char c = 0;
    double d = 0.0;
    string str;

    ss >> a >> b >> c >> d >> str; // extract data from the stringstream object

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "str = " << str << endl;

    {
        // lets use stringstream to find the count of words in a string input which given in from arr2 
        string input = "Paracetamol 500mg + Ibuprofen 400mg + Amoxicillin 250mg + Cetirizine 10mg + Dolo 650mg + Azithromycin 500mg + Pantoprazole 40mg + Rantac 150mg + Metformin 500mg + Amlodipine 5mg + Allegra 120mg + Paracetamol 650mg + Dolo 500mg";

        map <string , int > wordscount;


        stringstream my ;
        my <<input; // insert the string input into the stringstream object

        string word ;
        while (my >> word) { // extract words from the stringstream object
            wordscount[word]++; // count the occurrences of each word
        }
        
       cout << "alll counts : " <<endl;
       for (auto &pair : wordscount){
        cout << pair.first << " " << pair.second << endl;
       } 

        
    }

    return 0;
}

/*
  stringstream : it is used to perform input and output operations on strings.
  we have to include  #include <sstream> to use stringstream.
  there is basic method :
    clear() : it is used to clear the state flags of the stringstream object.
    str() : it is used to get the string stored in the stringstream object.
    str(s) : it is used to set the string stored in the stringstream object to the string s.
    << : it is used to insert data into the stringstream object.
    >> : it is used to extract data from the stringstream object.

*/