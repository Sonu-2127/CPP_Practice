#include "Arrays.h"

const int ROWS_AS_USER = 3;
const int COLUMN_AS_MOVIES = 4;
int movie_rating [ROWS_AS_USER][COLUMN_AS_MOVIES] {0};

void getMovieRatings()
{
    for(int i = 0; i < ROWS_AS_USER; i++)
    {
        for(int j = 0; j < COLUMN_AS_MOVIES; j++)
        {
            cin >> movie_rating[i][j];
        }
    }
}

void showMovieRatings()
{
    for(int i = 0; i < ROWS_AS_USER; i++)
    {
        for(int j = 0; j < COLUMN_AS_MOVIES; j++)
        {
            cout << movie_rating[i][j];
        }
        cout << "\n";
    }
}

int main(void)
{
    getMovieRatings();
    showMovieRatings();
    return 0;
}