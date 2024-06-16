#pragma once

 

// Package: Notificatin_BrightAnim

#include "Basic.hpp"


namespace SDK::Params
{

// Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.ExecuteUbergraph_Notificatin_BrightAnim
// 0x0020 (0x0020 - 0x0000)
struct Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C1F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C20[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim) == 0x000008, "Wrong alignment on Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim");
static_assert(sizeof(Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim) == 0x000020, "Wrong size on Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim");
static_assert(offsetof(Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim, EntryPoint) == 0x000000, "Member 'Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim::EntryPoint' has a wrong offset!");
static_assert(offsetof(Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim, K2Node_Event_Animation) == 0x000008, "Member 'Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000011, "Member 'Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct Notificatin_BrightAnim_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Notificatin_BrightAnim_C_OnAnimationFinished) == 0x000008, "Wrong alignment on Notificatin_BrightAnim_C_OnAnimationFinished");
static_assert(sizeof(Notificatin_BrightAnim_C_OnAnimationFinished) == 0x000008, "Wrong size on Notificatin_BrightAnim_C_OnAnimationFinished");
static_assert(offsetof(Notificatin_BrightAnim_C_OnAnimationFinished, Animation) == 0x000000, "Member 'Notificatin_BrightAnim_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Show
// 0x0018 (0x0018 - 0x0000)
struct Notificatin_BrightAnim_C_Show final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C21[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Notificatin_BrightAnim_C_Show) == 0x000008, "Wrong alignment on Notificatin_BrightAnim_C_Show");
static_assert(sizeof(Notificatin_BrightAnim_C_Show) == 0x000018, "Wrong size on Notificatin_BrightAnim_C_Show");
static_assert(offsetof(Notificatin_BrightAnim_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Notificatin_BrightAnim_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Notificatin_BrightAnim_C_Show, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'Notificatin_BrightAnim_C_Show::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(Notificatin_BrightAnim_C_Show, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'Notificatin_BrightAnim_C_Show::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Hide
// 0x0010 (0x0010 - 0x0000)
struct Notificatin_BrightAnim_C_Hide final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Notificatin_BrightAnim_C_Hide) == 0x000008, "Wrong alignment on Notificatin_BrightAnim_C_Hide");
static_assert(sizeof(Notificatin_BrightAnim_C_Hide) == 0x000010, "Wrong size on Notificatin_BrightAnim_C_Hide");
static_assert(offsetof(Notificatin_BrightAnim_C_Hide, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Notificatin_BrightAnim_C_Hide::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Notificatin_BrightAnim_C_Hide, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'Notificatin_BrightAnim_C_Hide::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

