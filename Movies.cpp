#include "Movies.hpp"
#include "Movie.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;



void Movies::display_menu(){
    cout<<"1    Add a movie\n2    Increment a movie count\n3    Display list of your movies\n4    Quit"<<endl;
    cout<<"Option: ";
    cin>>option;
    while (option != '4'){
        switch(option){
            case '1':
            {
                    add_movie();
            }
            break;
            
            case '2':
            {
                increment_count();
            }
            break;
            
            case '3':
            {
                display_list();
            }
            break;
            
            default:
            {
                
            }
        }
    }
}

bool Movies::watched(string movie_name){
    bool isnotwatched {true};
    size_t size = movies.size();
    for(size_t i {0}; i<size; i++){
        if( movies[i].getname() == movie_name){
            isnotwatched = false;
        }
    }
    return isnotwatched;
}

void Movies::add_movie (){
//    string movie_title, string rating, int watch_count
    int num {0}, watch_count_input{};
    string movie_title{};
    string rating_input {};
    
    cout<<"How many movies will you like to add? : ";
    cin>>num;
    for (int i {0}; i< num; i++){
        cout<<"Movie title: ";
        cin.ignore(1, '\n');
        getline(cin, movie_title);
        movie_title = capitalise(movie_title);
        bool status = watched(movie_title);
        
         if (status == true)
               {
                 cout<<"Rating: ";
                 getline(cin,rating_input);
                 cout<<"Watch Count: ";
                 cin>>watch_count_input;
                Movie movie(movie_title,rating_input,watch_count_input); 
                movies.push_back(movie);
                cout<<movie_title<<" has been added! "<<endl<<endl;
                }
                else{
                    cout<<movie_title<<" already exists !"<<endl;
                    }
    }
    display_menu();
}

void Movies::increment_count(){
    string title {};
    cout<<"What movie count do you want to increment?: ";
    cin.ignore(1,'\n');
    getline(cin, title);
    title = capitalise(title);
    bool isavailable {false};
    size_t p {0};
    size_t size = movies.size();
    for(size_t i {0}; i<size; i++){
        if( movies[i].getname() == title){
            isavailable = true;
            p = i;
        }
    }
    if ( isavailable == true){
        movies[p].increasecount();
        cout<<title<<" has been incremented! "<<endl;
    }
    else  {
        cout<<title<<" is not on the list"<<endl;
    }
    display_menu();
}
 
 void Movies::display_list(){
     size_t size = movies.size();
     cout<<endl;
     for(size_t i{0}; i<size; i++){
         cout<<movies[i].getname()<<" , "<<movies[i].getrating()<<" , "<<movies[i].getcount()<<endl;
     }
     display_menu();
 }
 
 void Movies::quit(){
     cout<<"Good-Bye "<<endl;
     option= '4';
 }

string Movies::capitalise(string input){
    string reform {};
    for (auto letters : input){
        letters = toupper(letters);
        reform += letters;
    }
    input = reform;
    return input;
}
//void Movies:: add_movie(string title)
//{
//    Movie movie(title);
//    movies.push_back(movie);
//    cout<<title<<" has been added!"<<endl;
//}

Movies::Movies(){
    
}
Movies::~Movies()
{
}

