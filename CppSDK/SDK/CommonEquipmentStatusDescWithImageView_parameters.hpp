#pragma once

 

// Package: CommonEquipmentStatusDescWithImageView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.OnRequestWeaponModelLoad__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_OnRequestWeaponModelLoad__DelegateSignature final
{
public:
	struct FInventoryItemData                     InWeaponInventoryItemData;                         // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_OnRequestWeaponModelLoad__DelegateSignature) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_OnRequestWeaponModelLoad__DelegateSignature");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_OnRequestWeaponModelLoad__DelegateSignature) == 0x000060, "Wrong size on CommonEquipmentStatusDescWithImageView_C_OnRequestWeaponModelLoad__DelegateSignature");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_OnRequestWeaponModelLoad__DelegateSignature, InWeaponInventoryItemData) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_OnRequestWeaponModelLoad__DelegateSignature::InWeaponInventoryItemData' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.OnRequestBattleImagineModelLoad__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_OnRequestBattleImagineModelLoad__DelegateSignature final
{
public:
	struct FInventoryItemData                     InBattleImagineInventoryItemData;                  // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_OnRequestBattleImagineModelLoad__DelegateSignature) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_OnRequestBattleImagineModelLoad__DelegateSignature");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_OnRequestBattleImagineModelLoad__DelegateSignature) == 0x000060, "Wrong size on CommonEquipmentStatusDescWithImageView_C_OnRequestBattleImagineModelLoad__DelegateSignature");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_OnRequestBattleImagineModelLoad__DelegateSignature, InBattleImagineInventoryItemData) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_OnRequestBattleImagineModelLoad__DelegateSignature::InBattleImagineInventoryItemData' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.ExecuteUbergraph_CommonEquipmentStatusDescWithImageView
// 0x00D0 (0x00D0 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C2B[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0050(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView) == 0x0000D0, "Wrong size on CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView, EntryPoint) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView, CallFunc_BreakVector2D_X) == 0x000004, "Member 'CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView, CallFunc_BreakVector2D_Y) == 0x000008, "Member 'CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView, K2Node_Event_IsDesignTime) == 0x00000C, "Member 'CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView, K2Node_MakeStruct_FormatArgumentData_1) == 0x000050, "Member 'CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView, K2Node_MakeArray_Array) == 0x000090, "Member 'CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView, CallFunc_Conv_TextToString_ReturnValue) == 0x0000B8, "Member 'CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_PreConstruct) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_PreConstruct");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_PreConstruct) == 0x000001, "Wrong size on CommonEquipmentStatusDescWithImageView_C_PreConstruct");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetEquipmentType
// 0x000D (0x000D - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SetEquipmentType final
{
public:
	ESBCharaEquipType                             InEquipType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SetEquipmentType");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType) == 0x00000D, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SetEquipmentType");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, InEquipType) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::InEquipType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_IsValid_ReturnValue_1) == 0x000004, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000005, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000006, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000007, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000008, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_BooleanOR_ReturnValue) == 0x000009, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_BooleanOR_ReturnValue_1) == 0x00000A, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_BooleanOR_ReturnValue_2) == 0x00000B, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentType, CallFunc_BooleanOR_ReturnValue_3) == 0x00000C, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentType::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDescByOwnItemInfo
