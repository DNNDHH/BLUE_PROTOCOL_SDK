#pragma once

 

// Package: CommandMenuBg

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommandMenuBg.CommandMenuBg_C.ExecuteUbergraph_CommandMenuBg
// 0x0008 (0x0008 - 0x0000)
struct CommandMenuBg_C_ExecuteUbergraph_CommandMenuBg final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuBg_C_ExecuteUbergraph_CommandMenuBg) == 0x000004, "Wrong alignment on CommandMenuBg_C_ExecuteUbergraph_CommandMenuBg");
static_assert(sizeof(CommandMenuBg_C_ExecuteUbergraph_CommandMenuBg) == 0x000008, "Wrong size on CommandMenuBg_C_ExecuteUbergraph_CommandMenuBg");
static_assert(offsetof(CommandMenuBg_C_ExecuteUbergraph_CommandMenuBg, EntryPoint) == 0x000000, "Member 'CommandMenuBg_C_ExecuteUbergraph_CommandMenuBg::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_ExecuteUbergraph_CommandMenuBg, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommandMenuBg_C_ExecuteUbergraph_CommandMenuBg::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function CommandMenuBg.CommandMenuBg_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommandMenuBg_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenuBg_C_PreConstruct) == 0x000001, "Wrong alignment on CommandMenuBg_C_PreConstruct");
static_assert(sizeof(CommandMenuBg_C_PreConstruct) == 0x000001, "Wrong size on CommandMenuBg_C_PreConstruct");
static_assert(offsetof(CommandMenuBg_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommandMenuBg_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommandMenuBg.CommandMenuBg_C.PlayInOut
// 0x0040 (0x0040 - 0x0000)
struct CommandMenuBg_C_PlayInOut final
{
public:
	bool                                          Param_bVisible;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ED7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_HelpId;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Pos;                                               // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ED8[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuBg_C_PlayInOut) == 0x000008, "Wrong alignment on CommandMenuBg_C_PlayInOut");
static_assert(sizeof(CommandMenuBg_C_PlayInOut) == 0x000040, "Wrong size on CommandMenuBg_C_PlayInOut");
static_assert(offsetof(CommandMenuBg_C_PlayInOut, Param_bVisible) == 0x000000, "Member 'CommandMenuBg_C_PlayInOut::Param_bVisible' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_PlayInOut, Param_HelpId) == 0x000004, "Member 'CommandMenuBg_C_PlayInOut::Param_HelpId' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_PlayInOut, Text) == 0x000008, "Member 'CommandMenuBg_C_PlayInOut::Text' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_PlayInOut, Pos) == 0x000020, "Member 'CommandMenuBg_C_PlayInOut::Pos' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_PlayInOut, K2Node_SwitchInteger_CmpSuccess) == 0x000024, "Member 'CommandMenuBg_C_PlayInOut::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_PlayInOut, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'CommandMenuBg_C_PlayInOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_PlayInOut, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'CommandMenuBg_C_PlayInOut::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_PlayInOut, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000038, "Member 'CommandMenuBg_C_PlayInOut::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function CommandMenuBg.CommandMenuBg_C.SetHelpText
// 0x0048 (0x0048 - 0x0000)
struct CommandMenuBg_C_SetHelpText final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ED9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDateTime                              CallFunc_GetDateChangeTime_Date_Change_Time;       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenuBg_C_SetHelpText) == 0x000008, "Wrong alignment on CommandMenuBg_C_SetHelpText");
static_assert(sizeof(CommandMenuBg_C_SetHelpText) == 0x000048, "Wrong size on CommandMenuBg_C_SetHelpText");
static_assert(offsetof(CommandMenuBg_C_SetHelpText, ID) == 0x000000, "Member 'CommandMenuBg_C_SetHelpText::ID' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_SetHelpText, Text) == 0x000008, "Member 'CommandMenuBg_C_SetHelpText::Text' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_SetHelpText, CallFunc_GetDateChangeTime_Date_Change_Time) == 0x000020, "Member 'CommandMenuBg_C_SetHelpText::CallFunc_GetDateChangeTime_Date_Change_Time' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_SetHelpText, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'CommandMenuBg_C_SetHelpText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_SetHelpText, CallFunc_NotEqual_TextText_ReturnValue) == 0x000040, "Member 'CommandMenuBg_C_SetHelpText::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_SetHelpText, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000041, "Member 'CommandMenuBg_C_SetHelpText::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenuBg_C_SetHelpText, CallFunc_SetDateTime_ReturnValue) == 0x000042, "Member 'CommandMenuBg_C_SetHelpText::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

}

