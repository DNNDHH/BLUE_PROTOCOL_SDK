#pragma once

 

// Package: PlayerProfileClassList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function PlayerProfileClassList.PlayerProfileClassList_C.ExecuteUbergraph_PlayerProfileClassList
// 0x0028 (0x0028 - 0x0000)
struct PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9010[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList) == 0x000008, "Wrong alignment on PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList");
static_assert(sizeof(PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList) == 0x000028, "Wrong size on PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList");
static_assert(offsetof(PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList, EntryPoint) == 0x000000, "Member 'PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList, K2Node_Event_Animation) == 0x000018, "Member 'PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList, CallFunc_PlaySE_ReturnValue_1) == 0x000024, "Member 'PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");

// Function PlayerProfileClassList.PlayerProfileClassList_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PlayerProfileClassList_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfileClassList_C_OnAnimationFinished) == 0x000008, "Wrong alignment on PlayerProfileClassList_C_OnAnimationFinished");
static_assert(sizeof(PlayerProfileClassList_C_OnAnimationFinished) == 0x000008, "Wrong size on PlayerProfileClassList_C_OnAnimationFinished");
static_assert(offsetof(PlayerProfileClassList_C_OnAnimationFinished, Animation) == 0x000000, "Member 'PlayerProfileClassList_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function PlayerProfileClassList.PlayerProfileClassList_C.AddClass
// 0x0020 (0x0020 - 0x0000)
struct PlayerProfileClassList_C_AddClass final
{
public:
	ESBClassType                                  Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9011[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Level;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerProfileClassListItem_C*          CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9012[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfileClassList_C_AddClass) == 0x000008, "Wrong alignment on PlayerProfileClassList_C_AddClass");
static_assert(sizeof(PlayerProfileClassList_C_AddClass) == 0x000020, "Wrong size on PlayerProfileClassList_C_AddClass");
static_assert(offsetof(PlayerProfileClassList_C_AddClass, Type) == 0x000000, "Member 'PlayerProfileClassList_C_AddClass::Type' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassList_C_AddClass, Level) == 0x000004, "Member 'PlayerProfileClassList_C_AddClass::Level' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassList_C_AddClass, CallFunc_Create_ReturnValue) == 0x000008, "Member 'PlayerProfileClassList_C_AddClass::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassList_C_AddClass, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'PlayerProfileClassList_C_AddClass::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileClassList_C_AddClass, CallFunc_AddChildToGrid_ReturnValue) == 0x000018, "Member 'PlayerProfileClassList_C_AddClass::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

}

