#pragma once
#include <iostream>

using namespace std;

enum class COLOR
{
    BLACK,
    WHITE
};

enum class GAME_STATUS
{
    NOT_STARTED,
    ACTIVE,
    STALEMATE,
    RESIGNATION,
    BLACK_WIN,
    WHITE_WIN,
    FORFEIT
};

enum class ACCOUNT_STATUS
{
    ACTIVE,
    CLOSED,
    CANCELLED,
    BLACK_LISTED,
    NONE
};