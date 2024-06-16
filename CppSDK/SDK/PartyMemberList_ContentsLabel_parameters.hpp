#pragma once

 

// Package: PartyMemberList_ContentsLabel

#include "Basic.hpp"

#include "E_PartyListPartyType_structs.hpp"
#include "ST_PartyListPartyType_structs.hpp"


namespace SDK::Params
{

// Function PartyMemberList_ContentsLabel.PartyMemberList_ContentsLabel_C.SetContentsType
// 0x0048 (0x0048 - 0x0000)
struct PartyMemberList_ContentsLabel_C_SetContentsType final
{
public:
	E_PartyListPartyType                          InPartyType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PartyListPartyType                          PartyType;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71CF[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71D0[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_PartyListPartyType                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0024(0x001C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberList_ContentsLabel_C_SetContentsType) == 0x000008, "Wrong alignment on PartyMemberList_ContentsLabel_C_SetContentsType");
static_assert(sizeof(PartyMemberList_ContentsLabel_C_SetContentsType) == 0x000048, "Wrong size on PartyMemberList_ContentsLabel_C_SetContentsType");
static_assert(offsetof(PartyMemberList_ContentsLabel_C_SetContentsType, InPartyType) == 0x000000, "Member 'PartyMemberList_ContentsLabel_C_SetContentsType::InPartyType' has a wrong offset!");
static_assert(offsetof(PartyMemberList_ContentsLabel_C_SetContentsType, PartyType) == 0x000001, "Member 'PartyMemberList_ContentsLabel_C_SetContentsType::PartyType' has a wrong offset!");
static_assert(offsetof(PartyMemberList_ContentsLabel_C_SetContentsType, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000008, "Member 'PartyMemberList_ContentsLabel_C_SetContentsType::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberList_ContentsLabel_C_SetContentsType, CallFunc_Conv_StringToName_ReturnValue) == 0x000018, "Member 'PartyMemberList_ContentsLabel_C_SetContentsType::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberList_ContentsLabel_C_SetContentsType, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000020, "Member 'PartyMemberList_ContentsLabel_C_SetContentsType::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberList_ContentsLabel_C_SetContentsType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000024, "Member 'PartyMemberList_ContentsLabel_C_SetContentsType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(PartyMemberList_ContentsLabel_C_SetContentsType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000040, "Member 'PartyMemberList_ContentsLabel_C_SetContentsType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

}

