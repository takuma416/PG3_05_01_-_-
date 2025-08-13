#include "Player.h"
#include <Novice.h>

void Player::Initialize() {
	position_ = { 200.0f,200.0f };
}

void Player::Update() {}

void Player::Draw() {
	Novice::DrawBox(static_cast<int>(position_.x), static_cast<int>(position_.y), 100, 100, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	this->position_.x += speed_;
}

void Player::MoveLeft() {
	this->position_.x -= speed_;
}