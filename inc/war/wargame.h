#ifndef WARGAME_H_
#define WARGAME_H_

/* Quits the game; also should call hands_destroy() */
void quit_wargame();

/* Saves the current game state to a text file */
void save_wargame();

/* Starts a new game */
void start_new_wargame();

/* Starts a saved game */
void start_saved_wargame();

/* Launches war, i.e. this game */
void war();

#endif /* WARGAME_H_ */
