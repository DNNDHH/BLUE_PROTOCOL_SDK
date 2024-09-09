#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLIB_PlayerSceneCapture2D_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetMouseRotate(class UObject* __WorldContext, bool* bValid, float* RotateValue);
		void GetAnalogStickRotate(class UObject* __WorldContext, bool* bValid, float* RotateValue);
		void FindCurrMapPlayerAvatarTransform(const class FString& InCurrMapName, class UObject* __WorldContext, struct FTransform* OutTransform);
		class ABP_PlayerSceneCapture2D_Studio_C* SpawnPlayerCaptureStudio(int32_t Priority, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
