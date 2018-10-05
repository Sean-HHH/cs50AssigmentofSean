// Helper functions for music

#include <cs50.h>
#include <math.h>
#include "helpers.h"
#include <string.h>

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    //convert numberator and denominatoe as int
    int numerator = fraction[0];
    int denominator = fraction[2];

    //assume text as eights notes
    return (8 / denominator) * numerator;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    int octave = note[strlen(note) - 1];
    double freq = 0.0;
    //Set baseline of A4
    if (note[0] == 'A' )
    {
        freq = 440;
    }
    else if(note[0] == 'B')
    {
        freq = 440 * (pow( 2.0, (1 / 12)));
    }
    else if(note[0] == 'C')
    {
        freq = 440 / (pow( 2.0, (9 / 12)));
    }
    else if(note[0] == 'D')
    {
        freq = 440 / (pow( 2.0, (7 / 12)));
    }
    else if(note[0] == 'E')
    {
        freq = 440 / (pow( 2.0, (5 / 12)));
    }
    else if(note[0] == 'F')
    {
        freq = 440 / (pow( 2.0, (4 / 12)));
    }
    else if(note[0] == 'G')
    {
        freq = 440 / (pow( 2.0, (2 / 12)));
    }

    //set rules when moving octave
    if(octave > 4)
    {
        for(int i = 0; i< (octave - 4); i++)
        {
            freq *= 2;
        }
    }
    else if(octave < 4)
        for(int i = 0; i< 4 - octave; i++)
        {
            freq /= 2;
        }
    //support # & b
    if(note[1] == '#')
    {
        freq = freq * (pow(2,(1/12)));
    }
    else if(note[1] == 'b')
    {
        freq = freq / (pow(2,(1/12)));
    }
    return round(freq);
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if(s[0] == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}
