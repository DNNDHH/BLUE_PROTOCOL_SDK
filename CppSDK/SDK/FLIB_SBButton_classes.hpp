#pragma once

 

// Package: FLIB_SBButton

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FLIB_SBButton.FLIB_SBButton_C
// 0x0000 (0x0028 - 0x0028)
class UFLIB_SBButton_C final : public UBlueprintFunctionLibrary
{
public:
	static void SetSBButtonParam(class USBButton_C* Target, class UAkAudioEvent* PressedSound, class UAkAudioEvent* HoveredSound, ESystemSE PressedSoundId, ESystemSE HoveredSoundId, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FLIB_SBButton_C">();
	}
	static class UFLIB_SBButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFLIB_SBButton_C>();
	}
};
static_assert(alignof(UFLIB_SBButton_C) == 0x000008, "Wrong alignment on UFLIB_SBButton_C");
static_assert(sizeof(UFLIB_SBButton_C) == 0x000028, "Wrong size on UFLIB_SBButton_C");

}

