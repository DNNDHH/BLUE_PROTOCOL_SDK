#pragma once

 

// Package: ImagineCraft

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "CraftRecepiSortType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ImagineCraft.ImagineCraft_C.ExecuteUbergraph_ImagineCraft
// 0x03C0 (0x03C0 - 0x0000)
struct ImagineCraft_C_ExecuteUbergraph_ImagineCraft final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBImagineCategoryType                        Temp_byte_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50D1[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalclateMoney_Money;                      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalclateMoney_isLiquidMemomryActive;      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CalclateMoney_IsDiscount;                 // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50D2[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50D3[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x0038(0x0010)(ReferenceParm)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          CallFunc_Map_Find_Value;                           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50D4[0x1];                                     // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStorage_StorageNo;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isImagineCraftRecepiMaterialLocked_ReturnValue; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50D5[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_4;                              // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50D6[0x1];                                     // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	bool                                          CallFunc_ValidLimitedRecepi_ReturnValue;           // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasConditionItem_ReturnValue;             // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBImagineCategoryType                        Temp_byte_Variable_5;                              // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50D7[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50D8[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   K2Node_CustomEvent_Recepi;                         // 0x00E0(0x0038)()
	class URecepiListItemBtn_C*                   K2Node_CustomEvent_SelectedItem;                   // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50D9[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50DA[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue_1;           // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue_2;           // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50DB[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_MakedUID;                       // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0178(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0188(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50DC[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50DD[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_isCloseAll;             // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Visible;                        // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isLackAdvRank;                  // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50DE[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   K2Node_MakeStruct_MasterImagineRecepi;             // 0x01C0(0x0038)()
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckMaterialsAmount_is_Lack;             // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x01FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50DF[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTimeoutItem_ReturnValue;                // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50E0[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x022C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue; // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50E1[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWishListData                        K2Node_MakeStruct_SBWishListData;                  // 0x0240(0x000C)(NoDestructor)
	TDelegate<void(int32 RetCode, const class FString& MakedUID)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x024C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue;           // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50E2[0x3];                                     // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0266(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0267(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50E3[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyLiquidMemoryActive_Active;           // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList; // 0x0272(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50E4[0x5];                                     // 0x0273(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50E5[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0288(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50E6[0x2];                                     // 0x0292(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50E7[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_2;             // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTimeoutItem_ReturnValue_1;              // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue_1; // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50E8[0x2];                                     // 0x02B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWishListData                        K2Node_MakeStruct_SBWishListData_1;                // 0x02B4(0x000C)(NoDestructor)
	bool                                          CallFunc_IsRegistedWishlist_ReturnValue_1;         // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x02C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x02C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x02C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFilter_Type                                  K2Node_Select_Default_1;                           // 0x02C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckMaterialsAmount_is_Lack_1;           // 0x02C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x02CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50E9[0x5];                                     // 0x02CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x02D0(0x0028)()
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x02F8(0x0028)()
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0320(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_Select_Default_3;                           // 0x0328(0x0028)()
	class UWidget*                                K2Node_Select_Default_4;                           // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_ConvertCraftSort_SortType;                // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList_1; // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x035A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x035B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x035C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_8;                // 0x035D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBImagineCategoryType                        Temp_byte_Variable_8;                              // 0x035E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x035F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 K2Node_Select_Default_5;                           // 0x0360(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50EA[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0380(0x0018)()
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0398(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_4;            // 0x03A0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_3;             // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft) == 0x000008, "Wrong alignment on ImagineCraft_C_ExecuteUbergraph_ImagineCraft");
static_assert(sizeof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft) == 0x0003C0, "Wrong size on ImagineCraft_C_ExecuteUbergraph_ImagineCraft");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, EntryPoint) == 0x000000, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_byte_Variable) == 0x000004, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_bool_Variable) == 0x000005, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_byte_Variable_1) == 0x000006, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_byte_Variable_2) == 0x000007, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_bool_Variable_1) == 0x000008, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_byte_Variable_3) == 0x000009, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_CalclateMoney_Money) == 0x000018, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_CalclateMoney_Money' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_CalclateMoney_isLiquidMemomryActive) == 0x00001C, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_CalclateMoney_isLiquidMemomryActive' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_CalclateMoney_IsDiscount) == 0x00001D, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_CalclateMoney_IsDiscount' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000020, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetImaginLabComp_ReturnValue) == 0x000030, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetImaginLabComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_ComponentBoundEvent_Filters) == 0x000038, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_ComponentBoundEvent_SelectedItem) == 0x000048, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_ComponentBoundEvent_SelectionType) == 0x000058, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Map_Find_Value) == 0x000059, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Map_Find_ReturnValue) == 0x00005A, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetStorage_StorageNo) == 0x00005C, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetStorage_StorageNo' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_isImagineCraftRecepiMaterialLocked_ReturnValue) == 0x000060, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_isImagineCraftRecepiMaterialLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CustomEvent_Result_1) == 0x000074, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_byte_Variable_4) == 0x000075, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000076, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000078, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_ValidLimitedRecepi_ReturnValue) == 0x0000A0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_ValidLimitedRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CustomEvent_Result) == 0x0000A1, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_HasConditionItem_ReturnValue) == 0x0000A2, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_HasConditionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000A3, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_byte_Variable_5) == 0x0000A4, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A8, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B8, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000C8, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_byte_Variable_6) == 0x0000D8, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CustomEvent_Recepi) == 0x0000E0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CustomEvent_Recepi' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CustomEvent_SelectedItem) == 0x000118, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetPlayerController_ReturnValue_1) == 0x000120, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetPlayerController_ReturnValue_2) == 0x000128, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000130, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_DynamicCast_bSuccess_1) == 0x000138, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x000140, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_DynamicCast_bSuccess_2) == 0x000148, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetImaginLabComp_ReturnValue_1) == 0x000150, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetImaginLabComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetImaginLabComp_ReturnValue_2) == 0x000158, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetImaginLabComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CustomEvent_RetCode_1) == 0x000160, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CustomEvent_MakedUID) == 0x000168, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CustomEvent_MakedUID' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetSBRetMessage_ReturnValue) == 0x000178, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000188, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001A0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetMoney_ReturnValue) == 0x0001A4, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001A8, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CustomEvent_RetCode) == 0x0001AC, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001B0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_ComponentBoundEvent_isCloseAll) == 0x0001B1, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_ComponentBoundEvent_isCloseAll' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CustomEvent_Visible) == 0x0001B2, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CustomEvent_Visible' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CustomEvent_isLackAdvRank) == 0x0001B3, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CustomEvent_isLackAdvRank' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetAdventurerRank_ReturnValue) == 0x0001B4, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0001B8, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_MakeStruct_MasterImagineRecepi) == 0x0001C0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_MakeStruct_MasterImagineRecepi' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_byte_Variable_7) == 0x0001F8, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_bool_Variable_2) == 0x0001F9, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_CheckMaterialsAmount_is_Lack) == 0x0001FA, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_CheckMaterialsAmount_is_Lack' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001FB, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_PlayAnimation_ReturnValue) == 0x000200, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetCharacterId_ReturnValue) == 0x000208, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetCharacterId_ReturnValue_1) == 0x000218, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_IsTimeoutItem_ReturnValue) == 0x000228, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_IsTimeoutItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CreateDelegate_OutputDelegate_2) == 0x00022C, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue) == 0x00023C, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_MakeStruct_SBWishListData) == 0x000240, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_MakeStruct_SBWishListData' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CreateDelegate_OutputDelegate_3) == 0x00024C, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_IsRegistedWishlist_ReturnValue) == 0x00025C, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_IsRegistedWishlist_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_PlaySE_ReturnValue) == 0x000260, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Not_PreBool_ReturnValue) == 0x000264, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Not_PreBool_ReturnValue_1) == 0x000265, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanAND_ReturnValue) == 0x000266, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanAND_ReturnValue_1) == 0x000267, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Not_PreBool_ReturnValue_2) == 0x000268, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_PlaySE_ReturnValue_1) == 0x00026C, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_IsAnyLiquidMemoryActive_Active) == 0x000270, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_IsAnyLiquidMemoryActive_Active' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_Select_Default) == 0x000271, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList) == 0x000272, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetSBPlayerController_ReturnValue) == 0x000278, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanAND_ReturnValue_2) == 0x000280, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000288, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanOR_ReturnValue) == 0x000290, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanOR_ReturnValue_1) == 0x000291, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CustomEvent_InRetCode) == 0x000294, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Not_PreBool_ReturnValue_3) == 0x000298, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetCharacterId_ReturnValue_2) == 0x0002A0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetCharacterId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_IsTimeoutItem_ReturnValue_1) == 0x0002B0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_IsTimeoutItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue_1) == 0x0002B1, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_MakeStruct_SBWishListData_1) == 0x0002B4, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_MakeStruct_SBWishListData_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_IsRegistedWishlist_ReturnValue_1) == 0x0002C0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_IsRegistedWishlist_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Not_PreBool_ReturnValue_4) == 0x0002C1, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Not_PreBool_ReturnValue_5) == 0x0002C2, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanAND_ReturnValue_3) == 0x0002C3, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanAND_ReturnValue_4) == 0x0002C4, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Not_PreBool_ReturnValue_6) == 0x0002C5, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_Select_Default_1) == 0x0002C6, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_CheckMaterialsAmount_is_Lack_1) == 0x0002C7, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_CheckMaterialsAmount_is_Lack_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Not_PreBool_ReturnValue_7) == 0x0002C8, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanAND_ReturnValue_5) == 0x0002C9, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_Select_Default_2) == 0x0002CA, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_MakeStruct_SlateColor) == 0x0002D0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetImpossibleColor_ReturnValue) == 0x0002F8, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Create_ReturnValue) == 0x000320, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_Select_Default_3) == 0x000328, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_Select_Default_4) == 0x000350, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_ConvertCraftSort_SortType) == 0x000358, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_ConvertCraftSort_SortType' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList_1) == 0x000359, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_IsRegisterWishlistLimit_bIsRegisterWishList_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanAND_ReturnValue_6) == 0x00035A, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanOR_ReturnValue_2) == 0x00035B, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_BooleanOR_ReturnValue_3) == 0x00035C, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Not_PreBool_ReturnValue_8) == 0x00035D, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Not_PreBool_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, Temp_byte_Variable_8) == 0x00035E, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_ComponentBoundEvent_bIsChecked) == 0x00035F, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_Select_Default_5) == 0x000360, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetConfigSaveManager_IsValid) == 0x000370, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000378, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000380, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_Create_ReturnValue_1) == 0x000398, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, K2Node_CreateDelegate_OutputDelegate_4) == 0x0003A0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ExecuteUbergraph_ImagineCraft, CallFunc_GetCharacterId_ReturnValue_3) == 0x0003B0, "Member 'ImagineCraft_C_ExecuteUbergraph_ImagineCraft::CallFunc_GetCharacterId_ReturnValue_3' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ImagineCraft_C_BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraft_C_BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ImagineCraft_C_BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(ImagineCraft_C_BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on ImagineCraft_C_BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(ImagineCraft_C_BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'ImagineCraft_C_BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.OnRequest_GetRewaedBoost_cmpl
// 0x0004 (0x0004 - 0x0000)
struct ImagineCraft_C_OnRequest_GetRewaedBoost_cmpl final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_OnRequest_GetRewaedBoost_cmpl) == 0x000004, "Wrong alignment on ImagineCraft_C_OnRequest_GetRewaedBoost_cmpl");
static_assert(sizeof(ImagineCraft_C_OnRequest_GetRewaedBoost_cmpl) == 0x000004, "Wrong size on ImagineCraft_C_OnRequest_GetRewaedBoost_cmpl");
static_assert(offsetof(ImagineCraft_C_OnRequest_GetRewaedBoost_cmpl, InRetCode) == 0x000000, "Member 'ImagineCraft_C_OnRequest_GetRewaedBoost_cmpl::InRetCode' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.ChgHelpMode
// 0x0001 (0x0001 - 0x0000)
struct ImagineCraft_C_ChgHelpMode final
{
public:
	bool                                          IsLackAdvRank;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraft_C_ChgHelpMode) == 0x000001, "Wrong alignment on ImagineCraft_C_ChgHelpMode");
