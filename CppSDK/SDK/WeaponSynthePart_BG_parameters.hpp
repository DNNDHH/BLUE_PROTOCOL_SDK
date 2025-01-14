#pragma once

 

// Package: WeaponSynthePart_BG

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_BG.WeaponSynthePart_BG_C.ExecuteUbergraph_WeaponSynthePart_BG
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_BG_C_ExecuteUbergraph_WeaponSynthePart_BG final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_BG_C_ExecuteUbergraph_WeaponSynthePart_BG) == 0x000004, "Wrong alignment on WeaponSynthePart_BG_C_ExecuteUbergraph_WeaponSynthePart_BG");
static_assert(sizeof(WeaponSynthePart_BG_C_ExecuteUbergraph_WeaponSynthePart_BG) == 0x000008, "Wrong size on WeaponSynthePart_BG_C_ExecuteUbergraph_WeaponSynthePart_BG");
static_assert(offsetof(WeaponSynthePart_BG_C_ExecuteUbergraph_WeaponSynthePart_BG, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_BG_C_ExecuteUbergraph_WeaponSynthePart_BG::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_BG_C_ExecuteUbergraph_WeaponSynthePart_BG, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WeaponSynthePart_BG_C_ExecuteUbergraph_WeaponSynthePart_BG::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WeaponSynthePart_BG.WeaponSynthePart_BG_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_BG_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_BG_C_PreConstruct) == 0x000001, "Wrong alignment on WeaponSynthePart_BG_C_PreConstruct");
static_assert(sizeof(WeaponSynthePart_BG_C_PreConstruct) == 0x000001, "Wrong size on WeaponSynthePart_BG_C_PreConstruct");
static_assert(offsetof(WeaponSynthePart_BG_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WeaponSynthePart_BG_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

