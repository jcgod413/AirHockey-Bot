#ifndef AHR
#define AHR

#define SCREEN_WIDTH  640
#define SCREEN_HEIGHT 480

#define RETURN_ERROR -1

enum BoardPosition  {
    LEFT_TOP,
    RIGHT_TOP,
    RIGHT_BOTTOM,
    LEFT_BOTTOM,
    END,
    RESET_BOARD_AREA
};

enum BallDirection  {
    PAUSE,
    NORTH_EAST,
    SOUTH_EAST,
    SOUTH_WEST,
    NORTH_WEST
};

#endif // AHR

