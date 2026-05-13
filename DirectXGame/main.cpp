#include <Windows.h>
#include "KamataEngine.h"

using namespace KamataEngine;

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int)
{
	//エンジンの初期化
	KamataEngine::Initialize(L"LE3D_04_イソベ_リクリ_CG5");
	DirectXCommon* dxCommon = DirectXCommon::GetInstance();

	//メインループ
	while (true)
	{
		if (KamataEngine::Update())
		{
			break;
		}
	}
	//描画開始
	dxCommon->PreDraw();



	//描画終了
	dxCommon->PostDraw();


	KamataEngine::Finalize();

	return 0;
}
