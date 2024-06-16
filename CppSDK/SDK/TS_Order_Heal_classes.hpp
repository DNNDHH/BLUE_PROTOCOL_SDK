#pragma once

 

// Package: TS_Order_Heal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TS_Order_Heal.TS_Order_Heal_C
// 0x0008 (0x0188 - 0x0180)
class UTS_Order_Heal_C final : public USBAITacticalSkill_HTNBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0180(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_TS_Order_Heal(int32 EntryPoint);
	void ReceivePrepareForPlanning();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TS_Order_Heal_C">();
	}
	static class UTS_Order_Heal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTS_Order_Heal_C>();
	}
};
static_assert(alignof(UTS_Order_Heal_C) == 0x000008, "Wrong alignment on UTS_Order_Heal_C");
static_assert(sizeof(UTS_Order_Heal_C) == 0x000188, "Wrong size on UTS_Order_Heal_C");
static_assert(offsetof(UTS_Order_Heal_C, UberGraphFrame) == 0x000180, "Member 'UTS_Order_Heal_C::UberGraphFrame' has a wrong offset!");

}

