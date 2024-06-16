#pragma once

 

// Package: TS_Order_Buff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TS_Order_Buff.TS_Order_Buff_C
// 0x0008 (0x0188 - 0x0180)
class UTS_Order_Buff_C final : public USBAITacticalSkill_HTNBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0180(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_TS_Order_Buff(int32 EntryPoint);
	void ReceivePrepareForPlanning();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TS_Order_Buff_C">();
	}
	static class UTS_Order_Buff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTS_Order_Buff_C>();
	}
};
static_assert(alignof(UTS_Order_Buff_C) == 0x000008, "Wrong alignment on UTS_Order_Buff_C");
static_assert(sizeof(UTS_Order_Buff_C) == 0x000188, "Wrong size on UTS_Order_Buff_C");
static_assert(offsetof(UTS_Order_Buff_C, UberGraphFrame) == 0x000180, "Member 'UTS_Order_Buff_C::UberGraphFrame' has a wrong offset!");

}

