#pragma once

 

// Package: WBP_InventoryPassiveImagineDescription

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "DescripionButtonType_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryPassiveImagineDescription_C_OnButtonClicked__DelegateSignature final
{
public:
	EDescripionButtonType                         ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryPassiveImagineDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on WBP_InventoryPassiveImagineDescription_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_InventoryPassiveImagineDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on WBP_InventoryPassiveImagineDescription_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_OnButtonClicked__DelegateSignature, ButtonType) == 0x000000, "Member 'WBP_InventoryPassiveImagineDescription_C_OnButtonClicked__DelegateSignature::ButtonType' has a wrong offset!");

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.ExecuteUbergraph_WBP_InventoryPassiveImagineDescription
// 0x06F0 (0x06F0 - 0x0000)
struct WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ImagineID;                      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7683[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0028(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7684[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       K2Node_CustomEvent_MasterImagine;                  // 0x0058(0x00B0)()
	struct FInventoryData                         K2Node_CustomEvent_InventoryItemData;              // 0x0108(0x0098)(HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bStorageMode;                   // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bBagStorageViewMode;            // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7685[0x2];                                     // 0x01A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetImagineSlotNumber_Result;              // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7686[0x5];                                     // 0x01AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7687[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue;  // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue;    // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_1;            // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDescripionButtonType                         Temp_byte_Variable_2;                              // 0x01C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         Temp_byte_Variable_3;                              // 0x01C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7688[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               CallFunc_Array_Get_Item;                           // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7689[0x2];                                     // 0x01DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_768A[0x2];                                     // 0x01E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_768B[0x5];                                     // 0x01F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x01F8(0x0118)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDescripionButtonType                         K2Node_Select_Default_1;                           // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_768C[0x6];                                     // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_2;                 // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_768D[0x2];                                     // 0x0322(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0329(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_768E[0x6];                                     // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonImagineAbilityEfficacyDescPopup_C* CallFunc_Create_ReturnValue;                       // 0x0338(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_768F[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7690[0x6];                                     // 0x0352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_2;                   // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7691[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_2;               // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7692[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7693[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0388(0x00B0)()
	bool                                          Temp_bool_Variable_6;                              // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_4;                           // 0x0439(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x043A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x043B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x043C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x043D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x043E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7694[0x1];                                     // 0x043F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      CallFunc_CalcImagineParam_ReturnValue;             // 0x0448(0x006C)(NoDestructor)
	uint8                                         Pad_7695[0x4];                                     // 0x04B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x04B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x04C8(0x0018)()
	bool                                          Temp_bool_Variable_7;                              // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x04E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7696[0x6];                                     // 0x04E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineView_C*                         CallFunc_Create_ReturnValue_1;                     // 0x04E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x04F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x04F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7697[0x5];                                     // 0x04F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_3;                 // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0501(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7698[0x6];                                     // 0x0502(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0508(0x0118)(ConstParm)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0620(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7699[0x4];                                     // 0x0624(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0628(0x0018)()
	bool                                          CallFunc_Get_Imagine_Park_Data_Result;             // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_769A[0x7];                                     // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Imagine_Park_Data_ParkName;           // 0x0648(0x0018)()
	class FText                                   CallFunc_Get_Imagine_Park_Data_Effect_Value;       // 0x0660(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0678(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_769B[0x7];                                     // 0x0691(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x06A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_769C[0x3];                                     // 0x06A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x06AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x06B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_769D[0x2];                                     // 0x06B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x06B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x06B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_769E[0x7];                                     // 0x06B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x06C0(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Get_Item_1;                         // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_7;                           // 0x06D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_8;                           // 0x06D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_769F[0x5];                                     // 0x06D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x06D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USizeBox*>                       K2Node_MakeArray_Array_1;                          // 0x06E0(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription) == 0x000008, "Wrong alignment on WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription");
static_assert(sizeof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription) == 0x0006F0, "Wrong size on WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, EntryPoint) == 0x000000, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_bool_Variable) == 0x000014, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x000015, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_bool_Variable_1) == 0x000016, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_byte_Variable) == 0x000017, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_byte_Variable_1) == 0x000018, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue) == 0x000019, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00001A, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_bool_Variable_2) == 0x00001B, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_CustomEvent_ImagineID) == 0x000020, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_CustomEvent_ImagineID' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000028, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000050, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000051, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_CustomEvent_MasterImagine) == 0x000058, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_CustomEvent_MasterImagine' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_CustomEvent_InventoryItemData) == 0x000108, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_CustomEvent_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_CustomEvent_bStorageMode) == 0x0001A0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_CustomEvent_bStorageMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_CustomEvent_bBagStorageViewMode) == 0x0001A1, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_CustomEvent_bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetImagineSlotNumber_Result) == 0x0001A4, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetImagineSlotNumber_Result' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001A8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0001A9, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_bool_Variable_3) == 0x0001AA, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetStorage_ReturnValue) == 0x0001B0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_IsEquipmentItem_ReturnValue) == 0x0001B8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetCapacity_ReturnValue) == 0x0001BC, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Not_PreBool_ReturnValue) == 0x0001C0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_isInventoryItemLockedSimple_ReturnValue) == 0x0001C1, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_isInventoryItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_isStorageItemLockedSimple_ReturnValue) == 0x0001C2, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_isStorageItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_IsEquipmentItem_ReturnValue_1) == 0x0001C3, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_IsEquipmentItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001C4, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Less_IntInt_ReturnValue) == 0x0001C5, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_byte_Variable_2) == 0x0001C6, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_byte_Variable_3) == 0x0001C7, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_int_Array_Index_Variable) == 0x0001C8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Array_Get_Item) == 0x0001D0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_bool_Variable_4) == 0x0001D8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0001D9, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_int_Variable) == 0x0001DC, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Not_PreBool_ReturnValue_2) == 0x0001E0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_Select_Default) == 0x0001E1, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_int_Variable_1) == 0x0001E4, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetStorage_ReturnValue_1) == 0x0001E8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001F0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_IsValid_ReturnValue) == 0x0001F1, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0001F2, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0001F8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Not_PreBool_ReturnValue_3) == 0x000310, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_Select_Default_1) == 0x000311, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetStorage_ReturnValue_2) == 0x000318, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetStorage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_bool_Variable_5) == 0x000320, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_IsItemLock_ReturnValue) == 0x000321, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_Select_Default_2) == 0x000324, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_Select_Default_3) == 0x000328, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000329, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetOwningPlayer_ReturnValue) == 0x000330, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Create_ReturnValue) == 0x000338, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetUIManager_IsValid) == 0x000340, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetUIManager_ReturnValue) == 0x000348, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000350, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetUIManager_IsValid_1) == 0x000351, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetUIManager_ReturnValue_1) == 0x000358, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetUIManager_IsValid_2) == 0x000360, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetUIManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetUIManager_ReturnValue_2) == 0x000368, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetUIManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetMasterDataManager_IsValid) == 0x000370, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetMasterDataManager_ReturnValue) == 0x000378, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_FindMasterImagineData_IsExists) == 0x000380, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_FindMasterImagineData_ReturnValue) == 0x000388, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_bool_Variable_6) == 0x000438, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_Select_Default_4) == 0x000439, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Not_PreBool_ReturnValue_4) == 0x00043A, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_BooleanAND_ReturnValue) == 0x00043B, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_BooleanAND_ReturnValue_1) == 0x00043C, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Not_PreBool_ReturnValue_5) == 0x00043D, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetNetworkDataCache_IsValid) == 0x00043E, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000440, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_CalcImagineParam_ReturnValue) == 0x000448, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_CalcImagineParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetMasterImagineText_ReturnValue) == 0x0004B8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Conv_StringToText_ReturnValue) == 0x0004C8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_bool_Variable_7) == 0x0004E0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x0004E1, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Create_ReturnValue_1) == 0x0004E8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_byte_Variable_4) == 0x0004F0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_byte_Variable_5) == 0x0004F1, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_bool_Variable_8) == 0x0004F2, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetStorage_ReturnValue_3) == 0x0004F8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetStorage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_Select_Default_5) == 0x000500, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000501, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000508, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_GetItemLevel_ReturnValue) == 0x000620, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Conv_IntToText_ReturnValue) == 0x000628, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Get_Imagine_Park_Data_Result) == 0x000640, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Get_Imagine_Park_Data_Result' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Get_Imagine_Park_Data_ParkName) == 0x000648, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Get_Imagine_Park_Data_ParkName' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Get_Imagine_Park_Data_Effect_Value) == 0x000660, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Get_Imagine_Park_Data_Effect_Value' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000678, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_Select_Default_6) == 0x000690, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_object_Variable) == 0x000698, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_DynamicCast_AsTexture_2D) == 0x0006A0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_DynamicCast_bSuccess) == 0x0006A8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, Temp_int_Loop_Counter_Variable) == 0x0006AC, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_IsUsedItem_bUse) == 0x0006B0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Less_IntInt_ReturnValue_1) == 0x0006B1, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Add_IntInt_ReturnValue) == 0x0006B4, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x0006B8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_MakeArray_Array) == 0x0006C0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, CallFunc_Array_Get_Item_1) == 0x0006D0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_Select_Default_7) == 0x0006D1, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_Select_Default_8) == 0x0006D2, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_CustomEvent_Loaded) == 0x0006D8, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription, K2Node_MakeArray_Array_1) == 0x0006E0, "Member 'WBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetItemData
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InventoryPassiveImagineDescription_C_SetItemData final
{
public:
	struct FInventoryData                         Param_InventoryItemData;                           // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Param_bStorageMode;                                // 0x0098(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bBagStorageViewMode;                         // 0x0099(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryPassiveImagineDescription_C_SetItemData) == 0x000008, "Wrong alignment on WBP_InventoryPassiveImagineDescription_C_SetItemData");
static_assert(sizeof(WBP_InventoryPassiveImagineDescription_C_SetItemData) == 0x0000A0, "Wrong size on WBP_InventoryPassiveImagineDescription_C_SetItemData");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetItemData, Param_InventoryItemData) == 0x000000, "Member 'WBP_InventoryPassiveImagineDescription_C_SetItemData::Param_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetItemData, Param_bStorageMode) == 0x000098, "Member 'WBP_InventoryPassiveImagineDescription_C_SetItemData::Param_bStorageMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetItemData, Param_bBagStorageViewMode) == 0x000099, "Member 'WBP_InventoryPassiveImagineDescription_C_SetItemData::Param_bBagStorageViewMode' has a wrong offset!");

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SelectKiraSwitcher
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_InventoryPassiveImagineDescription_C_SelectKiraSwitcher final
{
public:
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_InventoryPassiveImagineDescription_C_SelectKiraSwitcher) == 0x000008, "Wrong alignment on WBP_InventoryPassiveImagineDescription_C_SelectKiraSwitcher");
static_assert(sizeof(WBP_InventoryPassiveImagineDescription_C_SelectKiraSwitcher) == 0x0000B0, "Wrong size on WBP_InventoryPassiveImagineDescription_C_SelectKiraSwitcher");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SelectKiraSwitcher, MasterImagine) == 0x000000, "Member 'WBP_InventoryPassiveImagineDescription_C_SelectKiraSwitcher::MasterImagine' has a wrong offset!");

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.RequestLoad
// 0x0004 (0x0004 - 0x0000)
struct WBP_InventoryPassiveImagineDescription_C_RequestLoad final
{
public:
	int32                                         ImagineId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryPassiveImagineDescription_C_RequestLoad) == 0x000004, "Wrong alignment on WBP_InventoryPassiveImagineDescription_C_RequestLoad");
