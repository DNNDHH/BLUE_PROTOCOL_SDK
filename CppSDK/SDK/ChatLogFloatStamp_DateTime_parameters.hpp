#pragma once

 

// Package: ChatLogFloatStamp_DateTime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C.ExecuteUbergraph_ChatLogFloatStamp_DateTime
// 0x0018 (0x0018 - 0x0000)
struct ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F6C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_CustomEvent_ExpiryDateTime;                 // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime) == 0x000008, "Wrong alignment on ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime");
static_assert(sizeof(ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime) == 0x000018, "Wrong size on ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime");
static_assert(offsetof(ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime, EntryPoint) == 0x000000, "Member 'ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime, K2Node_CustomEvent_ExpiryDateTime) == 0x000008, "Member 'ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime::K2Node_CustomEvent_ExpiryDateTime' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime, CallFunc_SetDateTime_ReturnValue) == 0x000010, "Member 'ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C.SetExpiryDateTime
// 0x0008 (0x0008 - 0x0000)
struct ChatLogFloatStamp_DateTime_C_SetExpiryDateTime final
{
public:
	struct FDateTime                              ExpiryDateTime;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogFloatStamp_DateTime_C_SetExpiryDateTime) == 0x000008, "Wrong alignment on ChatLogFloatStamp_DateTime_C_SetExpiryDateTime");
static_assert(sizeof(ChatLogFloatStamp_DateTime_C_SetExpiryDateTime) == 0x000008, "Wrong size on ChatLogFloatStamp_DateTime_C_SetExpiryDateTime");
static_assert(offsetof(ChatLogFloatStamp_DateTime_C_SetExpiryDateTime, ExpiryDateTime) == 0x000000, "Member 'ChatLogFloatStamp_DateTime_C_SetExpiryDateTime::ExpiryDateTime' has a wrong offset!");

}

