#pragma once

 

// Package: CommunicateSettingMenu_ShortId

#include "Basic.hpp"


namespace SDK::Params
{

// Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.ExecuteUbergraph_CommunicateSettingMenu_ShortId
// 0x0030 (0x0030 - 0x0000)
struct CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45E7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InShortId;                      // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId) == 0x000008, "Wrong alignment on CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId");
static_assert(sizeof(CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId) == 0x000030, "Wrong size on CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId");
static_assert(offsetof(CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId, EntryPoint) == 0x000000, "Member 'CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId, K2Node_CustomEvent_InShortId) == 0x000008, "Member 'CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId::K2Node_CustomEvent_InShortId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.SetShortId
// 0x0010 (0x0010 - 0x0000)
struct CommunicateSettingMenu_ShortId_C_SetShortId final
{
public:
	class FString                                 InShortId;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_ShortId_C_SetShortId) == 0x000008, "Wrong alignment on CommunicateSettingMenu_ShortId_C_SetShortId");
static_assert(sizeof(CommunicateSettingMenu_ShortId_C_SetShortId) == 0x000010, "Wrong size on CommunicateSettingMenu_ShortId_C_SetShortId");
static_assert(offsetof(CommunicateSettingMenu_ShortId_C_SetShortId, InShortId) == 0x000000, "Member 'CommunicateSettingMenu_ShortId_C_SetShortId::InShortId' has a wrong offset!");

}

