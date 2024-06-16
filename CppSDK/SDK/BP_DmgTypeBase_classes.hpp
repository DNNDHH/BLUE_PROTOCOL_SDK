#pragma once

 

// Package: BP_DmgTypeBase

#include "Basic.hpp"

#include "E_DamagePower_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeBase.BP_DmgTypeBase_C
// 0x0008 (0x0060 - 0x0058)
class UBP_DmgTypeBase_C : public USBDamageType
{
public:
	E_DamagePower                                 DamagePower;                                       // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeBase_C">();
	}
	static class UBP_DmgTypeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeBase_C>();
	}
};
static_assert(alignof(UBP_DmgTypeBase_C) == 0x000008, "Wrong alignment on UBP_DmgTypeBase_C");
static_assert(sizeof(UBP_DmgTypeBase_C) == 0x000060, "Wrong size on UBP_DmgTypeBase_C");
static_assert(offsetof(UBP_DmgTypeBase_C, DamagePower) == 0x000058, "Member 'UBP_DmgTypeBase_C::DamagePower' has a wrong offset!");

}

