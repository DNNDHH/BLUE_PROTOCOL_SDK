#pragma once

 

// Package: WBP_CharaSelect_BustUpImage

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.ExecuteUbergraph_WBP_CharaSelect_BustUpImage
// 0x0040 (0x0040 - 0x0000)
struct WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63C9[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CharacterSelectCaptureBustUp_C*     K2Node_CustomEvent_CharacterSelectCaptureBustUp;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DeltaTime;                      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoad_bLoad;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63CA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage) == 0x000008, "Wrong alignment on WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage");
static_assert(sizeof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage) == 0x000040, "Wrong size on WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, EntryPoint) == 0x000000, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, Temp_bool_Variable) == 0x000004, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, Temp_byte_Variable) == 0x000005, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, Temp_bool_Variable_1) == 0x000006, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, Temp_byte_Variable_1) == 0x000007, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, Temp_byte_Variable_2) == 0x000008, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, K2Node_CustomEvent_CharacterSelectCaptureBustUp) == 0x000010, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::K2Node_CustomEvent_CharacterSelectCaptureBustUp' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, K2Node_CustomEvent_DeltaTime) == 0x000018, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::K2Node_CustomEvent_DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, CallFunc_IsLoad_bLoad) == 0x00001D, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::CallFunc_IsLoad_bLoad' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, CallFunc_Not_PreBool_ReturnValue) == 0x00001E, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, Temp_byte_Variable_3) == 0x00001F, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, CallFunc_Add_FloatFloat_ReturnValue) == 0x000020, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, CallFunc_FClamp_ReturnValue) == 0x000024, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, CallFunc_Less_FloatFloat_ReturnValue) == 0x000028, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, CallFunc_PlayAnimationForward_ReturnValue) == 0x000030, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, K2Node_Select_Default) == 0x000038, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, CallFunc_Not_PreBool_ReturnValue_1) == 0x000039, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage, K2Node_Select_Default_1) == 0x00003A, "Member 'WBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.Update
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharaSelect_BustUpImage_C_Update final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_BustUpImage_C_Update) == 0x000004, "Wrong alignment on WBP_CharaSelect_BustUpImage_C_Update");
static_assert(sizeof(WBP_CharaSelect_BustUpImage_C_Update) == 0x000004, "Wrong size on WBP_CharaSelect_BustUpImage_C_Update");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_Update, DeltaTime) == 0x000000, "Member 'WBP_CharaSelect_BustUpImage_C_Update::DeltaTime' has a wrong offset!");

// Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.SetTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharaSelect_BustUpImage_C_SetTarget final
{
public:
	class ABP_CharacterSelectCaptureBustUp_C*     CharacterSelectCaptureBustUp;                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_BustUpImage_C_SetTarget) == 0x000008, "Wrong alignment on WBP_CharaSelect_BustUpImage_C_SetTarget");
static_assert(sizeof(WBP_CharaSelect_BustUpImage_C_SetTarget) == 0x000008, "Wrong size on WBP_CharaSelect_BustUpImage_C_SetTarget");
static_assert(offsetof(WBP_CharaSelect_BustUpImage_C_SetTarget, CharacterSelectCaptureBustUp) == 0x000000, "Member 'WBP_CharaSelect_BustUpImage_C_SetTarget::CharacterSelectCaptureBustUp' has a wrong offset!");

}

