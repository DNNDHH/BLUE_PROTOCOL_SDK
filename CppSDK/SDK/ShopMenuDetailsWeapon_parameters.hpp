#pragma once

 

// Package: ShopMenuDetailsWeapon

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ST_ItemDetail_CaptureStudio_MapLocation_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsWeapon_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsWeapon_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsWeapon_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsWeapon_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsWeapon_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsWeapon_C_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsWeapon_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsWeapon_C_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsWeapon_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsWeapon_C_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsWeapon_C_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.ExecuteUbergraph_ShopMenuDetailsWeapon
// 0x0620 (0x0620 - 0x0000)
struct ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ACC[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ACD[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ACE[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0058(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ACF[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSellItem;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AD0[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_ItemUniqueId;                   // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AmountMin;                      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bShowProduct;                   // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AD1[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RecipeId;                       // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AD2[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x00D0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AD3[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x00E0(0x00B0)()
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AD4[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetWeaponLevelStatus_value;               // 0x0198(0x0018)()
	class FText                                   CallFunc_GetWeaponLevelStatus_value_1;             // 0x01B0(0x0018)()
	class FText                                   CallFunc_GetWeaponLevelStatus_value_2;             // 0x01C8(0x0018)()
	class FText                                   CallFunc_GetWeaponLevelStatus_value_3;             // 0x01E0(0x0018)()
	class FText                                   CallFunc_GetWeaponLevelStatus_value_4;             // 0x01F8(0x0018)()
	class FText                                   CallFunc_GetWeaponLevelStatus_value_5;             // 0x0210(0x0018)()
	class FText                                   CallFunc_GetWeaponAtkStatus_value;                 // 0x0228(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AD5[0x5];                                     // 0x0243(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x0248(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AD6[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0290(0x0018)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02B8(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD7[0x6];                                     // 0x02D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_3;                          // 0x02D8(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD8[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonWeaponAbilityEfficacyDescPopup_C* CallFunc_Create_ReturnValue_2;                     // 0x0300(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AD9[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ADA[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetWeaponLevelStatus_value_6;             // 0x0328(0x0018)()
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_4;                          // 0x0340(0x0010)(ReferenceParm, ContainsInstancedReference)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ADB[0x6];                                     // 0x0352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0358(0x0088)()
	bool                                          CallFunc_IsEmpty_ReturnValue_3;                    // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid_2;                   // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ADC[0x6];                                     // 0x03E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_2;               // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Find_Lottery_Reward_bIsValid;             // 0x03F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ADD[0x1];                                     // 0x03F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroupsRewards    CallFunc_Find_Lottery_Reward_LotteryReward;        // 0x03F4(0x0038)(NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x042C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x042D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ADE[0x2];                                     // 0x042E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_5;                          // 0x0430(0x0010)(ReferenceParm)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ADF[0x7];                                     // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_3;                         // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_3;        // 0x0450(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_3;             // 0x0458(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetSlotInfoByUniqueId_bHasValidAbility;   // 0x0469(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AE0[0x6];                                     // 0x046A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSpEffectText_ReturnValue;              // 0x0470(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AE1[0x7];                                     // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0490(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x04A0(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_4;                    // 0x04B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AE2[0x6];                                     // 0x04BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_FindItemByAllStorage_OutResult;           // 0x04C0(0x0118)()
	bool                                          CallFunc_FindItemByAllStorage_ReturnValue;         // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x05D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x05DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AE3[0x5];                                     // 0x05DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x05E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x05F0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0608(0x0018)()
};
static_assert(alignof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon");
static_assert(sizeof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon) == 0x000620, "Wrong size on ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, Temp_bool_Variable) == 0x000004, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, Temp_bool_Variable_1) == 0x000005, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_MakeArray_Array) == 0x000008, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Array_Get_Item) == 0x000018, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_IsEmpty_ReturnValue) == 0x000020, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_IsEmpty_ReturnValue_1) == 0x000040, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000041, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Create_ReturnValue) == 0x000048, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Create_ReturnValue_1) == 0x000050, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_MakeArray_Array_1) == 0x000058, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000070, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetDisplayName_ReturnValue_1) == 0x000078, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_IsEmpty_ReturnValue_2) == 0x000088, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_CustomEvent_ItemIndex) == 0x00008C, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_CustomEvent_IsSellItem) == 0x000090, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_CustomEvent_IsSellItem' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_CustomEvent_ItemUniqueId) == 0x000098, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_CustomEvent_ItemUniqueId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_CustomEvent_Amount) == 0x0000A8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_CustomEvent_AmountMin) == 0x0000AC, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_CustomEvent_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_CustomEvent_bShowProduct) == 0x0000B0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_CustomEvent_bShowProduct' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_CustomEvent_RecipeId) == 0x0000B4, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_CustomEvent_RecipeId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_PlayAnimation_ReturnValue) == 0x0000B8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0000C8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, Temp_bool_Variable_2) == 0x0000C9, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_Event_Animation) == 0x0000D0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_FindWeaponMaster_bIsValid) == 0x0000D8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_FindWeaponMaster_WeaponMaster) == 0x0000E0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000190, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetWeaponLevelStatus_value) == 0x000198, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetWeaponLevelStatus_value' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetWeaponLevelStatus_value_1) == 0x0001B0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetWeaponLevelStatus_value_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetWeaponLevelStatus_value_2) == 0x0001C8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetWeaponLevelStatus_value_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetWeaponLevelStatus_value_3) == 0x0001E0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetWeaponLevelStatus_value_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetWeaponLevelStatus_value_4) == 0x0001F8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetWeaponLevelStatus_value_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetWeaponLevelStatus_value_5) == 0x000210, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetWeaponLevelStatus_value_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetWeaponAtkStatus_value) == 0x000228, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetWeaponAtkStatus_value' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000240, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000241, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, Temp_bool_Variable_3) == 0x000242, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_MakeArray_Array_2) == 0x000248, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Array_Get_Item_2) == 0x000258, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_SwitchInteger_CmpSuccess) == 0x000260, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000268, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetDisplayName_ReturnValue_2) == 0x000270, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Conv_IntToString_ReturnValue) == 0x000280, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Conv_StringToText_ReturnValue) == 0x000290, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetWeaponText_ReturnValue) == 0x0002A8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002B8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0002D0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_Select_Default) == 0x0002D1, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_MakeArray_Array_3) == 0x0002D8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0002E8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0002F0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetOwningPlayer_ReturnValue) == 0x0002F8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Create_ReturnValue_2) == 0x000300, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetUIManager_IsValid) == 0x000308, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetUIManager_ReturnValue) == 0x000310, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetUIManager_IsValid_1) == 0x000318, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetUIManager_ReturnValue_1) == 0x000320, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetWeaponLevelStatus_value_6) == 0x000328, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetWeaponLevelStatus_value_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_MakeArray_Array_4) == 0x000340, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000350, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_FindCraftMaster_bIsValid) == 0x000351, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_FindCraftMaster_CraftMaster) == 0x000358, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_IsEmpty_ReturnValue_3) == 0x0003E0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_IsEmpty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetUIManager_IsValid_2) == 0x0003E1, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetUIManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetUIManager_ReturnValue_2) == 0x0003E8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetUIManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0003F0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0003F1, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Find_Lottery_Reward_bIsValid) == 0x0003F2, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Find_Lottery_Reward_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Find_Lottery_Reward_LotteryReward) == 0x0003F4, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Find_Lottery_Reward_LotteryReward' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x00042C, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_Select_Default_1) == 0x00042D, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_MakeArray_Array_5) == 0x000430, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000440, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Array_Get_Item_3) == 0x000448, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_K2_GetRootComponent_ReturnValue_3) == 0x000450, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_K2_GetRootComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetDisplayName_ReturnValue_3) == 0x000458, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetDisplayName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000468, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_SetSlotInfoByUniqueId_bHasValidAbility) == 0x000469, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_SetSlotInfoByUniqueId_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetSpEffectText_ReturnValue) == 0x000470, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetSpEffectText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_Select_Default_2) == 0x000488, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GetTextFromAsset_ReturnValue) == 0x000490, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0004A0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x0004B8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_IsEmpty_ReturnValue_4) == 0x0004B9, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_IsEmpty_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_FindItemByAllStorage_OutResult) == 0x0004C0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_FindItemByAllStorage_OutResult' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_FindItemByAllStorage_ReturnValue) == 0x0005D8, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_FindItemByAllStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Not_PreBool_ReturnValue) == 0x0005D9, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, K2Node_Select_Default_3) == 0x0005DA, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_SetSpecialEffectText_SpecialName) == 0x0005E0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_SetSpecialEffectText_SpecialValue) == 0x0005F0, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000608, "Member 'ShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsWeapon_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsWeapon_C_OnAnimationFinished) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_OnAnimationFinished");
static_assert(sizeof(ShopMenuDetailsWeapon_C_OnAnimationFinished) == 0x000008, "Wrong size on ShopMenuDetailsWeapon_C_OnAnimationFinished");
static_assert(offsetof(ShopMenuDetailsWeapon_C_OnAnimationFinished, Animation) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.ShowDetails
// 0x0028 (0x0028 - 0x0000)
struct ShopMenuDetailsWeapon_C_ShowDetails final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSellItem;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AE4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ItemUniqueId;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_AmountMin;                                   // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowProduct;                                      // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AE5[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RecipeId;                                          // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsWeapon_C_ShowDetails) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_ShowDetails");
static_assert(sizeof(ShopMenuDetailsWeapon_C_ShowDetails) == 0x000028, "Wrong size on ShopMenuDetailsWeapon_C_ShowDetails");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ShowDetails, ItemIndex) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_ShowDetails::ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ShowDetails, IsSellItem) == 0x000004, "Member 'ShopMenuDetailsWeapon_C_ShowDetails::IsSellItem' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ShowDetails, ItemUniqueId) == 0x000008, "Member 'ShopMenuDetailsWeapon_C_ShowDetails::ItemUniqueId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ShowDetails, Param_Amount) == 0x000018, "Member 'ShopMenuDetailsWeapon_C_ShowDetails::Param_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ShowDetails, Param_AmountMin) == 0x00001C, "Member 'ShopMenuDetailsWeapon_C_ShowDetails::Param_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ShowDetails, bShowProduct) == 0x000020, "Member 'ShopMenuDetailsWeapon_C_ShowDetails::bShowProduct' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_ShowDetails, RecipeId) == 0x000024, "Member 'ShopMenuDetailsWeapon_C_ShowDetails::RecipeId' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Init
// 0x0010 (0x0010 - 0x0000)
struct ShopMenuDetailsWeapon_C_Init final
{
public:
	class FString                                 InCurrMapName;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsWeapon_C_Init) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_Init");
static_assert(sizeof(ShopMenuDetailsWeapon_C_Init) == 0x000010, "Wrong size on ShopMenuDetailsWeapon_C_Init");
static_assert(offsetof(ShopMenuDetailsWeapon_C_Init, InCurrMapName) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_Init::InCurrMapName' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.FindCurrMapWeaponTransform
// 0x0110 (0x0110 - 0x0000)
struct ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform final
{
public:
	class FString                                 InCurrMapName;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                             OutTransform;                                      // 0x0010(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             TmpTransform;                                      // 0x0040(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AE6[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0080(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AE7[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemDetail_CaptureStudio_MapLocation CallFunc_GetDataTableRowFromName_OutRow;           // 0x00A0(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AE8[0xE];                                     // 0x00C2(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00D0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform) == 0x000010, "Wrong alignment on ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform");
static_assert(sizeof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform) == 0x000110, "Wrong size on ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, InCurrMapName) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::InCurrMapName' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, OutTransform) == 0x000010, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::OutTransform' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, TmpTransform) == 0x000040, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::TmpTransform' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, Temp_int_Array_Index_Variable) == 0x000070, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000080, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, CallFunc_Array_Get_Item) == 0x000090, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000A0, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, CallFunc_Less_IntInt_ReturnValue) == 0x0000C1, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, CallFunc_MakeTransform_ReturnValue) == 0x0000D0, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000100, "Member 'ShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetWeaponLevelStatus
// 0x0208 (0x0208 - 0x0000)
struct ShopMenuDetailsWeapon_C_GetWeaponLevelStatus final
{
public:
	ESBWeaponStatus                               EnhanceType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AE9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Value;                                             // 0x0008(0x0018)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AEA[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AEB[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_3;                            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AEC[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_1;                           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_4;                            // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AED[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_5;                            // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_6;                            // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AEE[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_2;                           // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_7;                            // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_8;                            // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_9;                            // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_3;                           // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AEF[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue; // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AF0[0x2];                                     // 0x0146(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_4;                           // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue; // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AF1[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AF2[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_5;                           // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01A8(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01F0(0x0018)()
};
static_assert(alignof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_GetWeaponLevelStatus");
static_assert(sizeof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus) == 0x000208, "Wrong size on ShopMenuDetailsWeapon_C_GetWeaponLevelStatus");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, EnhanceType) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::EnhanceType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Value) == 0x000008, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Value' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_bool_Variable) == 0x000020, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000021, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000022, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_string_Variable) == 0x000028, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_string_Variable_1) == 0x000038, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_bool_Variable_1) == 0x000048, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, K2Node_Select_Default) == 0x000050, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_string_Variable_2) == 0x000060, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_string_Variable_3) == 0x000070, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_bool_Variable_2) == 0x000080, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, K2Node_Select_Default_1) == 0x000088, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_string_Variable_4) == 0x000098, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_string_Variable_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_bool_Variable_3) == 0x0000A8, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_string_Variable_5) == 0x0000B0, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_string_Variable_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_string_Variable_6) == 0x0000C0, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_string_Variable_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_bool_Variable_4) == 0x0000D0, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, K2Node_Select_Default_2) == 0x0000D8, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_string_Variable_7) == 0x0000E8, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_string_Variable_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_string_Variable_8) == 0x0000F8, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_string_Variable_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_string_Variable_9) == 0x000108, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_string_Variable_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, K2Node_Select_Default_3) == 0x000118, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, Temp_bool_Variable_5) == 0x000128, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_GetWeaponManager_IsValid) == 0x000129, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_GetWeaponManager_ReturnValue) == 0x000130, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_GetPlayerController_ReturnValue) == 0x000138, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue) == 0x000140, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000144, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000145, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, K2Node_Select_Default_4) == 0x000148, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue) == 0x000158, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_Conv_IntToString_ReturnValue) == 0x000160, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000170, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_Concat_StrStr_ReturnValue) == 0x000178, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000188, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, K2Node_Select_Default_5) == 0x000198, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_Conv_StringToText_ReturnValue) == 0x0001A8, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0001C0, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0001D0, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0001E0, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponLevelStatus, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001F0, "Member 'ShopMenuDetailsWeapon_C_GetWeaponLevelStatus::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetWeaponAtkStatus
// 0x0090 (0x0090 - 0x0000)
struct ShopMenuDetailsWeapon_C_GetWeaponAtkStatus final
{
public:
	class FText                                   Value;                                             // 0x0000(0x0018)(Parm, OutParm)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AF3[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AF4[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AF5[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
};
static_assert(alignof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_GetWeaponAtkStatus");
static_assert(sizeof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus) == 0x000090, "Wrong size on ShopMenuDetailsWeapon_C_GetWeaponAtkStatus");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, Value) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::Value' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, CallFunc_GetWeaponManager_IsValid) == 0x000018, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, CallFunc_GetWeaponManager_ReturnValue) == 0x000020, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue) == 0x000034, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::CallFunc_GetWeaponLevelStatusByWeaponID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue) == 0x000048, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::CallFunc_GetWeaponLevelStatusByUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000068, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetWeaponAtkStatus, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'ShopMenuDetailsWeapon_C_GetWeaponAtkStatus::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetSpEffectText
// 0x0110 (0x0110 - 0x0000)
struct ShopMenuDetailsWeapon_C_GetSpEffectText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	TArray<struct FSBWeaponKillerPerkPickMasterData> LocalPerkPickArray;                                // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AF6[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AF7[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0068(0x0088)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetSpEffectText_Internal_ReturnValue;     // 0x00F8(0x0018)()
};
static_assert(alignof(ShopMenuDetailsWeapon_C_GetSpEffectText) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_GetSpEffectText");
static_assert(sizeof(ShopMenuDetailsWeapon_C_GetSpEffectText) == 0x000110, "Wrong size on ShopMenuDetailsWeapon_C_GetSpEffectText");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, ReturnValue) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, LocalPerkPickArray) == 0x000018, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::LocalPerkPickArray' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, K2Node_MakeArray_Array) == 0x000028, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, CallFunc_Array_Get_Item) == 0x000038, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, CallFunc_IsEmpty_ReturnValue) == 0x000040, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000048, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, CallFunc_GetDisplayName_ReturnValue) == 0x000050, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, CallFunc_FindCraftMaster_bIsValid) == 0x000060, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, CallFunc_FindCraftMaster_CraftMaster) == 0x000068, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, CallFunc_Conv_StringToName_ReturnValue) == 0x0000F0, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText, CallFunc_GetSpEffectText_Internal_ReturnValue) == 0x0000F8, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText::CallFunc_GetSpEffectText_Internal_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetLotteryAbility
// 0x0020 (0x0020 - 0x0000)
struct ShopMenuDetailsWeapon_C_SetLotteryAbility final
{
public:
	bool                                          bLotteryAbility;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AF8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetUnknownAbilityText_ReturnValue;        // 0x0008(0x0018)()
};
static_assert(alignof(ShopMenuDetailsWeapon_C_SetLotteryAbility) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_SetLotteryAbility");
static_assert(sizeof(ShopMenuDetailsWeapon_C_SetLotteryAbility) == 0x000020, "Wrong size on ShopMenuDetailsWeapon_C_SetLotteryAbility");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryAbility, bLotteryAbility) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_SetLotteryAbility::bLotteryAbility' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryAbility, CallFunc_GetUnknownAbilityText_ReturnValue) == 0x000008, "Member 'ShopMenuDetailsWeapon_C_SetLotteryAbility::CallFunc_GetUnknownAbilityText_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetLotteryGroupsId
// 0x00C8 (0x00C8 - 0x0000)
struct ShopMenuDetailsWeapon_C_SetLotteryGroupsId final
{
public:
	int32                                         Param_LotteryGroupsId;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AF9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AFA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AFB[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	bool                                          CallFunc_Find_Lottery_Reward_bIsValid;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AFC[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroupsRewards    CallFunc_Find_Lottery_Reward_LotteryReward;        // 0x0074(0x0038)(NoDestructor)
	uint8                                         Pad_4AFD[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSpEffectText_Internal_ReturnValue;     // 0x00B0(0x0018)()
};
static_assert(alignof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_SetLotteryGroupsId");
static_assert(sizeof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId) == 0x0000C8, "Wrong size on ShopMenuDetailsWeapon_C_SetLotteryGroupsId");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, Param_LotteryGroupsId) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::Param_LotteryGroupsId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, K2Node_MakeArray_Array) == 0x000008, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, CallFunc_Array_Get_Item) == 0x000018, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000020, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, CallFunc_IsEmpty_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000040, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000048, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, CallFunc_Find_Lottery_Reward_bIsValid) == 0x000070, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::CallFunc_Find_Lottery_Reward_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, CallFunc_Find_Lottery_Reward_LotteryReward) == 0x000074, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::CallFunc_Find_Lottery_Reward_LotteryReward' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_SetLotteryGroupsId, CallFunc_GetSpEffectText_Internal_ReturnValue) == 0x0000B0, "Member 'ShopMenuDetailsWeapon_C_SetLotteryGroupsId::CallFunc_GetSpEffectText_Internal_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetSpEffectText_Internal
// 0x0130 (0x0130 - 0x0000)
struct ShopMenuDetailsWeapon_C_GetSpEffectText_Internal final
{
public:
	class FName                                   PerkPickId;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm)
	TArray<struct FSBWeaponKillerPerkPickMasterData> LocalPerkPickArray;                                // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AFE[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AFF[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x0098(0x0048)()
	class FString                                 CallFunc_GetPerkName_ReturnValue;                  // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B00[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0100(0x0018)()
	bool                                          CallFunc_BP_GetWeaponKillerPerkPickMasterData_IsExists; // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B01[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBWeaponKillerPerkPickMasterData> CallFunc_BP_GetWeaponKillerPerkPickMasterData_ReturnValue; // 0x0120(0x0010)(ReferenceParm)
};
static_assert(alignof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal) == 0x000008, "Wrong alignment on ShopMenuDetailsWeapon_C_GetSpEffectText_Internal");
static_assert(sizeof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal) == 0x000130, "Wrong size on ShopMenuDetailsWeapon_C_GetSpEffectText_Internal");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, PerkPickId) == 0x000000, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::PerkPickId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, ReturnValue) == 0x000008, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, LocalPerkPickArray) == 0x000020, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::LocalPerkPickArray' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, K2Node_MakeArray_Array) == 0x000030, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_Array_Get_Item) == 0x000040, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_IsEmpty_ReturnValue) == 0x000048, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000050, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_GetDisplayName_ReturnValue) == 0x000058, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_GetTextFromAsset_ReturnValue) == 0x000068, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000094, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_FindAbilityMaster_bIsValid) == 0x000095, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_FindAbilityMaster_AbilityMaster) == 0x000098, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_GetPerkName_ReturnValue) == 0x0000E0, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_GetPerkName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_GetMasterDataManager_IsValid) == 0x0000F0, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000F8, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000100, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_BP_GetWeaponKillerPerkPickMasterData_IsExists) == 0x000118, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_BP_GetWeaponKillerPerkPickMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsWeapon_C_GetSpEffectText_Internal, CallFunc_BP_GetWeaponKillerPerkPickMasterData_ReturnValue) == 0x000120, "Member 'ShopMenuDetailsWeapon_C_GetSpEffectText_Internal::CallFunc_BP_GetWeaponKillerPerkPickMasterData_ReturnValue' has a wrong offset!");

}

