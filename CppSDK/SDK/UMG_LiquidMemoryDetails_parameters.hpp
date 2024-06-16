#pragma once

 

// Package: UMG_LiquidMemoryDetails

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnCloseAnimationFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryDetails_C_OnCloseAnimationFinished__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryDetails_C_OnCloseAnimationFinished__DelegateSignature) == 0x000008, "Wrong alignment on UMG_LiquidMemoryDetails_C_OnCloseAnimationFinished__DelegateSignature");
static_assert(sizeof(UMG_LiquidMemoryDetails_C_OnCloseAnimationFinished__DelegateSignature) == 0x000008, "Wrong size on UMG_LiquidMemoryDetails_C_OnCloseAnimationFinished__DelegateSignature");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_OnCloseAnimationFinished__DelegateSignature, InWidget) == 0x000000, "Member 'UMG_LiquidMemoryDetails_C_OnCloseAnimationFinished__DelegateSignature::InWidget' has a wrong offset!");

// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.ExecuteUbergraph_UMG_LiquidMemoryDetails
// 0x0050 (0x0050 - 0x0000)
struct UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F35[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F36[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InLiquidMemoryId;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InFilledLevel;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F37[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails) == 0x000008, "Wrong alignment on UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails");
static_assert(sizeof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails) == 0x000050, "Wrong size on UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, EntryPoint) == 0x000000, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, K2Node_Event_Animation) == 0x000010, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, K2Node_CustomEvent_InLiquidMemoryId) == 0x00001C, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::K2Node_CustomEvent_InLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, K2Node_CustomEvent_InFilledLevel) == 0x000020, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::K2Node_CustomEvent_InFilledLevel' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, CallFunc_Clamp_ReturnValue) == 0x000024, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000030, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, CallFunc_PlayAnimation_ReturnValue_2) == 0x000038, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, CallFunc_PlayAnimation_ReturnValue_3) == 0x000040, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.ShowDetails
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryDetails_C_ShowDetails final
{
public:
	int32                                         InLiquidMemoryId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InFilledLevel;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryDetails_C_ShowDetails) == 0x000004, "Wrong alignment on UMG_LiquidMemoryDetails_C_ShowDetails");
static_assert(sizeof(UMG_LiquidMemoryDetails_C_ShowDetails) == 0x000008, "Wrong size on UMG_LiquidMemoryDetails_C_ShowDetails");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ShowDetails, InLiquidMemoryId) == 0x000000, "Member 'UMG_LiquidMemoryDetails_C_ShowDetails::InLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_ShowDetails, InFilledLevel) == 0x000004, "Member 'UMG_LiquidMemoryDetails_C_ShowDetails::InFilledLevel' has a wrong offset!");

// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryDetails_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryDetails_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UMG_LiquidMemoryDetails_C_OnAnimationFinished");
static_assert(sizeof(UMG_LiquidMemoryDetails_C_OnAnimationFinished) == 0x000008, "Wrong size on UMG_LiquidMemoryDetails_C_OnAnimationFinished");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UMG_LiquidMemoryDetails_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.SetFilledLevel
// 0x0040 (0x0040 - 0x0000)
struct UMG_LiquidMemoryDetails_C_SetFilledLevel final
{
public:
	int32                                         InFilledLevel;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpFilledLevel;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpStartFilledLevelTextId;                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F38[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(UMG_LiquidMemoryDetails_C_SetFilledLevel) == 0x000008, "Wrong alignment on UMG_LiquidMemoryDetails_C_SetFilledLevel");
static_assert(sizeof(UMG_LiquidMemoryDetails_C_SetFilledLevel) == 0x000040, "Wrong size on UMG_LiquidMemoryDetails_C_SetFilledLevel");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, InFilledLevel) == 0x000000, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::InFilledLevel' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, TmpFilledLevel) == 0x000004, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::TmpFilledLevel' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, TmpStartFilledLevelTextId) == 0x000008, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::TmpStartFilledLevelTextId' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, Temp_byte_Variable) == 0x00000C, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, Temp_byte_Variable_1) == 0x00000D, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, Temp_bool_Variable) == 0x00000E, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, CallFunc_Greater_IntInt_ReturnValue) == 0x00000F, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, K2Node_Select_Default) == 0x000014, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_SetFilledLevel, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'UMG_LiquidMemoryDetails_C_SetFilledLevel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.PlayDrinkingAnimation
// 0x0004 (0x0004 - 0x0000)
struct UMG_LiquidMemoryDetails_C_PlayDrinkingAnimation final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryDetails_C_PlayDrinkingAnimation) == 0x000004, "Wrong alignment on UMG_LiquidMemoryDetails_C_PlayDrinkingAnimation");
static_assert(sizeof(UMG_LiquidMemoryDetails_C_PlayDrinkingAnimation) == 0x000004, "Wrong size on UMG_LiquidMemoryDetails_C_PlayDrinkingAnimation");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_PlayDrinkingAnimation, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'UMG_LiquidMemoryDetails_C_PlayDrinkingAnimation::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.PlayAnimEffectOut
// 0x0008 (0x0008 - 0x0000)
struct UMG_LiquidMemoryDetails_C_PlayAnimEffectOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LiquidMemoryDetails_C_PlayAnimEffectOut) == 0x000008, "Wrong alignment on UMG_LiquidMemoryDetails_C_PlayAnimEffectOut");
static_assert(sizeof(UMG_LiquidMemoryDetails_C_PlayAnimEffectOut) == 0x000008, "Wrong size on UMG_LiquidMemoryDetails_C_PlayAnimEffectOut");
static_assert(offsetof(UMG_LiquidMemoryDetails_C_PlayAnimEffectOut, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UMG_LiquidMemoryDetails_C_PlayAnimEffectOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

