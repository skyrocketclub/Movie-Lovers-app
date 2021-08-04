#include "Movies.hpp"
#include "Movie.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


void Movies::add_movie (string movie_title, string rating, int watch_count){
    Movie movie(movie_title,rating,watch_count); 
    movies.push_back(movie);
    cout<<movie_title<<" has been added! "<<endl;
}

void Movies::increment_count(string title){
    
}
 
 void Movies::display_list(){
     
 }
 
string Movies::getname() const{
    return movie_title;
}

string Movies::getrating() const {
    return rating;
}
int Movies::getcount() const{
    return count;
}

Movies::Movies()
{
}

Movies::~Movies()
{
}

//class Movies
// *  private:
// *  std::string movie_title;
// *  std::string rating;
// *  int watch_count;
// * 
// *  public:
// *  add_movie( std::string movie_title, std::string rating, int watch_count);
// *  increment_count( std::string movie_title);
//
// *  display_list();
