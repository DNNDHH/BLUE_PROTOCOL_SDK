#pragma once

 

// Package: CommandMenu_BtnEffect

#include "Basic.hpp"


namespace SDK::Params
{

// Function CommandMenu_BtnEffect.CommandMenu_BtnEffect_C.ExecuteUbergraph_CommandMenu_BtnEffect
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_BtnEffectParts_C*          CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CBF[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect) == 0x000008, "Wrong alignment on CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect");
static_assert(sizeof(CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect) == 0x000020, "Wrong size on CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect");
static_assert(offsetof(CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect, EntryPoint) == 0x000000, "Member 'CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect, Temp_int_Variable) == 0x000004, "Member 'CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect, CallFunc_Create_ReturnValue) == 0x000008, "Member 'CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

