#pragma once

 

// Package: UMG_PartyMemberList_UnionList

#include "Basic.hpp"

#include "E_PartyListPartyType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "ST_PartyListPartyType_structs.hpp"


namespace SDK::Params
{

// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.ExecuteUbergraph_UMG_PartyMemberList_UnionList
// 0x0004 (0x0004 - 0x0000)
struct UMG_PartyMemberList_UnionList_C_ExecuteUbergraph_UMG_PartyMemberList_UnionList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PartyMemberList_UnionList_C_ExecuteUbergraph_UMG_PartyMemberList_UnionList) == 0x000004, "Wrong alignment on UMG_PartyMemberList_UnionList_C_ExecuteUbergraph_UMG_PartyMemberList_UnionList");
static_assert(sizeof(UMG_PartyMemberList_UnionList_C_ExecuteUbergraph_UMG_PartyMemberList_UnionList) == 0x000004, "Wrong size on UMG_PartyMemberList_UnionList_C_ExecuteUbergraph_UMG_PartyMemberList_UnionList");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_ExecuteUbergraph_UMG_PartyMemberList_UnionList, EntryPoint) == 0x000000, "Member 'UMG_PartyMemberList_UnionList_C_ExecuteUbergraph_UMG_PartyMemberList_UnionList::EntryPoint' has a wrong offset!");

// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.CreateMember
// 0x0018 (0x0018 - 0x0000)
struct UMG_PartyMemberList_UnionList_C_CreateMember final
{
public:
	class USBPartyMemberState*                    PartyMemberState;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowBattleStatus;                                 // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71F9[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPartyMemberInfo_Simple_C*              CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PartyMemberList_UnionList_C_CreateMember) == 0x000008, "Wrong alignment on UMG_PartyMemberList_UnionList_C_CreateMember");
static_assert(sizeof(UMG_PartyMemberList_UnionList_C_CreateMember) == 0x000018, "Wrong size on UMG_PartyMemberList_UnionList_C_CreateMember");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_CreateMember, PartyMemberState) == 0x000000, "Member 'UMG_PartyMemberList_UnionList_C_CreateMember::PartyMemberState' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_CreateMember, bShowBattleStatus) == 0x000008, "Member 'UMG_PartyMemberList_UnionList_C_CreateMember::bShowBattleStatus' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_CreateMember, CallFunc_Create_ReturnValue) == 0x000010, "Member 'UMG_PartyMemberList_UnionList_C_CreateMember::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.AddMember
// 0x0010 (0x0010 - 0x0000)
struct UMG_PartyMemberList_UnionList_C_AddMember final
{
public:
	class UUserWidget*                            InMemberWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PartyMemberList_UnionList_C_AddMember) == 0x000008, "Wrong alignment on UMG_PartyMemberList_UnionList_C_AddMember");
static_assert(sizeof(UMG_PartyMemberList_UnionList_C_AddMember) == 0x000010, "Wrong size on UMG_PartyMemberList_UnionList_C_AddMember");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_AddMember, InMemberWidget) == 0x000000, "Member 'UMG_PartyMemberList_UnionList_C_AddMember::InMemberWidget' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_AddMember, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000008, "Member 'UMG_PartyMemberList_UnionList_C_AddMember::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.SetPartyTypeLabel
// 0x0068 (0x0068 - 0x0000)
struct UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel final
{
public:
	E_PartyListPartyType                          InPartyType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PartyListPartyType                          TmpPartyType;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71FA[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   ColorByPartyType;                                  // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<struct FLinearColor>                   K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71FB[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_PartyListPartyType                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0044(0x001C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel) == 0x000008, "Wrong alignment on UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel");
static_assert(sizeof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel) == 0x000068, "Wrong size on UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel, InPartyType) == 0x000000, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel::InPartyType' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel, TmpPartyType) == 0x000001, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel::TmpPartyType' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel, ColorByPartyType) == 0x000008, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel::ColorByPartyType' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel, K2Node_MakeArray_Array) == 0x000018, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000028, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000038, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel, CallFunc_Conv_StringToName_ReturnValue) == 0x00003C, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel, CallFunc_GetDataTableRowFromName_OutRow) == 0x000044, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000060, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.SetPartyTypeLabelEnable
// 0x0005 (0x0005 - 0x0000)
struct UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable final
{
public:
	bool                                          bInEnable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable) == 0x000001, "Wrong alignment on UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable");
static_assert(sizeof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable) == 0x000005, "Wrong size on UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable, bInEnable) == 0x000000, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable::bInEnable' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable, Temp_bool_Variable) == 0x000001, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable, Temp_byte_Variable) == 0x000002, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable, Temp_byte_Variable_1) == 0x000003, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable, K2Node_Select_Default) == 0x000004, "Member 'UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable::K2Node_Select_Default' has a wrong offset!");

// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.GetPartyType
// 0x0001 (0x0001 - 0x0000)
struct UMG_PartyMemberList_UnionList_C_GetPartyType final
{
public:
	E_PartyListPartyType                          Param_PartyType;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PartyMemberList_UnionList_C_GetPartyType) == 0x000001, "Wrong alignment on UMG_PartyMemberList_UnionList_C_GetPartyType");
static_assert(sizeof(UMG_PartyMemberList_UnionList_C_GetPartyType) == 0x000001, "Wrong size on UMG_PartyMemberList_UnionList_C_GetPartyType");
static_assert(offsetof(UMG_PartyMemberList_UnionList_C_GetPartyType, Param_PartyType) == 0x000000, "Member 'UMG_PartyMemberList_UnionList_C_GetPartyType::Param_PartyType' has a wrong offset!");

}

