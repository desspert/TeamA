
#include "Collision.h"

bool Collision(Vec2f pos1, Vec2f size1, Vec2f pos2, Vec2f size2){
	if (pos1.x() + size1.x() >= pos2.x()){
		if (pos1.x() <= pos2.x() + size2.x()){
			if (pos1.y() + size1.y() >= pos2.y()){
				if (pos1.y() <= pos2.y() + size2.y()){
					return true;
				}
			}
		}
	}
	return false;
}

bool collision2(Vec2f pos, Vec2f box_pos, Vec2f box_size) {

    return (pos.x() >= box_pos.x())
        && (pos.x() <= (box_pos.x() + box_size.x()))
        && (pos.y() >= box_pos.y())
        && (pos.y() <= (box_pos.y() + box_size.y()));
}
