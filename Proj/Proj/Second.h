#pragma once
#include "Windows.h"

//Screen that lets player decide the bet amount
class Second :public Windows {
public:
    void Screen(sf::RenderWindow& window, vector<Entity*>& vec_ent) override;
private:
    //unused function for creating texts - didnt work
    void createVec_txt(const vector<Entity*>& vec_ent, vector<sf::Text>& vec_txt);

};
