#pragma once

 

// Package: HateAlertIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function HateAlertIcon.HateAlertIcon_C.ExecuteUbergraph_HateAlertIcon
// 0x0028 (0x0028 - 0x0000)
struct HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A46[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A47[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           K2Node_Event_OwnerCharacter;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_AnimationSpeed;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon) == 0x000008, "Wrong alignment on HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon");
static_assert(sizeof(HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon) == 0x000028, "Wrong size on HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon");
static_assert(offsetof(HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon, EntryPoint) == 0x000000, "Member 'HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon, K2Node_Event_Animation) == 0x000008, "Member 'HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon, K2Node_Event_IsDesignTime) == 0x000010, "Member 'HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000011, "Member 'HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon, K2Node_Event_OwnerCharacter) == 0x000018, "Member 'HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon::K2Node_Event_OwnerCharacter' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon, K2Node_Event_AnimationSpeed) == 0x000020, "Member 'HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon::K2Node_Event_AnimationSpeed' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.RequestSetAnimationSpeed
// 0x0004 (0x0004 - 0x0000)
struct HateAlertIcon_C_RequestSetAnimationSpeed final
{
public:
	float                                         Param_AnimationSpeed;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlertIcon_C_RequestSetAnimationSpeed) == 0x000004, "Wrong alignment on HateAlertIcon_C_RequestSetAnimationSpeed");
static_assert(sizeof(HateAlertIcon_C_RequestSetAnimationSpeed) == 0x000004, "Wrong size on HateAlertIcon_C_RequestSetAnimationSpeed");
static_assert(offsetof(HateAlertIcon_C_RequestSetAnimationSpeed, Param_AnimationSpeed) == 0x000000, "Member 'HateAlertIcon_C_RequestSetAnimationSpeed::Param_AnimationSpeed' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.RequestSetOwnerCharacter
// 0x0008 (0x0008 - 0x0000)
struct HateAlertIcon_C_RequestSetOwnerCharacter final
{
public:
	class ASBCharacter*                           OwnerCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlertIcon_C_RequestSetOwnerCharacter) == 0x000008, "Wrong alignment on HateAlertIcon_C_RequestSetOwnerCharacter");
