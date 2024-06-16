#pragma once

 

// Package: GuildActivityBeforeStack

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.ExecuteUbergraph_GuildActivityBeforeStack
// 0x0028 (0x0028 - 0x0000)
struct GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8487[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_CustomEvent_Value;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USBUIGuildActivityUMGBase*              K2Node_CustomEvent_Widget;                         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack) == 0x000008, "Wrong alignment on GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack");
static_assert(sizeof(GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack) == 0x000028, "Wrong size on GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack");
static_assert(offsetof(GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack, EntryPoint) == 0x000000, "Member 'GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack, K2Node_CustomEvent_Value) == 0x000008, "Member 'GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack, K2Node_CustomEvent_Widget) == 0x000010, "Member 'GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack, CallFunc_SetDateTime_ReturnValue) == 0x000020, "Member 'GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

// Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.SetDateTime
// 0x0008 (0x0008 - 0x0000)
struct GuildActivityBeforeStack_C_SetDateTime final
{
public:
	struct FDateTime                              Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildActivityBeforeStack_C_SetDateTime) == 0x000008, "Wrong alignment on GuildActivityBeforeStack_C_SetDateTime");
static_assert(sizeof(GuildActivityBeforeStack_C_SetDateTime) == 0x000008, "Wrong size on GuildActivityBeforeStack_C_SetDateTime");
static_assert(offsetof(GuildActivityBeforeStack_C_SetDateTime, Value) == 0x000000, "Member 'GuildActivityBeforeStack_C_SetDateTime::Value' has a wrong offset!");

// Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.Add Data
// 0x0008 (0x0008 - 0x0000)
struct GuildActivityBeforeStack_C_Add_Data final
{
public:
	class USBUIGuildActivityUMGBase*              Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildActivityBeforeStack_C_Add_Data) == 0x000008, "Wrong alignment on GuildActivityBeforeStack_C_Add_Data");
static_assert(sizeof(GuildActivityBeforeStack_C_Add_Data) == 0x000008, "Wrong size on GuildActivityBeforeStack_C_Add_Data");
static_assert(offsetof(GuildActivityBeforeStack_C_Add_Data, Widget) == 0x000000, "Member 'GuildActivityBeforeStack_C_Add_Data::Widget' has a wrong offset!");

}

