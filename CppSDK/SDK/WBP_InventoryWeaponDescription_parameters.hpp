#pragma once

 

// Package: WBP_InventoryWeaponDescription

#include "Basic.hpp"

#include "InventoryData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "DescripionButtonType_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryWeaponDescription_C_OnButtonClicked__DelegateSignature final
{
public:
	EDescripionButtonType                         ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on WBP_InventoryWeaponDescription_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on WBP_InventoryWeaponDescription_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_OnButtonClicked__DelegateSignature, ButtonType) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_OnButtonClicked__DelegateSignature::ButtonType' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnWeaponStickerButtonPressed__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature final
{
public:
	class FString                                 InWeaponUniqueId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBWeaponItemData                      InWeaponItemData;                                  // 0x0010(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature) == 0x000060, "Wrong size on WBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature, InWeaponUniqueId) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature, InWeaponItemData) == 0x000010, "Member 'WBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature::InWeaponItemData' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnWeaponStickerInUseButtonPressed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryWeaponDescription_C_OnWeaponStickerInUseButtonPressed__DelegateSignature final
{
public:
	bool                                          InIsInUse;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_OnWeaponStickerInUseButtonPressed__DelegateSignature) == 0x000001, "Wrong alignment on WBP_InventoryWeaponDescription_C_OnWeaponStickerInUseButtonPressed__DelegateSignature");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_OnWeaponStickerInUseButtonPressed__DelegateSignature) == 0x000001, "Wrong size on WBP_InventoryWeaponDescription_C_OnWeaponStickerInUseButtonPressed__DelegateSignature");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_OnWeaponStickerInUseButtonPressed__DelegateSignature, InIsInUse) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_OnWeaponStickerInUseButtonPressed__DelegateSignature::InIsInUse' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.ExecuteUbergraph_WBP_InventoryWeaponDescription
