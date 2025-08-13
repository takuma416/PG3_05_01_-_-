#include "Scene.h"
#include "InputHandler.h"

void Scene::Initialize() {

	inputHandler = new InputHandler();

	inputHandler->AssignMoveRightCommand2PressKeyD();

	inputHandler->AssignMoveLeftCommand2PressKeyA();

	player_ = new Player();
	player_->Initialize();
}

void Scene::Update() {

	Command* command = inputHandler->HandleInput();

	if (command) {
		command->Execute(player_);
	}

	player_->Update();
}

void Scene::Draw() {

	player_->Draw();
}
