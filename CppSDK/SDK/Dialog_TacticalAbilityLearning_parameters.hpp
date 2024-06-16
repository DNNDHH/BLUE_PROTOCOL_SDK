#pragma once

 

// Package: Dialog_TacticalAbilityLearning

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.ExecuteUbergraph_Dialog_TacticalAbilityLearning
// 0x0080 (0x0080 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6CDB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CDC[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CDD[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0058(0x0028)()
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning) == 0x000080, "Wrong size on Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning, EntryPoint) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning::EntryPoint' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning, K2Node_Event_Animation) == 0x000018, "Member 'Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000021, "Member 'Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning, K2Node_MakeStruct_SlateColor_1) == 0x000058, "Member 'Dialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_OnAnimationFinished) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_OnAnimationFinished");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_OnAnimationFinished) == 0x000008, "Wrong size on Dialog_TacticalAbilityLearning_C_OnAnimationFinished");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_OnAnimationFinished, Animation) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.Setup
// 0x0060 (0x0060 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_Setup final
{
public:
	TArray<struct FSBSkillParam>                  InSkillParam;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSBSkillParam>                  L_SwapIdList;                                      // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CDE[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSkillParam                          CallFunc_Array_Get_Item;                           // 0x0038(0x0018)()
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_Setup) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_Setup");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_Setup) == 0x000060, "Wrong size on Dialog_TacticalAbilityLearning_C_Setup");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, InSkillParam) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_Setup::InSkillParam' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, L_SwapIdList) == 0x000010, "Member 'Dialog_TacticalAbilityLearning_C_Setup::L_SwapIdList' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, Temp_int_Array_Index_Variable) == 0x000020, "Member 'Dialog_TacticalAbilityLearning_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, CallFunc_Percent_IntInt_ReturnValue) == 0x000024, "Member 'Dialog_TacticalAbilityLearning_C_Setup::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, CallFunc_Divide_IntInt_ReturnValue) == 0x000028, "Member 'Dialog_TacticalAbilityLearning_C_Setup::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'Dialog_TacticalAbilityLearning_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, Temp_bool_True_if_break_was_hit_Variable) == 0x00002D, "Member 'Dialog_TacticalAbilityLearning_C_Setup::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, CallFunc_Not_PreBool_ReturnValue) == 0x00002E, "Member 'Dialog_TacticalAbilityLearning_C_Setup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'Dialog_TacticalAbilityLearning_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'Dialog_TacticalAbilityLearning_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, CallFunc_Array_Get_Item) == 0x000038, "Member 'Dialog_TacticalAbilityLearning_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, CallFunc_Array_AddUnique_ReturnValue) == 0x000050, "Member 'Dialog_TacticalAbilityLearning_C_Setup::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'Dialog_TacticalAbilityLearning_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, CallFunc_Less_IntInt_ReturnValue_1) == 0x000058, "Member 'Dialog_TacticalAbilityLearning_C_Setup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Setup, CallFunc_BooleanAND_ReturnValue) == 0x000059, "Member 'Dialog_TacticalAbilityLearning_C_Setup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.CreateSkillIcon
// 0x0038 (0x0038 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_CreateSkillIcon final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLV;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InRow;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InColumn;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcon_TacticalAbilityLearning_C*        Icon;                                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcon_TacticalAbilityLearning_C*        CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_CreateSkillIcon) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_CreateSkillIcon");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_CreateSkillIcon) == 0x000038, "Wrong size on Dialog_TacticalAbilityLearning_C_CreateSkillIcon");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_CreateSkillIcon, InSkillId) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_CreateSkillIcon::InSkillId' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_CreateSkillIcon, InSkillLV) == 0x000004, "Member 'Dialog_TacticalAbilityLearning_C_CreateSkillIcon::InSkillLV' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_CreateSkillIcon, InRow) == 0x000008, "Member 'Dialog_TacticalAbilityLearning_C_CreateSkillIcon::InRow' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_CreateSkillIcon, InColumn) == 0x00000C, "Member 'Dialog_TacticalAbilityLearning_C_CreateSkillIcon::InColumn' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_CreateSkillIcon, Icon) == 0x000010, "Member 'Dialog_TacticalAbilityLearning_C_CreateSkillIcon::Icon' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_CreateSkillIcon, K2Node_MakeStruct_Margin) == 0x000018, "Member 'Dialog_TacticalAbilityLearning_C_CreateSkillIcon::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_CreateSkillIcon, CallFunc_AddChildToGrid_ReturnValue) == 0x000028, "Member 'Dialog_TacticalAbilityLearning_C_CreateSkillIcon::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_CreateSkillIcon, CallFunc_Create_ReturnValue) == 0x000030, "Member 'Dialog_TacticalAbilityLearning_C_CreateSkillIcon::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.Open
// 0x0001 (0x0001 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_Open final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_Open) == 0x000001, "Wrong alignment on Dialog_TacticalAbilityLearning_C_Open");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_Open) == 0x000001, "Wrong size on Dialog_TacticalAbilityLearning_C_Open");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_Open, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_Open::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.PlayAnimationIn
// 0x0008 (0x0008 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_PlayAnimationIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_PlayAnimationIn) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_PlayAnimationIn");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_PlayAnimationIn) == 0x000008, "Wrong size on Dialog_TacticalAbilityLearning_C_PlayAnimationIn");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_PlayAnimationIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_PlayAnimationIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.PlayAnimationOut
// 0x0008 (0x0008 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_PlayAnimationOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_PlayAnimationOut) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_PlayAnimationOut");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_PlayAnimationOut) == 0x000008, "Wrong size on Dialog_TacticalAbilityLearning_C_PlayAnimationOut");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_PlayAnimationOut, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_PlayAnimationOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetTitleText
// 0x0018 (0x0018 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_SetTitleText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_SetTitleText) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_SetTitleText");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_SetTitleText) == 0x000018, "Wrong size on Dialog_TacticalAbilityLearning_C_SetTitleText");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetTitleText, InText) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_SetTitleText::InText' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetTitleTextTable
// 0x0010 (0x0010 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_SetTitleTextTable final
{
public:
	class USBTextTableAsset*                      InTextTable;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_SetTitleTextTable) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_SetTitleTextTable");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_SetTitleTextTable) == 0x000010, "Wrong size on Dialog_TacticalAbilityLearning_C_SetTitleTextTable");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetTitleTextTable, InTextTable) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_SetTitleTextTable::InTextTable' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetTitleTextTable, InTextID) == 0x000008, "Member 'Dialog_TacticalAbilityLearning_C_SetTitleTextTable::InTextID' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetDetailText
