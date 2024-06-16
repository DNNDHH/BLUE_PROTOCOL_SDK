#pragma once

 

// Package: PartyMemberInfo_PlayerName

#include "Basic.hpp"


namespace SDK::Params
{

// Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.ExecuteUbergraph_PartyMemberInfo_PlayerName
// 0x0060 (0x0060 - 0x0000)
struct PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71D3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InCacheCharacterName;                 // 0x0008(0x0018)(ConstParm)
	bool                                          K2Node_Event_IsBlock;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71D4[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_PlayerID;                             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_CharacterId;                          // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsUGC;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71D5[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName) == 0x000008, "Wrong alignment on PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName");
static_assert(sizeof(PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName) == 0x000060, "Wrong size on PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName, EntryPoint) == 0x000000, "Member 'PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName, K2Node_Event_InCacheCharacterName) == 0x000008, "Member 'PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName::K2Node_Event_InCacheCharacterName' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName, K2Node_Event_IsBlock) == 0x000020, "Member 'PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName::K2Node_Event_IsBlock' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName, K2Node_Event_PlayerID) == 0x000028, "Member 'PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName::K2Node_Event_PlayerID' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName, K2Node_Event_CharacterId) == 0x000038, "Member 'PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName::K2Node_Event_CharacterId' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName, K2Node_Event_IsUGC) == 0x000048, "Member 'PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName::K2Node_Event_IsUGC' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName, CallFunc_Conv_TextToString_ReturnValue) == 0x000050, "Member 'PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.OnSetPlayerName
// 0x0048 (0x0048 - 0x0000)
struct PartyMemberInfo_PlayerName_C_OnSetPlayerName final
{
public:
	class FText                                   InCacheCharacterName;                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsBlock;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71D6[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerId;                                          // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CharacterId;                                       // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Param_IsUGC;                                       // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_PlayerName_C_OnSetPlayerName) == 0x000008, "Wrong alignment on PartyMemberInfo_PlayerName_C_OnSetPlayerName");
static_assert(sizeof(PartyMemberInfo_PlayerName_C_OnSetPlayerName) == 0x000048, "Wrong size on PartyMemberInfo_PlayerName_C_OnSetPlayerName");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_OnSetPlayerName, InCacheCharacterName) == 0x000000, "Member 'PartyMemberInfo_PlayerName_C_OnSetPlayerName::InCacheCharacterName' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_OnSetPlayerName, IsBlock) == 0x000018, "Member 'PartyMemberInfo_PlayerName_C_OnSetPlayerName::IsBlock' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_OnSetPlayerName, PlayerId) == 0x000020, "Member 'PartyMemberInfo_PlayerName_C_OnSetPlayerName::PlayerId' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_OnSetPlayerName, CharacterId) == 0x000030, "Member 'PartyMemberInfo_PlayerName_C_OnSetPlayerName::CharacterId' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_OnSetPlayerName, Param_IsUGC) == 0x000040, "Member 'PartyMemberInfo_PlayerName_C_OnSetPlayerName::Param_IsUGC' has a wrong offset!");

// Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.SetPlayerName
// 0x0098 (0x0098 - 0x0000)
struct PartyMemberInfo_PlayerName_C_SetPlayerName final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsBlock;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71D7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerId;                                          // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CharacterId;                                       // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InIsUGC;                                           // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71D8[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0058(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_PlayerName_C_SetPlayerName) == 0x000008, "Wrong alignment on PartyMemberInfo_PlayerName_C_SetPlayerName");
static_assert(sizeof(PartyMemberInfo_PlayerName_C_SetPlayerName) == 0x000098, "Wrong size on PartyMemberInfo_PlayerName_C_SetPlayerName");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, InName) == 0x000000, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::InName' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, IsBlock) == 0x000010, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::IsBlock' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, PlayerId) == 0x000018, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::PlayerId' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, CharacterId) == 0x000028, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::CharacterId' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, InIsUGC) == 0x000038, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::InIsUGC' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, Temp_bool_Variable) == 0x000039, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, CallFunc_GetRestrictText_ReturnValue) == 0x000058, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, CallFunc_Conv_TextToString_ReturnValue) == 0x000070, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, K2Node_Select_Default) == 0x000080, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_SetPlayerName, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000090, "Member 'PartyMemberInfo_PlayerName_C_SetPlayerName::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.GetPlayerName
// 0x0038 (0x0038 - 0x0000)
struct PartyMemberInfo_PlayerName_C_GetPlayerName final
{
public:
	class FString                                 OutPlayerName;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_PlayerName_C_GetPlayerName) == 0x000008, "Wrong alignment on PartyMemberInfo_PlayerName_C_GetPlayerName");
static_assert(sizeof(PartyMemberInfo_PlayerName_C_GetPlayerName) == 0x000038, "Wrong size on PartyMemberInfo_PlayerName_C_GetPlayerName");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_GetPlayerName, OutPlayerName) == 0x000000, "Member 'PartyMemberInfo_PlayerName_C_GetPlayerName::OutPlayerName' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_GetPlayerName, CallFunc_GetText_ReturnValue) == 0x000010, "Member 'PartyMemberInfo_PlayerName_C_GetPlayerName::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_PlayerName_C_GetPlayerName, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'PartyMemberInfo_PlayerName_C_GetPlayerName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

