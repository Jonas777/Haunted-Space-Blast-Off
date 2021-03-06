//GameOver.h
//author jslink

#include "ViewObject.h"

class GameOver : public df::ViewObject{
private:
	int time_to_live;
	void step();

public:
	GameOver();
	int eventHandler(const df::Event *p_e);
	~GameOver();
	void draw(void);
};