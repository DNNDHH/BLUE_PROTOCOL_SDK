#pragma once

 

// Package: CharaCreate_PosingSwitch

#include "Basic.hpp"


namespace SDK::Params
{

// Function CharaCreate_PosingSwitch.CharaCreate_PosingSwitch_C.ExecuteUbergraph_CharaCreate_PosingSwitch
// 0x0008 (0x0008 - 0x0000)
struct CharaCreate_PosingSwitch_C_ExecuteUbergraph_CharaCreate_PosingSwitch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaCreate_PosingSwitch_C_ExecuteUbergraph_CharaCreate_PosingSwitch) == 0x000004, "Wrong alignment on CharaCreate_PosingSwitch_C_ExecuteUbergraph_CharaCreate_PosingSwitch");
static_assert(sizeof(CharaCreate_PosingSwitch_C_ExecuteUbergraph_CharaCreate_PosingSwitch) == 0x000008, "Wrong size on CharaCreate_PosingSwitch_C_ExecuteUbergraph_CharaCreate_PosingSwitch");
static_assert(offsetof(CharaCreate_PosingSwitch_C_ExecuteUbergraph_CharaCreate_PosingSwitch, EntryPoint) == 0x000000, "Member 'CharaCreate_PosingSwitch_C_ExecuteUbergraph_CharaCreate_PosingSwitch::EntryPoint' has a wrong offset!");
static_assert(offsetof(CharaCreate_PosingSwitch_C_ExecuteUbergraph_CharaCreate_PosingSwitch, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'CharaCreate_PosingSwitch_C_ExecuteUbergraph_CharaCreate_PosingSwitch::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

}

