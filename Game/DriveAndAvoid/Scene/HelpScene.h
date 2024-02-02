#pragma once

#include "SceneBase.h"

class HelpScene : public SceneBase
{
private:
	int background_image;  //îwåiâÊëú

public:
	HelpScene();
	virtual Å`HelpScene();

	virtual void Initialize() override;
	virtual eSceneType Update() override;
	virtual void Draw() const override;
	virtual void Finalize() override;

	virtual eSceneType GetNowScene() const override;
};