#include<iostream>
#include<string>
#include<sstream>
using namespace std;

struct movie{
    string title;
    int year;
} movies[100];
int main(){
    int n,i;
    string mystr;
    cout << "Enter number of movies" << endl;
    getline(cin,mystr);
    stringstream(mystr) >> n;
    for(i=0; i<n; i++){
        movie m;
        cout << "Enter Title of the movie: " ;
        getline(cin,m.title);
        cout << "Enter the year: ";
        getline(cin, mystr);
        stringstream(mystr) >> m.year;
        movies[i] = m;
    }
    cout << "List of movies "<< endl;
    for(i = 0; i < n; i++){
        cout << movies[i].title << " " << movies[i].year << endl;
     }
    return 0;
}