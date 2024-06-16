#pragma once

 

// Package: ChatLogIcon1

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ChatLogIcon1.ChatLogIcon1_C.SetIcon
// 0x0002 (0x0002 - 0x0000)
struct ChatLogIcon1_C_SetIcon final
{
public:
	ESBChatLogType                                ChatLogType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogIcon1_C_SetIcon) == 0x000001, "Wrong alignment on ChatLogIcon1_C_SetIcon");
static_assert(sizeof(ChatLogIcon1_C_SetIcon) == 0x000002, "Wrong size on ChatLogIcon1_C_SetIcon");
static_assert(offsetof(ChatLogIcon1_C_SetIcon, ChatLogType) == 0x000000, "Member 'ChatLogIcon1_C_SetIcon::ChatLogType' has a wrong offset!");
static_assert(offsetof(ChatLogIcon1_C_SetIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'ChatLogIcon1_C_SetIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