// 0x0038 (0x0038 - 0x0000)
struct WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDescripionButtonType                         Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonWeaponAbilityEfficacyDescPopup_C* CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7724[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7725[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription) == 0x000038, "Wrong size on WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, EntryPoint) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, Temp_bool_Variable) == 0x000004, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, Temp_byte_Variable) == 0x000005, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, K2Node_Select_Default) == 0x000007, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, CallFunc_Create_ReturnValue) == 0x000010, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, CallFunc_GetUIManager_IsValid) == 0x000018, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, CallFunc_GetUIManager_ReturnValue) == 0x000020, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, CallFunc_GetUIManager_IsValid_1) == 0x000028, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription, CallFunc_GetUIManager_ReturnValue_1) == 0x000030, "Member 'WBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetItem
// 0x0598 (0x0598 - 0x0000)
struct WBP_InventoryWeaponDescription_C_SetItem final
{
public:
	struct FInventoryData                         Param_InventoryItemData;                           // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Param_bStorageMode;                                // 0x0098(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bBagStorageViewMode;                         // 0x0099(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7726[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     LocalPerkList;                                     // 0x00A0(0x0010)(Edit, BlueprintVisible)
	bool                                          TmpIsWeaponStickerAttachedToWeapon;                // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7727[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         InventoryData;                                     // 0x00B8(0x0098)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSBWeaponMasterData                    WeaponMaster;                                      // 0x0150(0x00B0)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   ItemDataManager;                                   // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7728[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7729[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0220(0x00B0)()
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_772A[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x02D8(0x0118)(ConstParm)
	struct FSBWeaponItemData                      CallFunc_GetFindWeaponData_WeaponData;             // 0x03F0(0x0050)()
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_772B[0x3];                                     // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0444(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetSlotInfo_bHasValidAbility;             // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0449(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x044A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x044B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBCharacterWeaponPerkData             CallFunc_Array_Get_Item;                           // 0x044C(0x001C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_772C[0x7];                                     // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0478(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x0488(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x04A0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x04B8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x04D0(0x0018)()
	float                                         CallFunc_CalcRangeRatio_ReturnValue;               // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x04EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_772D[0x3];                                     // 0x04ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelStatus_ReturnValue;               // 0x04F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_772E[0x4];                                     // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x04F8(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0511(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0512(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_772F[0x5];                                     // 0x0513(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0518(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0528(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7730[0x7];                                     // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0548(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0558(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7731[0x7];                                     // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x0581(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0582(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7732[0x1];                                     // 0x0583(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0584(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0589(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x058A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7733[0x1];                                     // 0x058B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x058C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0591(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_SetItem) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_SetItem");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_SetItem) == 0x000598, "Wrong size on WBP_InventoryWeaponDescription_C_SetItem");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Param_InventoryItemData) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Param_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Param_bStorageMode) == 0x000098, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Param_bStorageMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Param_bBagStorageViewMode) == 0x000099, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Param_bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, LocalPerkList) == 0x0000A0, "Member 'WBP_InventoryWeaponDescription_C_SetItem::LocalPerkList' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, TmpIsWeaponStickerAttachedToWeapon) == 0x0000B0, "Member 'WBP_InventoryWeaponDescription_C_SetItem::TmpIsWeaponStickerAttachedToWeapon' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, InventoryData) == 0x0000B8, "Member 'WBP_InventoryWeaponDescription_C_SetItem::InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, WeaponMaster) == 0x000150, "Member 'WBP_InventoryWeaponDescription_C_SetItem::WeaponMaster' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, ItemDataManager) == 0x000200, "Member 'WBP_InventoryWeaponDescription_C_SetItem::ItemDataManager' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000208, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_GetStorage_ReturnValue) == 0x000210, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_GetWeaponMasterData_IsExists) == 0x000218, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000220, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0002D0, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0002D8, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_GetFindWeaponData_WeaponData) == 0x0003F0, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_GetFindWeaponData_WeaponData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x000440, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Temp_int_Array_Index_Variable) == 0x000444, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_SetSlotInfo_bHasValidAbility) == 0x000448, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_SetSlotInfo_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Greater_IntInt_ReturnValue) == 0x000449, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00044A, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue) == 0x00044B, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Array_Get_Item) == 0x00044C, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Array_Length_ReturnValue) == 0x000468, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Array_Add_ReturnValue) == 0x00046C, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Temp_byte_Variable) == 0x000470, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_SetSpecialEffectText_SpecialName) == 0x000478, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_SetSpecialEffectText_SpecialValue) == 0x000488, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0004A0, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Conv_IntToText_ReturnValue) == 0x0004B8, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0004D0, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_CalcRangeRatio_ReturnValue) == 0x0004E8, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_CalcRangeRatio_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Temp_byte_Variable_1) == 0x0004EC, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_GetLevelStatus_ReturnValue) == 0x0004F0, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_GetLevelStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0004F8, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Temp_bool_Variable) == 0x000510, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Temp_byte_Variable_2) == 0x000511, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, K2Node_Select_Default) == 0x000512, "Member 'WBP_InventoryWeaponDescription_C_SetItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_GetWeaponText_ReturnValue) == 0x000518, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000528, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Temp_byte_Variable_3) == 0x000540, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_GetClassNameText_ReturnValue) == 0x000548, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000558, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_GetMasterDataManager_IsValid) == 0x000570, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000578, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000580, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_IsUsedItem_bUse) == 0x000581, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Temp_bool_Variable_1) == 0x000582, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Temp_int_Loop_Counter_Variable) == 0x000584, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000588, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Less_IntInt_ReturnValue) == 0x000589, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, K2Node_Select_Default_1) == 0x00058A, "Member 'WBP_InventoryWeaponDescription_C_SetItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, CallFunc_Add_IntInt_ReturnValue) == 0x00058C, "Member 'WBP_InventoryWeaponDescription_C_SetItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, Temp_bool_Variable_2) == 0x000590, "Member 'WBP_InventoryWeaponDescription_C_SetItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetItem, K2Node_Select_Default_2) == 0x000591, "Member 'WBP_InventoryWeaponDescription_C_SetItem::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.RefleshButton
// 0x0048 (0x0048 - 0x0000)
struct WBP_InventoryWeaponDescription_C_RefleshButton final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7734[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7735[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7736[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7737[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNowJob_IsEquipable;                     // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue;    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue;  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_2;                           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_1;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckItemLevel_ReturnValue;               // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_RefleshButton) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_RefleshButton");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_RefleshButton) == 0x000048, "Wrong size on WBP_InventoryWeaponDescription_C_RefleshButton");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, Temp_int_Variable) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, Temp_bool_Variable) == 0x000004, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000006, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, Temp_int_Variable_1) == 0x000008, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, Temp_bool_Variable_1) == 0x00000C, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_GetStorage_ReturnValue) == 0x000010, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_IsEquipmentItem_ReturnValue) == 0x000018, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_IsItemLock_ReturnValue) == 0x000019, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, K2Node_Select_Default) == 0x00001C, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, Temp_bool_Variable_2) == 0x000020, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_Not_PreBool_ReturnValue_1) == 0x000021, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_GetStorage_ReturnValue_1) == 0x000028, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_GetCapacity_ReturnValue) == 0x000030, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, Temp_bool_Variable_3) == 0x000034, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, K2Node_Select_Default_1) == 0x000035, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_IsNowJob_IsEquipable) == 0x000036, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_IsNowJob_IsEquipable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000037, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_Less_IntInt_ReturnValue_1) == 0x000039, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_isStorageItemLockedSimple_ReturnValue) == 0x00003A, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_isStorageItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_isInventoryItemLockedSimple_ReturnValue) == 0x00003B, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_isInventoryItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, K2Node_Select_Default_2) == 0x00003C, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00003D, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_Not_PreBool_ReturnValue_2) == 0x00003E, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, K2Node_Select_Default_3) == 0x00003F, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_IsEquipmentItem_ReturnValue_1) == 0x000040, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_IsEquipmentItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_CheckItemLevel_ReturnValue) == 0x000041, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_CheckItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_Not_PreBool_ReturnValue_3) == 0x000042, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_BooleanAND_ReturnValue) == 0x000043, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_BooleanAND_ReturnValue_1) == 0x000044, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_BooleanAND_ReturnValue_2) == 0x000045, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_RefleshButton, CallFunc_BooleanAND_ReturnValue_3) == 0x000046, "Member 'WBP_InventoryWeaponDescription_C_RefleshButton::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.InitBtn
// 0x0006 (0x0006 - 0x0000)
struct WBP_InventoryWeaponDescription_C_InitBtn final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_InitBtn) == 0x000001, "Wrong alignment on WBP_InventoryWeaponDescription_C_InitBtn");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_InitBtn) == 0x000006, "Wrong size on WBP_InventoryWeaponDescription_C_InitBtn");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_InitBtn, Temp_bool_Variable) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_InitBtn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_InitBtn, Temp_bool_Variable_1) == 0x000001, "Member 'WBP_InventoryWeaponDescription_C_InitBtn::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_InitBtn, CallFunc_IsEquipmentItem_ReturnValue) == 0x000002, "Member 'WBP_InventoryWeaponDescription_C_InitBtn::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_InitBtn, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'WBP_InventoryWeaponDescription_C_InitBtn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_InitBtn, CallFunc_GetIsEnabled_ReturnValue) == 0x000004, "Member 'WBP_InventoryWeaponDescription_C_InitBtn::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_InitBtn, K2Node_Select_Default) == 0x000005, "Member 'WBP_InventoryWeaponDescription_C_InitBtn::K2Node_Select_Default' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.IsNowJob
// 0x0210 (0x0210 - 0x0000)
struct WBP_InventoryWeaponDescription_C_IsNowJob final
{
public:
	bool                                          IsEquipable;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  NowJob;                                            // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7738[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7739[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_773A[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0028(0x0118)(ConstParm)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_773B[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0158(0x00B0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_IsNowJob) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_IsNowJob");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_IsNowJob) == 0x000210, "Wrong size on WBP_InventoryWeaponDescription_C_IsNowJob");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, IsEquipable) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::IsEquipable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, NowJob) == 0x000001, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::NowJob' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, CallFunc_GetStorage_ReturnValue) == 0x000008, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, CallFunc_GetMasterDataManager_IsValid) == 0x000010, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000020, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000028, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000140, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000148, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, CallFunc_GetWeaponMasterData_IsExists) == 0x000151, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000158, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_IsNowJob, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000208, "Member 'WBP_InventoryWeaponDescription_C_IsNowJob::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetSwitcher
// 0x0038 (0x0038 - 0x0000)
struct WBP_InventoryWeaponDescription_C_SetSwitcher final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_SetSwitcher) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_SetSwitcher");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_SetSwitcher) == 0x000038, "Wrong size on WBP_InventoryWeaponDescription_C_SetSwitcher");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetSwitcher, Param_Index) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_SetSwitcher::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetSwitcher, Temp_int_Variable) == 0x000004, "Member 'WBP_InventoryWeaponDescription_C_SetSwitcher::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetSwitcher, Temp_struct_Variable) == 0x000008, "Member 'WBP_InventoryWeaponDescription_C_SetSwitcher::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetSwitcher, Temp_struct_Variable_1) == 0x000010, "Member 'WBP_InventoryWeaponDescription_C_SetSwitcher::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetSwitcher, Temp_struct_Variable_2) == 0x000018, "Member 'WBP_InventoryWeaponDescription_C_SetSwitcher::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetSwitcher, K2Node_Select_Default) == 0x000020, "Member 'WBP_InventoryWeaponDescription_C_SetSwitcher::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetSwitcher, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'WBP_InventoryWeaponDescription_C_SetSwitcher::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetSwitcher, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_InventoryWeaponDescription_C_SetSwitcher::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility1DescToolTipWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonToolTip_AbilityPerk_C*           CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget) == 0x000010, "Wrong size on WBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget, ReturnValue) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget, CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip) == 0x000008, "Member 'WBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget::CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility2DescToolTipWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonToolTip_AbilityPerk_C*           CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget) == 0x000010, "Wrong size on WBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget, ReturnValue) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget, CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip) == 0x000008, "Member 'WBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget::CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility3DescToolTipWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonToolTip_AbilityPerk_C*           CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget) == 0x000010, "Wrong size on WBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget, ReturnValue) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget, CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip) == 0x000008, "Member 'WBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget::CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility4DescToolTipWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonToolTip_AbilityPerk_C*           CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget) == 0x000010, "Wrong size on WBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget, ReturnValue) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget, CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip) == 0x000008, "Member 'WBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget::CallFunc_GetAbilityDescToolTipWidget_AbilityDescToolTip' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbilityDescToolTipWidget
// 0x0028 (0x0028 - 0x0000)
struct WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_773C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonToolTip_AbilityPerk_C*           AbilityDescToolTip;                                // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonToolTip_AbilityPerk_C*           AbilityToolTip;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_773D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonToolTip_AbilityPerk_C*           CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget) == 0x000008, "Wrong alignment on WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget) == 0x000028, "Wrong size on WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget, Param_Index) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget, AbilityDescToolTip) == 0x000008, "Member 'WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget::AbilityDescToolTip' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget, AbilityToolTip) == 0x000010, "Member 'WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget::AbilityToolTip' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetWeaponStickerInUseButtonIsInUse
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsInUse final
{
public:
	bool                                          InIsInUse;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsInUse) == 0x000001, "Wrong alignment on WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsInUse");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsInUse) == 0x000001, "Wrong size on WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsInUse");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsInUse, InIsInUse) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsInUse::InIsInUse' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetWeaponStickerInUseButtonIsEnabled
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsEnabled final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsEnabled) == 0x000001, "Wrong alignment on WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsEnabled");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsEnabled) == 0x000001, "Wrong size on WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsEnabled");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsEnabled, InIsEnabled) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsEnabled::InIsEnabled' has a wrong offset!");

// Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetOperationRotateBtnVisibility
// 0x0005 (0x0005 - 0x0000)
struct WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility) == 0x000001, "Wrong alignment on WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility");
static_assert(sizeof(WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility) == 0x000005, "Wrong size on WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility, InIsVisible) == 0x000000, "Member 'WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility, Temp_bool_Variable) == 0x000003, "Member 'WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility, K2Node_Select_Default) == 0x000004, "Member 'WBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility::K2Node_Select_Default' has a wrong offset!");

}

