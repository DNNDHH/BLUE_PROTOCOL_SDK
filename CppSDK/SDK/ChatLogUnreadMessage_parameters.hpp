#pragma once

 

// Package: ChatLogUnreadMessage

#include "Basic.hpp"


namespace SDK::Params
{

// Function ChatLogUnreadMessage.ChatLogUnreadMessage_C.ZeroPadding
// 0x0068 (0x0068 - 0x0000)
struct ChatLogUnreadMessage_C_ZeroPadding final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AEC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   RetValue;                                          // 0x0008(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Right_ReturnValue;                        // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
};
static_assert(alignof(ChatLogUnreadMessage_C_ZeroPadding) == 0x000008, "Wrong alignment on ChatLogUnreadMessage_C_ZeroPadding");
static_assert(sizeof(ChatLogUnreadMessage_C_ZeroPadding) == 0x000068, "Wrong size on ChatLogUnreadMessage_C_ZeroPadding");
static_assert(offsetof(ChatLogUnreadMessage_C_ZeroPadding, InValue) == 0x000000, "Member 'ChatLogUnreadMessage_C_ZeroPadding::InValue' has a wrong offset!");
static_assert(offsetof(ChatLogUnreadMessage_C_ZeroPadding, RetValue) == 0x000008, "Member 'ChatLogUnreadMessage_C_ZeroPadding::RetValue' has a wrong offset!");
static_assert(offsetof(ChatLogUnreadMessage_C_ZeroPadding, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'ChatLogUnreadMessage_C_ZeroPadding::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogUnreadMessage_C_ZeroPadding, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'ChatLogUnreadMessage_C_ZeroPadding::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogUnreadMessage_C_ZeroPadding, CallFunc_Right_ReturnValue) == 0x000040, "Member 'ChatLogUnreadMessage_C_ZeroPadding::CallFunc_Right_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogUnreadMessage_C_ZeroPadding, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'ChatLogUnreadMessage_C_ZeroPadding::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

