#pragma once

 

// Package: US_ToggleSenseMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass US_ToggleSenseMode.US_ToggleSenseMode_C
// 0x0018 (0x0050 - 0x0038)
class UUS_ToggleSenseMode_C final : public USBUtilityService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 SenseTag;                                          // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_US_ToggleSenseMode(int32 EntryPoint);
	void ReceiveOnDeactivate();
	void ReceiveOnActivate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"US_ToggleSenseMode_C">();
	}
	static class UUS_ToggleSenseMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUS_ToggleSenseMode_C>();
	}
};
static_assert(alignof(UUS_ToggleSenseMode_C) == 0x000008, "Wrong alignment on UUS_ToggleSenseMode_C");
static_assert(sizeof(UUS_ToggleSenseMode_C) == 0x000050, "Wrong size on UUS_ToggleSenseMode_C");
static_assert(offsetof(UUS_ToggleSenseMode_C, UberGraphFrame) == 0x000038, "Member 'UUS_ToggleSenseMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUS_ToggleSenseMode_C, SenseTag) == 0x000040, "Member 'UUS_ToggleSenseMode_C::SenseTag' has a wrong offset!");

}

