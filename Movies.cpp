#include "Movies.hpp"
#include "Movie.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


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

void Movies::add_movie (string movie_title, string rating, int watch_count){
    bool status = watched(movie_title);
    if (status == true)
    {
    Movie movie(movie_title,rating,watch_count); 
    movies.push_back(movie);
    cout<<movie_title<<" has been added! "<<endl;
    }
    else{
        cout<<movie_title<<" already exists !"<<endl;
    }
}

void Movies::increment_count(string title){
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
}
 
 void Movies::display_list(){
     size_t size = movies.size();
     cout<<endl;
     for(size_t i{0}; i<size; i++){
         cout<<movies[i].getname()<<" , "<<movies[i].getrating()<<" , "<<movies[i].getcount()<<endl;
     }
 }
 

void Movies:: add_movie(string title)
{
    Movie movie(title);
    movies.push_back(movie);
    cout<<title<<" has been added!"<<endl;
}

Movies::Movies(){
    
}
Movies::~Movies()
{
}

