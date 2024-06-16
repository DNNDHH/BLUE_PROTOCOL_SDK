#pragma once

 

// Package: FLIB_PlayerSceneCapture2D

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C
// 0x0000 (0x0028 - 0x0028)
class UFLIB_PlayerSceneCapture2D_C final : public UBlueprintFunctionLibrary
{
public:
	static class ABP_PlayerSceneCapture2D_Studio_C* SpawnPlayerCaptureStudio(int32 Priority, class UObject* __WorldContext);
	static void Find_Curr_Map_Player_Avatar_Transform(const class FString& InCurrMapName, class UObject* __WorldContext, struct FTransform* OutTransform);
	static void GetAnalogStickRotate(class UObject* __WorldContext, bool* bValid, float* RotateValue);
	static void GetMouseRotate(class UObject* __WorldContext, bool* bValid, float* RotateValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FLIB_PlayerSceneCapture2D_C">();
	}
	static class UFLIB_PlayerSceneCapture2D_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFLIB_PlayerSceneCapture2D_C>();
	}
};
static_assert(alignof(UFLIB_PlayerSceneCapture2D_C) == 0x000008, "Wrong alignment on UFLIB_PlayerSceneCapture2D_C");
static_assert(sizeof(UFLIB_PlayerSceneCapture2D_C) == 0x000028, "Wrong size on UFLIB_PlayerSceneCapture2D_C");

}

