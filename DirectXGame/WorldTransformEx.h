#pragma once
//#include "C:\Users\raia0\OneDrive\デスクトップ\課題\CG5\CG5\External\KamataEngine\include\3d\WorldTransform.h"
#include "KamataEngine.h"

class WorldTransformEx : 
	public KamataEngine::WorldTransform
{
public:
	// Affine変換行列の生成と定数バッファの転送を行う
	void UpdateMatrix();

	// Affine変換行列の生成
	KamataEngine::Matrix4x4 MakeAffineMatrix();
};