static_assert(sizeof(HateAlertIcon_C_RequestSetOwnerCharacter) == 0x000008, "Wrong size on HateAlertIcon_C_RequestSetOwnerCharacter");
static_assert(offsetof(HateAlertIcon_C_RequestSetOwnerCharacter, OwnerCharacter) == 0x000000, "Member 'HateAlertIcon_C_RequestSetOwnerCharacter::OwnerCharacter' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HateAlertIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HateAlertIcon_C_PreConstruct) == 0x000001, "Wrong alignment on HateAlertIcon_C_PreConstruct");
static_assert(sizeof(HateAlertIcon_C_PreConstruct) == 0x000001, "Wrong size on HateAlertIcon_C_PreConstruct");
static_assert(offsetof(HateAlertIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HateAlertIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct HateAlertIcon_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlertIcon_C_OnAnimationFinished) == 0x000008, "Wrong alignment on HateAlertIcon_C_OnAnimationFinished");
static_assert(sizeof(HateAlertIcon_C_OnAnimationFinished) == 0x000008, "Wrong size on HateAlertIcon_C_OnAnimationFinished");
static_assert(offsetof(HateAlertIcon_C_OnAnimationFinished, Animation) == 0x000000, "Member 'HateAlertIcon_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.Show
// 0x0001 (0x0001 - 0x0000)
struct HateAlertIcon_C_Show final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HateAlertIcon_C_Show) == 0x000001, "Wrong alignment on HateAlertIcon_C_Show");
static_assert(sizeof(HateAlertIcon_C_Show) == 0x000001, "Wrong size on HateAlertIcon_C_Show");
static_assert(offsetof(HateAlertIcon_C_Show, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'HateAlertIcon_C_Show::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.Hide
// 0x0002 (0x0002 - 0x0000)
struct HateAlertIcon_C_Hide final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HateAlertIcon_C_Hide) == 0x000001, "Wrong alignment on HateAlertIcon_C_Hide");
static_assert(sizeof(HateAlertIcon_C_Hide) == 0x000002, "Wrong size on HateAlertIcon_C_Hide");
static_assert(offsetof(HateAlertIcon_C_Hide, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'HateAlertIcon_C_Hide::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_Hide, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000001, "Member 'HateAlertIcon_C_Hide::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.SetIconColor
// 0x0010 (0x0010 - 0x0000)
struct HateAlertIcon_C_SetIconColor final
{
public:
	struct FLinearColor                           InColorAndOpacity;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlertIcon_C_SetIconColor) == 0x000004, "Wrong alignment on HateAlertIcon_C_SetIconColor");
static_assert(sizeof(HateAlertIcon_C_SetIconColor) == 0x000010, "Wrong size on HateAlertIcon_C_SetIconColor");
static_assert(offsetof(HateAlertIcon_C_SetIconColor, InColorAndOpacity) == 0x000000, "Member 'HateAlertIcon_C_SetIconColor::InColorAndOpacity' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.SetIconColorName
// 0x00C8 (0x00C8 - 0x0000)
struct HateAlertIcon_C_SetIconColorName final
{
public:
	class FString                                 ColorName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, struct FLinearColor>      ColorTable;                                        // 0x0010(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, struct FLinearColor>      K2Node_MakeVariable_MakeVariableOutput;            // 0x0060(0x0050)()
	struct FLinearColor                           CallFunc_Map_Find_Value;                           // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HateAlertIcon_C_SetIconColorName) == 0x000008, "Wrong alignment on HateAlertIcon_C_SetIconColorName");
static_assert(sizeof(HateAlertIcon_C_SetIconColorName) == 0x0000C8, "Wrong size on HateAlertIcon_C_SetIconColorName");
static_assert(offsetof(HateAlertIcon_C_SetIconColorName, ColorName) == 0x000000, "Member 'HateAlertIcon_C_SetIconColorName::ColorName' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_SetIconColorName, ColorTable) == 0x000010, "Member 'HateAlertIcon_C_SetIconColorName::ColorTable' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_SetIconColorName, K2Node_MakeVariable_MakeVariableOutput) == 0x000060, "Member 'HateAlertIcon_C_SetIconColorName::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_SetIconColorName, CallFunc_Map_Find_Value) == 0x0000B0, "Member 'HateAlertIcon_C_SetIconColorName::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_SetIconColorName, CallFunc_Map_Find_ReturnValue) == 0x0000C0, "Member 'HateAlertIcon_C_SetIconColorName::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct HateAlertIcon_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlertIcon_C_PlayAnimIn) == 0x000008, "Wrong alignment on HateAlertIcon_C_PlayAnimIn");
static_assert(sizeof(HateAlertIcon_C_PlayAnimIn) == 0x000008, "Wrong size on HateAlertIcon_C_PlayAnimIn");
static_assert(offsetof(HateAlertIcon_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'HateAlertIcon_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.PlayAnimOut
// 0x0008 (0x0008 - 0x0000)
struct HateAlertIcon_C_PlayAnimOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlertIcon_C_PlayAnimOut) == 0x000008, "Wrong alignment on HateAlertIcon_C_PlayAnimOut");
static_assert(sizeof(HateAlertIcon_C_PlayAnimOut) == 0x000008, "Wrong size on HateAlertIcon_C_PlayAnimOut");
static_assert(offsetof(HateAlertIcon_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'HateAlertIcon_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.PlayAnimBlink
// 0x0008 (0x0008 - 0x0000)
struct HateAlertIcon_C_PlayAnimBlink final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlertIcon_C_PlayAnimBlink) == 0x000008, "Wrong alignment on HateAlertIcon_C_PlayAnimBlink");
static_assert(sizeof(HateAlertIcon_C_PlayAnimBlink) == 0x000008, "Wrong size on HateAlertIcon_C_PlayAnimBlink");
static_assert(offsetof(HateAlertIcon_C_PlayAnimBlink, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'HateAlertIcon_C_PlayAnimBlink::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.SetAnimationSpeed
// 0x0008 (0x0008 - 0x0000)
struct HateAlertIcon_C_SetAnimationSpeed final
{
public:
	float                                         Param_AnimationSpeed;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HateAlertIcon_C_SetAnimationSpeed) == 0x000004, "Wrong alignment on HateAlertIcon_C_SetAnimationSpeed");
static_assert(sizeof(HateAlertIcon_C_SetAnimationSpeed) == 0x000008, "Wrong size on HateAlertIcon_C_SetAnimationSpeed");
static_assert(offsetof(HateAlertIcon_C_SetAnimationSpeed, Param_AnimationSpeed) == 0x000000, "Member 'HateAlertIcon_C_SetAnimationSpeed::Param_AnimationSpeed' has a wrong offset!");
static_assert(offsetof(HateAlertIcon_C_SetAnimationSpeed, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'HateAlertIcon_C_SetAnimationSpeed::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function HateAlertIcon.HateAlertIcon_C.RequestSetIconColorName
// 0x0010 (0x0010 - 0x0000)
struct HateAlertIcon_C_RequestSetIconColorName final
{
public:
	class FString                                 ColorName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(HateAlertIcon_C_RequestSetIconColorName) == 0x000008, "Wrong alignment on HateAlertIcon_C_RequestSetIconColorName");
static_assert(sizeof(HateAlertIcon_C_RequestSetIconColorName) == 0x000010, "Wrong size on HateAlertIcon_C_RequestSetIconColorName");
static_assert(offsetof(HateAlertIcon_C_RequestSetIconColorName, ColorName) == 0x000000, "Member 'HateAlertIcon_C_RequestSetIconColorName::ColorName' has a wrong offset!");

}

