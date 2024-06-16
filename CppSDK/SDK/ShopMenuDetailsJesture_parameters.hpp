#pragma once

 

// Package: ShopMenuDetailsJesture

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsJesture_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsJesture_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsJesture_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsJesture_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsJesture_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsJesture_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsJesture_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.ExecuteUbergraph_ShopMenuDetailsJesture
// 0x0130 (0x0130 - 0x0000)
struct ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79C2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79C3[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79C4[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79C5[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindEmoteMaster_bIsValid;                 // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79C6[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEmoteMasterData                     CallFunc_FindEmoteMaster_EmoteMaster;              // 0x0070(0x0028)()
	class ABP_PlayerSceneCapture2D_Studio_C*      K2Node_CustomEvent_CaptureStudio;                  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x00A8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindEmotionInfoByIntId_bIsValid;       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79C7[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEmotionInfo                         CallFunc_BP_FindEmotionInfoByIntId_ReturnValue;    // 0x00E0(0x0038)()
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_2;                          // 0x0118(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture) == 0x000008, "Wrong alignment on ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture");
static_assert(sizeof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture) == 0x000130, "Wrong size on ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, K2Node_MakeArray_Array) == 0x000008, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_Array_Get_Item) == 0x000018, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_IsEmpty_ReturnValue) == 0x000020, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_IsEmpty_ReturnValue_1) == 0x000040, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, K2Node_SwitchInteger_CmpSuccess) == 0x000054, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000055, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_PlayAnimation_ReturnValue_1) == 0x000060, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, K2Node_CustomEvent_ItemIndex) == 0x000068, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_FindEmoteMaster_bIsValid) == 0x00006C, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_FindEmoteMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_FindEmoteMaster_EmoteMaster) == 0x000070, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_FindEmoteMaster_EmoteMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, K2Node_CustomEvent_CaptureStudio) == 0x000098, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::K2Node_CustomEvent_CaptureStudio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_Conv_StringToName_ReturnValue) == 0x0000A0, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, K2Node_MakeArray_Array_1) == 0x0000A8, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_Array_Get_Item_1) == 0x0000B8, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x0000C0, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_GetDisplayName_ReturnValue_1) == 0x0000C8, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_BP_FindEmotionInfoByIntId_bIsValid) == 0x0000D8, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_BP_FindEmotionInfoByIntId_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_BP_FindEmotionInfoByIntId_ReturnValue) == 0x0000E0, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_BP_FindEmotionInfoByIntId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, K2Node_MakeArray_Array_2) == 0x000118, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000128, "Member 'ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.SetCaptureStudio
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsJesture_C_SetCaptureStudio final
{
public:
	class ABP_PlayerSceneCapture2D_Studio_C*      Param_CaptureStudio;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsJesture_C_SetCaptureStudio) == 0x000008, "Wrong alignment on ShopMenuDetailsJesture_C_SetCaptureStudio");
static_assert(sizeof(ShopMenuDetailsJesture_C_SetCaptureStudio) == 0x000008, "Wrong size on ShopMenuDetailsJesture_C_SetCaptureStudio");
static_assert(offsetof(ShopMenuDetailsJesture_C_SetCaptureStudio, Param_CaptureStudio) == 0x000000, "Member 'ShopMenuDetailsJesture_C_SetCaptureStudio::Param_CaptureStudio' has a wrong offset!");

// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.SetData
// 0x0004 (0x0004 - 0x0000)
struct ShopMenuDetailsJesture_C_SetData final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsJesture_C_SetData) == 0x000004, "Wrong alignment on ShopMenuDetailsJesture_C_SetData");
static_assert(sizeof(ShopMenuDetailsJesture_C_SetData) == 0x000004, "Wrong size on ShopMenuDetailsJesture_C_SetData");
static_assert(offsetof(ShopMenuDetailsJesture_C_SetData, ItemIndex) == 0x000000, "Member 'ShopMenuDetailsJesture_C_SetData::ItemIndex' has a wrong offset!");

}

