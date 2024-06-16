#pragma once

 

// Package: PartyMemberInfo_PlayerStatus

#include "Basic.hpp"


namespace SDK::Params
{

// Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.ExecuteUbergraph_PartyMemberInfo_PlayerStatus
// 0x0058 (0x0058 - 0x0000)
struct PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus) == 0x000008, "Wrong alignment on PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus");
static_assert(sizeof(PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus) == 0x000058, "Wrong size on PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus, EntryPoint) == 0x000000, "Member 'PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000030, "Member 'PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.SetMapName
// 0x0030 (0x0030 - 0x0000)
struct PartyMemberInfo_PlayerStatus_C_SetMapName final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_PlayerStatus_C_SetMapName) == 0x000008, "Wrong alignment on PartyMemberInfo_PlayerStatus_C_SetMapName");
static_assert(sizeof(PartyMemberInfo_PlayerStatus_C_SetMapName) == 0x000030, "Wrong size on PartyMemberInfo_PlayerStatus_C_SetMapName");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_SetMapName, InName) == 0x000000, "Member 'PartyMemberInfo_PlayerStatus_C_SetMapName::InName' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_SetMapName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'PartyMemberInfo_PlayerStatus_C_SetMapName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_SetMapName, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000028, "Member 'PartyMemberInfo_PlayerStatus_C_SetMapName::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.GetMapName
// 0x0038 (0x0038 - 0x0000)
struct PartyMemberInfo_PlayerStatus_C_GetMapName final
{
public:
	class FString                                 OutPlayerName;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_PlayerStatus_C_GetMapName) == 0x000008, "Wrong alignment on PartyMemberInfo_PlayerStatus_C_GetMapName");
static_assert(sizeof(PartyMemberInfo_PlayerStatus_C_GetMapName) == 0x000038, "Wrong size on PartyMemberInfo_PlayerStatus_C_GetMapName");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_GetMapName, OutPlayerName) == 0x000000, "Member 'PartyMemberInfo_PlayerStatus_C_GetMapName::OutPlayerName' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_GetMapName, CallFunc_GetText_ReturnValue) == 0x000010, "Member 'PartyMemberInfo_PlayerStatus_C_GetMapName::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerStatus_C_GetMapName, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'PartyMemberInfo_PlayerStatus_C_GetMapName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

