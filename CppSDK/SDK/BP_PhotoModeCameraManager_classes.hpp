#pragma once

 

// Package: BP_PhotoModeCameraManager

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PhotoModeCameraManager.BP_PhotoModeCameraManager_C
// 0x0000 (0x34E0 - 0x34E0)
class ABP_PhotoModeCameraManager_C final : public APlayerCameraManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PhotoModeCameraManager_C">();
	}
	static class ABP_PhotoModeCameraManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PhotoModeCameraManager_C>();
	}
};
static_assert(alignof(ABP_PhotoModeCameraManager_C) == 0x000010, "Wrong alignment on ABP_PhotoModeCameraManager_C");
static_assert(sizeof(ABP_PhotoModeCameraManager_C) == 0x0034E0, "Wrong size on ABP_PhotoModeCameraManager_C");

}