static_assert(sizeof(ImagineCraft_C_ChgHelpMode) == 0x000001, "Wrong size on ImagineCraft_C_ChgHelpMode");
static_assert(offsetof(ImagineCraft_C_ChgHelpMode, IsLackAdvRank) == 0x000000, "Member 'ImagineCraft_C_ChgHelpMode::IsLackAdvRank' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.ShowHelp
// 0x0001 (0x0001 - 0x0000)
struct ImagineCraft_C_ShowHelp final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraft_C_ShowHelp) == 0x000001, "Wrong alignment on ImagineCraft_C_ShowHelp");
static_assert(sizeof(ImagineCraft_C_ShowHelp) == 0x000001, "Wrong size on ImagineCraft_C_ShowHelp");
static_assert(offsetof(ImagineCraft_C_ShowHelp, Visible) == 0x000000, "Member 'ImagineCraft_C_ShowHelp::Visible' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ImagineCraft_C_BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature final
{
public:
	bool                                          IsCloseAll;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraft_C_BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature) == 0x000001, "Wrong alignment on ImagineCraft_C_BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature");
static_assert(sizeof(ImagineCraft_C_BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature) == 0x000001, "Wrong size on ImagineCraft_C_BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature");
static_assert(offsetof(ImagineCraft_C_BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature, IsCloseAll) == 0x000000, "Member 'ImagineCraft_C_BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature::IsCloseAll' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.RegenerateList
// 0x0004 (0x0004 - 0x0000)
struct ImagineCraft_C_RegenerateList final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_RegenerateList) == 0x000004, "Wrong alignment on ImagineCraft_C_RegenerateList");
static_assert(sizeof(ImagineCraft_C_RegenerateList) == 0x000004, "Wrong size on ImagineCraft_C_RegenerateList");
static_assert(offsetof(ImagineCraft_C_RegenerateList, RetCode) == 0x000000, "Member 'ImagineCraft_C_RegenerateList::RetCode' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.OnFinished
// 0x0018 (0x0018 - 0x0000)
struct ImagineCraft_C_OnFinished final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50EB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MakedUID;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_OnFinished) == 0x000008, "Wrong alignment on ImagineCraft_C_OnFinished");
static_assert(sizeof(ImagineCraft_C_OnFinished) == 0x000018, "Wrong size on ImagineCraft_C_OnFinished");
static_assert(offsetof(ImagineCraft_C_OnFinished, RetCode) == 0x000000, "Member 'ImagineCraft_C_OnFinished::RetCode' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_OnFinished, MakedUID) == 0x000008, "Member 'ImagineCraft_C_OnFinished::MakedUID' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.OnSelectRecepi
// 0x0040 (0x0040 - 0x0000)
struct ImagineCraft_C_OnSelectRecepi final
{
public:
	struct FMasterImagineRecepi                   Recepi;                                            // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class URecepiListItemBtn_C*                   SelectedItem;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_OnSelectRecepi) == 0x000008, "Wrong alignment on ImagineCraft_C_OnSelectRecepi");
static_assert(sizeof(ImagineCraft_C_OnSelectRecepi) == 0x000040, "Wrong size on ImagineCraft_C_OnSelectRecepi");
static_assert(offsetof(ImagineCraft_C_OnSelectRecepi, Recepi) == 0x000000, "Member 'ImagineCraft_C_OnSelectRecepi::Recepi' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_OnSelectRecepi, SelectedItem) == 0x000038, "Member 'ImagineCraft_C_OnSelectRecepi::SelectedItem' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.OnLimitSerlected
// 0x0001 (0x0001 - 0x0000)
struct ImagineCraft_C_OnLimitSerlected final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_OnLimitSerlected) == 0x000001, "Wrong alignment on ImagineCraft_C_OnLimitSerlected");
static_assert(sizeof(ImagineCraft_C_OnLimitSerlected) == 0x000001, "Wrong size on ImagineCraft_C_OnLimitSerlected");
static_assert(offsetof(ImagineCraft_C_OnLimitSerlected, Result) == 0x000000, "Member 'ImagineCraft_C_OnLimitSerlected::Result' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.OnSelectDialog
// 0x0001 (0x0001 - 0x0000)
struct ImagineCraft_C_OnSelectDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_OnSelectDialog) == 0x000001, "Wrong alignment on ImagineCraft_C_OnSelectDialog");
static_assert(sizeof(ImagineCraft_C_OnSelectDialog) == 0x000001, "Wrong size on ImagineCraft_C_OnSelectDialog");
static_assert(offsetof(ImagineCraft_C_OnSelectDialog, Result) == 0x000000, "Member 'ImagineCraft_C_OnSelectDialog::Result' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct ImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on ImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(ImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on ImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(ImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'ImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'ImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ImagineCraft_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Param_Filters;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ImagineCraft_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on ImagineCraft_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");
static_assert(sizeof(ImagineCraft_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on ImagineCraft_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");
static_assert(offsetof(ImagineCraft_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature, Param_Filters) == 0x000000, "Member 'ImagineCraft_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature::Param_Filters' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.Generate ListBox
// 0x00F8 (0x00F8 - 0x0000)
struct ImagineCraft_C_Generate_ListBox final
{
public:
	TArray<struct FMasterImagineRecepi>           OwningImagineRecepi;                               // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<struct FCharacterCraftRecepi>          HasImagineRecepi;                                  // 0x0010(0x0010)(Edit, BlueprintVisible)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50EC[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FCharacterCraftRecepi>          CallFunc_GetHasImagineRecepi_ReturnValue;          // 0x0048(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FMasterImagineRecepi>           CallFunc_GetOwningImagineRecepi_ReturnValue;       // 0x0078(0x0010)(ConstParm, ReferenceParm)
	class URecepiListItemBtn_C*                   CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50ED[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  CallFunc_Array_Get_Item;                           // 0x009C(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50EE[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50EF[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FMasterImagineRecepi& MasterData, class URecepiListItemBtn_C* SelectedItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x00DC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_50F0[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_Generate_ListBox) == 0x000008, "Wrong alignment on ImagineCraft_C_Generate_ListBox");
static_assert(sizeof(ImagineCraft_C_Generate_ListBox) == 0x0000F8, "Wrong size on ImagineCraft_C_Generate_ListBox");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, OwningImagineRecepi) == 0x000000, "Member 'ImagineCraft_C_Generate_ListBox::OwningImagineRecepi' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, HasImagineRecepi) == 0x000010, "Member 'ImagineCraft_C_Generate_ListBox::HasImagineRecepi' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_GetSBPlayerController_ReturnValue) == 0x000020, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, Temp_int_Array_Index_Variable) == 0x000028, "Member 'ImagineCraft_C_Generate_ListBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_GetImaginLabComp_ReturnValue) == 0x000030, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_GetImaginLabComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_GetHasImagineRecepi_ReturnValue) == 0x000048, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_GetHasImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_GetOwningImagineRecepi_ReturnValue) == 0x000078, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_GetOwningImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Create_ReturnValue) == 0x000088, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, Temp_int_Loop_Counter_Variable) == 0x000090, "Member 'ImagineCraft_C_Generate_ListBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, Temp_bool_Variable) == 0x000098, "Member 'ImagineCraft_C_Generate_ListBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Array_Get_Item) == 0x00009C, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Less_IntInt_ReturnValue) == 0x0000A8, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000B0, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000C0, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000D0, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, Temp_bool_Variable_1) == 0x0000D1, "Member 'ImagineCraft_C_Generate_ListBox::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_IsEmpty_ReturnValue) == 0x0000D2, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_IsEventTermActive_ReturnValue) == 0x0000D3, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, K2Node_Select_Default) == 0x0000D4, "Member 'ImagineCraft_C_Generate_ListBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_Array_Add_ReturnValue) == 0x0000D8, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, K2Node_CreateDelegate_OutputDelegate) == 0x0000DC, "Member 'ImagineCraft_C_Generate_ListBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Generate_ListBox, CallFunc_AddChild_ReturnValue) == 0x0000F0, "Member 'ImagineCraft_C_Generate_ListBox::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.CheckMaterialLock
// 0x0048 (0x0048 - 0x0000)
struct ImagineCraft_C_CheckMaterialLock final
{
public:
	bool                                          IsLocked;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50F1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StorageNeed;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50F3[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineMaterial                 CallFunc_Array_Get_Item;                           // 0x0024(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isInventoryItemLocked_OutRequiredCnt;     // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLocked_ReturnValue;        // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLocked_OutRequiredCnt;       // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLocked_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50F4[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_CheckMaterialLock) == 0x000008, "Wrong alignment on ImagineCraft_C_CheckMaterialLock");
static_assert(sizeof(ImagineCraft_C_CheckMaterialLock) == 0x000048, "Wrong size on ImagineCraft_C_CheckMaterialLock");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, IsLocked) == 0x000000, "Member 'ImagineCraft_C_CheckMaterialLock::IsLocked' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, StorageNeed) == 0x000004, "Member 'ImagineCraft_C_CheckMaterialLock::StorageNeed' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ImagineCraft_C_CheckMaterialLock::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'ImagineCraft_C_CheckMaterialLock::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_GetCharacterStorage_ReturnValue) == 0x000018, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_Less_IntInt_ReturnValue) == 0x000021, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_Array_Get_Item) == 0x000024, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_isInventoryItemLocked_OutRequiredCnt) == 0x000034, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_isInventoryItemLocked_OutRequiredCnt' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_isInventoryItemLocked_ReturnValue) == 0x000035, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_isInventoryItemLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_Less_IntInt_ReturnValue_1) == 0x000036, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_isStorageItemLocked_OutRequiredCnt) == 0x000037, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_isStorageItemLocked_OutRequiredCnt' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_isStorageItemLocked_ReturnValue) == 0x000038, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_isStorageItemLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x00003C, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialLock, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'ImagineCraft_C_CheckMaterialLock::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.Filter
// 0x0228 (0x0228 - 0x0000)
struct ImagineCraft_C_Filter final
{
public:
	ESBSortType                                   SortingView;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCharacterCraftRecepi>          Recepis;                                           // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 SortedIndexes;                                     // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F6[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50F7[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCraftableFilterImagine_ReturnValue;     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F8[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F9[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URecepiListItemBtn_C*                   CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50FA[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50FB[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           CallFunc_Array_Get_Item_2;                         // 0x0098(0x0010)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50FC[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50FD[0x2];                                     // 0x00B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50FE[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50FF[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_SortMaxImagineLevel_ReturnValue;          // 0x00D0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5100[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_SortAdventurerRankImagine_ReturnValue;    // 0x00E8(0x0010)(ReferenceParm)
	TArray<int32>                                 CallFunc_SortRecepiId_ReturnValue;                 // 0x00F8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5101[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URecepiListItemBtn_C*                   CallFunc_Array_Get_Item_3;                         // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5102[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_GetRecepi_Master;                         // 0x0120(0x0038)()
	bool                                          CallFunc_GetRecepi_bIsCrafted;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5103[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  K2Node_MakeStruct_CharacterCraftRecepi;            // 0x015C(0x0008)(NoDestructor)
	uint8                                         Pad_5104[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue;            // 0x0168(0x00B0)()
	bool                                          CallFunc_IsCraftableRecepi_ReturnValue;            // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MasterContainsLists_isContains;           // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               CallFunc_Attribute2ItemFilter_ReturnValue;         // 0x021B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x021D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x021E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5105[0x1];                                     // 0x021F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_Filter) == 0x000008, "Wrong alignment on ImagineCraft_C_Filter");
static_assert(sizeof(ImagineCraft_C_Filter) == 0x000228, "Wrong size on ImagineCraft_C_Filter");
static_assert(offsetof(ImagineCraft_C_Filter, SortingView) == 0x000000, "Member 'ImagineCraft_C_Filter::SortingView' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, Recepis) == 0x000008, "Member 'ImagineCraft_C_Filter::Recepis' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, SortedIndexes) == 0x000018, "Member 'ImagineCraft_C_Filter::SortedIndexes' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, Temp_int_Array_Index_Variable) == 0x000028, "Member 'ImagineCraft_C_Filter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'ImagineCraft_C_Filter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'ImagineCraft_C_Filter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, Temp_int_Array_Index_Variable_1) == 0x000034, "Member 'ImagineCraft_C_Filter::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'ImagineCraft_C_Filter::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'ImagineCraft_C_Filter::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, Temp_int_Array_Index_Variable_2) == 0x000040, "Member 'ImagineCraft_C_Filter::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_GetCharacterId_ReturnValue) == 0x000048, "Member 'ImagineCraft_C_Filter::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_GetConfigSaveManager_IsValid) == 0x000058, "Member 'ImagineCraft_C_Filter::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000060, "Member 'ImagineCraft_C_Filter::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_IsCraftableFilterImagine_ReturnValue) == 0x000068, "Member 'ImagineCraft_C_Filter::CallFunc_IsCraftableFilterImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, Temp_byte_Variable) == 0x000069, "Member 'ImagineCraft_C_Filter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Get_Item) == 0x00006C, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, Temp_bool_Variable) == 0x000080, "Member 'ImagineCraft_C_Filter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_AddChild_ReturnValue) == 0x000088, "Member 'ImagineCraft_C_Filter::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, Temp_int_Loop_Counter_Variable_2) == 0x000090, "Member 'ImagineCraft_C_Filter::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Get_Item_2) == 0x000098, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Length_ReturnValue_1) == 0x0000A8, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'ImagineCraft_C_Filter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Length_ReturnValue_2) == 0x0000B0, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000B4, "Member 'ImagineCraft_C_Filter::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B5, "Member 'ImagineCraft_C_Filter::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000B8, "Member 'ImagineCraft_C_Filter::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_GetMasterDataManager_IsValid) == 0x0000BC, "Member 'ImagineCraft_C_Filter::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000C0, "Member 'ImagineCraft_C_Filter::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, K2Node_SwitchEnum_CmpSuccess) == 0x0000C8, "Member 'ImagineCraft_C_Filter::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_SortMaxImagineLevel_ReturnValue) == 0x0000D0, "Member 'ImagineCraft_C_Filter::CallFunc_SortMaxImagineLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Add_ReturnValue) == 0x0000E0, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_SortAdventurerRankImagine_ReturnValue) == 0x0000E8, "Member 'ImagineCraft_C_Filter::CallFunc_SortAdventurerRankImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_SortRecepiId_ReturnValue) == 0x0000F8, "Member 'ImagineCraft_C_Filter::CallFunc_SortRecepiId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Length_ReturnValue_3) == 0x000108, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Get_Item_3) == 0x000110, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Less_IntInt_ReturnValue_2) == 0x000118, "Member 'ImagineCraft_C_Filter::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_GetVisibility_ReturnValue) == 0x000119, "Member 'ImagineCraft_C_Filter::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_GetRecepi_Master) == 0x000120, "Member 'ImagineCraft_C_Filter::CallFunc_GetRecepi_Master' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_GetRecepi_bIsCrafted) == 0x000158, "Member 'ImagineCraft_C_Filter::CallFunc_GetRecepi_bIsCrafted' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, K2Node_MakeStruct_CharacterCraftRecepi) == 0x00015C, "Member 'ImagineCraft_C_Filter::K2Node_MakeStruct_CharacterCraftRecepi' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_FindMasterImagine_ReturnValue) == 0x000168, "Member 'ImagineCraft_C_Filter::CallFunc_FindMasterImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_IsCraftableRecepi_ReturnValue) == 0x000218, "Member 'ImagineCraft_C_Filter::CallFunc_IsCraftableRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_MasterContainsLists_isContains) == 0x000219, "Member 'ImagineCraft_C_Filter::CallFunc_MasterContainsLists_isContains' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Not_PreBool_ReturnValue) == 0x00021A, "Member 'ImagineCraft_C_Filter::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Attribute2ItemFilter_ReturnValue) == 0x00021B, "Member 'ImagineCraft_C_Filter::CallFunc_Attribute2ItemFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00021C, "Member 'ImagineCraft_C_Filter::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Contains_ReturnValue) == 0x00021D, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_BooleanOR_ReturnValue) == 0x00021E, "Member 'ImagineCraft_C_Filter::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, CallFunc_Array_Add_ReturnValue_1) == 0x000220, "Member 'ImagineCraft_C_Filter::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_Filter, K2Node_Select_Default) == 0x000224, "Member 'ImagineCraft_C_Filter::K2Node_Select_Default' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.GenerateSortBox
// 0x0058 (0x0058 - 0x0000)
struct ImagineCraft_C_GenerateSortBox final
{
public:
	TArray<int32>                                 SkipIndexies;                                      // 0x0000(0x0010)(Edit, BlueprintVisible)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5106[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5107[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetRecentSortType_ReturnValue;            // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          CallFunc_ConvertSortType_CraftSort;                // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          K2Node_Select_Default;                             // 0x0050(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraft_C_GenerateSortBox) == 0x000008, "Wrong alignment on ImagineCraft_C_GenerateSortBox");
static_assert(sizeof(ImagineCraft_C_GenerateSortBox) == 0x000058, "Wrong size on ImagineCraft_C_GenerateSortBox");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, SkipIndexies) == 0x000000, "Member 'ImagineCraft_C_GenerateSortBox::SkipIndexies' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_MakeLiteralByte_ReturnValue) == 0x000010, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000011, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, Temp_int_Variable) == 0x000014, "Member 'ImagineCraft_C_GenerateSortBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, Temp_int_Variable_1) == 0x000018, "Member 'ImagineCraft_C_GenerateSortBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, K2Node_MakeArray_Array) == 0x000038, "Member 'ImagineCraft_C_GenerateSortBox::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_Array_Contains_ReturnValue) == 0x000048, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00004A, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00004B, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_GetRecentSortType_ReturnValue) == 0x00004C, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_GetRecentSortType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_ConvertSortType_CraftSort) == 0x00004D, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_ConvertSortType_CraftSort' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00004E, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x00004F, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, K2Node_Select_Default) == 0x000050, "Member 'ImagineCraft_C_GenerateSortBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_GenerateSortBox, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000051, "Member 'ImagineCraft_C_GenerateSortBox::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.MasterContainsLists
// 0x0110 (0x0110 - 0x0000)
struct ImagineCraft_C_MasterContainsLists final
{
public:
	struct FSBMasterImagine                       Master;                                            // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFilterGroup                           Group;                                             // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsContains;                                        // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5108[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EItemFilterType>                       PosFilter;                                         // 0x00C8(0x0010)(Edit, BlueprintVisible)
	EItemFilterType                               Temp_byte_Variable;                                // 0x00D8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5109[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_1;                              // 0x00E0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_2;                              // 0x00E1(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_3;                              // 0x00E2(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_4;                              // 0x00E3(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_Array_Get_Item;                           // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_510A[0x2];                                     // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_510B[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_MasterContainsLists) == 0x000008, "Wrong alignment on ImagineCraft_C_MasterContainsLists");
static_assert(sizeof(ImagineCraft_C_MasterContainsLists) == 0x000110, "Wrong size on ImagineCraft_C_MasterContainsLists");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, Master) == 0x000000, "Member 'ImagineCraft_C_MasterContainsLists::Master' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, Group) == 0x0000B0, "Member 'ImagineCraft_C_MasterContainsLists::Group' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, IsContains) == 0x0000C0, "Member 'ImagineCraft_C_MasterContainsLists::IsContains' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, PosFilter) == 0x0000C8, "Member 'ImagineCraft_C_MasterContainsLists::PosFilter' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, Temp_byte_Variable) == 0x0000D8, "Member 'ImagineCraft_C_MasterContainsLists::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, CallFunc_Array_Length_ReturnValue) == 0x0000DC, "Member 'ImagineCraft_C_MasterContainsLists::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, Temp_byte_Variable_1) == 0x0000E0, "Member 'ImagineCraft_C_MasterContainsLists::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, Temp_byte_Variable_2) == 0x0000E1, "Member 'ImagineCraft_C_MasterContainsLists::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, Temp_byte_Variable_3) == 0x0000E2, "Member 'ImagineCraft_C_MasterContainsLists::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, Temp_byte_Variable_4) == 0x0000E3, "Member 'ImagineCraft_C_MasterContainsLists::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, Temp_int_Array_Index_Variable) == 0x0000E4, "Member 'ImagineCraft_C_MasterContainsLists::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, Temp_int_Loop_Counter_Variable) == 0x0000E8, "Member 'ImagineCraft_C_MasterContainsLists::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, CallFunc_Array_Get_Item) == 0x0000EC, "Member 'ImagineCraft_C_MasterContainsLists::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, CallFunc_Less_IntInt_ReturnValue) == 0x0000ED, "Member 'ImagineCraft_C_MasterContainsLists::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'ImagineCraft_C_MasterContainsLists::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, CallFunc_Array_Contains_ReturnValue) == 0x0000F4, "Member 'ImagineCraft_C_MasterContainsLists::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, CallFunc_Array_Add_ReturnValue) == 0x0000F8, "Member 'ImagineCraft_C_MasterContainsLists::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, CallFunc_Array_Add_ReturnValue_1) == 0x0000FC, "Member 'ImagineCraft_C_MasterContainsLists::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, CallFunc_Array_Add_ReturnValue_2) == 0x000100, "Member 'ImagineCraft_C_MasterContainsLists::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, CallFunc_Array_Add_ReturnValue_3) == 0x000104, "Member 'ImagineCraft_C_MasterContainsLists::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_MasterContainsLists, CallFunc_Array_Add_ReturnValue_4) == 0x000108, "Member 'ImagineCraft_C_MasterContainsLists::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.CheckMaterialsAmount
// 0x0048 (0x0048 - 0x0000)
struct ImagineCraft_C_CheckMaterialsAmount final
{
public:
	bool                                          Is_Lack;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_510C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                Storage;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_510D[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasterImagineMaterial                 CallFunc_Array_Get_Item;                           // 0x002C(0x000C)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_510E[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraft_C_CheckMaterialsAmount) == 0x000008, "Wrong alignment on ImagineCraft_C_CheckMaterialsAmount");
static_assert(sizeof(ImagineCraft_C_CheckMaterialsAmount) == 0x000048, "Wrong size on ImagineCraft_C_CheckMaterialsAmount");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, Is_Lack) == 0x000000, "Member 'ImagineCraft_C_CheckMaterialsAmount::Is_Lack' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, Storage) == 0x000008, "Member 'ImagineCraft_C_CheckMaterialsAmount::Storage' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, Temp_int_Array_Index_Variable) == 0x000010, "Member 'ImagineCraft_C_CheckMaterialsAmount::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'ImagineCraft_C_CheckMaterialsAmount::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'ImagineCraft_C_CheckMaterialsAmount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, CallFunc_GetCharacterStorage_ReturnValue) == 0x000020, "Member 'ImagineCraft_C_CheckMaterialsAmount::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'ImagineCraft_C_CheckMaterialsAmount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, CallFunc_Array_Get_Item) == 0x00002C, "Member 'ImagineCraft_C_CheckMaterialsAmount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'ImagineCraft_C_CheckMaterialsAmount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x00003C, "Member 'ImagineCraft_C_CheckMaterialsAmount::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_CheckMaterialsAmount, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'ImagineCraft_C_CheckMaterialsAmount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.On_Cmb_Sort_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0) == 0x000008, "Wrong alignment on ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0");
static_assert(sizeof(ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0) == 0x000038, "Wrong size on ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0");
static_assert(offsetof(ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0, Item) == 0x000000, "Member 'ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.ConvertSortType
// 0x0020 (0x0020 - 0x0000)
struct ImagineCraft_C_ConvertSortType final
{
public:
	ESBItemSortType                               Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          CraftSort;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_6;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_7;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_8;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_9;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_10;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_11;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_12;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_13;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_14;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_15;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_16;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_17;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_18;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_19;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_20;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_21;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_22;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_23;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_24;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_25;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_26;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_27;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_28;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          K2Node_Select_Default;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_ConvertSortType) == 0x000001, "Wrong alignment on ImagineCraft_C_ConvertSortType");
