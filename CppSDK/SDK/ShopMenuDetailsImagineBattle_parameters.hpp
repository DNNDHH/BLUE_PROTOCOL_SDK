#pragma once

 

// Package: ShopMenuDetailsImagineBattle

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsImagineBattle_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineBattle_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineBattle_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsImagineBattle_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsImagineBattle_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsImagineBattle_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsImagineBattle_C_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineBattle_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsImagineBattle_C_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsImagineBattle_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsImagineBattle_C_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'ShopMenuDetailsImagineBattle_C_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ExecuteUbergraph_ShopMenuDetailsImagineBattle
// 0x04C8 (0x04C8 - 0x0000)
struct ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4474[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4475[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0058(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4476[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4477[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x0098(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      CallFunc_GetImagineLevelParam_ReturnValue;         // 0x00B0(0x006C)(NoDestructor)
	uint8                                         Pad_4478[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4479[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_447A[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AmountMin;                      // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_UniqueId;                       // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bShowProduct;                   // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             K2Node_CustomEvent_OriginalRewardType;             // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_447B[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_OriginalItemIndex;              // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_447C[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0180(0x00B0)()
	TArray<int32>                                 K2Node_MakeArray_Array_3;                          // 0x0230(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_447D[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_4;                          // 0x0248(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_447E[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_447F[0x6];                                     // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_5;                          // 0x0268(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_6;                          // 0x0278(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0288(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4480[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonImagineAbilityEfficacyDescPopup_C* CallFunc_Create_ReturnValue_2;                     // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4481[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SetTextColor_C>   CallFunc_SetTextColor_self_CastInput;              // 0x02C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x02D0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4482[0x1];                                     // 0x02EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityName_bHasValidAbility;          // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4483[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetAbilityName_AbilityName;               // 0x02F8(0x0018)()
	int32                                         CallFunc_GetAbilityName_PerkId;                    // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityName_bShowRateButton;           // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0315(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_2;                   // 0x0316(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4484[0x1];                                     // 0x0317(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_2;               // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_3;                         // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             CallFunc_Array_Get_Item_4;                         // 0x0328(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0330(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0340(0x0018)()
	bool                                          Temp_bool_Variable_3;                              // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMasterByRewardData_bIsValid;   // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4485[0x6];                                     // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMasterByRewardData_ImagineMaster; // 0x0360(0x00B0)()
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Find_Lottery_Reward_bIsValid;             // 0x0411(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4486[0x2];                                     // 0x0412(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroupsRewards    CallFunc_Find_Lottery_Reward_LotteryReward;        // 0x0414(0x0038)(NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x044C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x044D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4487[0x2];                                     // 0x044E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4488[0x3];                                     // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FImagineParameter                      CallFunc_CalcImagineParam_ReturnValue;             // 0x045C(0x006C)(NoDestructor)
};
static_assert(alignof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle");
static_assert(sizeof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle) == 0x0004C8, "Wrong size on ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, Temp_int_Variable) == 0x000004, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Create_ReturnValue_1) == 0x000010, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_MakeArray_Array) == 0x000018, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Array_Get_Item) == 0x000028, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_IsEmpty_ReturnValue) == 0x000038, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetDisplayName_ReturnValue) == 0x000040, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, Temp_int_Variable_1) == 0x000050, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, Temp_bool_Variable) == 0x000054, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, Temp_bool_Variable_1) == 0x000055, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_MakeArray_Array_1) == 0x000058, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000078, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetDisplayName_ReturnValue_1) == 0x000080, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_IsEmpty_ReturnValue_1) == 0x000090, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_MakeLiteralByte_ReturnValue) == 0x000091, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_MakeArray_Array_2) == 0x000098, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Array_Get_Item_2) == 0x0000A8, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetImagineLevelParam_ReturnValue) == 0x0000B0, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetImagineLevelParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000120, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetDisplayName_ReturnValue_2) == 0x000128, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_IsEmpty_ReturnValue_2) == 0x000138, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000139, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00013A, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, Temp_bool_Variable_2) == 0x00013B, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_SwitchInteger_CmpSuccess) == 0x00013C, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_PlayAnimation_ReturnValue) == 0x000140, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_PlayAnimation_ReturnValue_1) == 0x000148, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000150, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_CustomEvent_ItemIndex) == 0x000154, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_CustomEvent_Amount) == 0x000158, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_CustomEvent_AmountMin) == 0x00015C, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_CustomEvent_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_CustomEvent_UniqueId) == 0x000160, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_CustomEvent_bShowProduct) == 0x000170, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_CustomEvent_bShowProduct' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_CustomEvent_OriginalRewardType) == 0x000171, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_CustomEvent_OriginalRewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_CustomEvent_OriginalItemIndex) == 0x000174, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_CustomEvent_OriginalItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_FindImagineMaster_bIsValid) == 0x000178, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_FindImagineMaster_ImagineMaster) == 0x000180, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_MakeArray_Array_3) == 0x000230, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, Temp_int_Loop_Counter_Variable) == 0x000240, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_MakeArray_Array_4) == 0x000248, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Less_IntInt_ReturnValue) == 0x000258, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Add_IntInt_ReturnValue) == 0x00025C, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000260, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000261, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_MakeArray_Array_5) == 0x000268, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_MakeArray_Array_6) == 0x000278, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000288, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetOwningPlayer_ReturnValue) == 0x000290, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetUIManager_IsValid) == 0x000298, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetUIManager_ReturnValue) == 0x0002A0, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Create_ReturnValue_2) == 0x0002A8, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetUIManager_IsValid_1) == 0x0002B0, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetUIManager_ReturnValue_1) == 0x0002B8, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_SetTextColor_self_CastInput) == 0x0002C0, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_SetTextColor_self_CastInput' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Conv_IntToText_ReturnValue) == 0x0002D0, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0002E8, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_Select_Default) == 0x0002E9, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002EA, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_Select_Default_1) == 0x0002EC, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetAbilityName_bHasValidAbility) == 0x0002F0, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetAbilityName_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetAbilityName_AbilityName) == 0x0002F8, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetAbilityName_AbilityName' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetAbilityName_PerkId) == 0x000310, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetAbilityName_PerkId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetAbilityName_bShowRateButton) == 0x000314, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetAbilityName_bShowRateButton' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_Select_Default_2) == 0x000315, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetUIManager_IsValid_2) == 0x000316, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetUIManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetUIManager_ReturnValue_2) == 0x000318, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetUIManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, Temp_int_Array_Index_Variable) == 0x000320, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Array_Get_Item_3) == 0x000324, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Array_Get_Item_4) == 0x000328, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Conv_IntToString_ReturnValue) == 0x000330, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Conv_StringToText_ReturnValue) == 0x000340, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, Temp_bool_Variable_3) == 0x000358, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_FindImagineMasterByRewardData_bIsValid) == 0x000359, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_FindImagineMasterByRewardData_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_FindImagineMasterByRewardData_ImagineMaster) == 0x000360, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_FindImagineMasterByRewardData_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, K2Node_Select_Default_3) == 0x000410, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Find_Lottery_Reward_bIsValid) == 0x000411, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Find_Lottery_Reward_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_Find_Lottery_Reward_LotteryReward) == 0x000414, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_Find_Lottery_Reward_LotteryReward' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00044C, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetNetworkDataCache_IsValid) == 0x00044D, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000450, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000458, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle, CallFunc_CalcImagineParam_ReturnValue) == 0x00045C, "Member 'ShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle::CallFunc_CalcImagineParam_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.SetData
// 0x0028 (0x0028 - 0x0000)
struct ShopMenuDetailsImagineBattle_C_SetData final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4489[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_UniqueId;                                    // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bShowProduct;                                      // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             Param_OriginalRewardType;                          // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_448A[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_OriginalItemIndex;                           // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineBattle_C_SetData) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineBattle_C_SetData");
static_assert(sizeof(ShopMenuDetailsImagineBattle_C_SetData) == 0x000028, "Wrong size on ShopMenuDetailsImagineBattle_C_SetData");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetData, ItemIndex) == 0x000000, "Member 'ShopMenuDetailsImagineBattle_C_SetData::ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetData, Amount) == 0x000004, "Member 'ShopMenuDetailsImagineBattle_C_SetData::Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetData, AmountMin) == 0x000008, "Member 'ShopMenuDetailsImagineBattle_C_SetData::AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetData, Param_UniqueId) == 0x000010, "Member 'ShopMenuDetailsImagineBattle_C_SetData::Param_UniqueId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetData, bShowProduct) == 0x000020, "Member 'ShopMenuDetailsImagineBattle_C_SetData::bShowProduct' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetData, Param_OriginalRewardType) == 0x000021, "Member 'ShopMenuDetailsImagineBattle_C_SetData::Param_OriginalRewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetData, Param_OriginalItemIndex) == 0x000024, "Member 'ShopMenuDetailsImagineBattle_C_SetData::Param_OriginalItemIndex' has a wrong offset!");

// Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetToolTipWidgetByAbilityNameScaleBox
// 0x0048 (0x0048 - 0x0000)
struct ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_448B[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox");
static_assert(sizeof(ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox) == 0x000048, "Wrong size on ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox, ReturnValue) == 0x000000, "Member 'ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox, CallFunc_GetMasterImagineText_ReturnValue) == 0x000008, "Member 'ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox, CallFunc_Create_ReturnValue) == 0x000040, "Member 'ShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetAbilityName
// 0x01E8 (0x01E8 - 0x0000)
struct ShopMenuDetailsImagineBattle_C_GetAbilityName final
{
public:
	bool                                          bHasValidAbility;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_448C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AbilityName;                                       // 0x0008(0x0018)(Parm, OutParm)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_448D[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	struct FOwnItemInfo                           CallFunc_FindItemByAllStorage_OutResult;           // 0x0080(0x0118)()
	bool                                          CallFunc_FindItemByAllStorage_ReturnValue;         // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_448E[0x1];                                     // 0x019B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x019C(0x0024)(NoDestructor)
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01D0(0x0018)()
};
static_assert(alignof(ShopMenuDetailsImagineBattle_C_GetAbilityName) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineBattle_C_GetAbilityName");
static_assert(sizeof(ShopMenuDetailsImagineBattle_C_GetAbilityName) == 0x0001E8, "Wrong size on ShopMenuDetailsImagineBattle_C_GetAbilityName");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, bHasValidAbility) == 0x000000, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::bHasValidAbility' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, AbilityName) == 0x000008, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::AbilityName' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, K2Node_MakeArray_Array) == 0x000020, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_Array_Get_Item) == 0x000030, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_IsEmpty_ReturnValue) == 0x000038, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000040, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000058, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_FindItemByAllStorage_OutResult) == 0x000080, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_FindItemByAllStorage_OutResult' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_FindItemByAllStorage_ReturnValue) == 0x000198, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_FindItemByAllStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_IsEmpty_ReturnValue_1) == 0x000199, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x00019A, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x00019C, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0001C0, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_GetAbilityName, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001D0, "Member 'ShopMenuDetailsImagineBattle_C_GetAbilityName::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ShowRateDialog
// 0x0110 (0x0110 - 0x0000)
struct ShopMenuDetailsImagineBattle_C_ShowRateDialog final
{
public:
	int32                                         ImagineId;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_448F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4490[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4491[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMasterByRewardData_bIsValid;   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4492[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMasterByRewardData_ImagineMaster; // 0x0060(0x00B0)()
};
static_assert(alignof(ShopMenuDetailsImagineBattle_C_ShowRateDialog) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineBattle_C_ShowRateDialog");
static_assert(sizeof(ShopMenuDetailsImagineBattle_C_ShowRateDialog) == 0x000110, "Wrong size on ShopMenuDetailsImagineBattle_C_ShowRateDialog");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, ImagineId) == 0x000000, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::ImagineId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, K2Node_MakeArray_Array) == 0x000008, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, CallFunc_Array_Get_Item) == 0x000018, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, CallFunc_IsEmpty_ReturnValue) == 0x000020, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, CallFunc_Create_ReturnValue) == 0x000040, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, CallFunc_GetUIManager_IsValid) == 0x000048, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, CallFunc_GetUIManager_ReturnValue) == 0x000050, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, CallFunc_FindImagineMasterByRewardData_bIsValid) == 0x000058, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::CallFunc_FindImagineMasterByRewardData_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_ShowRateDialog, CallFunc_FindImagineMasterByRewardData_ImagineMaster) == 0x000060, "Member 'ShopMenuDetailsImagineBattle_C_ShowRateDialog::CallFunc_FindImagineMasterByRewardData_ImagineMaster' has a wrong offset!");

// Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.SetLotteryGroupsId
// 0x00D8 (0x00D8 - 0x0000)
struct ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId final
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
	uint8                                         Pad_4493[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Find_Lottery_Reward_bIsValid;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4494[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroupsRewards    CallFunc_Find_Lottery_Reward_LotteryReward;        // 0x001C(0x0038)(NoDestructor)
	uint8                                         Pad_4495[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FMasterImaginePerkTable                CallFunc_FindMasterImaginePerkByParamType_ReturnValue; // 0x0068(0x0048)()
	bool                                          CallFunc_GetAbilityName_Internal_bHasValidAbility; // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4496[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetAbilityName_Internal_AbilityName;      // 0x00B8(0x0018)()
	int32                                         CallFunc_GetAbilityName_Internal_PerkId;           // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityName_Internal_bShowRateButton;  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId) == 0x000008, "Wrong alignment on ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId");
static_assert(sizeof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId) == 0x0000D8, "Wrong size on ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, Param_LotteryGroupsId) == 0x000000, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::Param_LotteryGroupsId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, Temp_bool_Variable) == 0x000006, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, Temp_bool_Variable_1) == 0x000007, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000009, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00000A, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_GetMasterDataManager_IsValid) == 0x00000B, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_Find_Lottery_Reward_bIsValid) == 0x000018, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_Find_Lottery_Reward_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_Find_Lottery_Reward_LotteryReward) == 0x00001C, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_Find_Lottery_Reward_LotteryReward' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_Conv_NameToString_ReturnValue) == 0x000058, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_FindMasterImaginePerkByParamType_ReturnValue) == 0x000068, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_FindMasterImaginePerkByParamType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_GetAbilityName_Internal_bHasValidAbility) == 0x0000B0, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_GetAbilityName_Internal_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_GetAbilityName_Internal_AbilityName) == 0x0000B8, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_GetAbilityName_Internal_AbilityName' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_GetAbilityName_Internal_PerkId) == 0x0000D0, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_GetAbilityName_Internal_PerkId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, CallFunc_GetAbilityName_Internal_bShowRateButton) == 0x0000D4, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::CallFunc_GetAbilityName_Internal_bShowRateButton' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, K2Node_Select_Default) == 0x0000D5, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId, K2Node_Select_Default_1) == 0x0000D6, "Member 'ShopMenuDetailsImagineBattle_C_SetLotteryGroupsId::K2Node_Select_Default_1' has a wrong offset!");

}

