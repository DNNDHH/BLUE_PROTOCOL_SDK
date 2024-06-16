#pragma once

 

// Package: US_SetPartyStrategy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EAIPartyStrategy_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass US_SetPartyStrategy.US_SetPartyStrategy_C
// 0x0010 (0x0048 - 0x0038)
class UUS_SetPartyStrategy_C final : public USBUtilityService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EAIPartyStrategy                              Stragety;                                          // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_US_SetPartyStrategy(int32 EntryPoint);
	void ReceiveOnDeactivate();
	void ReceiveOnActivate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"US_SetPartyStrategy_C">();
	}
	static class UUS_SetPartyStrategy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUS_SetPartyStrategy_C>();
	}
};
static_assert(alignof(UUS_SetPartyStrategy_C) == 0x000008, "Wrong alignment on UUS_SetPartyStrategy_C");
static_assert(sizeof(UUS_SetPartyStrategy_C) == 0x000048, "Wrong size on UUS_SetPartyStrategy_C");
static_assert(offsetof(UUS_SetPartyStrategy_C, UberGraphFrame) == 0x000038, "Member 'UUS_SetPartyStrategy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUS_SetPartyStrategy_C, Stragety) == 0x000040, "Member 'UUS_SetPartyStrategy_C::Stragety' has a wrong offset!");

}

