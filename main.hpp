//
// Created by Griffin Thompson on 9/20/22.
//

#ifndef INC_03NB_FAVORITE_MOVIES_MAIN_HPP
#define INC_03NB_FAVORITE_MOVIES_MAIN_HPP

#include <string>

enum Rating {G, PG, PG13, R, X};

struct Movie {
    std::string movieTitle;
    int year;
    Rating movieRating;
};

std::string getRating(Rating rating);

void displayMovie(const Movie& movie);

#endif //INC_03NB_FAVORITE_MOVIES_MAIN_HPP