static_assert(sizeof(ImagineCraft_C_ConvertSortType) == 0x000020, "Wrong size on ImagineCraft_C_ConvertSortType");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Param_SortType) == 0x000000, "Member 'ImagineCraft_C_ConvertSortType::Param_SortType' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, CraftSort) == 0x000001, "Member 'ImagineCraft_C_ConvertSortType::CraftSort' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable) == 0x000002, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_1) == 0x000003, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_2) == 0x000004, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_3) == 0x000005, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_4) == 0x000006, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_5) == 0x000007, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_6) == 0x000008, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_7) == 0x000009, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_8) == 0x00000A, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_9) == 0x00000B, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_10) == 0x00000C, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_11) == 0x00000D, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_12) == 0x00000E, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_13) == 0x00000F, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_14) == 0x000010, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_15) == 0x000011, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_16) == 0x000012, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_17) == 0x000013, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_18) == 0x000014, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_19) == 0x000015, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_20) == 0x000016, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_21) == 0x000017, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_22) == 0x000018, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_23) == 0x000019, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_24) == 0x00001A, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_25) == 0x00001B, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_26) == 0x00001C, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_27) == 0x00001D, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_27' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, Temp_byte_Variable_28) == 0x00001E, "Member 'ImagineCraft_C_ConvertSortType::Temp_byte_Variable_28' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertSortType, K2Node_Select_Default) == 0x00001F, "Member 'ImagineCraft_C_ConvertSortType::K2Node_Select_Default' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.ConvertCraftSort
// 0x000A (0x000A - 0x0000)
struct ImagineCraft_C_ConvertCraftSort final
{
public:
	ECraftRecepiSortType                          CraftSortType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Param_SortType;                                    // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_6;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_ConvertCraftSort) == 0x000001, "Wrong alignment on ImagineCraft_C_ConvertCraftSort");
static_assert(sizeof(ImagineCraft_C_ConvertCraftSort) == 0x00000A, "Wrong size on ImagineCraft_C_ConvertCraftSort");
static_assert(offsetof(ImagineCraft_C_ConvertCraftSort, CraftSortType) == 0x000000, "Member 'ImagineCraft_C_ConvertCraftSort::CraftSortType' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertCraftSort, Param_SortType) == 0x000001, "Member 'ImagineCraft_C_ConvertCraftSort::Param_SortType' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertCraftSort, Temp_byte_Variable) == 0x000002, "Member 'ImagineCraft_C_ConvertCraftSort::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertCraftSort, Temp_byte_Variable_1) == 0x000003, "Member 'ImagineCraft_C_ConvertCraftSort::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertCraftSort, Temp_byte_Variable_2) == 0x000004, "Member 'ImagineCraft_C_ConvertCraftSort::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertCraftSort, Temp_byte_Variable_3) == 0x000005, "Member 'ImagineCraft_C_ConvertCraftSort::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertCraftSort, Temp_byte_Variable_4) == 0x000006, "Member 'ImagineCraft_C_ConvertCraftSort::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertCraftSort, Temp_byte_Variable_5) == 0x000007, "Member 'ImagineCraft_C_ConvertCraftSort::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertCraftSort, Temp_byte_Variable_6) == 0x000008, "Member 'ImagineCraft_C_ConvertCraftSort::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_ConvertCraftSort, K2Node_Select_Default) == 0x000009, "Member 'ImagineCraft_C_ConvertCraftSort::K2Node_Select_Default' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.IsAnyLiquidMemoryActive
// 0x00A8 (0x00A8 - 0x0000)
struct ImagineCraft_C_IsAnyLiquidMemoryActive final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_510F[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5110[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue; // 0x0018(0x0028)(NoDestructor)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5111[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1; // 0x0048(0x0028)(NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_2; // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5112[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_2; // 0x0078(0x0028)(NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraft_C_IsAnyLiquidMemoryActive) == 0x000008, "Wrong alignment on ImagineCraft_C_IsAnyLiquidMemoryActive");
static_assert(sizeof(ImagineCraft_C_IsAnyLiquidMemoryActive) == 0x0000A8, "Wrong size on ImagineCraft_C_IsAnyLiquidMemoryActive");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, Active) == 0x000000, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::Active' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_GetNetworkDataCache_IsValid) == 0x000001, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists) == 0x000010, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue) == 0x000018, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1) == 0x000040, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1) == 0x000048, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_Greater_IntInt_ReturnValue) == 0x000070, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000071, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_BooleanAND_ReturnValue) == 0x000072, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_BooleanAND_ReturnValue_1) == 0x000073, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_2) == 0x000074, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_2) == 0x000078, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000A0, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_BooleanAND_ReturnValue_2) == 0x0000A1, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_BooleanOR_ReturnValue) == 0x0000A2, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_IsAnyLiquidMemoryActive, CallFunc_BooleanOR_ReturnValue_1) == 0x0000A3, "Member 'ImagineCraft_C_IsAnyLiquidMemoryActive::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.UpdateSelectedItem
// 0x0028 (0x0028 - 0x0000)
struct ImagineCraft_C_UpdateSelectedItem final
{
public:
	class URecepiListItemBtn_C*                   SelectedItem;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URecepiListItemBtn_C*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraft_C_UpdateSelectedItem) == 0x000008, "Wrong alignment on ImagineCraft_C_UpdateSelectedItem");
