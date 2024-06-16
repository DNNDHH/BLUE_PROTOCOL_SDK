#pragma once

 

// Package: ShopMenuDetailsImagineInner

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsImagineInner_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineInner_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineInner_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsImagineInner_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsImagineInner_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsImagineInner_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.ExecuteUbergraph_ShopMenuDetailsImagineInner
// 0x0538 (0x0538 - 0x0000)
struct ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A4A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A4B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A4C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0038(0x0028)(HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A4D[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0068(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               CallFunc_Array_Get_Item_1;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A4E[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item_2;                         // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A4F[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FImagineParameter                      CallFunc_GetImagineLevelParam_ReturnValue;         // 0x00AC(0x006C)(NoDestructor)
	class UTextBlock*                             CallFunc_Array_Get_Item_3;                         // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_4;                         // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x0128(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_5;                         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0150(0x0018)()
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A50[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_3;                          // 0x0188(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_6;                         // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A51[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A52[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AmountMin;                      // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A53[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_UniqueId;                       // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bShowProduct;                   // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A54[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RecipeId;                       // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A55[0x6];                                     // 0x0202(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0208(0x00B0)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x02B8(0x0018)()
	TArray<int32>                                 K2Node_MakeArray_Array_4;                          // 0x02D0(0x0010)(ReferenceParm)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_5;                          // 0x02E0(0x0010)(ReferenceParm, ContainsInstancedReference)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A56[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USizeBox*>                       K2Node_MakeArray_Array_6;                          // 0x02F8(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A57[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A58[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A59[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A5A[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_7;                          // 0x0328(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_8;                          // 0x0338(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UImage*>                         K2Node_MakeArray_Array_9;                          // 0x0348(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0358(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A5B[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonImagineAbilityEfficacyDescPopup_C* CallFunc_Create_ReturnValue_2;                     // 0x0370(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A5C[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A5D[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid_1;             // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A5E[0x6];                                     // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster_1;        // 0x03A0(0x00B0)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0451(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityName_bHasValidAbility;          // 0x0452(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A5F[0x5];                                     // 0x0453(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetAbilityName_AbilityName;               // 0x0458(0x0018)()
	int32                                         CallFunc_GetAbilityName_PerkId;                    // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityName_bShowRateButton;           // 0x0474(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid_2;                   // 0x0475(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A60[0x2];                                     // 0x0476(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_2;               // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0481(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0482(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Find_Lottery_Reward_bIsValid;             // 0x0483(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBMasterRewardLotteryGroupsRewards    CallFunc_Find_Lottery_Reward_LotteryReward;        // 0x0484(0x0038)(NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x04BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A61[0x3];                                     // 0x04BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A62[0x3];                                     // 0x04C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FImagineParameter                      CallFunc_CalcImagineParam_ReturnValue;             // 0x04CC(0x006C)(NoDestructor)
};
static_assert(alignof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner");
static_assert(sizeof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner) == 0x000538, "Wrong size on ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, Temp_int_Array_Index_Variable) == 0x000010, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Create_ReturnValue_1) == 0x000018, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, Temp_bool_Variable) == 0x000020, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_MakeArray_Array) == 0x000028, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000038, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, Temp_int_Array_Index_Variable_1) == 0x000060, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000064, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_MakeArray_Array_1) == 0x000068, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Array_Get_Item) == 0x000078, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000088, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetDisplayName_ReturnValue) == 0x000098, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_IsEmpty_ReturnValue) == 0x0000A8, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Array_Get_Item_2) == 0x0000A9, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetImagineLevelParam_ReturnValue) == 0x0000AC, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetImagineLevelParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Array_Get_Item_3) == 0x000118, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Array_Length_ReturnValue_1) == 0x000120, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Array_Get_Item_4) == 0x000124, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_MakeArray_Array_2) == 0x000128, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Conv_IntToString_ReturnValue) == 0x000138, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Array_Get_Item_5) == 0x000148, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Conv_StringToText_ReturnValue) == 0x000150, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000168, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetDisplayName_ReturnValue_1) == 0x000170, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_MakeLiteralByte_ReturnValue) == 0x000180, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_IsEmpty_ReturnValue_1) == 0x000181, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000182, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000183, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, Temp_bool_Variable_1) == 0x000184, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_MakeArray_Array_3) == 0x000188, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Array_Get_Item_6) == 0x000198, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_IsEmpty_ReturnValue_2) == 0x0001A0, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x0001A8, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetDisplayName_ReturnValue_2) == 0x0001B0, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0001C0, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0001C1, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, Temp_bool_Variable_2) == 0x0001C2, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0001C3, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_PlayAnimation_ReturnValue) == 0x0001C8, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_PlayAnimation_ReturnValue_1) == 0x0001D0, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_CustomEvent_ItemIndex) == 0x0001D8, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_CustomEvent_Amount) == 0x0001DC, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_CustomEvent_AmountMin) == 0x0001E0, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_CustomEvent_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_CustomEvent_UniqueId) == 0x0001E8, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_CustomEvent_bShowProduct) == 0x0001F8, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_CustomEvent_bShowProduct' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_CustomEvent_RecipeId) == 0x0001FC, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_CustomEvent_RecipeId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_Select_Default) == 0x000200, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_FindImagineMaster_bIsValid) == 0x000201, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_FindImagineMaster_ImagineMaster) == 0x000208, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Conv_IntToText_ReturnValue) == 0x0002B8, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_MakeArray_Array_4) == 0x0002D0, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_MakeArray_Array_5) == 0x0002E0, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0002F0, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_MakeArray_Array_6) == 0x0002F8, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, Temp_int_Loop_Counter_Variable) == 0x000308, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Less_IntInt_ReturnValue) == 0x00030C, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Add_IntInt_ReturnValue) == 0x000310, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_SwitchInteger_CmpSuccess) == 0x000314, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, Temp_int_Loop_Counter_Variable_1) == 0x000318, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Less_IntInt_ReturnValue_1) == 0x00031C, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Add_IntInt_ReturnValue_1) == 0x000320, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_MakeArray_Array_7) == 0x000328, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_MakeArray_Array_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_MakeArray_Array_8) == 0x000338, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_MakeArray_Array_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_MakeArray_Array_9) == 0x000348, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_MakeArray_Array_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000358, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000360, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetOwningPlayer_ReturnValue) == 0x000368, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Create_ReturnValue_2) == 0x000370, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetUIManager_IsValid) == 0x000378, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetUIManager_ReturnValue) == 0x000380, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetUIManager_IsValid_1) == 0x000388, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetUIManager_ReturnValue_1) == 0x000390, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, Temp_bool_Variable_3) == 0x000398, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_FindImagineMaster_bIsValid_1) == 0x000399, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_FindImagineMaster_bIsValid_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_FindImagineMaster_ImagineMaster_1) == 0x0003A0, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_FindImagineMaster_ImagineMaster_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_Select_Default_1) == 0x000450, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000451, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetAbilityName_bHasValidAbility) == 0x000452, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetAbilityName_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetAbilityName_AbilityName) == 0x000458, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetAbilityName_AbilityName' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetAbilityName_PerkId) == 0x000470, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetAbilityName_PerkId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetAbilityName_bShowRateButton) == 0x000474, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetAbilityName_bShowRateButton' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetUIManager_IsValid_2) == 0x000475, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetUIManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetUIManager_ReturnValue_2) == 0x000478, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetUIManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_Select_Default_2) == 0x000480, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, K2Node_Select_Default_3) == 0x000481, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000482, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Find_Lottery_Reward_bIsValid) == 0x000483, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Find_Lottery_Reward_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_Find_Lottery_Reward_LotteryReward) == 0x000484, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_Find_Lottery_Reward_LotteryReward' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetNetworkDataCache_IsValid) == 0x0004BC, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0004C0, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0004C8, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner, CallFunc_CalcImagineParam_ReturnValue) == 0x0004CC, "Member 'ShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner::CallFunc_CalcImagineParam_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.SetData
// 0x0028 (0x0028 - 0x0000)
struct ShopMenuDetailsImagineInner_C_SetData final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A63[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_UniqueId;                                    // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bShowProduct;                                      // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A64[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_RecipeId;                                    // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineInner_C_SetData) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineInner_C_SetData");
static_assert(sizeof(ShopMenuDetailsImagineInner_C_SetData) == 0x000028, "Wrong size on ShopMenuDetailsImagineInner_C_SetData");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetData, ItemIndex) == 0x000000, "Member 'ShopMenuDetailsImagineInner_C_SetData::ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetData, Amount) == 0x000004, "Member 'ShopMenuDetailsImagineInner_C_SetData::Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetData, AmountMin) == 0x000008, "Member 'ShopMenuDetailsImagineInner_C_SetData::AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetData, Param_UniqueId) == 0x000010, "Member 'ShopMenuDetailsImagineInner_C_SetData::Param_UniqueId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetData, bShowProduct) == 0x000020, "Member 'ShopMenuDetailsImagineInner_C_SetData::bShowProduct' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetData, Param_RecipeId) == 0x000024, "Member 'ShopMenuDetailsImagineInner_C_SetData::Param_RecipeId' has a wrong offset!");

// Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.SetLotteryGroupsId
// 0x00D8 (0x00D8 - 0x0000)
struct ShopMenuDetailsImagineInner_C_SetLotteryGroupsId final
{
public:
	int32                                         Param_LotteryGroupsId;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A65[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Find_Lottery_Reward_bIsValid;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A66[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroupsRewards    CallFunc_Find_Lottery_Reward_LotteryReward;        // 0x001C(0x0038)(NoDestructor)
	uint8                                         Pad_8A67[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FMasterImaginePerkTable                CallFunc_FindMasterImaginePerkByParamType_ReturnValue; // 0x0068(0x0048)()
	bool                                          CallFunc_GetAbilityName_Internal_bHasValidAbility; // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A68[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetAbilityName_Internal_AbilityName;      // 0x00B8(0x0018)()
	int32                                         CallFunc_GetAbilityName_Internal_PerkId;           // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityName_Internal_bShowRateButton;  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineInner_C_SetLotteryGroupsId");
static_assert(sizeof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId) == 0x0000D8, "Wrong size on ShopMenuDetailsImagineInner_C_SetLotteryGroupsId");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, Param_LotteryGroupsId) == 0x000000, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::Param_LotteryGroupsId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, Temp_bool_Variable) == 0x000006, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, Temp_bool_Variable_1) == 0x000007, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000009, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00000A, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_GetMasterDataManager_IsValid) == 0x00000B, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_Find_Lottery_Reward_bIsValid) == 0x000018, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_Find_Lottery_Reward_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_Find_Lottery_Reward_LotteryReward) == 0x00001C, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_Find_Lottery_Reward_LotteryReward' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_Conv_NameToString_ReturnValue) == 0x000058, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_FindMasterImaginePerkByParamType_ReturnValue) == 0x000068, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_FindMasterImaginePerkByParamType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_GetAbilityName_Internal_bHasValidAbility) == 0x0000B0, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_GetAbilityName_Internal_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_GetAbilityName_Internal_AbilityName) == 0x0000B8, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_GetAbilityName_Internal_AbilityName' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_GetAbilityName_Internal_PerkId) == 0x0000D0, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_GetAbilityName_Internal_PerkId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, CallFunc_GetAbilityName_Internal_bShowRateButton) == 0x0000D4, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::CallFunc_GetAbilityName_Internal_bShowRateButton' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, K2Node_Select_Default) == 0x0000D5, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineInner_C_SetLotteryGroupsId, K2Node_Select_Default_1) == 0x0000D6, "Member 'ShopMenuDetailsImagineInner_C_SetLotteryGroupsId::K2Node_Select_Default_1' has a wrong offset!");

}

