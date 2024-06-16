#pragma once

 

// Package: WBP_InventoryActiveImagineDescription

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "DescripionButtonType_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryActiveImagineDescription_C_OnButtonClicked__DelegateSignature final
{
public:
	EDescripionButtonType                         Event;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryActiveImagineDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on WBP_InventoryActiveImagineDescription_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_InventoryActiveImagineDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on WBP_InventoryActiveImagineDescription_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_OnButtonClicked__DelegateSignature, Event) == 0x000000, "Member 'WBP_InventoryActiveImagineDescription_C_OnButtonClicked__DelegateSignature::Event' has a wrong offset!");

// Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.ExecuteUbergraph_WBP_InventoryActiveImagineDescription
// 0x0538 (0x0538 - 0x0000)
struct WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDescripionButtonType                         Temp_byte_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         Temp_byte_Variable_1;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7708[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7709[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_770A[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_770B[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         K2Node_CustomEvent_InventoryItemData;              // 0x0030(0x0098)(HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bStorageMode;                   // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bBagStorageViewMode;            // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_770C[0x5];                                     // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue;    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue;  // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x00DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_1;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_770D[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x00E8(0x00B0)()
	bool                                          Temp_bool_Variable_4;                              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x019B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_770E[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_770F[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7710[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7711[0x5];                                     // 0x01C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x01C8(0x0118)(ConstParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7712[0x3];                                     // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x02E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7713[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBImagineInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x02F0(0x0048)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7714[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0340(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0350(0x0018)()
	class FString                                 CallFunc_GetImagineArtsTypeName_OutTypeName;       // 0x0368(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0378(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0388(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x03A0(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x03B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7715[0x2];                                     // 0x03BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_3;                           // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         K2Node_Select_Default_4;                           // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7716[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_2;                 // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x03D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7717[0x5];                                     // 0x03D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7718[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonImagineAbilityEfficacyDescPopup_C* CallFunc_Create_ReturnValue;                       // 0x03F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7719[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_3;                 // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0409(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_771A[0x6];                                     // 0x040A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0410(0x0118)(ConstParm)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_771B[0x7];                                     // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription) == 0x000008, "Wrong alignment on WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription");
static_assert(sizeof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription) == 0x000538, "Wrong size on WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, EntryPoint) == 0x000000, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_int_Variable) == 0x000004, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_int_Variable_1) == 0x000008, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_bool_Variable) == 0x00000C, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_byte_Variable) == 0x00000D, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_byte_Variable_1) == 0x00000E, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_bool_Variable_1) == 0x00000F, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_bool_Variable_2) == 0x000010, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_int_Variable_2) == 0x000014, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_int_Variable_3) == 0x000018, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue) == 0x00001C, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetStackBNum_ReturnValue) == 0x000020, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_bool_Variable_3) == 0x000025, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, K2Node_Select_Default) == 0x000028, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, K2Node_CustomEvent_InventoryItemData) == 0x000030, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::K2Node_CustomEvent_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, K2Node_CustomEvent_bStorageMode) == 0x0000C8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::K2Node_CustomEvent_bStorageMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, K2Node_CustomEvent_bBagStorageViewMode) == 0x0000C9, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::K2Node_CustomEvent_bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetMasterDataManager_IsValid) == 0x0000CA, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000D8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_isStorageItemLockedSimple_ReturnValue) == 0x0000D9, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_isStorageItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_IsEquipmentItem_ReturnValue) == 0x0000DA, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_isInventoryItemLockedSimple_ReturnValue) == 0x0000DB, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_isInventoryItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Not_PreBool_ReturnValue) == 0x0000DC, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_BooleanAND_ReturnValue) == 0x0000DD, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000DE, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0000DF, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_IsEquipmentItem_ReturnValue_1) == 0x0000E0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_IsEquipmentItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x0000E1, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000E2, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_FindMasterImagineData_IsExists) == 0x0000E3, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_FindMasterImagineData_ReturnValue) == 0x0000E8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_bool_Variable_4) == 0x000198, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_bool_Variable_5) == 0x000199, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00019A, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, K2Node_Select_Default_1) == 0x00019B, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetStorage_ReturnValue) == 0x0001A0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Not_PreBool_ReturnValue_2) == 0x0001A8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetCapacity_ReturnValue) == 0x0001AC, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_BooleanAND_ReturnValue_1) == 0x0001B0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Less_IntInt_ReturnValue) == 0x0001B1, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0001B2, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Not_PreBool_ReturnValue_3) == 0x0001B3, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, K2Node_Select_Default_2) == 0x0001B4, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetStorage_ReturnValue_1) == 0x0001B8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_IsValid_ReturnValue) == 0x0001C0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_IsUsedItem_bUse) == 0x0001C1, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0001C2, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0001C8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002E0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Conv_StringToName_ReturnValue) == 0x0002E4, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetDataTableRowFromName_OutRow) == 0x0002F0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000338, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000340, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Conv_StringToText_ReturnValue) == 0x000350, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetImagineArtsTypeName_OutTypeName) == 0x000368, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetImagineArtsTypeName_OutTypeName' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetMasterImagineText_ReturnValue) == 0x000378, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000388, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0003A0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Not_PreBool_ReturnValue_4) == 0x0003B8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_BooleanAND_ReturnValue_2) == 0x0003B9, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, K2Node_Select_Default_3) == 0x0003BC, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, K2Node_Select_Default_4) == 0x0003C0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetStorage_ReturnValue_2) == 0x0003C8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetStorage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_IsItemLock_ReturnValue) == 0x0003D0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, K2Node_Select_Default_5) == 0x0003D1, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, Temp_bool_Variable_6) == 0x0003D2, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetOwningPlayer_ReturnValue) == 0x0003D8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetUIManager_IsValid) == 0x0003E0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetUIManager_ReturnValue) == 0x0003E8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Create_ReturnValue) == 0x0003F0, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x0003F8, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetStorage_ReturnValue_3) == 0x000400, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetStorage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, K2Node_Select_Default_6) == 0x000408, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000409, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000410, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetUIManager_IsValid_1) == 0x000528, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription, CallFunc_GetUIManager_ReturnValue_1) == 0x000530, "Member 'WBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");

// Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetItemData
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InventoryActiveImagineDescription_C_SetItemData final
{
public:
	struct FInventoryData                         Param_InventoryItemData;                           // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Param_bStorageMode;                                // 0x0098(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bBagStorageViewMode;                         // 0x0099(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryActiveImagineDescription_C_SetItemData) == 0x000008, "Wrong alignment on WBP_InventoryActiveImagineDescription_C_SetItemData");
static_assert(sizeof(WBP_InventoryActiveImagineDescription_C_SetItemData) == 0x0000A0, "Wrong size on WBP_InventoryActiveImagineDescription_C_SetItemData");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetItemData, Param_InventoryItemData) == 0x000000, "Member 'WBP_InventoryActiveImagineDescription_C_SetItemData::Param_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetItemData, Param_bStorageMode) == 0x000098, "Member 'WBP_InventoryActiveImagineDescription_C_SetItemData::Param_bStorageMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetItemData, Param_bBagStorageViewMode) == 0x000099, "Member 'WBP_InventoryActiveImagineDescription_C_SetItemData::Param_bBagStorageViewMode' has a wrong offset!");

// Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetImagineParam
// 0x0150 (0x0150 - 0x0000)
struct WBP_InventoryActiveImagineDescription_C_SetImagineParam final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_771C[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      CallFunc_CalcImagineParam_ReturnValue;             // 0x0020(0x006C)(NoDestructor)
	uint8                                         Pad_771D[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0090(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00A8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x00C0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x00D8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x00F0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_5;             // 0x0108(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_6;             // 0x0120(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_7;             // 0x0138(0x0018)()
};
static_assert(alignof(WBP_InventoryActiveImagineDescription_C_SetImagineParam) == 0x000008, "Wrong alignment on WBP_InventoryActiveImagineDescription_C_SetImagineParam");
static_assert(sizeof(WBP_InventoryActiveImagineDescription_C_SetImagineParam) == 0x000150, "Wrong size on WBP_InventoryActiveImagineDescription_C_SetImagineParam");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, InUniqueId) == 0x000000, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::InUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_GetNetworkDataCache_IsValid) == 0x000011, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000018, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_CalcImagineParam_ReturnValue) == 0x000020, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_CalcImagineParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue) == 0x000090, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000A8, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0000C0, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0000D8, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_4) == 0x0000F0, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_5) == 0x000108, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_6) == 0x000120, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetImagineParam, CallFunc_Conv_IntToText_ReturnValue_7) == 0x000138, "Member 'WBP_InventoryActiveImagineDescription_C_SetImagineParam::CallFunc_Conv_IntToText_ReturnValue_7' has a wrong offset!");

// Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetLeveldata
// 0x0198 (0x0198 - 0x0000)
struct WBP_InventoryActiveImagineDescription_C_SetLeveldata final
{
public:
	struct FSBMasterImagine                       MasterData;                                        // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Level;                                             // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpTotal;                                          // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       Master;                                            // 0x00B8(0x00B0)(Edit, BlueprintVisible)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0168(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0180(0x0018)()
};
static_assert(alignof(WBP_InventoryActiveImagineDescription_C_SetLeveldata) == 0x000008, "Wrong alignment on WBP_InventoryActiveImagineDescription_C_SetLeveldata");
static_assert(sizeof(WBP_InventoryActiveImagineDescription_C_SetLeveldata) == 0x000198, "Wrong size on WBP_InventoryActiveImagineDescription_C_SetLeveldata");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetLeveldata, MasterData) == 0x000000, "Member 'WBP_InventoryActiveImagineDescription_C_SetLeveldata::MasterData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetLeveldata, Level) == 0x0000B0, "Member 'WBP_InventoryActiveImagineDescription_C_SetLeveldata::Level' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetLeveldata, ExpTotal) == 0x0000B4, "Member 'WBP_InventoryActiveImagineDescription_C_SetLeveldata::ExpTotal' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetLeveldata, Master) == 0x0000B8, "Member 'WBP_InventoryActiveImagineDescription_C_SetLeveldata::Master' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetLeveldata, CallFunc_Conv_IntToText_ReturnValue) == 0x000168, "Member 'WBP_InventoryActiveImagineDescription_C_SetLeveldata::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetLeveldata, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000180, "Member 'WBP_InventoryActiveImagineDescription_C_SetLeveldata::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.Set Perk Data
// 0x0178 (0x0178 - 0x0000)
struct WBP_InventoryActiveImagineDescription_C_Set_Perk_Data final
{
public:
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_771E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0010(0x0118)(ConstParm)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_771F[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x012C(0x0024)(NoDestructor)
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0160(0x0018)()
};
static_assert(alignof(WBP_InventoryActiveImagineDescription_C_Set_Perk_Data) == 0x000008, "Wrong alignment on WBP_InventoryActiveImagineDescription_C_Set_Perk_Data");
static_assert(sizeof(WBP_InventoryActiveImagineDescription_C_Set_Perk_Data) == 0x000178, "Wrong size on WBP_InventoryActiveImagineDescription_C_Set_Perk_Data");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_Set_Perk_Data, CallFunc_GetStorage_ReturnValue) == 0x000000, "Member 'WBP_InventoryActiveImagineDescription_C_Set_Perk_Data::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_Set_Perk_Data, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000008, "Member 'WBP_InventoryActiveImagineDescription_C_Set_Perk_Data::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_Set_Perk_Data, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000010, "Member 'WBP_InventoryActiveImagineDescription_C_Set_Perk_Data::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_Set_Perk_Data, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x000128, "Member 'WBP_InventoryActiveImagineDescription_C_Set_Perk_Data::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_Set_Perk_Data, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x00012C, "Member 'WBP_InventoryActiveImagineDescription_C_Set_Perk_Data::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_Set_Perk_Data, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000150, "Member 'WBP_InventoryActiveImagineDescription_C_Set_Perk_Data::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_Set_Perk_Data, CallFunc_Conv_StringToText_ReturnValue) == 0x000160, "Member 'WBP_InventoryActiveImagineDescription_C_Set_Perk_Data::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetSwitcher
// 0x0004 (0x0004 - 0x0000)
struct WBP_InventoryActiveImagineDescription_C_SetSwitcher final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryActiveImagineDescription_C_SetSwitcher) == 0x000004, "Wrong alignment on WBP_InventoryActiveImagineDescription_C_SetSwitcher");
static_assert(sizeof(WBP_InventoryActiveImagineDescription_C_SetSwitcher) == 0x000004, "Wrong size on WBP_InventoryActiveImagineDescription_C_SetSwitcher");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_SetSwitcher, Param_Index) == 0x000000, "Member 'WBP_InventoryActiveImagineDescription_C_SetSwitcher::Param_Index' has a wrong offset!");

// Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.GetAbilityDescToolTipWidget
// 0x0148 (0x0148 - 0x0000)
struct WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonToolTip_AbilityPerk_C*           AbilityPerkToolTip;                                // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7720[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0020(0x0118)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7721[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonToolTip_AbilityPerk_C*           CallFunc_Create_ReturnValue;                       // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget) == 0x000008, "Wrong alignment on WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget");
static_assert(sizeof(WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget) == 0x000148, "Wrong size on WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget, ReturnValue) == 0x000000, "Member 'WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget, AbilityPerkToolTip) == 0x000008, "Member 'WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget::AbilityPerkToolTip' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget, CallFunc_GetStorage_ReturnValue) == 0x000010, "Member 'WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000018, "Member 'WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000020, "Member 'WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget, CallFunc_IsValid_ReturnValue) == 0x000138, "Member 'WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget, CallFunc_Create_ReturnValue) == 0x000140, "Member 'WBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

}

