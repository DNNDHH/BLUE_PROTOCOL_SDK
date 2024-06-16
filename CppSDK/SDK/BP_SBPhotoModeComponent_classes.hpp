#pragma once

 

// Package: BP_SBPhotoModeComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C
// 0x0008 (0x00E0 - 0x00D8)
class UBP_SBPhotoModeComponent_C final : public USBPlayerPhotoModeComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_SBPhotoModeComponent(int32 EntryPoint);
	void BP_OnCantStartPhotoMode(ESBPhotoModeStartState State);
	const class FName GetTextId(ESBPhotoModeStartState State);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBPhotoModeComponent_C">();
	}
	static class UBP_SBPhotoModeComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SBPhotoModeComponent_C>();
	}
};
static_assert(alignof(UBP_SBPhotoModeComponent_C) == 0x000008, "Wrong alignment on UBP_SBPhotoModeComponent_C");
static_assert(sizeof(UBP_SBPhotoModeComponent_C) == 0x0000E0, "Wrong size on UBP_SBPhotoModeComponent_C");
static_assert(offsetof(UBP_SBPhotoModeComponent_C, UberGraphFrame) == 0x0000D8, "Member 'UBP_SBPhotoModeComponent_C::UberGraphFrame' has a wrong offset!");

}