static_assert(sizeof(WBP_InventoryPassiveImagineDescription_C_RequestLoad) == 0x000004, "Wrong size on WBP_InventoryPassiveImagineDescription_C_RequestLoad");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_RequestLoad, ImagineId) == 0x000000, "Member 'WBP_InventoryPassiveImagineDescription_C_RequestLoad::ImagineId' has a wrong offset!");

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26
// 0x0008 (0x0008 - 0x0000)
struct WBP_InventoryPassiveImagineDescription_C_OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryPassiveImagineDescription_C_OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26) == 0x000008, "Wrong alignment on WBP_InventoryPassiveImagineDescription_C_OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26");
static_assert(sizeof(WBP_InventoryPassiveImagineDescription_C_OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26) == 0x000008, "Wrong size on WBP_InventoryPassiveImagineDescription_C_OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26, Loaded) == 0x000000, "Member 'WBP_InventoryPassiveImagineDescription_C_OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26::Loaded' has a wrong offset!");

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetImagineParam
// 0x0118 (0x0118 - 0x0000)
struct WBP_InventoryPassiveImagineDescription_C_SetImagineParam final
{
public:
	struct FImagineParameter                      ImagineParam;                                      // 0x0000(0x006C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_76A0[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0070(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x00A0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x00B8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x00D0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x00E8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_6;             // 0x0100(0x0018)()
};
static_assert(alignof(WBP_InventoryPassiveImagineDescription_C_SetImagineParam) == 0x000008, "Wrong alignment on WBP_InventoryPassiveImagineDescription_C_SetImagineParam");
static_assert(sizeof(WBP_InventoryPassiveImagineDescription_C_SetImagineParam) == 0x000118, "Wrong size on WBP_InventoryPassiveImagineDescription_C_SetImagineParam");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetImagineParam, ImagineParam) == 0x000000, "Member 'WBP_InventoryPassiveImagineDescription_C_SetImagineParam::ImagineParam' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue) == 0x000070, "Member 'WBP_InventoryPassiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000088, "Member 'WBP_InventoryPassiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0000A0, "Member 'WBP_InventoryPassiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0000B8, "Member 'WBP_InventoryPassiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_4) == 0x0000D0, "Member 'WBP_InventoryPassiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_5) == 0x0000E8, "Member 'WBP_InventoryPassiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_6) == 0x000100, "Member 'WBP_InventoryPassiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_6' has a wrong offset!");

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Set Level And Exp
// 0x01A0 (0x01A0 - 0x0000)
struct WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp final
{
public:
	struct FSBMasterImagine                       MasterData;                                        // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Exp;                                               // 0x00B0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpLevel;                                          // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpTotal;                                          // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76A1[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       Master;                                            // 0x00C0(0x00B0)(Edit, BlueprintVisible)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0170(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0188(0x0018)()
};
static_assert(alignof(WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp) == 0x000008, "Wrong alignment on WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp");
static_assert(sizeof(WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp) == 0x0001A0, "Wrong size on WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp, MasterData) == 0x000000, "Member 'WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp::MasterData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp, Exp) == 0x0000B0, "Member 'WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp::Exp' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp, ExpLevel) == 0x0000B4, "Member 'WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp::ExpLevel' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp, ExpTotal) == 0x0000B8, "Member 'WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp::ExpTotal' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp, Master) == 0x0000C0, "Member 'WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp::Master' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp, CallFunc_Conv_IntToText_ReturnValue) == 0x000170, "Member 'WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000188, "Member 'WBP_InventoryPassiveImagineDescription_C_Set_Level_And_Exp::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetSwitcher
// 0x0004 (0x0004 - 0x0000)
struct WBP_InventoryPassiveImagineDescription_C_SetSwitcher final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryPassiveImagineDescription_C_SetSwitcher) == 0x000004, "Wrong alignment on WBP_InventoryPassiveImagineDescription_C_SetSwitcher");
static_assert(sizeof(WBP_InventoryPassiveImagineDescription_C_SetSwitcher) == 0x000004, "Wrong size on WBP_InventoryPassiveImagineDescription_C_SetSwitcher");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_SetSwitcher, Param_Index) == 0x000000, "Member 'WBP_InventoryPassiveImagineDescription_C_SetSwitcher::Param_Index' has a wrong offset!");

// Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.GetAbilityDescToolTipWidget
// 0x0018 (0x0018 - 0x0000)
struct WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76A2[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonToolTip_AbilityPerk_C*           CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget) == 0x000008, "Wrong alignment on WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget");
static_assert(sizeof(WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget) == 0x000018, "Wrong size on WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget, ReturnValue) == 0x000000, "Member 'WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget, CallFunc_Create_ReturnValue) == 0x000010, "Member 'WBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

}