// 0x0030 (0x0030 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo final
{
public:
	class FString                                 InEquipmentUniqueId;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalEquipmentUniqueId;                            // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo) == 0x000030, "Wrong size on CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, InEquipmentUniqueId) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::InEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, LocalEquipmentUniqueId) == 0x000010, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::LocalEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000021, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000022, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000023, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000024, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000025, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, CallFunc_BooleanOR_ReturnValue) == 0x000026, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x000027, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, CallFunc_BooleanOR_ReturnValue_1) == 0x000028, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, CallFunc_BooleanOR_ReturnValue_2) == 0x000029, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo, CallFunc_BooleanOR_ReturnValue_3) == 0x00002A, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateWeaponDescByOwnItemInfo
// 0x04F0 (0x04F0 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo final
{
public:
	class FString                                 InWeaponUniqueId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0010(0x0118)(Edit, BlueprintVisible)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0128(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSBWeaponItemData                      LocalWeaponItemData;                               // 0x0188(0x0050)(Edit, BlueprintVisible)
	class FString                                 LocalWeaponUniqueId;                               // 0x01D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C2C[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x01F0(0x0060)(HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0250(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x02EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C2D[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C2E[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C2F[0x6];                                     // 0x030A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0310(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x03C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C30[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x03D8(0x0118)(ConstParm)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo) == 0x0004F0, "Wrong size on CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, InWeaponUniqueId) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, LocalOwnItemInfo) == 0x000010, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, LocalInventoryItemData) == 0x000128, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, LocalWeaponItemData) == 0x000188, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::LocalWeaponItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, LocalWeaponUniqueId) == 0x0001D8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::LocalWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x0001E8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, K2Node_MakeStruct_InventoryItemData) == 0x0001F0, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_CreateInventoryData_InventoryData) == 0x000250, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_CreateInventoryData_IsSuccess) == 0x0002E8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_1) == 0x0002E9, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_2) == 0x0002EA, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0002EB, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0002EC, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_GetEquipmentBag_ReturnValue) == 0x0002F0, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_GetMasterDataManager_IsValid) == 0x0002F8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000300, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_3) == 0x000308, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_GetWeaponMasterData_IsExists) == 0x000309, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000310, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_GetWeaponText_ReturnValue) == 0x0003C0, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0003D0, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0003D8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateImagineDescByOwnItemInfo
// 0x0458 (0x0458 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo final
{
public:
	class FString                                 InImagineUniqueId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0010(0x0118)(Edit, BlueprintVisible)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0128(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         LocalImagineId;                                    // 0x0188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalImagineNameTextId;                            // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        LocalImagineType;                                  // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C31[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalImagineUniqueId;                              // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C32[0x2];                                     // 0x01AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x01B0(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C33[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C34[0x6];                                     // 0x025A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0260(0x0118)(ConstParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C35[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C36[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0390(0x00B0)()
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0440(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo) == 0x000458, "Wrong size on CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, InImagineUniqueId) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::InImagineUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, LocalOwnItemInfo) == 0x000010, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, LocalInventoryItemData) == 0x000128, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, LocalImagineId) == 0x000188, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::LocalImagineId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, LocalImagineNameTextId) == 0x00018C, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::LocalImagineNameTextId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, LocalImagineType) == 0x000190, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::LocalImagineType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, LocalImagineUniqueId) == 0x000198, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x0001A8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_1) == 0x0001A9, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001AA, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_2) == 0x0001AB, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_3) == 0x0001AC, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0001AD, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_CreateInventoryData_InventoryData) == 0x0001B0, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_CreateInventoryData_IsSuccess) == 0x000248, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_GetEquipmentBag_ReturnValue) == 0x000250, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_4) == 0x000258, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000259, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000260, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_GetMasterDataManager_IsValid) == 0x000378, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000380, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_FindMasterImagineData_IsExists) == 0x000388, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_FindMasterImagineData_ReturnValue) == 0x000390, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_GetMasterImagineText_ReturnValue) == 0x000440, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000450, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDescByMasterData
// 0x0028 (0x0028 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData final
{
public:
	int32                                         InEquipmentItemId;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C37[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalEquipmentUniqueId;                            // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData) == 0x000028, "Wrong size on CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, InEquipmentItemId) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::InEquipmentItemId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, LocalEquipmentUniqueId) == 0x000008, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::LocalEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00001A, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00001B, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00001C, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00001D, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, CallFunc_BooleanOR_ReturnValue) == 0x00001E, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, CallFunc_IsValid_ReturnValue) == 0x00001F, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, CallFunc_BooleanOR_ReturnValue_1) == 0x000020, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, CallFunc_BooleanOR_ReturnValue_2) == 0x000021, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData, CallFunc_BooleanOR_ReturnValue_3) == 0x000022, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateWeaponDescByMasterData
// 0x01B8 (0x01B8 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinLevel;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxLevel;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InRecipiId;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInitTagsByMaster;                                 // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C38[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalRecipiId;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0018(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         LocalWeaponId;                                     // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C39[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0080(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C3A[0x2];                                     // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C3B[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x00F8(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData) == 0x0001B8, "Wrong size on CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, InWeaponID) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::InWeaponID' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, MinLevel) == 0x000004, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::MinLevel' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, MaxLevel) == 0x000008, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::MaxLevel' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, InRecipiId) == 0x00000C, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::InRecipiId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, bInitTagsByMaster) == 0x000010, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::bInitTagsByMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, LocalRecipiId) == 0x000014, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::LocalRecipiId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, LocalInventoryItemData) == 0x000018, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, LocalWeaponId) == 0x000078, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::LocalWeaponId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, K2Node_MakeStruct_InventoryItemData) == 0x000080, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E0, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, CallFunc_IsValid_ReturnValue) == 0x0000E1, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, CallFunc_IsValid_ReturnValue_1) == 0x0000E2, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, CallFunc_IsValid_ReturnValue_2) == 0x0000E3, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E4, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, CallFunc_GetMasterDataManager_IsValid) == 0x0000E5, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000E8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, CallFunc_GetWeaponMasterData_IsExists) == 0x0000F0, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, CallFunc_GetWeaponMasterData_ReturnValue) == 0x0000F8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData, CallFunc_GetWeaponText_ReturnValue) == 0x0001A8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateImagineDescByMasterData
// 0x0298 (0x0298 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData final
{
public:
	int32                                         InImagineId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInitTagsByMaster;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C3C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       LocalImagineData;                                  // 0x0008(0x00B0)(Edit, BlueprintVisible)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x00B8(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         LocalImagineId;                                    // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C3D[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0120(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0186(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C3E[0x1];                                     // 0x0187(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineRecepi_InExists;         // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C3F[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindMasterImagineRecepi_ReturnValue;      // 0x01A8(0x0038)()
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue;            // 0x01E0(0x00B0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData) == 0x000298, "Wrong size on CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, InImagineId) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::InImagineId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, bInitTagsByMaster) == 0x000004, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::bInitTagsByMaster' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, LocalImagineData) == 0x000008, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::LocalImagineData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, LocalInventoryItemData) == 0x0000B8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, LocalImagineId) == 0x000118, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::LocalImagineId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, K2Node_MakeStruct_InventoryItemData) == 0x000120, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_Greater_IntInt_ReturnValue) == 0x000180, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000181, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_IsValid_ReturnValue) == 0x000182, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_IsValid_ReturnValue_1) == 0x000183, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_IsValid_ReturnValue_2) == 0x000184, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_IsValid_ReturnValue_3) == 0x000185, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_GetMasterDataManager_IsValid) == 0x000186, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000188, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_GetMasterImagineText_ReturnValue) == 0x000190, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_FindMasterImagineRecepi_InExists) == 0x0001A0, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_FindMasterImagineRecepi_InExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_FindMasterImagineRecepi_ReturnValue) == 0x0001A8, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_FindMasterImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_FindMasterImagine_ReturnValue) == 0x0001E0, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_FindMasterImagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000290, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000291, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetUsingEquipmentImage2Dor3D
// 0x0003 (0x0003 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D final
{
public:
	bool                                          InUse3D;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D) == 0x000003, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D, InUse3D) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D::InUse3D' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetEquipmentModelCaptureImageVisibility
// 0x0002 (0x0002 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility) == 0x000002, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility, InIsVisible) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetDescToDefault
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SetDescToDefault final
{
public:
	bool                                          InIsDescDefault;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsDescDefault;                                // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SetDescToDefault) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SetDescToDefault");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SetDescToDefault) == 0x000008, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SetDescToDefault");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetDescToDefault, InIsDescDefault) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SetDescToDefault::InIsDescDefault' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetDescToDefault, LocalIsDescDefault) == 0x000001, "Member 'CommonEquipmentStatusDescWithImageView_C_SetDescToDefault::LocalIsDescDefault' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetDescToDefault, Temp_byte_Variable) == 0x000002, "Member 'CommonEquipmentStatusDescWithImageView_C_SetDescToDefault::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetDescToDefault, Temp_byte_Variable_1) == 0x000003, "Member 'CommonEquipmentStatusDescWithImageView_C_SetDescToDefault::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetDescToDefault, Temp_bool_Variable) == 0x000004, "Member 'CommonEquipmentStatusDescWithImageView_C_SetDescToDefault::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetDescToDefault, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'CommonEquipmentStatusDescWithImageView_C_SetDescToDefault::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetDescToDefault, K2Node_Select_Default) == 0x000006, "Member 'CommonEquipmentStatusDescWithImageView_C_SetDescToDefault::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetDescToDefault, CallFunc_IsValid_ReturnValue_1) == 0x000007, "Member 'CommonEquipmentStatusDescWithImageView_C_SetDescToDefault::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SwitchBaseBgType
// 0x0002 (0x0002 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType final
{
public:
	bool                                          InIsNormalType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType) == 0x000002, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType, InIsNormalType) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType::InIsNormalType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWeaponDescByOwnItemInfo
// 0x04C8 (0x04C8 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo final
{
public:
	struct FOwnItemInfo                           InWeaponUniqueId;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0118(0x0118)(Edit, BlueprintVisible)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0230(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSBWeaponItemData                      LocalWeaponItemData;                               // 0x0290(0x0050)(Edit, BlueprintVisible)
	class FString                                 LocalWeaponUniqueId;                               // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C40[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x02F8(0x0060)(HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0358(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x03F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x03F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x03F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C41[0x2];                                     // 0x03F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C42[0x7];                                     // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0408(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x04B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo) == 0x0004C8, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, InWeaponUniqueId) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, LocalOwnItemInfo) == 0x000118, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, LocalInventoryItemData) == 0x000230, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, LocalWeaponItemData) == 0x000290, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::LocalWeaponItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, LocalWeaponUniqueId) == 0x0002E0, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::LocalWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x0002F0, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, K2Node_MakeStruct_InventoryItemData) == 0x0002F8, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_CreateInventoryData_InventoryData) == 0x000358, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_CreateInventoryData_IsSuccess) == 0x0003F0, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_1) == 0x0003F1, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_2) == 0x0003F2, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0003F3, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0003F4, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_GetMasterDataManager_IsValid) == 0x0003F5, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x0003F8, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_GetWeaponMasterData_IsExists) == 0x000400, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000408, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo, CallFunc_GetWeaponText_ReturnValue) == 0x0004B8, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set Weapon Desc By Character Craft Recepi Data
// 0x02D0 (0x02D0 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data final
{
public:
	struct FCharacterCraftRecepi                  MasterData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0008(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FCraftMasterData                       LocalCraftRecepi;                                  // 0x0068(0x0088)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   LocalMasterManager;                                // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  LocalRecepiData;                                   // 0x00F8(0x0008)(Edit, BlueprintVisible, NoDestructor)
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0100(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C43[0x5];                                     // 0x0163(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x0168(0x0088)(ConstParm)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C44[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x01F8(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C45[0x6];                                     // 0x02BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data) == 0x0002D0, "Wrong size on CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, MasterData) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::MasterData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, LocalInventoryItemData) == 0x000008, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, LocalCraftRecepi) == 0x000068, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::LocalCraftRecepi' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, LocalMasterManager) == 0x0000F0, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::LocalMasterManager' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, LocalRecepiData) == 0x0000F8, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::LocalRecepiData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, K2Node_MakeStruct_InventoryItemData) == 0x000100, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000160, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_Not_PreBool_ReturnValue) == 0x000161, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_FindCraftMasterData_isExists) == 0x000162, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_FindCraftMasterData_ReturnValue) == 0x000168, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_GetWeaponMasterData_IsExists) == 0x0001F0, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_GetWeaponMasterData_ReturnValue) == 0x0001F8, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_GetWeaponText_ReturnValue) == 0x0002A8, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_IsValid_ReturnValue) == 0x0002B8, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_GetMasterDataManager_IsValid) == 0x0002B9, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002C0, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data, CallFunc_IsValid_ReturnValue_1) == 0x0002C8, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.LoadWeaponAsset
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset final
{
public:
	int32                                         WeaponItemId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetWeaponId_isExist;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset) == 0x000004, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset) == 0x000008, "Wrong size on CommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset, WeaponItemId) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset::WeaponItemId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset, CallFunc_SetWeaponId_isExist) == 0x000004, "Member 'CommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset::CallFunc_SetWeaponId_isExist' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDrawMode
// 0x0010 (0x0010 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_UpdateDrawMode final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C46[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_UpdateDrawMode) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_UpdateDrawMode");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_UpdateDrawMode) == 0x000010, "Wrong size on CommonEquipmentStatusDescWithImageView_C_UpdateDrawMode");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDrawMode, Temp_bool_Variable) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDrawMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_UpdateDrawMode, K2Node_Select_Default) == 0x000008, "Member 'CommonEquipmentStatusDescWithImageView_C_UpdateDrawMode::K2Node_Select_Default' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set Imagine Desc By Character Imagine Recepi Data
// 0x02B0 (0x02B0 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data final
{
public:
	struct FCharacterCraftRecepi                  MasterData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0008(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSBMasterImagine                       LocalImagineRecepi;                                // 0x0068(0x00B0)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   LocalMasterManager;                                // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  LocalRecepiData;                                   // 0x0120(0x0008)(Edit, BlueprintVisible, NoDestructor)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C47[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0140(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineRecepi_InExists;         // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C48[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindMasterImagineRecepi_ReturnValue;      // 0x01A8(0x0038)()
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C49[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x01E8(0x00B0)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C4A[0x5];                                     // 0x029B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data) == 0x0002B0, "Wrong size on CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, MasterData) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::MasterData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, LocalInventoryItemData) == 0x000008, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, LocalImagineRecepi) == 0x000068, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::LocalImagineRecepi' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, LocalMasterManager) == 0x000118, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::LocalMasterManager' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, LocalRecepiData) == 0x000120, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::LocalRecepiData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_GetMasterImagineText_ReturnValue) == 0x000128, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000138, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000139, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, K2Node_MakeStruct_InventoryItemData) == 0x000140, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_FindMasterImagineRecepi_InExists) == 0x0001A0, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_FindMasterImagineRecepi_InExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_FindMasterImagineRecepi_ReturnValue) == 0x0001A8, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_FindMasterImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_FindMasterImagineData_IsExists) == 0x0001E0, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_FindMasterImagineData_ReturnValue) == 0x0001E8, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000298, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_IsValid_ReturnValue) == 0x000299, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_GetMasterDataManager_IsValid) == 0x00029A, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002A0, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data, CallFunc_IsValid_ReturnValue_1) == 0x0002A8, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.LoadImagineAsset
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_LoadImagineAsset final
{
public:
	int32                                         WeaponItemId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetWeaponId_isExist;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_LoadImagineAsset) == 0x000004, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_LoadImagineAsset");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_LoadImagineAsset) == 0x000008, "Wrong size on CommonEquipmentStatusDescWithImageView_C_LoadImagineAsset");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_LoadImagineAsset, WeaponItemId) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_LoadImagineAsset::WeaponItemId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_LoadImagineAsset, CallFunc_SetWeaponId_isExist) == 0x000004, "Member 'CommonEquipmentStatusDescWithImageView_C_LoadImagineAsset::CallFunc_SetWeaponId_isExist' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetLevelSync
// 0x0001 (0x0001 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SetLevelSync final
{
public:
	bool                                          bIsLevelSync;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SetLevelSync) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SetLevelSync");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SetLevelSync) == 0x000001, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SetLevelSync");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetLevelSync, bIsLevelSync) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SetLevelSync::bIsLevelSync' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set SPEffect Txt Color
// 0x0028 (0x0028 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_Set_SPEffect_Txt_Color final
{
public:
	struct FSlateColor                            InColorAndOpacity;                                 // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_Set_SPEffect_Txt_Color) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_Set_SPEffect_Txt_Color");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_Set_SPEffect_Txt_Color) == 0x000028, "Wrong size on CommonEquipmentStatusDescWithImageView_C_Set_SPEffect_Txt_Color");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_Set_SPEffect_Txt_Color, InColorAndOpacity) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_Set_SPEffect_Txt_Color::InColorAndOpacity' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetImagineDescByOwnItemInfo
// 0x0418 (0x0418 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0118(0x0118)(Edit, BlueprintVisible)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0230(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         LocalImagineId;                                    // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalImagineNameTextId;                            // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        LocalImagineType;                                  // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x029B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x029C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x029D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x029E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x029F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C4B[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x02B0(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0349(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C4C[0x6];                                     // 0x034A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0350(0x00B0)()
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0400(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo) == 0x000418, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, OwnItemInfo) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, LocalOwnItemInfo) == 0x000118, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, LocalInventoryItemData) == 0x000230, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, LocalImagineId) == 0x000290, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::LocalImagineId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, LocalImagineNameTextId) == 0x000294, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::LocalImagineNameTextId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, LocalImagineType) == 0x000298, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::LocalImagineType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000299, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00029A, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00029B, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x00029C, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_1) == 0x00029D, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_2) == 0x00029E, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_IsValid_ReturnValue_3) == 0x00029F, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_GetMasterDataManager_IsValid) == 0x0002A0, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002A8, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_CreateInventoryData_InventoryData) == 0x0002B0, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_CreateInventoryData_IsSuccess) == 0x000348, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_FindMasterImagineData_IsExists) == 0x000349, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_FindMasterImagineData_ReturnValue) == 0x000350, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_GetMasterImagineText_ReturnValue) == 0x000400, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000410, "Member 'CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWeaponDescSPEffectByRecipi
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi final
{
public:
	int32                                         InRecipiId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalRecipiId;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi) == 0x000004, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi) == 0x000008, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi, InRecipiId) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi::InRecipiId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi, LocalRecipiId) == 0x000004, "Member 'CommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi::LocalRecipiId' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetDescPosition
// 0x0010 (0x0010 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SetDescPosition final
{
public:
	struct FVector2D                              InPosition;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SetDescPosition) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SetDescPosition");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SetDescPosition) == 0x000010, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SetDescPosition");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetDescPosition, InPosition) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SetDescPosition::InPosition' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetDescPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'CommonEquipmentStatusDescWithImageView_C_SetDescPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetPrevInfo
// 0x0118 (0x0118 - 0x0000)
struct CommonEquipmentStatusDescWithImageView_C_SetPrevInfo final
{
public:
	struct FOwnItemInfo                           Prev;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonEquipmentStatusDescWithImageView_C_SetPrevInfo) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescWithImageView_C_SetPrevInfo");
static_assert(sizeof(CommonEquipmentStatusDescWithImageView_C_SetPrevInfo) == 0x000118, "Wrong size on CommonEquipmentStatusDescWithImageView_C_SetPrevInfo");
static_assert(offsetof(CommonEquipmentStatusDescWithImageView_C_SetPrevInfo, Prev) == 0x000000, "Member 'CommonEquipmentStatusDescWithImageView_C_SetPrevInfo::Prev' has a wrong offset!");

}