// 0x0018 (0x0018 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_SetDetailText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_SetDetailText) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_SetDetailText");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_SetDetailText) == 0x000018, "Wrong size on Dialog_TacticalAbilityLearning_C_SetDetailText");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetDetailText, InText) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_SetDetailText::InText' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetDetailTextTable
// 0x0010 (0x0010 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_SetDetailTextTable final
{
public:
	class USBTextTableAsset*                      InTextTable;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_SetDetailTextTable) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_SetDetailTextTable");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_SetDetailTextTable) == 0x000010, "Wrong size on Dialog_TacticalAbilityLearning_C_SetDetailTextTable");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetDetailTextTable, InTextTable) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_SetDetailTextTable::InTextTable' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetDetailTextTable, InTextID) == 0x000008, "Member 'Dialog_TacticalAbilityLearning_C_SetDetailTextTable::InTextID' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetDecideText
// 0x0018 (0x0018 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_SetDecideText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_SetDecideText) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_SetDecideText");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_SetDecideText) == 0x000018, "Wrong size on Dialog_TacticalAbilityLearning_C_SetDecideText");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetDecideText, InText) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_SetDecideText::InText' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetDecideTextTable
// 0x0010 (0x0010 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_SetDecideTextTable final
{
public:
	class USBTextTableAsset*                      InTextTable;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_SetDecideTextTable) == 0x000008, "Wrong alignment on Dialog_TacticalAbilityLearning_C_SetDecideTextTable");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_SetDecideTextTable) == 0x000010, "Wrong size on Dialog_TacticalAbilityLearning_C_SetDecideTextTable");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetDecideTextTable, InTextTable) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_SetDecideTextTable::InTextTable' has a wrong offset!");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetDecideTextTable, InTextID) == 0x000008, "Member 'Dialog_TacticalAbilityLearning_C_SetDecideTextTable::InTextID' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetEnableButton
// 0x0001 (0x0001 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_SetEnableButton final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_SetEnableButton) == 0x000001, "Wrong alignment on Dialog_TacticalAbilityLearning_C_SetEnableButton");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_SetEnableButton) == 0x000001, "Wrong size on Dialog_TacticalAbilityLearning_C_SetEnableButton");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetEnableButton, bInIsEnabled) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_SetEnableButton::bInIsEnabled' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetEnableButtonDecide
// 0x0001 (0x0001 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_SetEnableButtonDecide final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_SetEnableButtonDecide) == 0x000001, "Wrong alignment on Dialog_TacticalAbilityLearning_C_SetEnableButtonDecide");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_SetEnableButtonDecide) == 0x000001, "Wrong size on Dialog_TacticalAbilityLearning_C_SetEnableButtonDecide");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetEnableButtonDecide, bInIsEnabled) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_SetEnableButtonDecide::bInIsEnabled' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetEnableButtonFullScreen
// 0x0001 (0x0001 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_SetEnableButtonFullScreen final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_SetEnableButtonFullScreen) == 0x000001, "Wrong alignment on Dialog_TacticalAbilityLearning_C_SetEnableButtonFullScreen");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_SetEnableButtonFullScreen) == 0x000001, "Wrong size on Dialog_TacticalAbilityLearning_C_SetEnableButtonFullScreen");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetEnableButtonFullScreen, bInIsEnabled) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_SetEnableButtonFullScreen::bInIsEnabled' has a wrong offset!");

// Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetEnableButtonClose
// 0x0001 (0x0001 - 0x0000)
struct Dialog_TacticalAbilityLearning_C_SetEnableButtonClose final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Dialog_TacticalAbilityLearning_C_SetEnableButtonClose) == 0x000001, "Wrong alignment on Dialog_TacticalAbilityLearning_C_SetEnableButtonClose");
static_assert(sizeof(Dialog_TacticalAbilityLearning_C_SetEnableButtonClose) == 0x000001, "Wrong size on Dialog_TacticalAbilityLearning_C_SetEnableButtonClose");
static_assert(offsetof(Dialog_TacticalAbilityLearning_C_SetEnableButtonClose, bInIsEnabled) == 0x000000, "Member 'Dialog_TacticalAbilityLearning_C_SetEnableButtonClose::bInIsEnabled' has a wrong offset!");

}

