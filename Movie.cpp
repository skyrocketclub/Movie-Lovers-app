#include "Movie.hpp"

Movie::Movie(string title, string rating_val, int count_val)
{
    movie_title = title;
    rating = rating_val;
    count = count_val;
}

Movie::~Movie()
{
}

