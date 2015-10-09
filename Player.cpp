#include "Player.h"

Player::Player(){
	pos = Vec2f::Zero();
	size = Vec2f(200, 200);
	direction = DIRECTION_UP;
	angle = 0;
}
Vec2f Player::GetPos(){
	return pos;
}
Vec2f Player::GetSize(){
	return size;
}
Vec2f Player::GetCenterPos(){
	return pos + size / 2;
}
int Player::Direction(){
	return direction;
}
void Player::Update(){


}
void Player::ChangeAngle(char up_block, char down_block, char left_block, char right_block){
	if (up_block != 1){
		if (ENV.isPressKey(GLFW_KEY_UP)){

		}
	}
	if (down_block != 1){
		if (ENV.isPressKey(GLFW_KEY_DOWN)){


		}
	}
	if (left_block != 1){
		if (ENV.isPressKey(GLFW_KEY_LEFT)){


		}
	}
	if (left_block != 1){
		if (ENV.isPressKey(GLFW_KEY_RIGHT)){

		}
	}
}
void Player::Move(){

	if (ENV.isPressKey(GLFW_KEY_UP)){
		angle = 90;
	}


	if (ENV.isPressKey(GLFW_KEY_DOWN)){


	}

	if (ENV.isPressKey(GLFW_KEY_LEFT)){


	}


	if (ENV.isPressKey(GLFW_KEY_RIGHT)){

	}

}

void Player::Smoke(){
	if (ENV.isPushKey(GLFW_KEY_LEFT_CONTROL)){

	}
}
void Player::Draw(){
	drawTextureBox(pos.x() - size.x() / 2, pos.y() - size.y() / 2, size.x(), size.y(), 0, 0, 64, 64, tx, Color::white);
}