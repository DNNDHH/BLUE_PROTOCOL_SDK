#pragma once

 

// Package: Fang_expedition_DetailFangImage

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.ExecuteUbergraph_Fang_expedition_DetailFangImage
// 0x0078 (0x0078 - 0x0000)
struct Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40F8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40F9[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Type;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40FA[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40FB[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0060(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage) == 0x000008, "Wrong alignment on Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage");
static_assert(sizeof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage) == 0x000078, "Wrong size on Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, EntryPoint) == 0x000000, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, Temp_object_Variable) == 0x000020, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, K2Node_DynamicCast_AsTexture_2D) == 0x000028, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, K2Node_CustomEvent_Type) == 0x000034, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000048, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, CallFunc_Less_IntInt_ReturnValue) == 0x000049, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, CallFunc_PlayAnimation_ReturnValue_1) == 0x000050, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, CallFunc_PlayAnimation_ReturnValue_2) == 0x000058, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, K2Node_Event_Animation) == 0x000060, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, CallFunc_PlayAnimation_ReturnValue_3) == 0x000068, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage, CallFunc_PlayAnimation_ReturnValue_4) == 0x000070, "Member 'Fang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");

// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DetailFangImage_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailFangImage_C_OnAnimationFinished) == 0x000008, "Wrong alignment on Fang_expedition_DetailFangImage_C_OnAnimationFinished");
static_assert(sizeof(Fang_expedition_DetailFangImage_C_OnAnimationFinished) == 0x000008, "Wrong size on Fang_expedition_DetailFangImage_C_OnAnimationFinished");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_OnAnimationFinished, Animation) == 0x000000, "Member 'Fang_expedition_DetailFangImage_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.PlayMoveAnim
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DetailFangImage_C_PlayMoveAnim final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailFangImage_C_PlayMoveAnim) == 0x000004, "Wrong alignment on Fang_expedition_DetailFangImage_C_PlayMoveAnim");
static_assert(sizeof(Fang_expedition_DetailFangImage_C_PlayMoveAnim) == 0x000004, "Wrong size on Fang_expedition_DetailFangImage_C_PlayMoveAnim");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_PlayMoveAnim, Type) == 0x000000, "Member 'Fang_expedition_DetailFangImage_C_PlayMoveAnim::Type' has a wrong offset!");

// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnLoaded_B65A1B5649E5906D193D59B0005B2979
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DetailFangImage_C_OnLoaded_B65A1B5649E5906D193D59B0005B2979 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailFangImage_C_OnLoaded_B65A1B5649E5906D193D59B0005B2979) == 0x000008, "Wrong alignment on Fang_expedition_DetailFangImage_C_OnLoaded_B65A1B5649E5906D193D59B0005B2979");
static_assert(sizeof(Fang_expedition_DetailFangImage_C_OnLoaded_B65A1B5649E5906D193D59B0005B2979) == 0x000008, "Wrong size on Fang_expedition_DetailFangImage_C_OnLoaded_B65A1B5649E5906D193D59B0005B2979");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_OnLoaded_B65A1B5649E5906D193D59B0005B2979, Loaded) == 0x000000, "Member 'Fang_expedition_DetailFangImage_C_OnLoaded_B65A1B5649E5906D193D59B0005B2979::Loaded' has a wrong offset!");

// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.SetTexture
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_DetailFangImage_C_SetTexture final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailFangImage_C_SetTexture) == 0x000008, "Wrong alignment on Fang_expedition_DetailFangImage_C_SetTexture");
static_assert(sizeof(Fang_expedition_DetailFangImage_C_SetTexture) == 0x000010, "Wrong size on Fang_expedition_DetailFangImage_C_SetTexture");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_SetTexture, Texture) == 0x000000, "Member 'Fang_expedition_DetailFangImage_C_SetTexture::Texture' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_SetTexture, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'Fang_expedition_DetailFangImage_C_SetTexture::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.SetTextureRef
// 0x0058 (0x0058 - 0x0000)
struct Fang_expedition_DetailFangImage_C_SetTextureRef final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40FC[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40FD[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailFangImage_C_SetTextureRef) == 0x000008, "Wrong alignment on Fang_expedition_DetailFangImage_C_SetTextureRef");
static_assert(sizeof(Fang_expedition_DetailFangImage_C_SetTextureRef) == 0x000058, "Wrong size on Fang_expedition_DetailFangImage_C_SetTextureRef");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_SetTextureRef, Texture) == 0x000000, "Member 'Fang_expedition_DetailFangImage_C_SetTextureRef::Texture' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_SetTextureRef, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000028, "Member 'Fang_expedition_DetailFangImage_C_SetTextureRef::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_SetTextureRef, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000030, "Member 'Fang_expedition_DetailFangImage_C_SetTextureRef::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_SetTextureRef, K2Node_DynamicCast_AsTexture_2D) == 0x000038, "Member 'Fang_expedition_DetailFangImage_C_SetTextureRef::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_SetTextureRef, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'Fang_expedition_DetailFangImage_C_SetTextureRef::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_SetTextureRef, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000048, "Member 'Fang_expedition_DetailFangImage_C_SetTextureRef::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_SetTextureRef, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'Fang_expedition_DetailFangImage_C_SetTextureRef::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.ResetAnimState
// 0x0018 (0x0018 - 0x0000)
struct Fang_expedition_DetailFangImage_C_ResetAnimState final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailFangImage_C_ResetAnimState) == 0x000008, "Wrong alignment on Fang_expedition_DetailFangImage_C_ResetAnimState");
static_assert(sizeof(Fang_expedition_DetailFangImage_C_ResetAnimState) == 0x000018, "Wrong size on Fang_expedition_DetailFangImage_C_ResetAnimState");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ResetAnimState, K2Node_MakeStruct_Margin) == 0x000000, "Member 'Fang_expedition_DetailFangImage_C_ResetAnimState::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailFangImage_C_ResetAnimState, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailFangImage_C_ResetAnimState::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

