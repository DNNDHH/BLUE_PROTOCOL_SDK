#pragma once

 

// Package: NotifyMessageItem_Holder

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.ExecuteUbergraph_NotifyMessageItem_Holder
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F4E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder) == 0x000008, "Wrong alignment on NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder");
static_assert(sizeof(NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder) == 0x000018, "Wrong size on NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder");
static_assert(offsetof(NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder, EntryPoint) == 0x000000, "Member 'NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder::EntryPoint' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder, K2Node_Event_Animation) == 0x000008, "Member 'NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct NotifyMessageItem_Holder_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessageItem_Holder_C_OnAnimationFinished) == 0x000008, "Wrong alignment on NotifyMessageItem_Holder_C_OnAnimationFinished");
static_assert(sizeof(NotifyMessageItem_Holder_C_OnAnimationFinished) == 0x000008, "Wrong size on NotifyMessageItem_Holder_C_OnAnimationFinished");
static_assert(offsetof(NotifyMessageItem_Holder_C_OnAnimationFinished, Animation) == 0x000000, "Member 'NotifyMessageItem_Holder_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.Start
// 0x0010 (0x0010 - 0x0000)
struct NotifyMessageItem_Holder_C_Start final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessageItem_Holder_C_Start) == 0x000008, "Wrong alignment on NotifyMessageItem_Holder_C_Start");
static_assert(sizeof(NotifyMessageItem_Holder_C_Start) == 0x000010, "Wrong size on NotifyMessageItem_Holder_C_Start");
static_assert(offsetof(NotifyMessageItem_Holder_C_Start, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'NotifyMessageItem_Holder_C_Start::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_Holder_C_Start, CallFunc_PlayAnimation_ReturnValue_1) == 0x000008, "Member 'NotifyMessageItem_Holder_C_Start::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.SetContent
// 0x0010 (0x0010 - 0x0000)
struct NotifyMessageItem_Holder_C_SetContent final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessageItem_Holder_C_SetContent) == 0x000008, "Wrong alignment on NotifyMessageItem_Holder_C_SetContent");
static_assert(sizeof(NotifyMessageItem_Holder_C_SetContent) == 0x000010, "Wrong size on NotifyMessageItem_Holder_C_SetContent");
static_assert(offsetof(NotifyMessageItem_Holder_C_SetContent, Widget) == 0x000000, "Member 'NotifyMessageItem_Holder_C_SetContent::Widget' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_Holder_C_SetContent, CallFunc_AddChildToCanvas_ReturnValue) == 0x000008, "Member 'NotifyMessageItem_Holder_C_SetContent::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.GetAnimatedPosition
// 0x0040 (0x0040 - 0x0000)
struct NotifyMessageItem_Holder_C_GetAnimatedPosition final
{
public:
	struct FMargin                                Position;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NotifyMessageItem_Holder_C_GetAnimatedPosition) == 0x000008, "Wrong alignment on NotifyMessageItem_Holder_C_GetAnimatedPosition");
static_assert(sizeof(NotifyMessageItem_Holder_C_GetAnimatedPosition) == 0x000040, "Wrong size on NotifyMessageItem_Holder_C_GetAnimatedPosition");
static_assert(offsetof(NotifyMessageItem_Holder_C_GetAnimatedPosition, Position) == 0x000000, "Member 'NotifyMessageItem_Holder_C_GetAnimatedPosition::Position' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_Holder_C_GetAnimatedPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'NotifyMessageItem_Holder_C_GetAnimatedPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_Holder_C_GetAnimatedPosition, CallFunc_GetPosition_ReturnValue) == 0x000018, "Member 'NotifyMessageItem_Holder_C_GetAnimatedPosition::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_Holder_C_GetAnimatedPosition, CallFunc_BreakVector2D_X) == 0x000020, "Member 'NotifyMessageItem_Holder_C_GetAnimatedPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_Holder_C_GetAnimatedPosition, CallFunc_BreakVector2D_Y) == 0x000024, "Member 'NotifyMessageItem_Holder_C_GetAnimatedPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_Holder_C_GetAnimatedPosition, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000028, "Member 'NotifyMessageItem_Holder_C_GetAnimatedPosition::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_Holder_C_GetAnimatedPosition, K2Node_MakeStruct_Margin) == 0x00002C, "Member 'NotifyMessageItem_Holder_C_GetAnimatedPosition::K2Node_MakeStruct_Margin' has a wrong offset!");

}

