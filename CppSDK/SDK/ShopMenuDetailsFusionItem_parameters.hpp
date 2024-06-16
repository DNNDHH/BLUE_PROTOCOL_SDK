#pragma once

 

// Package: ShopMenuDetailsFusionItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsFusionItem_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsFusionItem_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsFusionItem_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsFusionItem_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsFusionItem_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsFusionItem_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.ExecuteUbergraph_ShopMenuDetailsFusionItem
// 0x0150 (0x0150 - 0x0000)
struct ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4125[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4126[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0018(0x00D0)()
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x00E8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4127[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AmountMin;                      // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4128[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0120(0x0018)()
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array;                            // 0x0138(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem) == 0x000008, "Wrong alignment on ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem");
static_assert(sizeof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem) == 0x000150, "Wrong size on ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, CallFunc_FindItemMaster_bIsValid) == 0x000010, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, CallFunc_FindItemMaster_ItemMaster) == 0x000018, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, K2Node_Event_Animation) == 0x0000E8, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000F0, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000F8, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, K2Node_CustomEvent_ItemIndex) == 0x000100, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, K2Node_CustomEvent_Amount) == 0x000104, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, K2Node_CustomEvent_AmountMin) == 0x000108, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::K2Node_CustomEvent_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, K2Node_SwitchInteger_CmpSuccess) == 0x00010C, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, CallFunc_GetItemText_ReturnValue) == 0x000110, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000120, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, K2Node_MakeArray_Array) == 0x000138, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000148, "Member 'ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.ShowDetails
// 0x000C (0x000C - 0x0000)
struct ShopMenuDetailsFusionItem_C_ShowDetails final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_AmountMin;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsFusionItem_C_ShowDetails) == 0x000004, "Wrong alignment on ShopMenuDetailsFusionItem_C_ShowDetails");
static_assert(sizeof(ShopMenuDetailsFusionItem_C_ShowDetails) == 0x00000C, "Wrong size on ShopMenuDetailsFusionItem_C_ShowDetails");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ShowDetails, ItemIndex) == 0x000000, "Member 'ShopMenuDetailsFusionItem_C_ShowDetails::ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ShowDetails, Param_Amount) == 0x000004, "Member 'ShopMenuDetailsFusionItem_C_ShowDetails::Param_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_ShowDetails, Param_AmountMin) == 0x000008, "Member 'ShopMenuDetailsFusionItem_C_ShowDetails::Param_AmountMin' has a wrong offset!");

// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsFusionItem_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsFusionItem_C_OnAnimationFinished) == 0x000008, "Wrong alignment on ShopMenuDetailsFusionItem_C_OnAnimationFinished");
static_assert(sizeof(ShopMenuDetailsFusionItem_C_OnAnimationFinished) == 0x000008, "Wrong size on ShopMenuDetailsFusionItem_C_OnAnimationFinished");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_OnAnimationFinished, Animation) == 0x000000, "Member 'ShopMenuDetailsFusionItem_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.SetItemIconImage
// 0x0004 (0x0004 - 0x0000)
struct ShopMenuDetailsFusionItem_C_SetItemIconImage final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsFusionItem_C_SetItemIconImage) == 0x000004, "Wrong alignment on ShopMenuDetailsFusionItem_C_SetItemIconImage");
static_assert(sizeof(ShopMenuDetailsFusionItem_C_SetItemIconImage) == 0x000004, "Wrong size on ShopMenuDetailsFusionItem_C_SetItemIconImage");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemIconImage, InItemIndex) == 0x000000, "Member 'ShopMenuDetailsFusionItem_C_SetItemIconImage::InItemIndex' has a wrong offset!");

// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.SetItemEffectText
// 0x0568 (0x0568 - 0x0000)
struct ShopMenuDetailsFusionItem_C_SetItemEffectText final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AbilityPartsName2;                                 // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AbilityPartsName1;                                 // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSyntheAbilityData                   SyntheAbilityMax;                                  // 0x0014(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBSyntheAbilityData                   SyntheAbilityMin;                                  // 0x0030(0x001C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_4129[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     FusionItemText;                                    // 0x0050(0x0050)(Edit, BlueprintVisible)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_412A[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x00A4(0x0018)(NoDestructor)
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_412B[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x00C0(0x0048)()
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy; // 0x0108(0x001C)(NoDestructor)
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy; // 0x0124(0x001C)(NoDestructor)
	bool                                          CallFunc_GetFusionItemTextCollection_bIsValid;     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_412C[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     CallFunc_GetFusionItemTextCollection_ReturnValue;  // 0x0148(0x0050)(ConstParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0198(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x01BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_412D[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01D0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01E8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0200(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x021B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_412E[0x3];                                     // 0x021D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0230(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_412F[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0250(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4130[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x028A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4131[0x5];                                     // 0x028B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0290(0x0010)(ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4132[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4133[0x6];                                     // 0x02CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue; // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4134[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02E8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0300(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0318(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_1; // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0368(0x0018)()
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_2; // 0x0380(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0390(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x03D0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x03E8(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x03F8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0438(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0450(0x0018)()
	class FText                                   K2Node_Select_Default_4;                           // 0x0468(0x0018)()
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_3; // 0x0480(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0490(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4135[0x7];                                     // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x04B0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x04F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0500(0x0018)()
	TArray<class AActor*>                         K2Node_MakeArray_Array_4;                          // 0x0518(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_5;                              // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4136[0x7];                                     // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0538(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_5;                           // 0x0540(0x0018)()
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0558(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsFusionItem_C_SetItemEffectText) == 0x000008, "Wrong alignment on ShopMenuDetailsFusionItem_C_SetItemEffectText");
static_assert(sizeof(ShopMenuDetailsFusionItem_C_SetItemEffectText) == 0x000568, "Wrong size on ShopMenuDetailsFusionItem_C_SetItemEffectText");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, InItemID) == 0x000000, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::InItemID' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, AbilityPartsName2) == 0x000004, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::AbilityPartsName2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, AbilityPartsName1) == 0x00000C, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::AbilityPartsName1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, SyntheAbilityMax) == 0x000014, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::SyntheAbilityMax' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, SyntheAbilityMin) == 0x000030, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::SyntheAbilityMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, FusionItemText) == 0x000050, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::FusionItemText' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000A0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_FindFusionItemMaster_IsValid) == 0x0000A1, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x0000A4, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_FindAbilityMaster_bIsValid) == 0x0000BC, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_FindAbilityMaster_AbilityMaster) == 0x0000C0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy) == 0x000108, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy) == 0x000124, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_GetFusionItemTextCollection_bIsValid) == 0x000140, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_GetFusionItemTextCollection_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_GetFusionItemTextCollection_ReturnValue) == 0x000148, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_GetFusionItemTextCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_IntToText_ReturnValue) == 0x000198, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001B0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, Temp_bool_Variable) == 0x0001B1, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0001B2, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0001B3, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001B4, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0001B5, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001B6, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_BooleanOR_ReturnValue) == 0x0001B7, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0001B8, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001B9, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x0001BA, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_BooleanOR_ReturnValue_1) == 0x0001BB, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001C0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue) == 0x0001D0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001E8, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000200, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, Temp_bool_Variable_1) == 0x000218, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_Select_Default) == 0x000219, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00021A, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_Select_Default_1) == 0x00021B, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x00021C, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000220, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000230, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, Temp_bool_Variable_2) == 0x000248, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_MakeArray_Array) == 0x000250, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Array_Get_Item) == 0x000260, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_Select_Default_2) == 0x000268, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000270, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_GetDisplayName_ReturnValue) == 0x000278, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_IsEmpty_ReturnValue) == 0x000288, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, Temp_bool_Variable_3) == 0x000289, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x00028A, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_MakeArray_Array_1) == 0x000290, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x0002A0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Array_Get_Item_1) == 0x0002A8, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x0002B0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_GetDisplayName_ReturnValue_1) == 0x0002B8, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_IsEmpty_ReturnValue_1) == 0x0002C8, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, Temp_bool_Variable_4) == 0x0002C9, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_ConvertAbilityEffectValueText_ReturnValue) == 0x0002D0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_ConvertAbilityEffectValueText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_Select_Default_3) == 0x0002E0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002E8, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000300, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_MakeStruct_FormatArgumentData) == 0x000318, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_ConvertAbilityEffectValueText_ReturnValue_1) == 0x000358, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_ConvertAbilityEffectValueText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000368, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_ConvertAbilityEffectValueText_ReturnValue_2) == 0x000380, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_ConvertAbilityEffectValueText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000390, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0003D0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_MakeArray_Array_2) == 0x0003E8, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_MakeStruct_FormatArgumentData_2) == 0x0003F8, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Format_ReturnValue) == 0x000438, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000450, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_Select_Default_4) == 0x000468, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_ConvertAbilityEffectValueText_ReturnValue_3) == 0x000480, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_ConvertAbilityEffectValueText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000490, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_IsEmpty_ReturnValue_2) == 0x0004A8, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_MakeStruct_FormatArgumentData_3) == 0x0004B0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_MakeArray_Array_3) == 0x0004F0, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Format_ReturnValue_1) == 0x000500, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_MakeArray_Array_4) == 0x000518, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, Temp_bool_Variable_5) == 0x000528, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_Array_Get_Item_2) == 0x000530, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000538, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, K2Node_Select_Default_5) == 0x000540, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsFusionItem_C_SetItemEffectText, CallFunc_GetDisplayName_ReturnValue_2) == 0x000558, "Member 'ShopMenuDetailsFusionItem_C_SetItemEffectText::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");

}

