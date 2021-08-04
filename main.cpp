/*
 * THE MOVIE LOVERS APP
 * 
 * PURPOSE OF THE APP
 *      To keep track of the movies they have watched and how many times they have watched the movie 
 *
 * THE MAKING OF THE APP
 * 
 *  There will be 2 Classes
 * 
 *  class movie
 *  friend class Movies; 
 *  private: 
 *  vector <string> movie_name
 *  vector <string> movie_rating ***( PG - 13, 18+ )***
 *  vector <int> watch_count 
 * 
 * public:
 * 
 * 
 *  class Movies
 *  private:
 *  std::string movie_title;
 *  std::string rating;
 *  int watch_count;
 * 
 *  public:
 *  add_movie( std::string movie_title, std::string rating, int watch_count);
 *  increment_count( std::string movie_title);

 *  display_list();
 *  
 * */


#include <iostream>
#include "Movies.hpp"

int main() {
    Movies my_movies;
    my_movies.add_movie("snow white", "PG 13",1);
//    my_movies.increment_count("snow white");
    my_movies.display_list();
    return 0;
}
