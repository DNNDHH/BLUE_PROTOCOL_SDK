#pragma once

 

// Package: ShopMenuDetailsImagineMount

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsImagineMount_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineMount_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineMount_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsImagineMount_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsImagineMount_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsImagineMount_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsImagineMount_C_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineMount_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsImagineMount_C_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsImagineMount_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsImagineMount_C_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'ShopMenuDetailsImagineMount_C_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.ExecuteUbergraph_ShopMenuDetailsImagineMount
// 0x0160 (0x0160 - 0x0000)
struct ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9316[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterMountImagineText_ReturnValue;    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9317[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9318[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AmountMin;                      // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9319[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_UniqueId;                       // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMountImagineMaster_bIsValid;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_931A[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_FindMountImagineMaster_MountImagineMaster; // 0x00A8(0x0070)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_931B[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x011C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_931C[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0130(0x0028)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount");
static_assert(sizeof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount) == 0x000160, "Wrong size on ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_GetMasterMountImagineText_ReturnValue) == 0x000008, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_GetMasterMountImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, K2Node_MakeArray_Array) == 0x000018, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_Array_Get_Item) == 0x000040, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000048, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, K2Node_SwitchInteger_CmpSuccess) == 0x000050, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_GetDisplayName_ReturnValue) == 0x000058, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000068, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_PlayAnimation_ReturnValue_1) == 0x000078, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, K2Node_CustomEvent_ItemIndex) == 0x000080, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, K2Node_CustomEvent_Amount) == 0x000084, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, K2Node_CustomEvent_AmountMin) == 0x000088, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::K2Node_CustomEvent_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, K2Node_CustomEvent_UniqueId) == 0x000090, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_FindMountImagineMaster_bIsValid) == 0x0000A0, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_FindMountImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_FindMountImagineMaster_MountImagineMaster) == 0x0000A8, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_FindMountImagineMaster_MountImagineMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_IsEmpty_ReturnValue) == 0x000118, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, K2Node_MakeStruct_LinearColor) == 0x00011C, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, K2Node_MakeStruct_SlateColor) == 0x000130, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000158, "Member 'ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.SetData
// 0x0020 (0x0020 - 0x0000)
struct ShopMenuDetailsImagineMount_C_SetData final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_931D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UniqueId;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineMount_C_SetData) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineMount_C_SetData");
static_assert(sizeof(ShopMenuDetailsImagineMount_C_SetData) == 0x000020, "Wrong size on ShopMenuDetailsImagineMount_C_SetData");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_SetData, ItemIndex) == 0x000000, "Member 'ShopMenuDetailsImagineMount_C_SetData::ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_SetData, Amount) == 0x000004, "Member 'ShopMenuDetailsImagineMount_C_SetData::Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_SetData, AmountMin) == 0x000008, "Member 'ShopMenuDetailsImagineMount_C_SetData::AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineMount_C_SetData, UniqueId) == 0x000010, "Member 'ShopMenuDetailsImagineMount_C_SetData::UniqueId' has a wrong offset!");

}

