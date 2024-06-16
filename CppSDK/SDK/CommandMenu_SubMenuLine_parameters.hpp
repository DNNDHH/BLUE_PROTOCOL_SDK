#pragma once

 

// Package: CommandMenu_SubMenuLine

#include "Basic.hpp"


namespace SDK::Params
{

// Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.ExecuteUbergraph_CommandMenu_SubMenuLine
// 0x000C (0x000C - 0x0000)
struct CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E3F[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_BtnNum;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine) == 0x000004, "Wrong alignment on CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine");
static_assert(sizeof(CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine) == 0x00000C, "Wrong size on CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine");
static_assert(offsetof(CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine, EntryPoint) == 0x000000, "Member 'CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine, K2Node_SwitchInteger_CmpSuccess) == 0x000005, "Member 'CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine, K2Node_CustomEvent_BtnNum) == 0x000008, "Member 'CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine::K2Node_CustomEvent_BtnNum' has a wrong offset!");

// Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.SetBtnNumSwitch
// 0x0004 (0x0004 - 0x0000)
struct CommandMenu_SubMenuLine_C_SetBtnNumSwitch final
{
public:
	int32                                         Param_BtnNum;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_SubMenuLine_C_SetBtnNumSwitch) == 0x000004, "Wrong alignment on CommandMenu_SubMenuLine_C_SetBtnNumSwitch");
static_assert(sizeof(CommandMenu_SubMenuLine_C_SetBtnNumSwitch) == 0x000004, "Wrong size on CommandMenu_SubMenuLine_C_SetBtnNumSwitch");
static_assert(offsetof(CommandMenu_SubMenuLine_C_SetBtnNumSwitch, Param_BtnNum) == 0x000000, "Member 'CommandMenu_SubMenuLine_C_SetBtnNumSwitch::Param_BtnNum' has a wrong offset!");

// Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_SubMenuLine_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_SubMenuLine_C_PreConstruct) == 0x000001, "Wrong alignment on CommandMenu_SubMenuLine_C_PreConstruct");
static_assert(sizeof(CommandMenu_SubMenuLine_C_PreConstruct) == 0x000001, "Wrong size on CommandMenu_SubMenuLine_C_PreConstruct");
static_assert(offsetof(CommandMenu_SubMenuLine_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommandMenu_SubMenuLine_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.InAnimation
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_SubMenuLine_C_InAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_SubMenuLine_C_InAnimation) == 0x000008, "Wrong alignment on CommandMenu_SubMenuLine_C_InAnimation");
static_assert(sizeof(CommandMenu_SubMenuLine_C_InAnimation) == 0x000008, "Wrong size on CommandMenu_SubMenuLine_C_InAnimation");
static_assert(offsetof(CommandMenu_SubMenuLine_C_InAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'CommandMenu_SubMenuLine_C_InAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

