#pragma once

 

// Package: Fang_expedition_TicketItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.OnCheckStateChange__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature final
{
public:
	bool                                          CheckState;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F18[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature");
static_assert(sizeof(Fang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature) == 0x000008, "Wrong size on Fang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature");
static_assert(offsetof(Fang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature, CheckState) == 0x000000, "Member 'Fang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature::CheckState' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature, ID) == 0x000004, "Member 'Fang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature::ID' has a wrong offset!");

// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.ExecuteUbergraph_Fang_expedition_TicketItem
// 0x000C (0x000C - 0x0000)
struct Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem) == 0x000004, "Wrong alignment on Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem");
static_assert(sizeof(Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem) == 0x00000C, "Wrong size on Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem");
static_assert(offsetof(Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem, EntryPoint) == 0x000000, "Member 'Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem, K2Node_ComponentBoundEvent_bIsChecked) == 0x000008, "Member 'Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000009, "Member 'Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_TicketItem_C_BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_TicketItem_C_BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Fang_expedition_TicketItem_C_BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Fang_expedition_TicketItem_C_BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Fang_expedition_TicketItem_C_BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Fang_expedition_TicketItem_C_BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Fang_expedition_TicketItem_C_BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetData
// 0x00C8 (0x00C8 - 0x0000)
struct Fang_expedition_TicketItem_C_SetData final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Select;                                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Disable;                                           // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindTokenMaster_bIsValid;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F19[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_FindTokenMaster_TokenMaster;              // 0x0008(0x0058)()
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F1A[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0078(0x0018)()
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue_1;         // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue_2;         // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
};
static_assert(alignof(Fang_expedition_TicketItem_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_TicketItem_C_SetData");
static_assert(sizeof(Fang_expedition_TicketItem_C_SetData) == 0x0000C8, "Wrong size on Fang_expedition_TicketItem_C_SetData");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, ID) == 0x000000, "Member 'Fang_expedition_TicketItem_C_SetData::ID' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, Select) == 0x000004, "Member 'Fang_expedition_TicketItem_C_SetData::Select' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, Disable) == 0x000005, "Member 'Fang_expedition_TicketItem_C_SetData::Disable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, CallFunc_FindTokenMaster_bIsValid) == 0x000006, "Member 'Fang_expedition_TicketItem_C_SetData::CallFunc_FindTokenMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, CallFunc_FindTokenMaster_TokenMaster) == 0x000008, "Member 'Fang_expedition_TicketItem_C_SetData::CallFunc_FindTokenMaster_TokenMaster' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, CallFunc_GetTokenAmount_ReturnValue) == 0x000060, "Member 'Fang_expedition_TicketItem_C_SetData::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, CallFunc_GetMasterTokenText_ReturnValue) == 0x000068, "Member 'Fang_expedition_TicketItem_C_SetData::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, CallFunc_Conv_IntToText_ReturnValue) == 0x000078, "Member 'Fang_expedition_TicketItem_C_SetData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, CallFunc_GetMasterTokenText_ReturnValue_1) == 0x000090, "Member 'Fang_expedition_TicketItem_C_SetData::CallFunc_GetMasterTokenText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, CallFunc_GetMasterTokenText_ReturnValue_2) == 0x0000A0, "Member 'Fang_expedition_TicketItem_C_SetData::CallFunc_GetMasterTokenText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'Fang_expedition_TicketItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetDisableTextVisibility
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_TicketItem_C_SetDisableTextVisibility final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_TicketItem_C_SetDisableTextVisibility) == 0x000001, "Wrong alignment on Fang_expedition_TicketItem_C_SetDisableTextVisibility");
static_assert(sizeof(Fang_expedition_TicketItem_C_SetDisableTextVisibility) == 0x000001, "Wrong size on Fang_expedition_TicketItem_C_SetDisableTextVisibility");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetDisableTextVisibility, Disable) == 0x000000, "Member 'Fang_expedition_TicketItem_C_SetDisableTextVisibility::Disable' has a wrong offset!");

// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.GetSelectState
// 0x000C (0x000C - 0x0000)
struct Fang_expedition_TicketItem_C_GetSelectState final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F1B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_TokenID;                                     // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckedState_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_TicketItem_C_GetSelectState) == 0x000004, "Wrong alignment on Fang_expedition_TicketItem_C_GetSelectState");
static_assert(sizeof(Fang_expedition_TicketItem_C_GetSelectState) == 0x00000C, "Wrong size on Fang_expedition_TicketItem_C_GetSelectState");
static_assert(offsetof(Fang_expedition_TicketItem_C_GetSelectState, IsSelected) == 0x000000, "Member 'Fang_expedition_TicketItem_C_GetSelectState::IsSelected' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_GetSelectState, Param_TokenID) == 0x000004, "Member 'Fang_expedition_TicketItem_C_GetSelectState::Param_TokenID' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_GetSelectState, CallFunc_GetCheckedState_ReturnValue) == 0x000008, "Member 'Fang_expedition_TicketItem_C_GetSelectState::CallFunc_GetCheckedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_GetSelectState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'Fang_expedition_TicketItem_C_GetSelectState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Initialize
// 0x0030 (0x0030 - 0x0000)
struct Fang_expedition_TicketItem_C_Initialize final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_TicketItem_C_Initialize) == 0x000008, "Wrong alignment on Fang_expedition_TicketItem_C_Initialize");
static_assert(sizeof(Fang_expedition_TicketItem_C_Initialize) == 0x000030, "Wrong size on Fang_expedition_TicketItem_C_Initialize");
static_assert(offsetof(Fang_expedition_TicketItem_C_Initialize, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'Fang_expedition_TicketItem_C_Initialize::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_Initialize, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'Fang_expedition_TicketItem_C_Initialize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_Initialize, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'Fang_expedition_TicketItem_C_Initialize::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetCheckState
// 0x0006 (0x0006 - 0x0000)
struct Fang_expedition_TicketItem_C_SetCheckState final
{
public:
	bool                                          State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_TicketItem_C_SetCheckState) == 0x000001, "Wrong alignment on Fang_expedition_TicketItem_C_SetCheckState");
static_assert(sizeof(Fang_expedition_TicketItem_C_SetCheckState) == 0x000006, "Wrong size on Fang_expedition_TicketItem_C_SetCheckState");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetCheckState, State) == 0x000000, "Member 'Fang_expedition_TicketItem_C_SetCheckState::State' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetCheckState, Temp_bool_Variable) == 0x000001, "Member 'Fang_expedition_TicketItem_C_SetCheckState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetCheckState, Temp_byte_Variable) == 0x000002, "Member 'Fang_expedition_TicketItem_C_SetCheckState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetCheckState, Temp_byte_Variable_1) == 0x000003, "Member 'Fang_expedition_TicketItem_C_SetCheckState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetCheckState, K2Node_Select_Default) == 0x000004, "Member 'Fang_expedition_TicketItem_C_SetCheckState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_SetCheckState, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000005, "Member 'Fang_expedition_TicketItem_C_SetCheckState::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.UpdateTicketNum
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_TicketItem_C_UpdateTicketNum final
{
public:
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F1C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(Fang_expedition_TicketItem_C_UpdateTicketNum) == 0x000008, "Wrong alignment on Fang_expedition_TicketItem_C_UpdateTicketNum");
static_assert(sizeof(Fang_expedition_TicketItem_C_UpdateTicketNum) == 0x000020, "Wrong size on Fang_expedition_TicketItem_C_UpdateTicketNum");
static_assert(offsetof(Fang_expedition_TicketItem_C_UpdateTicketNum, CallFunc_GetTokenAmount_ReturnValue) == 0x000000, "Member 'Fang_expedition_TicketItem_C_UpdateTicketNum::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_TicketItem_C_UpdateTicketNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'Fang_expedition_TicketItem_C_UpdateTicketNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

