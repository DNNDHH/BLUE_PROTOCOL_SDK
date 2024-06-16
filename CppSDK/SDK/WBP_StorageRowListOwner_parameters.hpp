#pragma once

 

// Package: WBP_StorageRowListOwner

#include "Basic.hpp"

#include "InventoryData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.OnItemClick__DelegateSignature
// 0x0098 (0x0098 - 0x0000)
struct WBP_StorageRowListOwner_C_OnItemClick__DelegateSignature final
{
public:
	struct FInventoryData                         Param_OnItemClick;                                 // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_OnItemClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_OnItemClick__DelegateSignature");
static_assert(sizeof(WBP_StorageRowListOwner_C_OnItemClick__DelegateSignature) == 0x000098, "Wrong size on WBP_StorageRowListOwner_C_OnItemClick__DelegateSignature");
static_assert(offsetof(WBP_StorageRowListOwner_C_OnItemClick__DelegateSignature, Param_OnItemClick) == 0x000000, "Member 'WBP_StorageRowListOwner_C_OnItemClick__DelegateSignature::Param_OnItemClick' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.OnItemClickRight__DelegateSignature
// 0x0098 (0x0098 - 0x0000)
struct WBP_StorageRowListOwner_C_OnItemClickRight__DelegateSignature final
{
public:
	struct FInventoryData                         NewParam;                                          // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_OnItemClickRight__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_OnItemClickRight__DelegateSignature");
static_assert(sizeof(WBP_StorageRowListOwner_C_OnItemClickRight__DelegateSignature) == 0x000098, "Wrong size on WBP_StorageRowListOwner_C_OnItemClickRight__DelegateSignature");
static_assert(offsetof(WBP_StorageRowListOwner_C_OnItemClickRight__DelegateSignature, NewParam) == 0x000000, "Member 'WBP_StorageRowListOwner_C_OnItemClickRight__DelegateSignature::NewParam' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ExecuteUbergraph_WBP_StorageRowListOwner
// 0x05C8 (0x05C8 - 0x0000)
struct WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStorageScrollKeep_ReturnValue;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7798[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_CustomEvent_SortType;                       // 0x001C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_CustomEvent_InFilter;                       // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7799[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   K2Node_CustomEvent_FilterArray_1;                  // 0x0020(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_CreateDelay;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_779A[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_CustomEvent_SortType2;                      // 0x0050(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_CustomEvent_FilterType;                     // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_779B[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   K2Node_CustomEvent_FilterArray;                    // 0x0058(0x0010)(ReferenceParm)
	bool                                          K2Node_CustomEvent_ScrollReset;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_779C[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         K2Node_CustomEvent_ItemData_1;                     // 0x0070(0x0098)(HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              K2Node_CustomEvent_UpdetaListItem_1;               // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFilterGroup                           CallFunc_Array_Get_Item;                           // 0x0110(0x0010)()
	bool                                          CallFunc_SelectsItems_bAdd;                        // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_779D[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_UniqueId;                       // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bLock;                          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_779E[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_779F[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_StorageRowListItemWrap_C*          CallFunc_Array_Get_Item_1;                         // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A0[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0158(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             CallFunc_ItemTypeToRewardItemType_Out_RewardItemType; // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A1[0x2];                                     // 0x01F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77A2[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         K2Node_CustomEvent_ItemData;                       // 0x0200(0x0098)(HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              K2Node_CustomEvent_UpdetaListItem;                 // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A3[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_StorageRowListItemWrap_C*          CallFunc_Create_ReturnValue;                       // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_1;             // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A4[0x6];                                     // 0x02BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A5[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SwitchMultipleSelection_bAdd;             // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A6[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x02D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A7[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFilterGroup                           CallFunc_EmptyFilter_ReturnValue;                  // 0x02F8(0x0010)()
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77A8[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x0310(0x0010)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77A9[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x0330(0x0118)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             CallFunc_ItemTypeToRewardItemType_Out_RewardItemType_1; // 0x0449(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x044A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77AA[0x1];                                     // 0x044B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x044C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0450(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77AB[0x4];                                     // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           CallFunc_Array_Get_Item_2;                         // 0x0458(0x0010)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77AC[0x3];                                     // 0x0469(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77AD[0x7];                                     // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists; // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77AE[0x3];                                     // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBBPPtExchangeMasterData              CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue; // 0x0488(0x0018)(NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77AF[0x3];                                     // 0x04A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x04A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x04A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x04AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77B0[0x1];                                     // 0x04AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x04AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_StorageRowListItemWrap_C*          CallFunc_Array_Get_Item_3;                         // 0x04B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x04B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x04BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x04BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77B1[0x1];                                     // 0x04BF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           CallFunc_EmptyFilter_ReturnValue_1;                // 0x04C0(0x0010)()
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue_1;                  // 0x04D0(0x0010)()
	class UWBP_StorageRowListItemWrap_C*          CallFunc_Array_Get_Item_4;                         // 0x04E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x04EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x04ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x04EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x04EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x04F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77B2[0x4];                                     // 0x04FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0500(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_CurrentOffset;          // 0x0508(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x050C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0514(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0518(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77B3[0x4];                                     // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0520(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77B4[0x4];                                     // 0x052C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_StorageRowListItemWrap_C*          K2Node_DynamicCast_AsWBP_Storage_Row_List_Item_Wrap; // 0x0530(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77B5[0x3];                                     // 0x0539(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x053C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x0540(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0544(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0545(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77B6[0x2];                                     // 0x0546(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0548(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Offset;                         // 0x054C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77B7[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists_1; // 0x0560(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77B8[0x3];                                     // 0x0561(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBBPPtExchangeMasterData              CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue_1; // 0x0564(0x0018)(NoDestructor)
	uint8                                         Pad_77B9[0x4];                                     // 0x057C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0580(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77BA[0x3];                                     // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0594(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x05A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77BB[0x3];                                     // 0x05A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x05A8(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_MaxScrollOffset_ReturnValue;              // 0x05B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x05BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x05C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner");
static_assert(sizeof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner) == 0x0005C8, "Wrong size on WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, EntryPoint) == 0x000000, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_ValidStorageScrollKeep_ReturnValue) == 0x000004, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_ValidStorageScrollKeep_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Variable) == 0x000014, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_SortType) == 0x00001C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_SortType' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_InFilter) == 0x00001D, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_InFilter' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_FilterArray_1) == 0x000020, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_FilterArray_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Loop_Counter_Variable_1) == 0x000030, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Add_IntInt_ReturnValue_2) == 0x000038, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_CreateDelay) == 0x00003C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_CreateDelay' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Length_ReturnValue_1) == 0x000040, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Length_ReturnValue_2) == 0x000044, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Array_Index_Variable_1) == 0x00004C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_SortType2) == 0x000050, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_SortType2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_FilterType) == 0x000051, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_FilterType' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_FilterArray) == 0x000058, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_FilterArray' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_ScrollReset) == 0x000068, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_ScrollReset' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Array_Index_Variable_2) == 0x00006C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_ItemData_1) == 0x000070, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_ItemData_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_UpdetaListItem_1) == 0x000108, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_UpdetaListItem_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Get_Item) == 0x000110, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_SelectsItems_bAdd) == 0x000120, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_SelectsItems_bAdd' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_UniqueId) == 0x000128, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_bLock) == 0x000138, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_bLock' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Loop_Counter_Variable_2) == 0x00013C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Array_Index_Variable_3) == 0x000140, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Get_Item_1) == 0x000148, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Less_IntInt_ReturnValue_1) == 0x000150, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_CreateInventoryData_InventoryData) == 0x000158, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_CreateInventoryData_IsSuccess) == 0x0001F0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Not_PreBool_ReturnValue) == 0x0001F1, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001F2, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Not_PreBool_ReturnValue_2) == 0x0001F3, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_ItemTypeToRewardItemType_Out_RewardItemType) == 0x0001F4, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_ItemTypeToRewardItemType_Out_RewardItemType' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001F5, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Add_IntInt_ReturnValue_3) == 0x0001F8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_ItemData) == 0x000200, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_UpdetaListItem) == 0x000298, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_UpdetaListItem' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_IsValid_ReturnValue) == 0x0002A0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Create_ReturnValue) == 0x0002A8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetPlayerController_ReturnValue) == 0x0002B0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_IsInputKeyDown_ReturnValue) == 0x0002B8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_IsInputKeyDown_ReturnValue_1) == 0x0002B9, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_IsInputKeyDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0002C0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BooleanOR_ReturnValue) == 0x0002C8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Add_ReturnValue) == 0x0002CC, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_SwitchMultipleSelection_bAdd) == 0x0002D0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_SwitchMultipleSelection_bAdd' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_MakeStruct_Margin) == 0x0002D4, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetNetworkDataCache_IsValid) == 0x0002E4, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0002E8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetStorage_ReturnValue) == 0x0002F0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_EmptyFilter_ReturnValue) == 0x0002F8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_EmptyFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetSotedIndexNum_ReturnValue) == 0x000308, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_AddFilter_ReturnValue) == 0x000310, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_AddFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Subtract_IntInt_ReturnValue) == 0x000320, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Variable_1) == 0x000324, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Array_Index_Variable_4) == 0x000328, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x000330, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Not_PreBool_ReturnValue_3) == 0x000448, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_ItemTypeToRewardItemType_Out_RewardItemType_1) == 0x000449, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_ItemTypeToRewardItemType_Out_RewardItemType_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00044A, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Add_IntInt_ReturnValue_4) == 0x00044C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Add_ReturnValue_1) == 0x000450, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Get_Item_2) == 0x000458, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Not_PreBool_ReturnValue_4) == 0x000468, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Length_ReturnValue_3) == 0x00046C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetMasterDataManager_IsValid) == 0x000470, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetMasterDataManager_ReturnValue) == 0x000478, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Loop_Counter_Variable_3) == 0x000480, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists) == 0x000484, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue) == 0x000488, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BooleanAND_ReturnValue) == 0x0004A0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Add_IntInt_ReturnValue_5) == 0x0004A4, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BooleanAND_ReturnValue_1) == 0x0004A8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BooleanAND_ReturnValue_2) == 0x0004A9, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BooleanOR_ReturnValue_1) == 0x0004AA, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_float_Variable) == 0x0004AC, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Get_Item_3) == 0x0004B0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Length_ReturnValue_4) == 0x0004B8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_IsValid_ReturnValue_1) == 0x0004BC, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Less_IntInt_ReturnValue_3) == 0x0004BD, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_bool_Variable) == 0x0004BE, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_EmptyFilter_ReturnValue_1) == 0x0004C0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_EmptyFilter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_AddFilter_ReturnValue_1) == 0x0004D0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_AddFilter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Get_Item_4) == 0x0004E0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Length_ReturnValue_5) == 0x0004E8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Less_IntInt_ReturnValue_4) == 0x0004EC, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_IsValid_ReturnValue_2) == 0x0004ED, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_Event_IsDesignTime) == 0x0004EE, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0004EF, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0004F0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Array_Length_ReturnValue_6) == 0x0004F8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000500, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_ComponentBoundEvent_CurrentOffset) == 0x000508, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_ComponentBoundEvent_CurrentOffset' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetSize_ReturnValue) == 0x00050C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BreakVector2D_X) == 0x000514, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BreakVector2D_Y) == 0x000518, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetChildAt_ReturnValue) == 0x000520, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetChildrenCount_ReturnValue) == 0x000528, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_DynamicCast_AsWBP_Storage_Row_List_Item_Wrap) == 0x000530, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_DynamicCast_AsWBP_Storage_Row_List_Item_Wrap' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_DynamicCast_bSuccess) == 0x000538, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00053C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, Temp_int_Loop_Counter_Variable_4) == 0x000540, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000544, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Less_IntInt_ReturnValue_5) == 0x000545, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Add_IntInt_ReturnValue_6) == 0x000548, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CustomEvent_Offset) == 0x00054C, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CustomEvent_Offset' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetMasterDataManager_IsValid_1) == 0x000550, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000558, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists_1) == 0x000560, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue_1) == 0x000564, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_Conv_NameToString_ReturnValue) == 0x000580, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_IsEventTermActive_ReturnValue) == 0x000590, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CreateDelegate_OutputDelegate) == 0x000594, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_BooleanAND_ReturnValue_3) == 0x0005A4, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_CreateDelegate_OutputDelegate_1) == 0x0005A8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_MaxScrollOffset_ReturnValue) == 0x0005B8, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_MaxScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, CallFunc_FClamp_ReturnValue) == 0x0005BC, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner, K2Node_Select_Default) == 0x0005C0, "Member 'WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner::K2Node_Select_Default' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ScrollVisibleUpdate
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageRowListOwner_C_ScrollVisibleUpdate final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_ScrollVisibleUpdate) == 0x000004, "Wrong alignment on WBP_StorageRowListOwner_C_ScrollVisibleUpdate");
static_assert(sizeof(WBP_StorageRowListOwner_C_ScrollVisibleUpdate) == 0x000004, "Wrong size on WBP_StorageRowListOwner_C_ScrollVisibleUpdate");
static_assert(offsetof(WBP_StorageRowListOwner_C_ScrollVisibleUpdate, Offset) == 0x000000, "Member 'WBP_StorageRowListOwner_C_ScrollVisibleUpdate::Offset' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageRowListOwner_C_BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature final
{
public:
	float                                         CurrentOffset;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_StorageRowListOwner_C_BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");
static_assert(sizeof(WBP_StorageRowListOwner_C_BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_StorageRowListOwner_C_BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");
static_assert(offsetof(WBP_StorageRowListOwner_C_BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature, CurrentOffset) == 0x000000, "Member 'WBP_StorageRowListOwner_C_BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature::CurrentOffset' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_StorageRowListOwner_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageRowListOwner_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_StorageRowListOwner_C_PreConstruct");
static_assert(sizeof(WBP_StorageRowListOwner_C_PreConstruct) == 0x000001, "Wrong size on WBP_StorageRowListOwner_C_PreConstruct");
static_assert(offsetof(WBP_StorageRowListOwner_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_StorageRowListOwner_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CustomEvent_1
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_StorageRowListOwner_C_CustomEvent_1 final
{
public:
	struct FInventoryData                         ItemData;                                          // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              UpdetaListItem;                                    // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_CustomEvent_1) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_CustomEvent_1");
static_assert(sizeof(WBP_StorageRowListOwner_C_CustomEvent_1) == 0x0000A0, "Wrong size on WBP_StorageRowListOwner_C_CustomEvent_1");
static_assert(offsetof(WBP_StorageRowListOwner_C_CustomEvent_1, ItemData) == 0x000000, "Member 'WBP_StorageRowListOwner_C_CustomEvent_1::ItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CustomEvent_1, UpdetaListItem) == 0x000098, "Member 'WBP_StorageRowListOwner_C_CustomEvent_1::UpdetaListItem' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.LockIconUpdate
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageRowListOwner_C_LockIconUpdate final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bLock;                                             // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageRowListOwner_C_LockIconUpdate) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_LockIconUpdate");
static_assert(sizeof(WBP_StorageRowListOwner_C_LockIconUpdate) == 0x000018, "Wrong size on WBP_StorageRowListOwner_C_LockIconUpdate");
static_assert(offsetof(WBP_StorageRowListOwner_C_LockIconUpdate, UniqueId) == 0x000000, "Member 'WBP_StorageRowListOwner_C_LockIconUpdate::UniqueId' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_LockIconUpdate, bLock) == 0x000010, "Member 'WBP_StorageRowListOwner_C_LockIconUpdate::bLock' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CustomEvent_0
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_StorageRowListOwner_C_CustomEvent_0 final
{
public:
	struct FInventoryData                         ItemData;                                          // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              UpdetaListItem;                                    // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_CustomEvent_0");
static_assert(sizeof(WBP_StorageRowListOwner_C_CustomEvent_0) == 0x0000A0, "Wrong size on WBP_StorageRowListOwner_C_CustomEvent_0");
static_assert(offsetof(WBP_StorageRowListOwner_C_CustomEvent_0, ItemData) == 0x000000, "Member 'WBP_StorageRowListOwner_C_CustomEvent_0::ItemData' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CustomEvent_0, UpdetaListItem) == 0x000098, "Member 'WBP_StorageRowListOwner_C_CustomEvent_0::UpdetaListItem' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.UpdetaItemList
// 0x0020 (0x0020 - 0x0000)
struct WBP_StorageRowListOwner_C_UpdetaItemList final
{
public:
	ESBItemSortType                               SortType2;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Param_FilterType;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77BC[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   FilterArray;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ScrollReset;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageRowListOwner_C_UpdetaItemList) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_UpdetaItemList");
static_assert(sizeof(WBP_StorageRowListOwner_C_UpdetaItemList) == 0x000020, "Wrong size on WBP_StorageRowListOwner_C_UpdetaItemList");
static_assert(offsetof(WBP_StorageRowListOwner_C_UpdetaItemList, SortType2) == 0x000000, "Member 'WBP_StorageRowListOwner_C_UpdetaItemList::SortType2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_UpdetaItemList, Param_FilterType) == 0x000001, "Member 'WBP_StorageRowListOwner_C_UpdetaItemList::Param_FilterType' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_UpdetaItemList, FilterArray) == 0x000008, "Member 'WBP_StorageRowListOwner_C_UpdetaItemList::FilterArray' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_UpdetaItemList, ScrollReset) == 0x000018, "Member 'WBP_StorageRowListOwner_C_UpdetaItemList::ScrollReset' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.AddStorageListItem
// 0x0004 (0x0004 - 0x0000)
struct WBP_StorageRowListOwner_C_AddStorageListItem final
{
public:
	float                                         CreateDelay;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_AddStorageListItem) == 0x000004, "Wrong alignment on WBP_StorageRowListOwner_C_AddStorageListItem");
static_assert(sizeof(WBP_StorageRowListOwner_C_AddStorageListItem) == 0x000004, "Wrong size on WBP_StorageRowListOwner_C_AddStorageListItem");
static_assert(offsetof(WBP_StorageRowListOwner_C_AddStorageListItem, CreateDelay) == 0x000000, "Member 'WBP_StorageRowListOwner_C_AddStorageListItem::CreateDelay' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.StorageItemGet
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageRowListOwner_C_StorageItemGet final
{
public:
	ESBItemSortType                               Param_SortType;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               InFilter;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77BD[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   FilterArray;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_StorageRowListOwner_C_StorageItemGet) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_StorageItemGet");
static_assert(sizeof(WBP_StorageRowListOwner_C_StorageItemGet) == 0x000018, "Wrong size on WBP_StorageRowListOwner_C_StorageItemGet");
static_assert(offsetof(WBP_StorageRowListOwner_C_StorageItemGet, Param_SortType) == 0x000000, "Member 'WBP_StorageRowListOwner_C_StorageItemGet::Param_SortType' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_StorageItemGet, InFilter) == 0x000001, "Member 'WBP_StorageRowListOwner_C_StorageItemGet::InFilter' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_StorageItemGet, FilterArray) == 0x000008, "Member 'WBP_StorageRowListOwner_C_StorageItemGet::FilterArray' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SetScrollBoxSizeX
// 0x0028 (0x0028 - 0x0000)
struct WBP_StorageRowListOwner_C_SetScrollBoxSizeX final
{
public:
	float                                         SizeX;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77BE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_SetScrollBoxSizeX) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_SetScrollBoxSizeX");
static_assert(sizeof(WBP_StorageRowListOwner_C_SetScrollBoxSizeX) == 0x000028, "Wrong size on WBP_StorageRowListOwner_C_SetScrollBoxSizeX");
static_assert(offsetof(WBP_StorageRowListOwner_C_SetScrollBoxSizeX, SizeX) == 0x000000, "Member 'WBP_StorageRowListOwner_C_SetScrollBoxSizeX::SizeX' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SetScrollBoxSizeX, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_StorageRowListOwner_C_SetScrollBoxSizeX::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SetScrollBoxSizeX, CallFunc_GetSize_ReturnValue) == 0x000010, "Member 'WBP_StorageRowListOwner_C_SetScrollBoxSizeX::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SetScrollBoxSizeX, CallFunc_BreakVector2D_X) == 0x000018, "Member 'WBP_StorageRowListOwner_C_SetScrollBoxSizeX::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SetScrollBoxSizeX, CallFunc_BreakVector2D_Y) == 0x00001C, "Member 'WBP_StorageRowListOwner_C_SetScrollBoxSizeX::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SetScrollBoxSizeX, CallFunc_MakeVector2D_ReturnValue) == 0x000020, "Member 'WBP_StorageRowListOwner_C_SetScrollBoxSizeX::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CreateLists
// 0x0058 (0x0058 - 0x0000)
struct WBP_StorageRowListOwner_C_CreateLists final
{
public:
	int32                                         OverCreateNum;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ImmediatelyCreateNum;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CreateTime;                                        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CreateNum;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77BF[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77C0[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_CreateLists) == 0x000004, "Wrong alignment on WBP_StorageRowListOwner_C_CreateLists");
static_assert(sizeof(WBP_StorageRowListOwner_C_CreateLists) == 0x000058, "Wrong size on WBP_StorageRowListOwner_C_CreateLists");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, OverCreateNum) == 0x000000, "Member 'WBP_StorageRowListOwner_C_CreateLists::OverCreateNum' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, ImmediatelyCreateNum) == 0x000004, "Member 'WBP_StorageRowListOwner_C_CreateLists::ImmediatelyCreateNum' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CreateTime) == 0x000008, "Member 'WBP_StorageRowListOwner_C_CreateLists::CreateTime' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CreateNum) == 0x00000C, "Member 'WBP_StorageRowListOwner_C_CreateLists::CreateNum' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, Temp_int_Variable) == 0x000010, "Member 'WBP_StorageRowListOwner_C_CreateLists::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, Temp_int_Variable_1) == 0x000014, "Member 'WBP_StorageRowListOwner_C_CreateLists::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000028, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Add_FloatFloat_ReturnValue) == 0x00002C, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000030, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000034, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000038, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Clamp_ReturnValue) == 0x00003C, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000040, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000048, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00004C, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_CreateLists, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000054, "Member 'WBP_StorageRowListOwner_C_CreateLists::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SwitchMultipleSelection
// 0x0003 (0x0003 - 0x0000)
struct WBP_StorageRowListOwner_C_SwitchMultipleSelection final
{
public:
	bool                                          bAdd;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectsItems_bAdd;                        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageRowListOwner_C_SwitchMultipleSelection) == 0x000001, "Wrong alignment on WBP_StorageRowListOwner_C_SwitchMultipleSelection");
static_assert(sizeof(WBP_StorageRowListOwner_C_SwitchMultipleSelection) == 0x000003, "Wrong size on WBP_StorageRowListOwner_C_SwitchMultipleSelection");
static_assert(offsetof(WBP_StorageRowListOwner_C_SwitchMultipleSelection, bAdd) == 0x000000, "Member 'WBP_StorageRowListOwner_C_SwitchMultipleSelection::bAdd' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SwitchMultipleSelection, CallFunc_SelectsItems_bAdd) == 0x000001, "Member 'WBP_StorageRowListOwner_C_SwitchMultipleSelection::CallFunc_SelectsItems_bAdd' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SwitchMultipleSelection, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'WBP_StorageRowListOwner_C_SwitchMultipleSelection::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SelectsItems
// 0x0018 (0x0018 - 0x0000)
struct WBP_StorageRowListOwner_C_SelectsItems final
{
public:
	const class UWBP_StorageRowListItem_C*        InputPin;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAdd;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77C1[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StorageRowListOwner_C_SelectsItems) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_SelectsItems");
static_assert(sizeof(WBP_StorageRowListOwner_C_SelectsItems) == 0x000018, "Wrong size on WBP_StorageRowListOwner_C_SelectsItems");
static_assert(offsetof(WBP_StorageRowListOwner_C_SelectsItems, InputPin) == 0x000000, "Member 'WBP_StorageRowListOwner_C_SelectsItems::InputPin' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SelectsItems, bAdd) == 0x000008, "Member 'WBP_StorageRowListOwner_C_SelectsItems::bAdd' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SelectsItems, CallFunc_Array_RemoveItem_ReturnValue) == 0x000009, "Member 'WBP_StorageRowListOwner_C_SelectsItems::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SelectsItems, CallFunc_Array_Add_ReturnValue) == 0x00000C, "Member 'WBP_StorageRowListOwner_C_SelectsItems::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SelectsItems, CallFunc_Array_Find_ReturnValue) == 0x000010, "Member 'WBP_StorageRowListOwner_C_SelectsItems::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_SelectsItems, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000014, "Member 'WBP_StorageRowListOwner_C_SelectsItems::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.MaxScrollOffset
// 0x0030 (0x0030 - 0x0000)
struct WBP_StorageRowListOwner_C_MaxScrollOffset final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77C2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StorageRowListOwner_C_MaxScrollOffset) == 0x000008, "Wrong alignment on WBP_StorageRowListOwner_C_MaxScrollOffset");
static_assert(sizeof(WBP_StorageRowListOwner_C_MaxScrollOffset) == 0x000030, "Wrong size on WBP_StorageRowListOwner_C_MaxScrollOffset");
static_assert(offsetof(WBP_StorageRowListOwner_C_MaxScrollOffset, ReturnValue) == 0x000000, "Member 'WBP_StorageRowListOwner_C_MaxScrollOffset::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_MaxScrollOffset, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_StorageRowListOwner_C_MaxScrollOffset::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_MaxScrollOffset, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_StorageRowListOwner_C_MaxScrollOffset::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_MaxScrollOffset, CallFunc_GetSize_ReturnValue) == 0x000014, "Member 'WBP_StorageRowListOwner_C_MaxScrollOffset::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_MaxScrollOffset, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00001C, "Member 'WBP_StorageRowListOwner_C_MaxScrollOffset::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_MaxScrollOffset, CallFunc_BreakVector2D_X) == 0x000020, "Member 'WBP_StorageRowListOwner_C_MaxScrollOffset::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_MaxScrollOffset, CallFunc_BreakVector2D_Y) == 0x000024, "Member 'WBP_StorageRowListOwner_C_MaxScrollOffset::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_MaxScrollOffset, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000028, "Member 'WBP_StorageRowListOwner_C_MaxScrollOffset::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StorageRowListOwner_C_MaxScrollOffset, CallFunc_FClamp_ReturnValue) == 0x00002C, "Member 'WBP_StorageRowListOwner_C_MaxScrollOffset::CallFunc_FClamp_ReturnValue' has a wrong offset!");

}

