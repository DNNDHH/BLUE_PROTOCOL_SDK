#pragma once

 

// Package: GuildTag

#include "Basic.hpp"


namespace SDK::Params
{

// Function GuildTag.GuildTag_C.ExecuteUbergraph_GuildTag
// 0x0030 (0x0030 - 0x0000)
struct GuildTag_C_ExecuteUbergraph_GuildTag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_904A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_TeamTag;                        // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(GuildTag_C_ExecuteUbergraph_GuildTag) == 0x000008, "Wrong alignment on GuildTag_C_ExecuteUbergraph_GuildTag");
static_assert(sizeof(GuildTag_C_ExecuteUbergraph_GuildTag) == 0x000030, "Wrong size on GuildTag_C_ExecuteUbergraph_GuildTag");
static_assert(offsetof(GuildTag_C_ExecuteUbergraph_GuildTag, EntryPoint) == 0x000000, "Member 'GuildTag_C_ExecuteUbergraph_GuildTag::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildTag_C_ExecuteUbergraph_GuildTag, K2Node_CustomEvent_TeamTag) == 0x000008, "Member 'GuildTag_C_ExecuteUbergraph_GuildTag::K2Node_CustomEvent_TeamTag' has a wrong offset!");
static_assert(offsetof(GuildTag_C_ExecuteUbergraph_GuildTag, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'GuildTag_C_ExecuteUbergraph_GuildTag::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GuildTag.GuildTag_C.SetTag
// 0x0010 (0x0010 - 0x0000)
struct GuildTag_C_SetTag final
{
public:
	class FString                                 Param_TeamTag;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildTag_C_SetTag) == 0x000008, "Wrong alignment on GuildTag_C_SetTag");
static_assert(sizeof(GuildTag_C_SetTag) == 0x000010, "Wrong size on GuildTag_C_SetTag");
static_assert(offsetof(GuildTag_C_SetTag, Param_TeamTag) == 0x000000, "Member 'GuildTag_C_SetTag::Param_TeamTag' has a wrong offset!");

}