static_assert(sizeof(ImagineCraft_C_UpdateSelectedItem) == 0x000028, "Wrong size on ImagineCraft_C_UpdateSelectedItem");
static_assert(offsetof(ImagineCraft_C_UpdateSelectedItem, SelectedItem) == 0x000000, "Member 'ImagineCraft_C_UpdateSelectedItem::SelectedItem' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateSelectedItem, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ImagineCraft_C_UpdateSelectedItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateSelectedItem, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'ImagineCraft_C_UpdateSelectedItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateSelectedItem, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'ImagineCraft_C_UpdateSelectedItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateSelectedItem, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'ImagineCraft_C_UpdateSelectedItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateSelectedItem, CallFunc_Array_Get_Item) == 0x000018, "Member 'ImagineCraft_C_UpdateSelectedItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateSelectedItem, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'ImagineCraft_C_UpdateSelectedItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.UpdateTimeLimited
// 0x0170 (0x0170 - 0x0000)
struct ImagineCraft_C_UpdateTimeLimited final
{
public:
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0000(0x00B0)(Edit, BlueprintVisible)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue; // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNOR_ReturnValue;                   // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x00B8(0x00B0)()
	bool                                          CallFunc_IsEventTermActive_ReturnValue_1;          // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNOR_ReturnValue_1;                 // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x016B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraft_C_UpdateTimeLimited) == 0x000008, "Wrong alignment on ImagineCraft_C_UpdateTimeLimited");
static_assert(sizeof(ImagineCraft_C_UpdateTimeLimited) == 0x000170, "Wrong size on ImagineCraft_C_UpdateTimeLimited");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, MasterImagine) == 0x000000, "Member 'ImagineCraft_C_UpdateTimeLimited::MasterImagine' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000B0, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000B1, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, Temp_bool_Variable) == 0x0000B2, "Member 'ImagineCraft_C_UpdateTimeLimited::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_IsEventTermActive_ReturnValue) == 0x0000B3, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue) == 0x0000B4, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_ContainsTimeoutImagineRecepiMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_IsEmpty_ReturnValue) == 0x0000B5, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_BooleanNOR_ReturnValue) == 0x0000B6, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_BooleanNOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_FindImagineMaster_bIsValid) == 0x0000B7, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_FindImagineMaster_ImagineMaster) == 0x0000B8, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_IsEventTermActive_ReturnValue_1) == 0x000168, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_IsEventTermActive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_IsEmpty_ReturnValue_1) == 0x000169, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_BooleanNOR_ReturnValue_1) == 0x00016A, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_BooleanNOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_BooleanOR_ReturnValue) == 0x00016B, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, CallFunc_BooleanOR_ReturnValue_1) == 0x00016C, "Member 'ImagineCraft_C_UpdateTimeLimited::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_UpdateTimeLimited, K2Node_Select_Default) == 0x00016D, "Member 'ImagineCraft_C_UpdateTimeLimited::K2Node_Select_Default' has a wrong offset!");

// Function ImagineCraft.ImagineCraft_C.InitializeFilter
// 0x0028 (0x0028 - 0x0000)
struct ImagineCraft_C_InitializeFilter final
{
public:
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5113[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCraftableFilterImagine_ReturnValue;     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraft_C_InitializeFilter) == 0x000008, "Wrong alignment on ImagineCraft_C_InitializeFilter");
static_assert(sizeof(ImagineCraft_C_InitializeFilter) == 0x000028, "Wrong size on ImagineCraft_C_InitializeFilter");
static_assert(offsetof(ImagineCraft_C_InitializeFilter, CallFunc_GetCharacterId_ReturnValue) == 0x000000, "Member 'ImagineCraft_C_InitializeFilter::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_InitializeFilter, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'ImagineCraft_C_InitializeFilter::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_InitializeFilter, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'ImagineCraft_C_InitializeFilter::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraft_C_InitializeFilter, CallFunc_IsCraftableFilterImagine_ReturnValue) == 0x000020, "Member 'ImagineCraft_C_InitializeFilter::CallFunc_IsCraftableFilterImagine_ReturnValue' has a wrong offset!");

}

