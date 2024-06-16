#pragma once

 

// Package: InventoryFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_ATypeFilterListData_structs.hpp"
#include "ST_ATypeFilterSortData_structs.hpp"
#include "Engine_structs.hpp"
#include "UseItemWindowType_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "InventoryData_structs.hpp"
#include "InventoryWeaponData_structs.hpp"


namespace SDK::Params
{

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CreateInventoryData
// 0x0DA8 (0x0DA8 - 0x0000)
struct InventoryFunctionLibrary_C_CreateInventoryData final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                __WorldContext;                                    // 0x0118(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         InventoryData;                                     // 0x0120(0x0098)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          IsSuccess;                                         // 0x01B8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_958C[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           TmpOwnItemInfo;                                    // 0x01C0(0x0118)(Edit, BlueprintVisible)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_958D[0x6];                                     // 0x02DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_958E[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x02F0(0x0070)()
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_958F[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterMountImagineText_ReturnValue;    // 0x0370(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9590[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0388(0x00B0)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0438(0x0018)()
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0450(0x0060)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x04B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryData                         K2Node_MakeStruct_InventoryData;                   // 0x04C0(0x0098)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0558(0x0018)()
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData_1;             // 0x0570(0x0060)(HasGetValueTypeHash)
	struct FInventoryData                         K2Node_MakeStruct_InventoryData_1;                 // 0x05D0(0x0098)(HasGetValueTypeHash)
	struct FInventoryWeaponData                   K2Node_MakeStruct_InventoryWeaponData;             // 0x0668(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_2;           // 0x066A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9591[0x5];                                     // 0x066B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_2;       // 0x0670(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindOrnamentMaster_valid;                 // 0x0678(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9592[0x7];                                     // 0x0679(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterOrnament                      CallFunc_FindOrnamentMaster_ReturnValue;           // 0x0680(0x0060)()
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x06E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9593[0x7];                                     // 0x06E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x06E8(0x0088)()
	class FString                                 CallFunc_GetOrnamentText_ReturnValue;              // 0x0770(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCostumeText_ReturnValue;               // 0x0780(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0790(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x07A8(0x0018)()
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData_2;             // 0x07C0(0x0060)(HasGetValueTypeHash)
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData_3;             // 0x0820(0x0060)(HasGetValueTypeHash)
	struct FInventoryData                         K2Node_MakeStruct_InventoryData_2;                 // 0x0880(0x0098)(HasGetValueTypeHash)
	struct FInventoryData                         K2Node_MakeStruct_InventoryData_3;                 // 0x0918(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x09B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9594[0x7];                                     // 0x09B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x09B8(0x00B0)()
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0A68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9595[0x7];                                     // 0x0A69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0A70(0x00D0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0B40(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0B50(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0B60(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0B78(0x0018)()
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData_4;             // 0x0B90(0x0060)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue_1;                // 0x0BF0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryData                         K2Node_MakeStruct_InventoryData_4;                 // 0x0C00(0x0098)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0C98(0x0018)()
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData_5;             // 0x0CB0(0x0060)(HasGetValueTypeHash)
	struct FInventoryData                         K2Node_MakeStruct_InventoryData_5;                 // 0x0D10(0x0098)(HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_CreateInventoryData) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_CreateInventoryData");
static_assert(sizeof(InventoryFunctionLibrary_C_CreateInventoryData) == 0x000DA8, "Wrong size on InventoryFunctionLibrary_C_CreateInventoryData");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, OwnItemInfo) == 0x000000, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, __WorldContext) == 0x000118, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, InventoryData) == 0x000120, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::InventoryData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, IsSuccess) == 0x0001B8, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::IsSuccess' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, TmpOwnItemInfo) == 0x0001C0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::TmpOwnItemInfo' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_SwitchEnum_CmpSuccess) == 0x0002D8, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetMasterDataManager_IsValid) == 0x0002D9, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002E0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x0002E8, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x0002F0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetMasterDataManager_IsValid_1) == 0x000360, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000368, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetMasterMountImagineText_ReturnValue) == 0x000370, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetMasterMountImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_FindMasterImagineData_IsExists) == 0x000380, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_FindMasterImagineData_ReturnValue) == 0x000388, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_Conv_StringToText_ReturnValue) == 0x000438, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryItemData) == 0x000450, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetMasterImagineText_ReturnValue) == 0x0004B0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryData) == 0x0004C0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000558, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryItemData_1) == 0x000570, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryItemData_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryData_1) == 0x0005D0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryData_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryWeaponData) == 0x000668, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryWeaponData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetMasterDataManager_IsValid_2) == 0x00066A, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetMasterDataManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetMasterDataManager_ReturnValue_2) == 0x000670, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetMasterDataManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_FindOrnamentMaster_valid) == 0x000678, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_FindOrnamentMaster_valid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_FindOrnamentMaster_ReturnValue) == 0x000680, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_FindOrnamentMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0006E0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0006E8, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetOrnamentText_ReturnValue) == 0x000770, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetOrnamentText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetCostumeText_ReturnValue) == 0x000780, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetCostumeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000790, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0007A8, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryItemData_2) == 0x0007C0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryItemData_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryItemData_3) == 0x000820, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryItemData_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryData_2) == 0x000880, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryData_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryData_3) == 0x000918, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryData_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetWeaponMasterData_IsExists) == 0x0009B0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetWeaponMasterData_ReturnValue) == 0x0009B8, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetItemMasterData_IsExists) == 0x000A68, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetItemMasterData_ReturnValue) == 0x000A70, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetWeaponText_ReturnValue) == 0x000B40, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetItemText_ReturnValue) == 0x000B50, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000B60, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000B78, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryItemData_4) == 0x000B90, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryItemData_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_GetItemText_ReturnValue_1) == 0x000BF0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_GetItemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryData_4) == 0x000C00, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryData_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000C98, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryItemData_5) == 0x000CB0, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryItemData_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateInventoryData, K2Node_MakeStruct_InventoryData_5) == 0x000D10, "Member 'InventoryFunctionLibrary_C_CreateInventoryData::K2Node_MakeStruct_InventoryData_5' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Create Add Grid Item Icon Btn
// 0x0070 (0x0070 - 0x0000)
struct InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn final
{
public:
	class UGridPanel*                             ParentGridPanel;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FirstIndex;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CreateNum;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MatricesNam;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MagineintervalTop;                                 // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MagineintervalLeft;                                // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsImagineSimpleTooltip;                            // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsToolTipEnable;                                   // 0x001D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsRightClickAccept;                               // 0x001E(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9596[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseSize;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverSize;                                          // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginLeft;                                        // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginTop;                                         // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9597[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn");
static_assert(sizeof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn) == 0x000070, "Wrong size on InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, ParentGridPanel) == 0x000000, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::ParentGridPanel' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, FirstIndex) == 0x000008, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::FirstIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, CreateNum) == 0x00000C, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::CreateNum' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, MatricesNam) == 0x000010, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::MatricesNam' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, MagineintervalTop) == 0x000014, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::MagineintervalTop' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, MagineintervalLeft) == 0x000018, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::MagineintervalLeft' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, IsImagineSimpleTooltip) == 0x00001C, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::IsImagineSimpleTooltip' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, IsToolTipEnable) == 0x00001D, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::IsToolTipEnable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, bIsRightClickAccept) == 0x00001E, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::bIsRightClickAccept' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, BaseSize) == 0x000020, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::BaseSize' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, OverSize) == 0x000024, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::OverSize' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, __WorldContext) == 0x000028, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, MarginLeft) == 0x000030, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::MarginLeft' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, MarginTop) == 0x000034, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::MarginTop' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, CallFunc_Create_ReturnValue) == 0x000038, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, CallFunc_AddChildToGrid_ReturnValue) == 0x000040, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, K2Node_MakeStruct_Margin) == 0x00004C, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, Temp_int_Variable) == 0x00005C, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, CallFunc_Percent_IntInt_ReturnValue) == 0x000060, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, CallFunc_Divide_IntInt_ReturnValue) == 0x000064, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000069, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00006A, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.EmptyGridSlot
// 0x0040 (0x0040 - 0x0000)
struct InventoryFunctionLibrary_C_EmptyGridSlot final
{
public:
	class UGridPanel*                             GridPanel;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotNum;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9598[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9599[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_959A[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_EmptyGridSlot) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_EmptyGridSlot");
static_assert(sizeof(InventoryFunctionLibrary_C_EmptyGridSlot) == 0x000040, "Wrong size on InventoryFunctionLibrary_C_EmptyGridSlot");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, GridPanel) == 0x000000, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::GridPanel' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, SlotNum) == 0x000008, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::SlotNum' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, Temp_int_Variable) == 0x00001C, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000025, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000030, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_EmptyGridSlot, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'InventoryFunctionLibrary_C_EmptyGridSlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetCaptureStudioEnable
// 0x0070 (0x0070 - 0x0000)
struct InventoryFunctionLibrary_C_SetCaptureStudioEnable final
{
public:
	class UUMG_CaptureStudio_C*                   CaptureStudioWeapon;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioCostume;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioImagine;                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioMountImagine;                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_959B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_959C[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_CaptureStudio_C*                   Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   Temp_object_Variable_1;                            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   Temp_object_Variable_2;                            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   Temp_object_Variable_3;                            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_959D[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_CaptureStudio_C*                   K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryFunctionLibrary_C_SetCaptureStudioEnable) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_SetCaptureStudioEnable");
static_assert(sizeof(InventoryFunctionLibrary_C_SetCaptureStudioEnable) == 0x000070, "Wrong size on InventoryFunctionLibrary_C_SetCaptureStudioEnable");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, CaptureStudioWeapon) == 0x000000, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::CaptureStudioWeapon' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, CaptureStudioCostume) == 0x000008, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::CaptureStudioCostume' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, CaptureStudioImagine) == 0x000010, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::CaptureStudioImagine' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, CaptureStudioMountImagine) == 0x000018, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::CaptureStudioMountImagine' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, ItemType) == 0x000020, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::ItemType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, __WorldContext) == 0x000028, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, Result) == 0x000030, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::Result' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, Temp_object_Variable) == 0x000038, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, Temp_object_Variable_1) == 0x000040, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, Temp_object_Variable_2) == 0x000048, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, Temp_object_Variable_3) == 0x000050, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, Temp_byte_Variable) == 0x000058, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, K2Node_Select_Default) == 0x000060, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetCaptureStudioEnable, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'InventoryFunctionLibrary_C_SetCaptureStudioEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Set Item Lock Save
// 0x01E8 (0x01E8 - 0x0000)
struct InventoryFunctionLibrary_C_Set_Item_Lock_Save final
{
public:
	TDelegate<void(bool Result, TArray<struct FSBLockItemData>& LockItemData, int32 InRetCode)> InputPin;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class FString                                 UniqueId;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         StorageNumber;                                     // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     InItemType;                                        // 0x0024(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_959E[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLockItemData                        LockItemData;                                      // 0x0030(0x0020)(Parm, OutParm)
	bool                                          bIsItemLock;                                       // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_959F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                TmpOwnItemListContainer;                           // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TmpUniqueId;                                       // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TmpStorageNumber;                                  // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95A0[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLockItemData>                TmpItemLockData;                                   // 0x0078(0x0010)(Edit, BlueprintVisible)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95A1[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x00A0(0x0118)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95A2[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;               // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLockItemData                        K2Node_MakeStruct_SBLockItemData;                  // 0x01C0(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_Set_Item_Lock_Save) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Set_Item_Lock_Save");
static_assert(sizeof(InventoryFunctionLibrary_C_Set_Item_Lock_Save) == 0x0001E8, "Wrong size on InventoryFunctionLibrary_C_Set_Item_Lock_Save");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, InputPin) == 0x000000, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::InputPin' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, UniqueId) == 0x000010, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::UniqueId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, StorageNumber) == 0x000020, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::StorageNumber' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, InItemType) == 0x000024, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::InItemType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, __WorldContext) == 0x000028, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, LockItemData) == 0x000030, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::LockItemData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, bIsItemLock) == 0x000050, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::bIsItemLock' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, TmpOwnItemListContainer) == 0x000058, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::TmpOwnItemListContainer' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, TmpUniqueId) == 0x000060, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::TmpUniqueId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, TmpStorageNumber) == 0x000070, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::TmpStorageNumber' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, TmpItemLockData) == 0x000078, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::TmpItemLockData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, CallFunc_GetSBPlayerState_ReturnValue) == 0x000088, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, CallFunc_GetStorage_ReturnValue) == 0x000090, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000098, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0000A0, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, CallFunc_Not_PreBool_ReturnValue) == 0x0001B8, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, CallFunc_Conv_BoolToInt_ReturnValue) == 0x0001BC, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, K2Node_MakeStruct_SBLockItemData) == 0x0001C0, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::K2Node_MakeStruct_SBLockItemData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Set_Item_Lock_Save, CallFunc_Array_Add_ReturnValue) == 0x0001E0, "Member 'InventoryFunctionLibrary_C_Set_Item_Lock_Save::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindItemLockDelegate
// 0x0020 (0x0020 - 0x0000)
struct InventoryFunctionLibrary_C_UnbindItemLockDelegate final
{
public:
	TDelegate<void(bool Result, TArray<struct FSBLockItemData>& LockItemData, int32 InRetCode)> Event;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_UnbindItemLockDelegate) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_UnbindItemLockDelegate");
static_assert(sizeof(InventoryFunctionLibrary_C_UnbindItemLockDelegate) == 0x000020, "Wrong size on InventoryFunctionLibrary_C_UnbindItemLockDelegate");
static_assert(offsetof(InventoryFunctionLibrary_C_UnbindItemLockDelegate, Event) == 0x000000, "Member 'InventoryFunctionLibrary_C_UnbindItemLockDelegate::Event' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UnbindItemLockDelegate, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_UnbindItemLockDelegate::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UnbindItemLockDelegate, CallFunc_GetSBPlayerState_ReturnValue) == 0x000018, "Member 'InventoryFunctionLibrary_C_UnbindItemLockDelegate::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UpdateItemLockaVisibility
// 0x0058 (0x0058 - 0x0000)
struct InventoryFunctionLibrary_C_UpdateItemLockaVisibility final
{
public:
	class UGridPanel*                             InventorySlot;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 UniqueId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bIsVisibility;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95A3[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95A4[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95A5[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95A6[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_UpdateItemLockaVisibility");
static_assert(sizeof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility) == 0x000058, "Wrong size on InventoryFunctionLibrary_C_UpdateItemLockaVisibility");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, InventorySlot) == 0x000000, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::InventorySlot' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, UniqueId) == 0x000008, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::UniqueId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, bIsVisibility) == 0x000018, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::bIsVisibility' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, __WorldContext) == 0x000020, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, CallFunc_GetChildrenCount_ReturnValue) == 0x000028, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, Temp_int_Variable) == 0x00002C, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, CallFunc_GetChildAt_ReturnValue) == 0x000038, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000040, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000048, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000051, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UpdateItemLockaVisibility, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'InventoryFunctionLibrary_C_UpdateItemLockaVisibility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.RequestSaveItemDrop
// 0x00B8 (0x00B8 - 0x0000)
struct InventoryFunctionLibrary_C_RequestSaveItemDrop final
{
public:
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> Event;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FInventoryItemData                     InventoryItem;                                     // 0x0010(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         DumpNum;                                           // 0x0070(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95A7[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0078(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0080(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95A8[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData;               // 0x0090(0x0020)()
	bool                                          CallFunc_Request_SaveItemDrop_ReturnValue;         // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryFunctionLibrary_C_RequestSaveItemDrop) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_RequestSaveItemDrop");
static_assert(sizeof(InventoryFunctionLibrary_C_RequestSaveItemDrop) == 0x0000B8, "Wrong size on InventoryFunctionLibrary_C_RequestSaveItemDrop");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemDrop, Event) == 0x000000, "Member 'InventoryFunctionLibrary_C_RequestSaveItemDrop::Event' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemDrop, InventoryItem) == 0x000010, "Member 'InventoryFunctionLibrary_C_RequestSaveItemDrop::InventoryItem' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemDrop, DumpNum) == 0x000070, "Member 'InventoryFunctionLibrary_C_RequestSaveItemDrop::DumpNum' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemDrop, __WorldContext) == 0x000078, "Member 'InventoryFunctionLibrary_C_RequestSaveItemDrop::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemDrop, Success) == 0x000080, "Member 'InventoryFunctionLibrary_C_RequestSaveItemDrop::Success' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemDrop, CallFunc_GetSBPlayerState_ReturnValue) == 0x000088, "Member 'InventoryFunctionLibrary_C_RequestSaveItemDrop::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemDrop, K2Node_MakeStruct_SBStorageItemData) == 0x000090, "Member 'InventoryFunctionLibrary_C_RequestSaveItemDrop::K2Node_MakeStruct_SBStorageItemData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemDrop, CallFunc_Request_SaveItemDrop_ReturnValue) == 0x0000B0, "Member 'InventoryFunctionLibrary_C_RequestSaveItemDrop::CallFunc_Request_SaveItemDrop_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindRequestSaveItemDrop
// 0x0020 (0x0020 - 0x0000)
struct InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop final
{
public:
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> Event;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop");
static_assert(sizeof(InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop) == 0x000020, "Wrong size on InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop");
static_assert(offsetof(InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop, Event) == 0x000000, "Member 'InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop::Event' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop, CallFunc_GetSBPlayerState_ReturnValue) == 0x000018, "Member 'InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.RequestSaveItemMoveToStorage
// 0x00B0 (0x00B0 - 0x0000)
struct InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage final
{
public:
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> Event;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0010(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         StorageNumber;                                     // 0x0070(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95A9[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0078(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStorageItemData                     K2Node_MakeStruct_SBStorageItemData;               // 0x0088(0x0020)()
	bool                                          CallFunc_Request_SaveItemMove_ReturnValue;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage");
static_assert(sizeof(InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage) == 0x0000B0, "Wrong size on InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage, Event) == 0x000000, "Member 'InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage::Event' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage, InventoryItemData) == 0x000010, "Member 'InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage::InventoryItemData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage, StorageNumber) == 0x000070, "Member 'InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage::StorageNumber' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage, __WorldContext) == 0x000078, "Member 'InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage, CallFunc_GetSBPlayerState_ReturnValue) == 0x000080, "Member 'InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage, K2Node_MakeStruct_SBStorageItemData) == 0x000088, "Member 'InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage::K2Node_MakeStruct_SBStorageItemData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage, CallFunc_Request_SaveItemMove_ReturnValue) == 0x0000A8, "Member 'InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage::CallFunc_Request_SaveItemMove_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindSaveItemMoveToStorage
// 0x0020 (0x0020 - 0x0000)
struct InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage final
{
public:
	TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)> Event;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage");
static_assert(sizeof(InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage) == 0x000020, "Wrong size on InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage");
static_assert(offsetof(InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage, Event) == 0x000000, "Member 'InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage::Event' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage, CallFunc_GetSBPlayerState_ReturnValue) == 0x000018, "Member 'InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Add Plus Text
// 0x00F8 (0x00F8 - 0x0000)
struct InventoryFunctionLibrary_C_Add_Plus_Text final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95AA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Return;                                            // 0x0010(0x0018)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95AB[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95AC[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0088(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00E0(0x0018)()
};
static_assert(alignof(InventoryFunctionLibrary_C_Add_Plus_Text) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Add_Plus_Text");
static_assert(sizeof(InventoryFunctionLibrary_C_Add_Plus_Text) == 0x0000F8, "Wrong size on InventoryFunctionLibrary_C_Add_Plus_Text");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, Num) == 0x000000, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::Num' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, Return) == 0x000010, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::Return' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, Temp_bool_Variable) == 0x000028, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, K2Node_MakeArray_Array) == 0x000078, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, CallFunc_Conv_IntToText_ReturnValue) == 0x000088, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A0, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Add_Plus_Text, K2Node_Select_Default) == 0x0000E0, "Member 'InventoryFunctionLibrary_C_Add_Plus_Text::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetImagineSlotNumber
// 0x0100 (0x0100 - 0x0000)
struct InventoryFunctionLibrary_C_GetImagineSlotNumber final
{
public:
	struct FSBMasterImagine                       MasterImagine;                                     // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                __WorldContext;                                    // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Result;                                            // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95AD[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 PosList;                                           // 0x00C0(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x00D0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00D4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00D8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00DC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x00E0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95AE[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetImagineSlotNumber) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetImagineSlotNumber");
static_assert(sizeof(InventoryFunctionLibrary_C_GetImagineSlotNumber) == 0x000100, "Wrong size on InventoryFunctionLibrary_C_GetImagineSlotNumber");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, MasterImagine) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::MasterImagine' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, __WorldContext) == 0x0000B0, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, Result) == 0x0000B8, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::Result' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, PosList) == 0x0000C0, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::PosList' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, Temp_int_Variable) == 0x0000D0, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, Temp_int_Variable_1) == 0x0000D4, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, Temp_int_Variable_2) == 0x0000D8, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, Temp_int_Variable_3) == 0x0000DC, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, Temp_int_Variable_4) == 0x0000E0, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, CallFunc_Array_Length_ReturnValue) == 0x0000E4, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E8, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E9, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, CallFunc_Array_Add_ReturnValue) == 0x0000EC, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, CallFunc_Array_Add_ReturnValue_1) == 0x0000F0, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, CallFunc_Array_Add_ReturnValue_2) == 0x0000F4, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, CallFunc_Array_Add_ReturnValue_3) == 0x0000F8, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetImagineSlotNumber, CallFunc_Array_Add_ReturnValue_4) == 0x0000FC, "Member 'InventoryFunctionLibrary_C_GetImagineSlotNumber::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFindWeaponData
// 0x01F8 (0x01F8 - 0x0000)
struct InventoryFunctionLibrary_C_GetFindWeaponData final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         StorageNumber;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95AF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWeaponItemData                      WeaponData;                                        // 0x0020(0x0050)(Parm, OutParm)
	struct FSBWeaponItemData                      K2Node_MakeStruct_SBWeaponItemData;                // 0x0070(0x0050)()
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95B0[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95B1[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x00E0(0x0118)(ConstParm)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetFindWeaponData) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetFindWeaponData");
static_assert(sizeof(InventoryFunctionLibrary_C_GetFindWeaponData) == 0x0001F8, "Wrong size on InventoryFunctionLibrary_C_GetFindWeaponData");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, UniqueId) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::UniqueId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, StorageNumber) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::StorageNumber' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, __WorldContext) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, WeaponData) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::WeaponData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, K2Node_MakeStruct_SBWeaponItemData) == 0x000070, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::K2Node_MakeStruct_SBWeaponItemData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, CallFunc_GetNetworkDataCache_IsValid) == 0x0000C0, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000C8, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, CallFunc_GetStorage_ReturnValue) == 0x0000D0, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0000D9, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFindWeaponData, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0000E0, "Member 'InventoryFunctionLibrary_C_GetFindWeaponData::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetWeaponStatusText
// 0x0230 (0x0230 - 0x0000)
struct InventoryFunctionLibrary_C_SetWeaponStatusText final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InLevel;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Ap;                                                // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Cp;                                                // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             STR;                                               // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             VIT;                                               // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             DEX;                                               // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             INT;                                               // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             MND;                                               // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Attribute;                                         // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Special;                                           // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95B2[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelStatus_ReturnValue;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95B3[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00C8(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95B4[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00E8(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBWeaponStatus                               Temp_byte_Variable;                                // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95B5[0x5];                                     // 0x0103(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             K2Node_Select_Default;                             // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95B6[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95B7[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0158(0x0018)()
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95B8[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0178(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95B9[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x0198(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01B0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0200(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x0218(0x0018)()
};
static_assert(alignof(InventoryFunctionLibrary_C_SetWeaponStatusText) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_SetWeaponStatusText");
static_assert(sizeof(InventoryFunctionLibrary_C_SetWeaponStatusText) == 0x000230, "Wrong size on InventoryFunctionLibrary_C_SetWeaponStatusText");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, InWeaponID) == 0x000000, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::InWeaponID' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, InLevel) == 0x000004, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::InLevel' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, Ap) == 0x000008, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::Ap' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, Cp) == 0x000010, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::Cp' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, STR) == 0x000018, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::STR' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, VIT) == 0x000020, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::VIT' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, DEX) == 0x000028, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::DEX' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, INT) == 0x000030, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::INT' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, MND) == 0x000038, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::MND' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, Attribute) == 0x000040, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::Attribute' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, Special) == 0x000048, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::Special' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, __WorldContext) == 0x000050, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, Temp_int_Variable) == 0x000058, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, Temp_int_Variable_1) == 0x00005C, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Conv_IntToByte_ReturnValue) == 0x000060, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_GetValidValue_ReturnValue) == 0x000068, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000069, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00006A, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00006B, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_GetLevelStatus_ReturnValue) == 0x00006C, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_GetLevelStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000070, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, K2Node_MakeArray_Array) == 0x0000B8, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Conv_IntToText_ReturnValue) == 0x0000C8, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Less_IntInt_ReturnValue) == 0x0000E0, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000E8, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, K2Node_SwitchEnum_CmpSuccess) == 0x000100, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, Temp_bool_Variable) == 0x000101, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, Temp_byte_Variable) == 0x000102, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, K2Node_Select_Default) == 0x000108, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000110, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_IsValid_ReturnValue) == 0x000120, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, Temp_bool_Variable_1) == 0x000140, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000148, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000158, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_MakeLiteralInt_ReturnValue) == 0x000170, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Format_ReturnValue) == 0x000178, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Less_IntInt_ReturnValue_1) == 0x000190, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, K2Node_Select_Default_1) == 0x000198, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001B0, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, K2Node_MakeArray_Array_1) == 0x0001F0, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, CallFunc_Format_ReturnValue_1) == 0x000200, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusText, K2Node_Select_Default_2) == 0x000218, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusText::K2Node_Select_Default_2' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetSpecialEffectText
// 0x0140 (0x0140 - 0x0000)
struct InventoryFunctionLibrary_C_SetSpecialEffectText final
{
public:
	int32                                         WeaponID;                                          // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpecialParkID;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpecialPerkValue;                                  // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SpecialName;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   SpecialValue;                                      // 0x0028(0x0018)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95BA[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95BB[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x0054(0x0024)(NoDestructor)
	bool                                          CallFunc_GetAbilityMasterDataByEffectId_IsExists;  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95BC[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_GetAbilityMasterDataByEffectId_ReturnValue; // 0x0080(0x0048)()
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95BD[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelStatus_ReturnValue;               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95BE[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
};
static_assert(alignof(InventoryFunctionLibrary_C_SetSpecialEffectText) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_SetSpecialEffectText");
static_assert(sizeof(InventoryFunctionLibrary_C_SetSpecialEffectText) == 0x000140, "Wrong size on InventoryFunctionLibrary_C_SetSpecialEffectText");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, WeaponID) == 0x000000, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::WeaponID' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, Level) == 0x000004, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::Level' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, SpecialParkID) == 0x000008, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::SpecialParkID' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, SpecialPerkValue) == 0x00000C, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::SpecialPerkValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, SpecialName) == 0x000018, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::SpecialName' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, SpecialValue) == 0x000028, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::SpecialValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_GetMasterDataManager_IsValid) == 0x000040, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_GetMasterDataManager_ReturnValue) == 0x000048, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000050, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x000051, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x000054, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_GetAbilityMasterDataByEffectId_IsExists) == 0x000078, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_GetAbilityMasterDataByEffectId_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_GetAbilityMasterDataByEffectId_ReturnValue) == 0x000080, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_GetAbilityMasterDataByEffectId_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0000C8, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_BooleanAND_ReturnValue) == 0x0000D8, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_GetLevelStatus_ReturnValue) == 0x0000DC, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_GetLevelStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_Add_IntInt_ReturnValue) == 0x0000E0, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000E8, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_Conv_IntToString_ReturnValue) == 0x0000F8, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_Concat_StrStr_ReturnValue) == 0x000108, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000118, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSpecialEffectText, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'InventoryFunctionLibrary_C_SetSpecialEffectText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Item Player Sale Price 
// 0x0308 (0x0308 - 0x0000)
struct InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_ final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUseLiquidMemory;                                 // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95BF[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Price;                                             // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalPrice;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemNotSale_NotSale;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95C0[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSellItemUpRate_Rare;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95C1[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95C2[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95C3[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0050(0x00B0)()
	bool                                          CallFunc_FindMasterOrnamentDataBP_bExists;         // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95C4[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterOrnament                      CallFunc_FindMasterOrnamentDataBP_ReturnValue;     // 0x0108(0x0060)()
	bool                                          CallFunc_GetMasterDataManager_IsValid_2;           // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95C5[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_2;       // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponManager_IsValid;                 // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95C6[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWeaponManager*                       CallFunc_GetWeaponManager_ReturnValue;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95C7[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0190(0x0088)()
	int32                                         CallFunc_GetWeaponPricePlayerSells_ReturnValue;    // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_3;           // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95C8[0x3];                                     // 0x021D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_3;       // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95C9[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0230(0x00D0)()
	int32                                         K2Node_Select_Default;                             // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_");
static_assert(sizeof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_) == 0x000308, "Wrong size on InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, ItemIndex) == 0x000000, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::ItemIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, ItemType) == 0x000004, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::ItemType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, IsUseLiquidMemory) == 0x000005, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::IsUseLiquidMemory' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, Price) == 0x000010, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::Price' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, LocalPrice) == 0x000014, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::LocalPrice' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, Temp_int_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_IsItemNotSale_NotSale) == 0x00001C, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_IsItemNotSale_NotSale' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetSellItemUpRate_Rare) == 0x000020, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetSellItemUpRate_Rare' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000024, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_FTrunc_ReturnValue) == 0x000028, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, Temp_byte_Variable) == 0x00002C, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetMasterDataManager_IsValid) == 0x00002D, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetMasterDataManager_IsValid_1) == 0x000038, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000040, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_FindMasterImagineData_IsExists) == 0x000048, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_FindMasterImagineData_ReturnValue) == 0x000050, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_FindMasterOrnamentDataBP_bExists) == 0x000100, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_FindMasterOrnamentDataBP_bExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_FindMasterOrnamentDataBP_ReturnValue) == 0x000108, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_FindMasterOrnamentDataBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetMasterDataManager_IsValid_2) == 0x000168, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetMasterDataManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetMasterDataManager_ReturnValue_2) == 0x000170, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetMasterDataManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetWeaponManager_IsValid) == 0x000178, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetWeaponManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetWeaponManager_ReturnValue) == 0x000180, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetWeaponManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000188, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000190, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetWeaponPricePlayerSells_ReturnValue) == 0x000218, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetWeaponPricePlayerSells_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetMasterDataManager_IsValid_3) == 0x00021C, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetMasterDataManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetMasterDataManager_ReturnValue_3) == 0x000220, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetMasterDataManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetItemMasterData_IsExists) == 0x000228, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, CallFunc_GetItemMasterData_ReturnValue) == 0x000230, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_, K2Node_Select_Default) == 0x000300, "Member 'InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.ItemSortTypeToStorageSortRule
// 0x0030 (0x0030 - 0x0000)
struct InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule final
{
public:
	ESBItemSortType                               ItemSortType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95CA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         StorageSortRule;                                   // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_2;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_3;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_4;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_5;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_6;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_7;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_8;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_9;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_10;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_11;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_12;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_13;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_14;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_15;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_16;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_17;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_18;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_19;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_20;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_21;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_22;                             // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_23;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_24;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_25;                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_26;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_27;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable_28;                             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         K2Node_Select_Default;                             // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule");
static_assert(sizeof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule) == 0x000030, "Wrong size on InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, ItemSortType) == 0x000000, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::ItemSortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, StorageSortRule) == 0x000010, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::StorageSortRule' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable) == 0x000011, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_1) == 0x000012, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_2) == 0x000013, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_3) == 0x000014, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_4) == 0x000015, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_5) == 0x000016, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_6) == 0x000017, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_7) == 0x000018, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_8) == 0x000019, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_9) == 0x00001A, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_10) == 0x00001B, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_11) == 0x00001C, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_12) == 0x00001D, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_13) == 0x00001E, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_14) == 0x00001F, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_15) == 0x000020, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_16) == 0x000021, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_17) == 0x000022, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_18) == 0x000023, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_19) == 0x000024, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_20) == 0x000025, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_21) == 0x000026, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_22) == 0x000027, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_23) == 0x000028, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_24) == 0x000029, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_25) == 0x00002A, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_26) == 0x00002B, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_27) == 0x00002C, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_27' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, Temp_byte_Variable_28) == 0x00002D, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::Temp_byte_Variable_28' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule, K2Node_Select_Default) == 0x00002E, "Member 'InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.StorageSortRuleToItemSortType
// 0x0020 (0x0020 - 0x0000)
struct InventoryFunctionLibrary_C_StorageSortRuleToItemSortType final
{
public:
	uint8                                         StorageSortRule;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95CB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               ItemSortType;                                      // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_2;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_3;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_4;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_5;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_6;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_7;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_8;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_9;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_10;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_StorageSortRuleToItemSortType");
static_assert(sizeof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType) == 0x000020, "Wrong size on InventoryFunctionLibrary_C_StorageSortRuleToItemSortType");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, StorageSortRule) == 0x000000, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::StorageSortRule' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, ItemSortType) == 0x000010, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::ItemSortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable) == 0x000011, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable_1) == 0x000012, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable_2) == 0x000013, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable_3) == 0x000014, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable_4) == 0x000015, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable_5) == 0x000016, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable_6) == 0x000017, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable_7) == 0x000018, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable_8) == 0x000019, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable_9) == 0x00001A, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, Temp_byte_Variable_10) == 0x00001B, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_StorageSortRuleToItemSortType, K2Node_Select_Default) == 0x00001C, "Member 'InventoryFunctionLibrary_C_StorageSortRuleToItemSortType::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Is Lock Item
// 0x0028 (0x0028 - 0x0000)
struct InventoryFunctionLibrary_C_Is_Lock_Item final
{
public:
	class FString                                 InItemUniqueId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         StorageNumber;                                     // 0x0010(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95CC[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLock;                                             // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue;    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue;  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryFunctionLibrary_C_Is_Lock_Item) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Is_Lock_Item");
static_assert(sizeof(InventoryFunctionLibrary_C_Is_Lock_Item) == 0x000028, "Wrong size on InventoryFunctionLibrary_C_Is_Lock_Item");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_Lock_Item, InItemUniqueId) == 0x000000, "Member 'InventoryFunctionLibrary_C_Is_Lock_Item::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_Lock_Item, StorageNumber) == 0x000010, "Member 'InventoryFunctionLibrary_C_Is_Lock_Item::StorageNumber' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_Lock_Item, __WorldContext) == 0x000018, "Member 'InventoryFunctionLibrary_C_Is_Lock_Item::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_Lock_Item, bLock) == 0x000020, "Member 'InventoryFunctionLibrary_C_Is_Lock_Item::bLock' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_Lock_Item, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x000021, "Member 'InventoryFunctionLibrary_C_Is_Lock_Item::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_Lock_Item, CallFunc_isStorageItemLockedSimple_ReturnValue) == 0x000022, "Member 'InventoryFunctionLibrary_C_Is_Lock_Item::CallFunc_isStorageItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_Lock_Item, CallFunc_isInventoryItemLockedSimple_ReturnValue) == 0x000023, "Member 'InventoryFunctionLibrary_C_Is_Lock_Item::CallFunc_isInventoryItemLockedSimple_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Use Item Window Type
// 0x0238 (0x0238 - 0x0000)
struct InventoryFunctionLibrary_C_Get_Use_Item_Window_Type final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95CD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUseItemWindowType                            WindowType;                                        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95CE[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Valu;                                              // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Time;                                              // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemEfficacyType                             ItemEfficacyType;                                  // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95CF[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemEfficacy                          ItemEfficacyMasterData;                            // 0x0020(0x0048)(Edit, BlueprintVisible)
	struct FItemMasterData                        ItemMasterData;                                    // 0x0068(0x00D0)(Edit, BlueprintVisible)
	int32                                         TmpItemIndex;                                      // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x013E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x013F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95D0[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0150(0x00D0)()
	bool                                          CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker; // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95D1[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppearanceWeaponSticker               CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo; // 0x0224(0x0010)(NoDestructor)
};
static_assert(alignof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Get_Use_Item_Window_Type");
static_assert(sizeof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type) == 0x000238, "Wrong size on InventoryFunctionLibrary_C_Get_Use_Item_Window_Type");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, ItemIndex) == 0x000000, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::ItemIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, WindowType) == 0x000010, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::WindowType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, Valu) == 0x000014, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::Valu' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, Time) == 0x000018, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::Time' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, ItemEfficacyType) == 0x00001C, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::ItemEfficacyType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, ItemEfficacyMasterData) == 0x000020, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::ItemEfficacyMasterData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, ItemMasterData) == 0x000068, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::ItemMasterData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, TmpItemIndex) == 0x000138, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::TmpItemIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00013C, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00013D, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00013E, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, CallFunc_GetMasterDataManager_IsValid) == 0x00013F, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, CallFunc_GetMasterDataManager_ReturnValue) == 0x000140, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, CallFunc_GetItemMasterData_IsExists) == 0x000148, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, CallFunc_GetItemMasterData_ReturnValue) == 0x000150, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker) == 0x000220, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Use_Item_Window_Type, CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo) == 0x000224, "Member 'InventoryFunctionLibrary_C_Get_Use_Item_Window_Type::CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Imagine Park Data
// 0x00E0 (0x00E0 - 0x0000)
struct InventoryFunctionLibrary_C_Get_Imagine_Park_Data final
{
public:
	int32                                         PerkId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95D2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95D3[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ParkName;                                          // 0x0018(0x0018)(Parm, OutParm)
	class FText                                   Effect_Value;                                      // 0x0030(0x0018)(Parm, OutParm)
	struct FSBAbilityEffectMasterData             LocalAbilityEffectMaster;                          // 0x0048(0x0024)(Edit, BlueprintVisible, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95D4[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetAbilityEffectMasterData_IsExists;   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95D5[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_BP_GetAbilityEffectMasterData_ReturnValue; // 0x007C(0x0024)(NoDestructor)
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Add_Plus_Text_Return;                     // 0x00B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
};
static_assert(alignof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Get_Imagine_Park_Data");
static_assert(sizeof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data) == 0x0000E0, "Wrong size on InventoryFunctionLibrary_C_Get_Imagine_Park_Data");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, PerkId) == 0x000000, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::PerkId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, Result) == 0x000010, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::Result' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, ParkName) == 0x000018, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::ParkName' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, Effect_Value) == 0x000030, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::Effect_Value' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, LocalAbilityEffectMaster) == 0x000048, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::LocalAbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, CallFunc_GetMasterDataManager_IsValid) == 0x00006C, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, CallFunc_BP_GetAbilityEffectMasterData_IsExists) == 0x000078, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::CallFunc_BP_GetAbilityEffectMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, CallFunc_BP_GetAbilityEffectMasterData_ReturnValue) == 0x00007C, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::CallFunc_BP_GetAbilityEffectMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, CallFunc_GetWeaponPerkText_ReturnValue) == 0x0000A0, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, CallFunc_Add_Plus_Text_Return) == 0x0000B0, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::CallFunc_Add_Plus_Text_Return' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Imagine_Park_Data, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'InventoryFunctionLibrary_C_Get_Imagine_Park_Data::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSellItemUpRate
// 0x00D0 (0x00D0 - 0x0000)
struct InventoryFunctionLibrary_C_GetSellItemUpRate final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rare;                                              // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalReta;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95D6[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95D7[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            CallFunc_GetLiquidMemoryInfos_ReturnValue;         // 0x0028(0x0010)(ConstParm, ReferenceParm)
	struct FSBLiquidMemoryInfo                    CallFunc_Array_Get_Item;                           // 0x0038(0x0028)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95D8[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BP_GetLiquidMemoryEfficacyValue_ReturnValue; // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindLiquidMemoryMaster_IsExists;       // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95D9[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              CallFunc_BP_FindLiquidMemoryMaster_ReturnValue;    // 0x0080(0x0038)()
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95DA[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetSellItemUpRate) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetSellItemUpRate");
static_assert(sizeof(InventoryFunctionLibrary_C_GetSellItemUpRate) == 0x0000D0, "Wrong size on InventoryFunctionLibrary_C_GetSellItemUpRate");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, __WorldContext) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, Rare) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::Rare' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, LocalReta) == 0x00000C, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::LocalReta' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_GetClassLevel_ReturnValue) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_GetNetworkDataCache_IsValid) == 0x000014, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, Temp_int_Array_Index_Variable) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_GetLiquidMemoryInfos_ReturnValue) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_GetLiquidMemoryInfos_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_Array_Get_Item) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_GetMasterDataManager_IsValid) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_BP_GetLiquidMemoryEfficacyValue_ReturnValue) == 0x000078, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_BP_GetLiquidMemoryEfficacyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_BP_FindLiquidMemoryMaster_IsExists) == 0x00007C, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_BP_FindLiquidMemoryMaster_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_BP_FindLiquidMemoryMaster_ReturnValue) == 0x000080, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_BP_FindLiquidMemoryMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000B8, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000BC, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C0, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000C1, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_Less_IntInt_ReturnValue) == 0x0000C2, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_BooleanAND_ReturnValue) == 0x0000C3, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C4, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSellItemUpRate, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'InventoryFunctionLibrary_C_GetSellItemUpRate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsUsedItem
// 0x0150 (0x0150 - 0x0000)
struct InventoryFunctionLibrary_C_IsUsedItem final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0010(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95DB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUse;                                              // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95DC[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95DD[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0038(0x0118)(ConstParm)
};
static_assert(alignof(InventoryFunctionLibrary_C_IsUsedItem) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_IsUsedItem");
static_assert(sizeof(InventoryFunctionLibrary_C_IsUsedItem) == 0x000150, "Wrong size on InventoryFunctionLibrary_C_IsUsedItem");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUsedItem, InUniqueId) == 0x000000, "Member 'InventoryFunctionLibrary_C_IsUsedItem::InUniqueId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUsedItem, InStorageNumber) == 0x000010, "Member 'InventoryFunctionLibrary_C_IsUsedItem::InStorageNumber' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUsedItem, __WorldContext) == 0x000018, "Member 'InventoryFunctionLibrary_C_IsUsedItem::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUsedItem, bUse) == 0x000020, "Member 'InventoryFunctionLibrary_C_IsUsedItem::bUse' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUsedItem, CallFunc_GetStorage_ReturnValue) == 0x000028, "Member 'InventoryFunctionLibrary_C_IsUsedItem::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUsedItem, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000030, "Member 'InventoryFunctionLibrary_C_IsUsedItem::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUsedItem, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000038, "Member 'InventoryFunctionLibrary_C_IsUsedItem::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Is BPPChange Item
// 0x0040 (0x0040 - 0x0000)
struct InventoryFunctionLibrary_C_Is_BPPChange_Item final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     InItemType;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95DE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bChange;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             CallFunc_ItemTypeToRewardItemType_Out_RewardItemType; // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95DF[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95E0[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBBPPtExchangeMasterData              CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue; // 0x0024(0x0018)(NoDestructor)
};
static_assert(alignof(InventoryFunctionLibrary_C_Is_BPPChange_Item) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Is_BPPChange_Item");
static_assert(sizeof(InventoryFunctionLibrary_C_Is_BPPChange_Item) == 0x000040, "Wrong size on InventoryFunctionLibrary_C_Is_BPPChange_Item");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_BPPChange_Item, ItemId) == 0x000000, "Member 'InventoryFunctionLibrary_C_Is_BPPChange_Item::ItemId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_BPPChange_Item, InItemType) == 0x000004, "Member 'InventoryFunctionLibrary_C_Is_BPPChange_Item::InItemType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_BPPChange_Item, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Is_BPPChange_Item::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_BPPChange_Item, bChange) == 0x000010, "Member 'InventoryFunctionLibrary_C_Is_BPPChange_Item::bChange' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_BPPChange_Item, CallFunc_ItemTypeToRewardItemType_Out_RewardItemType) == 0x000011, "Member 'InventoryFunctionLibrary_C_Is_BPPChange_Item::CallFunc_ItemTypeToRewardItemType_Out_RewardItemType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_BPPChange_Item, CallFunc_GetMasterDataManager_IsValid) == 0x000012, "Member 'InventoryFunctionLibrary_C_Is_BPPChange_Item::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_BPPChange_Item, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'InventoryFunctionLibrary_C_Is_BPPChange_Item::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_BPPChange_Item, CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists) == 0x000020, "Member 'InventoryFunctionLibrary_C_Is_BPPChange_Item::CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Is_BPPChange_Item, CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue) == 0x000024, "Member 'InventoryFunctionLibrary_C_Is_BPPChange_Item::CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsUseCheckOutBuffItem
// 0x0310 (0x0310 - 0x0000)
struct InventoryFunctionLibrary_C_IsUseCheckOutBuffItem final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95E1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NeedToCheck;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95E2[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemMasterData                        TargetMasterData;                                  // 0x0020(0x00D0)(Edit, BlueprintVisible)
	TArray<struct FSBActiveItemData>              ActiveItems;                                       // 0x00F0(0x0010)(Edit, BlueprintVisible)
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95E3[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBActiveItemData>              CallFunc_GetActiveItems_BP_ReturnValue;            // 0x0110(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95E4[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBActiveItemData                      CallFunc_Array_Get_Item;                           // 0x0128(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95E5[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOutGameBuffType                              CallFunc_GetBuffType_ReturnValue;                  // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95E6[0x2];                                     // 0x0156(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0158(0x00D0)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists_1;             // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95E7[0x5];                                     // 0x022B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue_1;          // 0x0230(0x00D0)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95E8[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_IsUseCheckOutBuffItem");
static_assert(sizeof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem) == 0x000310, "Wrong size on InventoryFunctionLibrary_C_IsUseCheckOutBuffItem");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, ItemId) == 0x000000, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::ItemId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, NeedToCheck) == 0x000010, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::NeedToCheck' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, MasterDataManager) == 0x000018, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::MasterDataManager' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, TargetMasterData) == 0x000020, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::TargetMasterData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, ActiveItems) == 0x0000F0, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::ActiveItems' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000100, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, Temp_int_Array_Index_Variable) == 0x000108, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_GetActiveItems_BP_ReturnValue) == 0x000110, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_GetActiveItems_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, Temp_int_Loop_Counter_Variable) == 0x000120, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_Array_Get_Item) == 0x000128, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_Less_IntInt_ReturnValue) == 0x00014C, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_Add_IntInt_ReturnValue) == 0x000150, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_GetBuffType_ReturnValue) == 0x000154, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_GetBuffType_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_GetItemMasterData_IsExists) == 0x000155, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_GetItemMasterData_ReturnValue) == 0x000158, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000228, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000229, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_GetItemMasterData_IsExists_1) == 0x00022A, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_GetItemMasterData_IsExists_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_GetItemMasterData_ReturnValue_1) == 0x000230, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_GetItemMasterData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_GetMasterDataManager_IsValid) == 0x000300, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsUseCheckOutBuffItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000308, "Member 'InventoryFunctionLibrary_C_IsUseCheckOutBuffItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CheckAllowUseOtherItem
// 0x02F8 (0x02F8 - 0x0000)
struct InventoryFunctionLibrary_C_CheckAllowUseOtherItem final
{
public:
	struct FItemMasterData                        TargetMasterData1;                                 // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                __WorldContext;                                    // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanUseItem;                                        // 0x00D8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95E9[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemMasterData                        TargetMasterData;                                  // 0x00E8(0x00D0)(Edit, BlueprintVisible)
	TArray<struct FSBActiveItemData>              ActiveItems;                                       // 0x01B8(0x0010)(Edit, BlueprintVisible)
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBActiveItemData>              CallFunc_GetActiveItems_BP_ReturnValue;            // 0x01D0(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95EA[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBActiveItemData                      CallFunc_Array_Get_Item;                           // 0x01F0(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95EB[0x3];                                     // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95EC[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0228(0x00D0)()
};
static_assert(alignof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_CheckAllowUseOtherItem");
static_assert(sizeof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem) == 0x0002F8, "Wrong size on InventoryFunctionLibrary_C_CheckAllowUseOtherItem");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, TargetMasterData1) == 0x000000, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::TargetMasterData1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, __WorldContext) == 0x0000D0, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CanUseItem) == 0x0000D8, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CanUseItem' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, MasterDataManager) == 0x0000E0, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::MasterDataManager' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, TargetMasterData) == 0x0000E8, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::TargetMasterData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, ActiveItems) == 0x0001B8, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::ActiveItems' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x0001C8, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CallFunc_GetActiveItems_BP_ReturnValue) == 0x0001D0, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CallFunc_GetActiveItems_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, Temp_int_Array_Index_Variable) == 0x0001E0, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CallFunc_GetMasterDataManager_IsValid) == 0x0001E4, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001E8, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CallFunc_Array_Get_Item) == 0x0001F0, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CallFunc_Array_Length_ReturnValue) == 0x000210, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, Temp_int_Loop_Counter_Variable) == 0x000214, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CallFunc_Less_IntInt_ReturnValue) == 0x000218, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CallFunc_Add_IntInt_ReturnValue) == 0x00021C, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CallFunc_GetItemMasterData_IsExists) == 0x000220, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CheckAllowUseOtherItem, CallFunc_GetItemMasterData_ReturnValue) == 0x000228, "Member 'InventoryFunctionLibrary_C_CheckAllowUseOtherItem::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CreateDelayAddGridItemIconBtn
// 0x0078 (0x0078 - 0x0000)
struct InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn final
{
public:
	class UGridPanel*                             ParentGridPanel;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CreateNum;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MatricesNam;                                       // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MagineintervalTop;                                 // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MagineintervalLeft;                                // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsImagineSimpleTooltip;                            // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsToolTipEnable;                                   // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsRightClickAccept;                               // 0x001A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95ED[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginLeft;                                        // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginTop;                                         // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_DelayCreateItemIconBtn_C*          CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95EE[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95EF[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn");
static_assert(sizeof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn) == 0x000078, "Wrong size on InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, ParentGridPanel) == 0x000000, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::ParentGridPanel' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CreateNum) == 0x000008, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CreateNum' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, MatricesNam) == 0x00000C, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::MatricesNam' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, MagineintervalTop) == 0x000010, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::MagineintervalTop' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, MagineintervalLeft) == 0x000014, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::MagineintervalLeft' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, IsImagineSimpleTooltip) == 0x000018, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::IsImagineSimpleTooltip' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, IsToolTipEnable) == 0x000019, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::IsToolTipEnable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, bIsRightClickAccept) == 0x00001A, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::bIsRightClickAccept' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, __WorldContext) == 0x000020, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, MarginLeft) == 0x000028, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::MarginLeft' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, MarginTop) == 0x00002C, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::MarginTop' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_Create_ReturnValue) == 0x000030, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, K2Node_MakeStruct_Margin) == 0x00003C, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, Temp_int_Variable) == 0x00004C, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_Percent_IntInt_ReturnValue) == 0x000054, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000058, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_Divide_IntInt_ReturnValue) == 0x00005C, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_AddChildToGrid_ReturnValue) == 0x000060, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00006C, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000070, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000074, "Member 'InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsItemNotSale
// 0x0250 (0x0250 - 0x0000)
struct InventoryFunctionLibrary_C_IsItemNotSale final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95F0[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NotSale;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95F1[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_Index;                                       // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95F2[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95F3[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0030(0x00D0)()
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95F4[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95F5[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x0118(0x0070)()
	bool                                          CallFunc_GetMasterDataManager_IsValid_2;           // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95F6[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_2;       // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95F7[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x01A0(0x00B0)()
};
static_assert(alignof(InventoryFunctionLibrary_C_IsItemNotSale) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_IsItemNotSale");
static_assert(sizeof(InventoryFunctionLibrary_C_IsItemNotSale) == 0x000250, "Wrong size on InventoryFunctionLibrary_C_IsItemNotSale");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, ItemIndex) == 0x000000, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::ItemIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, ItemType) == 0x000004, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::ItemType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, NotSale) == 0x000010, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::NotSale' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, Param_Index) == 0x000014, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_GetMasterDataManager_IsValid) == 0x000019, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_GetItemMasterData_IsExists) == 0x000028, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_GetItemMasterData_ReturnValue) == 0x000030, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_GetMasterDataManager_IsValid_1) == 0x000100, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000108, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x000110, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x000118, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_GetMasterDataManager_IsValid_2) == 0x000188, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_GetMasterDataManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_GetMasterDataManager_ReturnValue_2) == 0x000190, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_GetMasterDataManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_FindMasterImagineData_IsExists) == 0x000198, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsItemNotSale, CallFunc_FindMasterImagineData_ReturnValue) == 0x0001A0, "Member 'InventoryFunctionLibrary_C_IsItemNotSale::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CollapsedGridSlot
// 0x0040 (0x0040 - 0x0000)
struct InventoryFunctionLibrary_C_CollapsedGridSlot final
{
public:
	class UGridPanel*                             GridPanel;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95F8[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95F9[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95FA[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_CollapsedGridSlot) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_CollapsedGridSlot");
static_assert(sizeof(InventoryFunctionLibrary_C_CollapsedGridSlot) == 0x000040, "Wrong size on InventoryFunctionLibrary_C_CollapsedGridSlot");
static_assert(offsetof(InventoryFunctionLibrary_C_CollapsedGridSlot, GridPanel) == 0x000000, "Member 'InventoryFunctionLibrary_C_CollapsedGridSlot::GridPanel' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CollapsedGridSlot, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_CollapsedGridSlot::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CollapsedGridSlot, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'InventoryFunctionLibrary_C_CollapsedGridSlot::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CollapsedGridSlot, Temp_int_Variable) == 0x000014, "Member 'InventoryFunctionLibrary_C_CollapsedGridSlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CollapsedGridSlot, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'InventoryFunctionLibrary_C_CollapsedGridSlot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CollapsedGridSlot, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'InventoryFunctionLibrary_C_CollapsedGridSlot::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CollapsedGridSlot, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'InventoryFunctionLibrary_C_CollapsedGridSlot::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CollapsedGridSlot, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000030, "Member 'InventoryFunctionLibrary_C_CollapsedGridSlot::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CollapsedGridSlot, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'InventoryFunctionLibrary_C_CollapsedGridSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CollapsedGridSlot, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'InventoryFunctionLibrary_C_CollapsedGridSlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.FindWeaponDataInEquipmentBagOrCharacterStorage
// 0x02F0 (0x02F0 - 0x0000)
struct InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage final
{
public:
	class FString                                 InWeaponUniqueId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95FB[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      WeaponData;                                        // 0x0020(0x0050)(Parm, OutParm)
	class FString                                 LocalUniqueId;                                     // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95FC[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95FD[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95FE[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x00B8(0x0118)(ConstParm)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95FF[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x01D8(0x0118)(ConstParm)
};
static_assert(alignof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage");
static_assert(sizeof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage) == 0x0002F0, "Wrong size on InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, InWeaponUniqueId) == 0x000000, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, IsValid) == 0x000018, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, WeaponData) == 0x000020, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::WeaponData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, LocalUniqueId) == 0x000070, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_GetNetworkDataCache_IsValid) == 0x000080, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000088, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_GetNetworkDataCache_IsValid_1) == 0x000090, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000098, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_GetCharacterStorage_ReturnValue) == 0x0000A0, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_GetEquipmentBag_ReturnValue) == 0x0000A8, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_IsValid_ReturnValue_1) == 0x0000B1, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0000B2, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0000B8, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x0001D0, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x0001D8, "Member 'InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetWeaponStickerRemoveItemName
// 0x0100 (0x0100 - 0x0000)
struct InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutItemName;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9600[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0020(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName");
static_assert(sizeof(InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName) == 0x000100, "Wrong size on InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName");
static_assert(offsetof(InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName, __WorldContext) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName, OutItemName) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName::OutItemName' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName, CallFunc_FindItemMaster_bIsValid) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName, CallFunc_FindItemMaster_ItemMaster) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName, CallFunc_GetItemText_ReturnValue) == 0x0000F0, "Member 'InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName::CallFunc_GetItemText_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Item
// 0x0020 (0x0020 - 0x0000)
struct InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9601[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9602[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_2;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_3;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_4;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item");
static_assert(sizeof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item) == 0x000020, "Wrong size on InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item, SelectIndex) == 0x000000, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item::SelectIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item, SortType) == 0x000010, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item, Temp_int_Variable) == 0x000014, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item, Temp_byte_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item, Temp_byte_Variable_1) == 0x000019, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item, Temp_byte_Variable_2) == 0x00001A, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item, Temp_byte_Variable_3) == 0x00001B, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item, Temp_byte_Variable_4) == 0x00001C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item, K2Node_Select_Default) == 0x00001D, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Plug
// 0x0020 (0x0020 - 0x0000)
struct InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9603[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9604[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_2;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_3;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_4;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug");
static_assert(sizeof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug) == 0x000020, "Wrong size on InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug, SelectIndex) == 0x000000, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug::SelectIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug, SortType) == 0x000010, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug, Temp_int_Variable) == 0x000014, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug, Temp_byte_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug, Temp_byte_Variable_1) == 0x000019, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug, Temp_byte_Variable_2) == 0x00001A, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug, Temp_byte_Variable_3) == 0x00001B, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug, Temp_byte_Variable_4) == 0x00001C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug, K2Node_Select_Default) == 0x00001D, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortRuleNoLv
// 0x0030 (0x0030 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortRuleNoLv final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9605[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9606[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_2;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_3;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_4;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9607[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_5;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_6;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_7;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               K2Node_Select_Default_1;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default_2;                           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortRuleNoLv");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv) == 0x000030, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortRuleNoLv");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, SelectIndex) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::SelectIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, SortType) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_int_Variable) == 0x000014, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_byte_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_byte_Variable_1) == 0x000019, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_byte_Variable_2) == 0x00001A, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_byte_Variable_3) == 0x00001B, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_byte_Variable_4) == 0x00001C, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_bool_Variable) == 0x00001D, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, K2Node_Select_Default) == 0x00001E, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_int_Variable_1) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_byte_Variable_5) == 0x000024, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_byte_Variable_6) == 0x000025, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, Temp_byte_Variable_7) == 0x000026, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, CallFunc_ValidStackB_ReturnValue) == 0x000027, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, K2Node_Select_Default_1) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortRuleNoLv, K2Node_Select_Default_2) == 0x000029, "Member 'InventoryFunctionLibrary_C_GetInventorySortRuleNoLv::K2Node_Select_Default_2' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Equipment
// 0x0030 (0x0030 - 0x0000)
struct InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9608[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9609[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_2;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_3;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_4;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_960A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_5;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_6;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_7;                              // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_8;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_9;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_10;                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_11;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               K2Node_Select_Default_1;                           // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default_2;                           // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment");
static_assert(sizeof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment) == 0x000030, "Wrong size on InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, SelectIndex) == 0x000000, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::SelectIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, SortType) == 0x000010, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_bool_Variable) == 0x000011, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_int_Variable) == 0x000014, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_1) == 0x000019, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_2) == 0x00001A, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_3) == 0x00001B, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_4) == 0x00001C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_int_Variable_1) == 0x000020, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, K2Node_Select_Default) == 0x000024, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_5) == 0x000025, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_6) == 0x000026, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_7) == 0x000027, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_8) == 0x000028, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_9) == 0x000029, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_10) == 0x00002A, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, Temp_byte_Variable_11) == 0x00002B, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, CallFunc_ValidStackB_ReturnValue) == 0x00002C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, K2Node_Select_Default_1) == 0x00002D, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment, K2Node_Select_Default_2) == 0x00002E, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment::K2Node_Select_Default_2' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Weapon
// 0x0038 (0x0038 - 0x0000)
struct InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_960B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_960C[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_2;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_3;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_4;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_5;                              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_6;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_960D[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_7;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_8;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_9;                              // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_10;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_11;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_12;                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_13;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_14;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_15;                             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               K2Node_Select_Default_1;                           // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default_2;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon");
static_assert(sizeof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon) == 0x000038, "Wrong size on InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, SelectIndex) == 0x000000, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::SelectIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, SortType) == 0x000010, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_bool_Variable) == 0x000011, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_int_Variable) == 0x000014, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_1) == 0x000019, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_2) == 0x00001A, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_3) == 0x00001B, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_4) == 0x00001C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_5) == 0x00001D, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_6) == 0x00001E, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_int_Variable_1) == 0x000020, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, K2Node_Select_Default) == 0x000024, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_7) == 0x000025, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_8) == 0x000026, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_9) == 0x000027, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_10) == 0x000028, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_11) == 0x000029, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_12) == 0x00002A, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_13) == 0x00002B, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_14) == 0x00002C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, Temp_byte_Variable_15) == 0x00002D, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, CallFunc_ValidStackB_ReturnValue) == 0x00002E, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, K2Node_Select_Default_1) == 0x00002F, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon, K2Node_Select_Default_2) == 0x000030, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon::K2Node_Select_Default_2' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule
// 0x0020 (0x0020 - 0x0000)
struct InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ModeNum;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_960E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_Get_Inventory_Sort_Rule_Weapon_SortType;  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_Get_Inventory_Sort_Rule_Equipment_SortType; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetInventorySortRuleNoLv_SortType;        // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_Get_Inventory_Sort_Rule_Plug_SortType;    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_Get_Inventory_Sort_Rule_Item_SortType;    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule");
static_assert(sizeof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule) == 0x000020, "Wrong size on InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, SelectIndex) == 0x000000, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::SelectIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, ModeNum) == 0x000004, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::ModeNum' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, SortType) == 0x000010, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, Temp_int_Variable) == 0x000014, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, CallFunc_Get_Inventory_Sort_Rule_Weapon_SortType) == 0x000018, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::CallFunc_Get_Inventory_Sort_Rule_Weapon_SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, CallFunc_Get_Inventory_Sort_Rule_Equipment_SortType) == 0x000019, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::CallFunc_Get_Inventory_Sort_Rule_Equipment_SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, CallFunc_GetInventorySortRuleNoLv_SortType) == 0x00001A, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::CallFunc_GetInventorySortRuleNoLv_SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, CallFunc_Get_Inventory_Sort_Rule_Plug_SortType) == 0x00001B, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::CallFunc_Get_Inventory_Sort_Rule_Plug_SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, CallFunc_Get_Inventory_Sort_Rule_Item_SortType) == 0x00001C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::CallFunc_Get_Inventory_Sort_Rule_Item_SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule, K2Node_Select_Default) == 0x00001D, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Item
// 0x0038 (0x0038 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortName_Item final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SortList1;                                         // 0x0008(0x0010)(Parm, OutParm)
	TArray<class FName>                           SortList;                                          // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortName_Item) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortName_Item");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortName_Item) == 0x000038, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortName_Item");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Item, __WorldContext) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Item::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Item, SortList1) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Item::SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Item, SortList) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Item::SortList' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Item, K2Node_MakeArray_Array) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Item::K2Node_MakeArray_Array' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Plug
// 0x0038 (0x0038 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortName_Plug final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SortList1;                                         // 0x0008(0x0010)(Parm, OutParm)
	TArray<class FName>                           SortList;                                          // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortName_Plug) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortName_Plug");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortName_Plug) == 0x000038, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortName_Plug");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Plug, __WorldContext) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Plug::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Plug, SortList1) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Plug::SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Plug, SortList) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Plug::SortList' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Plug, K2Node_MakeArray_Array) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Plug::K2Node_MakeArray_Array' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_NoLv
// 0x0078 (0x0078 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortName_NoLv final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SortList1;                                         // 0x0008(0x0010)(Parm, OutParm)
	TArray<class FName>                           SortListSB;                                        // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           SortList;                                          // 0x0028(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_960F[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm)
	TArray<class FName>                           K2Node_MakeArray_Array_1;                          // 0x0050(0x0010)(ReferenceParm)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9610[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_Select_Default;                             // 0x0068(0x0010)(ReferenceParm)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortName_NoLv");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv) == 0x000078, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortName_NoLv");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv, __WorldContext) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_NoLv::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv, SortList1) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_NoLv::SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv, SortListSB) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_NoLv::SortListSB' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv, SortList) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_NoLv::SortList' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv, Temp_bool_Variable) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_NoLv::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv, K2Node_MakeArray_Array) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_NoLv::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv, K2Node_MakeArray_Array_1) == 0x000050, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_NoLv::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv, CallFunc_ValidStackB_ReturnValue) == 0x000060, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_NoLv::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_NoLv, K2Node_Select_Default) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_NoLv::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Equipment
// 0x0078 (0x0078 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortName_Equipment final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SortList1;                                         // 0x0008(0x0010)(Parm, OutParm)
	TArray<class FName>                           SortListSB;                                        // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           SortList;                                          // 0x0028(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9611[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm)
	TArray<class FName>                           K2Node_MakeArray_Array_1;                          // 0x0050(0x0010)(ReferenceParm)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9612[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_Select_Default;                             // 0x0068(0x0010)(ReferenceParm)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortName_Equipment");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment) == 0x000078, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortName_Equipment");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment, __WorldContext) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Equipment::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment, SortList1) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Equipment::SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment, SortListSB) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Equipment::SortListSB' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment, SortList) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Equipment::SortList' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment, Temp_bool_Variable) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Equipment::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment, K2Node_MakeArray_Array) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Equipment::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment, K2Node_MakeArray_Array_1) == 0x000050, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Equipment::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment, CallFunc_ValidStackB_ReturnValue) == 0x000060, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Equipment::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Equipment, K2Node_Select_Default) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Equipment::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Weapon
// 0x0078 (0x0078 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortName_Weapon final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SortList1;                                         // 0x0008(0x0010)(Parm, OutParm)
	TArray<class FName>                           SortListSB;                                        // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           SortList;                                          // 0x0028(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9613[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm)
	TArray<class FName>                           K2Node_MakeArray_Array_1;                          // 0x0050(0x0010)(ReferenceParm)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9614[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_Select_Default;                             // 0x0068(0x0010)(ReferenceParm)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortName_Weapon");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon) == 0x000078, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortName_Weapon");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon, __WorldContext) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Weapon::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon, SortList1) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Weapon::SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon, SortListSB) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Weapon::SortListSB' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon, SortList) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Weapon::SortList' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon, Temp_bool_Variable) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Weapon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon, K2Node_MakeArray_Array) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Weapon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon, K2Node_MakeArray_Array_1) == 0x000050, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Weapon::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon, CallFunc_ValidStackB_ReturnValue) == 0x000060, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Weapon::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName_Weapon, K2Node_Select_Default) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetInventorySortName_Weapon::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Item
// 0x0090 (0x0090 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortIndex_Item final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9615[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               NewLocalVar_0;                                     // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9616[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_17;                              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_19;                              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_21;                              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_22;                              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_23;                              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_24;                              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_25;                              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_26;                              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_27;                              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortIndex_Item");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item) == 0x000090, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortIndex_Item");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, SortType) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Param_Index) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, NewLocalVar_0) == 0x000014, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_byte_Variable) == 0x000015, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_1) == 0x00001C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_2) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_3) == 0x000024, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_4) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_5) == 0x00002C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_6) == 0x000030, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_7) == 0x000034, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_8) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_9) == 0x00003C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_10) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_11) == 0x000044, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_12) == 0x000048, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_13) == 0x00004C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_14) == 0x000050, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_15) == 0x000054, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_16) == 0x000058, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_17) == 0x00005C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_18) == 0x000060, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_19) == 0x000064, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_20) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_21) == 0x00006C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_21' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_22) == 0x000070, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_22' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_23) == 0x000074, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_23' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_24) == 0x000078, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_24' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_25) == 0x00007C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_25' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_26) == 0x000080, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_26' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, Temp_int_Variable_27) == 0x000084, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::Temp_int_Variable_27' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Item, K2Node_Select_Default) == 0x000088, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Item::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Plug
// 0x0090 (0x0090 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortIndex_Plug final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9617[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               NewLocalVar_0;                                     // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9618[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_17;                              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_19;                              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_21;                              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_22;                              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_23;                              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_24;                              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_25;                              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_26;                              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_27;                              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortIndex_Plug");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug) == 0x000090, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortIndex_Plug");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, SortType) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Param_Index) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, NewLocalVar_0) == 0x000014, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_byte_Variable) == 0x000015, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_1) == 0x00001C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_2) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_3) == 0x000024, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_4) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_5) == 0x00002C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_6) == 0x000030, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_7) == 0x000034, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_8) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_9) == 0x00003C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_10) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_11) == 0x000044, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_12) == 0x000048, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_13) == 0x00004C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_14) == 0x000050, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_15) == 0x000054, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_16) == 0x000058, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_17) == 0x00005C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_18) == 0x000060, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_19) == 0x000064, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_20) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_21) == 0x00006C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_21' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_22) == 0x000070, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_22' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_23) == 0x000074, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_23' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_24) == 0x000078, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_24' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_25) == 0x00007C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_25' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_26) == 0x000080, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_26' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, Temp_int_Variable_27) == 0x000084, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::Temp_int_Variable_27' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Plug, K2Node_Select_Default) == 0x000088, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Plug::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_NoLv
// 0x0110 (0x0110 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9619[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               NewLocalVar_0;                                     // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_961A[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_17;                              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_19;                              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_21;                              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_22;                              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_23;                              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_24;                              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_25;                              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_26;                              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_27;                              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_961B[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_28;                              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_29;                              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_30;                              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_31;                              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_32;                              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_33;                              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_34;                              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_35;                              // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_36;                              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_37;                              // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_38;                              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_39;                              // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_40;                              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_41;                              // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_42;                              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_43;                              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_44;                              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_45;                              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_46;                              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_47;                              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_48;                              // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_49;                              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_50;                              // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_51;                              // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_52;                              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_53;                              // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_54;                              // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_55;                              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_961C[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv) == 0x000110, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, SortType) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Param_Index) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, NewLocalVar_0) == 0x000014, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_byte_Variable) == 0x000015, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_1) == 0x00001C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_2) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_3) == 0x000024, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_4) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_5) == 0x00002C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_6) == 0x000030, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_7) == 0x000034, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_8) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_9) == 0x00003C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_10) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_11) == 0x000044, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_12) == 0x000048, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_13) == 0x00004C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_14) == 0x000050, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_15) == 0x000054, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_16) == 0x000058, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_17) == 0x00005C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_18) == 0x000060, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_19) == 0x000064, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_20) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_21) == 0x00006C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_21' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_22) == 0x000070, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_22' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_23) == 0x000074, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_23' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_24) == 0x000078, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_24' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_25) == 0x00007C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_25' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_26) == 0x000080, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_26' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_27) == 0x000084, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_27' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_bool_Variable) == 0x000088, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_byte_Variable_1) == 0x000089, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, K2Node_Select_Default) == 0x00008C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_28) == 0x000090, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_28' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_29) == 0x000094, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_29' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_30) == 0x000098, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_30' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_31) == 0x00009C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_31' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_32) == 0x0000A0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_32' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_33) == 0x0000A4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_33' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_34) == 0x0000A8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_34' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_35) == 0x0000AC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_35' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_36) == 0x0000B0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_36' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_37) == 0x0000B4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_37' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_38) == 0x0000B8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_38' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_39) == 0x0000BC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_39' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_40) == 0x0000C0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_40' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_41) == 0x0000C4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_41' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_42) == 0x0000C8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_42' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_43) == 0x0000CC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_43' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_44) == 0x0000D0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_44' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_45) == 0x0000D4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_45' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_46) == 0x0000D8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_46' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_47) == 0x0000DC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_47' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_48) == 0x0000E0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_48' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_49) == 0x0000E4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_49' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_50) == 0x0000E8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_50' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_51) == 0x0000EC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_51' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_52) == 0x0000F0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_52' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_53) == 0x0000F4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_53' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_54) == 0x0000F8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_54' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, Temp_int_Variable_55) == 0x0000FC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::Temp_int_Variable_55' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, CallFunc_ValidStackB_ReturnValue) == 0x000100, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, K2Node_Select_Default_1) == 0x000104, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv, K2Node_Select_Default_2) == 0x000108, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv::K2Node_Select_Default_2' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Equipment
// 0x0110 (0x0110 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_961D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               NewLocalVar_0;                                     // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_961E[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_17;                              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_19;                              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_21;                              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_22;                              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_23;                              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_24;                              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_25;                              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_26;                              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_27;                              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_961F[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_28;                              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_29;                              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_30;                              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_31;                              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_32;                              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_33;                              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_34;                              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_35;                              // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_36;                              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_37;                              // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_38;                              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_39;                              // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_40;                              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_41;                              // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_42;                              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_43;                              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_44;                              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_45;                              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_46;                              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_47;                              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_48;                              // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_49;                              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_50;                              // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_51;                              // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_52;                              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_53;                              // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_54;                              // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_55;                              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9620[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment) == 0x000110, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, SortType) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Param_Index) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, NewLocalVar_0) == 0x000014, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_byte_Variable) == 0x000015, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_1) == 0x00001C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_2) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_3) == 0x000024, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_4) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_5) == 0x00002C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_6) == 0x000030, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_7) == 0x000034, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_8) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_9) == 0x00003C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_10) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_11) == 0x000044, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_12) == 0x000048, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_13) == 0x00004C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_14) == 0x000050, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_15) == 0x000054, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_16) == 0x000058, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_17) == 0x00005C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_18) == 0x000060, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_19) == 0x000064, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_20) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_21) == 0x00006C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_21' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_22) == 0x000070, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_22' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_23) == 0x000074, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_23' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_24) == 0x000078, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_24' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_25) == 0x00007C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_25' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_26) == 0x000080, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_26' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_27) == 0x000084, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_27' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_bool_Variable) == 0x000088, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_byte_Variable_1) == 0x000089, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, K2Node_Select_Default) == 0x00008C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_28) == 0x000090, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_28' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_29) == 0x000094, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_29' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_30) == 0x000098, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_30' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_31) == 0x00009C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_31' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_32) == 0x0000A0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_32' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_33) == 0x0000A4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_33' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_34) == 0x0000A8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_34' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_35) == 0x0000AC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_35' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_36) == 0x0000B0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_36' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_37) == 0x0000B4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_37' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_38) == 0x0000B8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_38' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_39) == 0x0000BC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_39' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_40) == 0x0000C0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_40' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_41) == 0x0000C4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_41' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_42) == 0x0000C8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_42' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_43) == 0x0000CC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_43' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_44) == 0x0000D0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_44' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_45) == 0x0000D4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_45' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_46) == 0x0000D8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_46' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_47) == 0x0000DC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_47' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_48) == 0x0000E0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_48' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_49) == 0x0000E4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_49' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_50) == 0x0000E8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_50' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_51) == 0x0000EC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_51' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_52) == 0x0000F0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_52' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_53) == 0x0000F4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_53' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_54) == 0x0000F8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_54' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, Temp_int_Variable_55) == 0x0000FC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::Temp_int_Variable_55' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, CallFunc_ValidStackB_ReturnValue) == 0x000100, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, K2Node_Select_Default_1) == 0x000104, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment, K2Node_Select_Default_2) == 0x000108, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment::K2Node_Select_Default_2' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Weapon
// 0x0110 (0x0110 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9621[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               NewLocalVar_0;                                     // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9622[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_17;                              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_19;                              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_21;                              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_22;                              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_23;                              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_24;                              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_25;                              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_26;                              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_27;                              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9623[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_28;                              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_29;                              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_30;                              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_31;                              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_32;                              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_33;                              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_34;                              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_35;                              // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_36;                              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_37;                              // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_38;                              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_39;                              // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_40;                              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_41;                              // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_42;                              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_43;                              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_44;                              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_45;                              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_46;                              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_47;                              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_48;                              // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_49;                              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_50;                              // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_51;                              // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_52;                              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_53;                              // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_54;                              // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_55;                              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9624[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon) == 0x000110, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, SortType) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Param_Index) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, NewLocalVar_0) == 0x000014, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_byte_Variable) == 0x000015, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_1) == 0x00001C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_2) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_3) == 0x000024, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_4) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_5) == 0x00002C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_6) == 0x000030, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_7) == 0x000034, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_8) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_9) == 0x00003C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_10) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_11) == 0x000044, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_12) == 0x000048, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_13) == 0x00004C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_14) == 0x000050, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_15) == 0x000054, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_16) == 0x000058, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_17) == 0x00005C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_18) == 0x000060, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_19) == 0x000064, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_20) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_21) == 0x00006C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_21' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_22) == 0x000070, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_22' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_23) == 0x000074, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_23' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_24) == 0x000078, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_24' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_25) == 0x00007C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_25' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_26) == 0x000080, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_26' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_27) == 0x000084, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_27' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_bool_Variable) == 0x000088, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_byte_Variable_1) == 0x000089, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, K2Node_Select_Default) == 0x00008C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_28) == 0x000090, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_28' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_29) == 0x000094, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_29' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_30) == 0x000098, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_30' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_31) == 0x00009C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_31' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_32) == 0x0000A0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_32' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_33) == 0x0000A4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_33' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_34) == 0x0000A8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_34' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_35) == 0x0000AC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_35' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_36) == 0x0000B0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_36' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_37) == 0x0000B4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_37' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_38) == 0x0000B8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_38' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_39) == 0x0000BC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_39' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_40) == 0x0000C0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_40' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_41) == 0x0000C4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_41' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_42) == 0x0000C8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_42' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_43) == 0x0000CC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_43' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_44) == 0x0000D0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_44' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_45) == 0x0000D4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_45' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_46) == 0x0000D8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_46' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_47) == 0x0000DC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_47' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_48) == 0x0000E0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_48' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_49) == 0x0000E4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_49' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_50) == 0x0000E8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_50' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_51) == 0x0000EC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_51' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_52) == 0x0000F0, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_52' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_53) == 0x0000F4, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_53' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_54) == 0x0000F8, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_54' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, Temp_int_Variable_55) == 0x0000FC, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::Temp_int_Variable_55' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, CallFunc_ValidStackB_ReturnValue) == 0x000100, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, K2Node_Select_Default_1) == 0x000104, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon, K2Node_Select_Default_2) == 0x000108, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon::K2Node_Select_Default_2' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName
// 0x0088 (0x0088 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortName final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9625[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SortList1;                                         // 0x0010(0x0010)(Parm, OutParm)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9626[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetInventorySortName_Weapon_SortList1;    // 0x0028(0x0010)(ReferenceParm)
	TArray<class FName>                           CallFunc_GetInventorySortName_Equipment_SortList1; // 0x0038(0x0010)(ReferenceParm)
	TArray<class FName>                           CallFunc_GetInventorySortName_NoLv_SortList1;      // 0x0048(0x0010)(ReferenceParm)
	TArray<class FName>                           CallFunc_GetInventorySortName_Plug_SortList1;      // 0x0058(0x0010)(ReferenceParm)
	TArray<class FName>                           CallFunc_GetInventorySortName_Item_SortList1;      // 0x0068(0x0010)(ReferenceParm)
	TArray<class FName>                           K2Node_Select_Default;                             // 0x0078(0x0010)(ReferenceParm)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortName) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortName");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortName) == 0x000088, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortName");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName, Param_Index) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortName::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortName::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName, SortList1) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetInventorySortName::SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName, Temp_int_Variable) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetInventorySortName::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName, CallFunc_GetInventorySortName_Weapon_SortList1) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortName::CallFunc_GetInventorySortName_Weapon_SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName, CallFunc_GetInventorySortName_Equipment_SortList1) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetInventorySortName::CallFunc_GetInventorySortName_Equipment_SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName, CallFunc_GetInventorySortName_NoLv_SortList1) == 0x000048, "Member 'InventoryFunctionLibrary_C_GetInventorySortName::CallFunc_GetInventorySortName_NoLv_SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName, CallFunc_GetInventorySortName_Plug_SortList1) == 0x000058, "Member 'InventoryFunctionLibrary_C_GetInventorySortName::CallFunc_GetInventorySortName_Plug_SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName, CallFunc_GetInventorySortName_Item_SortList1) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetInventorySortName::CallFunc_GetInventorySortName_Item_SortList1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortName, K2Node_Select_Default) == 0x000078, "Member 'InventoryFunctionLibrary_C_GetInventorySortName::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex
// 0x0030 (0x0030 - 0x0000)
struct InventoryFunctionLibrary_C_GetInventorySortIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9627[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index1;                                            // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInventorySortIndex_Weapon_Index;       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInventorySortIndex_Equipment_Index;    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInventorySortIndex_NoLv_Index;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInventorySortIndex_Plug_Index;         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInventorySortIndex_Item_Index;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetInventorySortIndex) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetInventorySortIndex");
static_assert(sizeof(InventoryFunctionLibrary_C_GetInventorySortIndex) == 0x000030, "Wrong size on InventoryFunctionLibrary_C_GetInventorySortIndex");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, Param_Index) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, SortType) == 0x000004, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::SortType' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, Index1) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::Index1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, Temp_int_Variable) == 0x000014, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, CallFunc_GetInventorySortIndex_Weapon_Index) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::CallFunc_GetInventorySortIndex_Weapon_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, CallFunc_GetInventorySortIndex_Equipment_Index) == 0x00001C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::CallFunc_GetInventorySortIndex_Equipment_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, CallFunc_GetInventorySortIndex_NoLv_Index) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::CallFunc_GetInventorySortIndex_NoLv_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, CallFunc_GetInventorySortIndex_Plug_Index) == 0x000024, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::CallFunc_GetInventorySortIndex_Plug_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, CallFunc_GetInventorySortIndex_Item_Index) == 0x000028, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::CallFunc_GetInventorySortIndex_Item_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetInventorySortIndex, K2Node_Select_Default) == 0x00002C, "Member 'InventoryFunctionLibrary_C_GetInventorySortIndex::K2Node_Select_Default' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Mode Num
// 0x0060 (0x0060 - 0x0000)
struct InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num final
{
public:
	EItemFilterType                               Filter;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsItemMode;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NotBStack;                                         // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9628[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ModeNum;                                           // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BStack;                                            // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9629[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_962A[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_962B[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_962C[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_962D[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_4;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num");
static_assert(sizeof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num) == 0x000060, "Wrong size on InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Filter) == 0x000000, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Filter' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, IsItemMode) == 0x000001, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::IsItemMode' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, NotBStack) == 0x000002, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::NotBStack' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, ModeNum) == 0x000010, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::ModeNum' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, BStack) == 0x000014, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::BStack' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_bool_Variable) == 0x000015, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000016, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000017, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000018, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000019, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, CallFunc_BooleanOR_ReturnValue) == 0x00001A, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00001B, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, CallFunc_BooleanOR_ReturnValue_1) == 0x00001C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_bool_Variable_1) == 0x00001D, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_int_Variable) == 0x000020, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_bool_Variable_2) == 0x000024, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_int_Variable_1) == 0x000028, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_int_Variable_2) == 0x00002C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_int_Variable_3) == 0x000030, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, K2Node_Select_Default) == 0x000034, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, CallFunc_ValidStackB_ReturnValue) == 0x000038, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_int_Variable_4) == 0x00003C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_bool_Variable_3) == 0x000041, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_int_Variable_5) == 0x000044, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, K2Node_Select_Default_1) == 0x000048, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, Temp_bool_Variable_4) == 0x00004C, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, K2Node_Select_Default_2) == 0x000050, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, K2Node_Select_Default_3) == 0x000054, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num, K2Node_Select_Default_4) == 0x000058, "Member 'InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num::K2Node_Select_Default_4' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetWeaponStatusTextOneItem
// 0x0338 (0x0338 - 0x0000)
struct InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTextBlock*                             Ap;                                                // 0x0118(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Cp;                                                // 0x0120(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             STR;                                               // 0x0128(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             VIT;                                               // 0x0130(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             DEX;                                               // 0x0138(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             INT;                                               // 0x0140(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             MND;                                               // 0x0148(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Attribute;                                         // 0x0150(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Special;                                           // 0x0158(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0160(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_962E[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x017B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculatedStackBWeaponParam_ReturnValue;  // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_962F[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0188(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x01D8(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9630[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x01F8(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBWeaponStatus                               Temp_byte_Variable;                                // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9631[0x5];                                     // 0x0213(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTextBlock*                             K2Node_Select_Default;                             // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0230(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9632[0x6];                                     // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0260(0x0018)()
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9633[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0280(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9634[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x02A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x02B8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x02F8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0308(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x0320(0x0018)()
};
static_assert(alignof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem");
static_assert(sizeof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem) == 0x000338, "Wrong size on InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, OwnItemInfo) == 0x000000, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, Ap) == 0x000118, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::Ap' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, Cp) == 0x000120, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::Cp' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, STR) == 0x000128, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::STR' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, VIT) == 0x000130, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::VIT' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, DEX) == 0x000138, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::DEX' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, INT) == 0x000140, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::INT' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, MND) == 0x000148, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::MND' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, Attribute) == 0x000150, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::Attribute' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, Special) == 0x000158, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::Special' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, __WorldContext) == 0x000160, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, Temp_int_Variable) == 0x000168, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, Temp_int_Variable_1) == 0x00016C, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Conv_IntToByte_ReturnValue) == 0x000170, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Add_IntInt_ReturnValue) == 0x000174, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_GetValidValue_ReturnValue) == 0x000178, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000179, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00017A, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00017B, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_CalculatedStackBWeaponParam_ReturnValue) == 0x00017C, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_CalculatedStackBWeaponParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000180, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, K2Node_MakeStruct_FormatArgumentData) == 0x000188, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, K2Node_MakeArray_Array) == 0x0001C8, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Conv_IntToText_ReturnValue) == 0x0001D8, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Less_IntInt_ReturnValue) == 0x0001F0, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0001F8, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, K2Node_SwitchEnum_CmpSuccess) == 0x000210, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, Temp_bool_Variable) == 0x000211, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, Temp_byte_Variable) == 0x000212, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000218, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, K2Node_Select_Default) == 0x000228, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000230, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_IsValid_ReturnValue) == 0x000248, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, Temp_bool_Variable_1) == 0x000249, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_GetTextFromAsset_ReturnValue) == 0x000250, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000260, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_MakeLiteralInt_ReturnValue) == 0x000278, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Format_ReturnValue) == 0x000280, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Less_IntInt_ReturnValue_1) == 0x000298, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, K2Node_Select_Default_1) == 0x0002A0, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, K2Node_MakeStruct_FormatArgumentData_1) == 0x0002B8, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, K2Node_MakeArray_Array_1) == 0x0002F8, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, CallFunc_Format_ReturnValue_1) == 0x000308, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem, K2Node_Select_Default_2) == 0x000320, "Member 'InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem::K2Node_Select_Default_2' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsWeaponStickerAttachd
// 0x0078 (0x0078 - 0x0000)
struct InventoryFunctionLibrary_C_IsWeaponStickerAttachd final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         StorageNumber;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9635[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAttach;                                          // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9636[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      CallFunc_GetFindWeaponData_WeaponData;             // 0x0028(0x0050)()
};
static_assert(alignof(InventoryFunctionLibrary_C_IsWeaponStickerAttachd) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_IsWeaponStickerAttachd");
static_assert(sizeof(InventoryFunctionLibrary_C_IsWeaponStickerAttachd) == 0x000078, "Wrong size on InventoryFunctionLibrary_C_IsWeaponStickerAttachd");
static_assert(offsetof(InventoryFunctionLibrary_C_IsWeaponStickerAttachd, UniqueId) == 0x000000, "Member 'InventoryFunctionLibrary_C_IsWeaponStickerAttachd::UniqueId' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsWeaponStickerAttachd, StorageNumber) == 0x000010, "Member 'InventoryFunctionLibrary_C_IsWeaponStickerAttachd::StorageNumber' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsWeaponStickerAttachd, __WorldContext) == 0x000018, "Member 'InventoryFunctionLibrary_C_IsWeaponStickerAttachd::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsWeaponStickerAttachd, IsAttach) == 0x000020, "Member 'InventoryFunctionLibrary_C_IsWeaponStickerAttachd::IsAttach' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_IsWeaponStickerAttachd, CallFunc_GetFindWeaponData_WeaponData) == 0x000028, "Member 'InventoryFunctionLibrary_C_IsWeaponStickerAttachd::CallFunc_GetFindWeaponData_WeaponData' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CalcPageIndex
// 0x0038 (0x0038 - 0x0000)
struct InventoryFunctionLibrary_C_CalcPageIndex final
{
public:
	bool                                          Use;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9637[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IconIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentPage;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PageIconMax;                                       // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9638[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_Index;                                       // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9639[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryFunctionLibrary_C_CalcPageIndex) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_CalcPageIndex");
static_assert(sizeof(InventoryFunctionLibrary_C_CalcPageIndex) == 0x000038, "Wrong size on InventoryFunctionLibrary_C_CalcPageIndex");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, Use) == 0x000000, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::Use' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, IconIndex) == 0x000004, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::IconIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, CurrentPage) == 0x000008, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::CurrentPage' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, PageIconMax) == 0x00000C, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::PageIconMax' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, Active) == 0x000018, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::Active' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, Param_Index) == 0x00001C, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, CallFunc_Percent_IntInt_ReturnValue) == 0x000020, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, CallFunc_Multiply_IntInt_ReturnValue) == 0x000024, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000030, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_CalcPageIndex, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000034, "Member 'InventoryFunctionLibrary_C_CalcPageIndex::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFilterText
// 0x04E8 (0x04E8 - 0x0000)
struct InventoryFunctionLibrary_C_GetFilterText final
{
public:
	EItemFilterType                               Filter;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_963A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_963B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0024(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x002C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0034(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x003C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0044(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x004C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x0054(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_7;                              // 0x005C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_8;                              // 0x0064(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_9;                              // 0x006C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_10;                             // 0x0074(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_11;                             // 0x007C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_12;                             // 0x0084(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_13;                             // 0x008C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_14;                             // 0x0094(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_15;                             // 0x009C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_16;                             // 0x00A4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_17;                             // 0x00AC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_18;                             // 0x00B4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_19;                             // 0x00BC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_20;                             // 0x00C4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_21;                             // 0x00CC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_22;                             // 0x00D4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_23;                             // 0x00DC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_24;                             // 0x00E4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_25;                             // 0x00EC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_26;                             // 0x00F4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_27;                             // 0x00FC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_28;                             // 0x0104(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_29;                             // 0x010C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_30;                             // 0x0114(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_31;                             // 0x011C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_32;                             // 0x0124(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_33;                             // 0x012C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_34;                             // 0x0134(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_35;                             // 0x013C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_36;                             // 0x0144(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_37;                             // 0x014C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_38;                             // 0x0154(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_39;                             // 0x015C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_40;                             // 0x0164(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_41;                             // 0x016C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_42;                             // 0x0174(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_43;                             // 0x017C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_44;                             // 0x0184(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_45;                             // 0x018C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_46;                             // 0x0194(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_47;                             // 0x019C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_48;                             // 0x01A4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_49;                             // 0x01AC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_50;                             // 0x01B4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_51;                             // 0x01BC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_52;                             // 0x01C4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_53;                             // 0x01CC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_54;                             // 0x01D4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_55;                             // 0x01DC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_56;                             // 0x01E4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_57;                             // 0x01EC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_58;                             // 0x01F4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_59;                             // 0x01FC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_60;                             // 0x0204(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_61;                             // 0x020C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_62;                             // 0x0214(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_63;                             // 0x021C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_64;                             // 0x0224(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_65;                             // 0x022C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_66;                             // 0x0234(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_67;                             // 0x023C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_68;                             // 0x0244(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_69;                             // 0x024C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_70;                             // 0x0254(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_71;                             // 0x025C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_72;                             // 0x0264(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_73;                             // 0x026C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_74;                             // 0x0274(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_75;                             // 0x027C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_76;                             // 0x0284(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_77;                             // 0x028C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_78;                             // 0x0294(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_79;                             // 0x029C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_80;                             // 0x02A4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_81;                             // 0x02AC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_82;                             // 0x02B4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_83;                             // 0x02BC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_84;                             // 0x02C4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_85;                             // 0x02CC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_86;                             // 0x02D4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_87;                             // 0x02DC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_88;                             // 0x02E4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_89;                             // 0x02EC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_90;                             // 0x02F4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_91;                             // 0x02FC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_92;                             // 0x0304(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_93;                             // 0x030C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_94;                             // 0x0314(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_95;                             // 0x031C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_96;                             // 0x0324(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_97;                             // 0x032C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_98;                             // 0x0334(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_99;                             // 0x033C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_100;                            // 0x0344(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_101;                            // 0x034C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_102;                            // 0x0354(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_103;                            // 0x035C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_104;                            // 0x0364(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_105;                            // 0x036C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_106;                            // 0x0374(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_107;                            // 0x037C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_108;                            // 0x0384(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_109;                            // 0x038C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_110;                            // 0x0394(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_111;                            // 0x039C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_112;                            // 0x03A4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_113;                            // 0x03AC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_114;                            // 0x03B4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_115;                            // 0x03BC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_116;                            // 0x03C4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_117;                            // 0x03CC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_118;                            // 0x03D4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_119;                            // 0x03DC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_120;                            // 0x03E4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_121;                            // 0x03EC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_122;                            // 0x03F4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_123;                            // 0x03FC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_124;                            // 0x0404(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_125;                            // 0x040C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_126;                            // 0x0414(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_127;                            // 0x041C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_128;                            // 0x0424(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_129;                            // 0x042C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_130;                            // 0x0434(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_131;                            // 0x043C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_132;                            // 0x0444(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_133;                            // 0x044C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_134;                            // 0x0454(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_135;                            // 0x045C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_136;                            // 0x0464(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_137;                            // 0x046C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_138;                            // 0x0474(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_139;                            // 0x047C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_140;                            // 0x0484(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_141;                            // 0x048C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_142;                            // 0x0494(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_143;                            // 0x049C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_144;                            // 0x04A4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_145;                            // 0x04AC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_146;                            // 0x04B4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_147;                            // 0x04BC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_148;                            // 0x04C4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x04CC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_963C[0x4];                                     // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x04D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetFilterText) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetFilterText");
static_assert(sizeof(InventoryFunctionLibrary_C_GetFilterText) == 0x0004E8, "Wrong size on InventoryFunctionLibrary_C_GetFilterText");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Filter) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetFilterText::Filter' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetFilterText::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, ReturnValue) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetFilterText::ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_byte_Variable) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable) == 0x000024, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_1) == 0x00002C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_2) == 0x000034, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_3) == 0x00003C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_4) == 0x000044, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_5) == 0x00004C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_6) == 0x000054, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_7) == 0x00005C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_8) == 0x000064, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_9) == 0x00006C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_10) == 0x000074, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_11) == 0x00007C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_11' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_12) == 0x000084, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_12' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_13) == 0x00008C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_13' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_14) == 0x000094, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_14' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_15) == 0x00009C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_15' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_16) == 0x0000A4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_16' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_17) == 0x0000AC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_17' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_18) == 0x0000B4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_18' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_19) == 0x0000BC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_19' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_20) == 0x0000C4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_20' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_21) == 0x0000CC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_21' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_22) == 0x0000D4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_22' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_23) == 0x0000DC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_23' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_24) == 0x0000E4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_24' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_25) == 0x0000EC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_25' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_26) == 0x0000F4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_26' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_27) == 0x0000FC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_27' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_28) == 0x000104, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_28' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_29) == 0x00010C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_29' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_30) == 0x000114, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_30' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_31) == 0x00011C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_31' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_32) == 0x000124, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_32' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_33) == 0x00012C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_33' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_34) == 0x000134, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_34' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_35) == 0x00013C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_35' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_36) == 0x000144, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_36' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_37) == 0x00014C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_37' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_38) == 0x000154, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_38' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_39) == 0x00015C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_39' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_40) == 0x000164, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_40' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_41) == 0x00016C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_41' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_42) == 0x000174, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_42' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_43) == 0x00017C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_43' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_44) == 0x000184, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_44' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_45) == 0x00018C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_45' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_46) == 0x000194, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_46' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_47) == 0x00019C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_47' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_48) == 0x0001A4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_48' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_49) == 0x0001AC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_49' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_50) == 0x0001B4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_50' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_51) == 0x0001BC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_51' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_52) == 0x0001C4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_52' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_53) == 0x0001CC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_53' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_54) == 0x0001D4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_54' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_55) == 0x0001DC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_55' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_56) == 0x0001E4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_56' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_57) == 0x0001EC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_57' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_58) == 0x0001F4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_58' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_59) == 0x0001FC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_59' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_60) == 0x000204, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_60' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_61) == 0x00020C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_61' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_62) == 0x000214, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_62' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_63) == 0x00021C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_63' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_64) == 0x000224, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_64' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_65) == 0x00022C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_65' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_66) == 0x000234, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_66' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_67) == 0x00023C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_67' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_68) == 0x000244, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_68' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_69) == 0x00024C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_69' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_70) == 0x000254, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_70' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_71) == 0x00025C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_71' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_72) == 0x000264, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_72' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_73) == 0x00026C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_73' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_74) == 0x000274, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_74' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_75) == 0x00027C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_75' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_76) == 0x000284, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_76' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_77) == 0x00028C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_77' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_78) == 0x000294, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_78' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_79) == 0x00029C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_79' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_80) == 0x0002A4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_80' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_81) == 0x0002AC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_81' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_82) == 0x0002B4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_82' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_83) == 0x0002BC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_83' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_84) == 0x0002C4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_84' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_85) == 0x0002CC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_85' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_86) == 0x0002D4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_86' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_87) == 0x0002DC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_87' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_88) == 0x0002E4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_88' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_89) == 0x0002EC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_89' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_90) == 0x0002F4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_90' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_91) == 0x0002FC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_91' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_92) == 0x000304, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_92' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_93) == 0x00030C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_93' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_94) == 0x000314, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_94' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_95) == 0x00031C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_95' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_96) == 0x000324, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_96' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_97) == 0x00032C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_97' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_98) == 0x000334, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_98' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_99) == 0x00033C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_99' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_100) == 0x000344, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_100' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_101) == 0x00034C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_101' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_102) == 0x000354, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_102' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_103) == 0x00035C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_103' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_104) == 0x000364, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_104' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_105) == 0x00036C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_105' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_106) == 0x000374, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_106' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_107) == 0x00037C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_107' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_108) == 0x000384, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_108' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_109) == 0x00038C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_109' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_110) == 0x000394, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_110' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_111) == 0x00039C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_111' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_112) == 0x0003A4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_112' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_113) == 0x0003AC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_113' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_114) == 0x0003B4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_114' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_115) == 0x0003BC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_115' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_116) == 0x0003C4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_116' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_117) == 0x0003CC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_117' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_118) == 0x0003D4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_118' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_119) == 0x0003DC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_119' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_120) == 0x0003E4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_120' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_121) == 0x0003EC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_121' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_122) == 0x0003F4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_122' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_123) == 0x0003FC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_123' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_124) == 0x000404, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_124' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_125) == 0x00040C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_125' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_126) == 0x000414, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_126' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_127) == 0x00041C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_127' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_128) == 0x000424, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_128' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_129) == 0x00042C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_129' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_130) == 0x000434, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_130' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_131) == 0x00043C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_131' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_132) == 0x000444, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_132' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_133) == 0x00044C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_133' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_134) == 0x000454, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_134' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_135) == 0x00045C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_135' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_136) == 0x000464, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_136' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_137) == 0x00046C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_137' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_138) == 0x000474, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_138' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_139) == 0x00047C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_139' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_140) == 0x000484, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_140' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_141) == 0x00048C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_141' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_142) == 0x000494, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_142' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_143) == 0x00049C, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_143' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_144) == 0x0004A4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_144' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_145) == 0x0004AC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_145' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_146) == 0x0004B4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_146' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_147) == 0x0004BC, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_147' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, Temp_name_Variable_148) == 0x0004C4, "Member 'InventoryFunctionLibrary_C_GetFilterText::Temp_name_Variable_148' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, K2Node_Select_Default) == 0x0004CC, "Member 'InventoryFunctionLibrary_C_GetFilterText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0004D8, "Member 'InventoryFunctionLibrary_C_GetFilterText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetFilterComboBox
// 0x0080 (0x0080 - 0x0000)
struct InventoryFunctionLibrary_C_SetFilterComboBox final
{
public:
	class UComboBoxString*                        Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UComboBoxString*                        _Target;                                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ATypeFilterListData                CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_963D[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_963E[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ATypeFilterSortData                CallFunc_Array_Get_Item;                           // 0x0040(0x0018)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_963F[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetFilterText_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9640[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9641[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_SetFilterComboBox) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_SetFilterComboBox");
static_assert(sizeof(InventoryFunctionLibrary_C_SetFilterComboBox) == 0x000080, "Wrong size on InventoryFunctionLibrary_C_SetFilterComboBox");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, Target) == 0x000000, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::Target' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, RowName) == 0x000008, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::RowName' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, _Target) == 0x000018, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::_Target' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000030, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, Temp_int_Array_Index_Variable) == 0x000034, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, CallFunc_Array_Get_Item) == 0x000040, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, CallFunc_GetFilterText_ReturnValue) == 0x000060, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::CallFunc_GetFilterText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, CallFunc_Greater_IntInt_ReturnValue) == 0x000070, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterComboBox, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'InventoryFunctionLibrary_C_SetFilterComboBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetFilterBtnType
// 0x0068 (0x0068 - 0x0000)
struct InventoryFunctionLibrary_C_SetFilterBtnType final
{
public:
	class UFilterButton_C*                        Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9642[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ATypeFilterListData                CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9643[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ATypeFilterSortData                CallFunc_Array_Get_Item;                           // 0x0040(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9644[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryFunctionLibrary_C_SetFilterBtnType) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_SetFilterBtnType");
static_assert(sizeof(InventoryFunctionLibrary_C_SetFilterBtnType) == 0x000068, "Wrong size on InventoryFunctionLibrary_C_SetFilterBtnType");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, Target) == 0x000000, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::Target' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, RowName) == 0x000008, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::RowName' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, Param_Index) == 0x000010, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, __WorldContext) == 0x000018, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000030, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, Temp_int_Array_Index_Variable) == 0x000038, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, CallFunc_Array_Get_Item) == 0x000040, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetFilterBtnType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000060, "Member 'InventoryFunctionLibrary_C_SetFilterBtnType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFilterBtnType
// 0x0068 (0x0068 - 0x0000)
struct InventoryFunctionLibrary_C_GetFilterBtnType final
{
public:
	class FName                                   RowName;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9645[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Filter;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9646[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ATypeFilterListData                CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9647[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9648[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ATypeFilterSortData                CallFunc_Array_Get_Item;                           // 0x0040(0x0018)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetFilterBtnType) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetFilterBtnType");
static_assert(sizeof(InventoryFunctionLibrary_C_GetFilterBtnType) == 0x000068, "Wrong size on InventoryFunctionLibrary_C_GetFilterBtnType");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, RowName) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::RowName' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, Param_Index) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, Filter) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::Filter' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000030, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, Temp_int_Array_Index_Variable) == 0x000034, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, CallFunc_Array_Get_Item) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetFilterBtnType, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'InventoryFunctionLibrary_C_GetFilterBtnType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetSortComboBox
// 0x00A0 (0x00A0 - 0x0000)
struct InventoryFunctionLibrary_C_SetSortComboBox final
{
public:
	class UComboBoxString*                        Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FilterIndex;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Select;                                            // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9649[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UComboBoxString*                        _Target;                                           // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSortIndex_Index;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ATypeFilterListData                CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_964A[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_964B[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_964C[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ATypeFilterSortData                CallFunc_Array_Get_Item;                           // 0x0060(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               CallFunc_Array_Get_Item_1;                         // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_964D[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSortText_ReturnValue;                  // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_964E[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_SetSortComboBox) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_SetSortComboBox");
static_assert(sizeof(InventoryFunctionLibrary_C_SetSortComboBox) == 0x0000A0, "Wrong size on InventoryFunctionLibrary_C_SetSortComboBox");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, Target) == 0x000000, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::Target' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, RowName) == 0x000008, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::RowName' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, FilterIndex) == 0x000010, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::FilterIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, Select) == 0x000014, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::Select' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, __WorldContext) == 0x000018, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, _Target) == 0x000020, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::_Target' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, Temp_int_Array_Index_Variable) == 0x000028, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_GetSortIndex_Index) == 0x00002C, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_GetSortIndex_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000040, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_Less_IntInt_ReturnValue) == 0x000051, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, Temp_int_Array_Index_Variable_1) == 0x000058, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_Array_Get_Item) == 0x000060, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000078, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_Array_Get_Item_1) == 0x000079, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_Array_Length_ReturnValue_2) == 0x00007C, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_GetSortText_ReturnValue) == 0x000080, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_GetSortText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, Temp_int_Loop_Counter_Variable_1) == 0x000090, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_Less_IntInt_ReturnValue_1) == 0x000094, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_SetSortComboBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000098, "Member 'InventoryFunctionLibrary_C_SetSortComboBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortText
// 0x0120 (0x0120 - 0x0000)
struct InventoryFunctionLibrary_C_GetSortText final
{
public:
	ESBItemSortType                               Sort;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_964F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9650[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0024(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x002C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0034(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x003C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0044(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x004C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x0054(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_7;                              // 0x005C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_8;                              // 0x0064(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_9;                              // 0x006C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_10;                             // 0x0074(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_11;                             // 0x007C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_12;                             // 0x0084(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_13;                             // 0x008C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_14;                             // 0x0094(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_15;                             // 0x009C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_16;                             // 0x00A4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_17;                             // 0x00AC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_18;                             // 0x00B4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_19;                             // 0x00BC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_20;                             // 0x00C4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_21;                             // 0x00CC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_22;                             // 0x00D4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_23;                             // 0x00DC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_24;                             // 0x00E4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_25;                             // 0x00EC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_26;                             // 0x00F4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_27;                             // 0x00FC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0104(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9651[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetSortText) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetSortText");
static_assert(sizeof(InventoryFunctionLibrary_C_GetSortText) == 0x000120, "Wrong size on InventoryFunctionLibrary_C_GetSortText");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Sort) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetSortText::Sort' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, __WorldContext) == 0x000008, "Member 'InventoryFunctionLibrary_C_GetSortText::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, ReturnValue) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetSortText::ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_byte_Variable) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable) == 0x000024, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_1) == 0x00002C, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_2) == 0x000034, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_3) == 0x00003C, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_4) == 0x000044, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_5) == 0x00004C, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_6) == 0x000054, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_7) == 0x00005C, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_8) == 0x000064, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_8' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_9) == 0x00006C, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_9' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_10) == 0x000074, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_10' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_11) == 0x00007C, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_11' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_12) == 0x000084, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_12' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_13) == 0x00008C, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_13' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_14) == 0x000094, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_14' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_15) == 0x00009C, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_15' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_16) == 0x0000A4, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_16' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_17) == 0x0000AC, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_17' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_18) == 0x0000B4, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_18' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_19) == 0x0000BC, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_19' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_20) == 0x0000C4, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_20' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_21) == 0x0000CC, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_21' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_22) == 0x0000D4, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_22' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_23) == 0x0000DC, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_23' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_24) == 0x0000E4, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_24' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_25) == 0x0000EC, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_25' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_26) == 0x0000F4, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_26' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, Temp_name_Variable_27) == 0x0000FC, "Member 'InventoryFunctionLibrary_C_GetSortText::Temp_name_Variable_27' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, K2Node_Select_Default) == 0x000104, "Member 'InventoryFunctionLibrary_C_GetSortText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000110, "Member 'InventoryFunctionLibrary_C_GetSortText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortIndex
// 0x0080 (0x0080 - 0x0000)
struct InventoryFunctionLibrary_C_GetSortIndex final
{
public:
	ESBItemSortType                               Sort;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9652[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RowName;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FilterIndex;                                       // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ATypeFilterListData                CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9653[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9654[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9655[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ATypeFilterSortData                CallFunc_Array_Get_Item;                           // 0x0050(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               CallFunc_Array_Get_Item_1;                         // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9656[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9657[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9658[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetSortIndex) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetSortIndex");
static_assert(sizeof(InventoryFunctionLibrary_C_GetSortIndex) == 0x000080, "Wrong size on InventoryFunctionLibrary_C_GetSortIndex");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, Sort) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetSortIndex::Sort' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, RowName) == 0x000004, "Member 'InventoryFunctionLibrary_C_GetSortIndex::RowName' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, FilterIndex) == 0x00000C, "Member 'InventoryFunctionLibrary_C_GetSortIndex::FilterIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetSortIndex::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, Param_Index) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetSortIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'InventoryFunctionLibrary_C_GetSortIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000030, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_Array_Length_ReturnValue_1) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_Greater_IntInt_ReturnValue) == 0x00003C, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetSortIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, Temp_int_Array_Index_Variable_1) == 0x00004C, "Member 'InventoryFunctionLibrary_C_GetSortIndex::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_Array_Get_Item) == 0x000050, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_Array_Get_Item_1) == 0x000069, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_Array_Length_ReturnValue_2) == 0x00006C, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000070, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, Temp_int_Loop_Counter_Variable_1) == 0x000074, "Member 'InventoryFunctionLibrary_C_GetSortIndex::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_Less_IntInt_ReturnValue_1) == 0x000078, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortIndex, CallFunc_Add_IntInt_ReturnValue_1) == 0x00007C, "Member 'InventoryFunctionLibrary_C_GetSortIndex::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortType
// 0x0080 (0x0080 - 0x0000)
struct InventoryFunctionLibrary_C_GetSortType final
{
public:
	int32                                         SortIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FilterIndex;                                       // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Array_Element;                                     // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9659[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ATypeFilterListData                CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_965A[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_965B[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ATypeFilterSortData                CallFunc_Array_Get_Item;                           // 0x0050(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               CallFunc_Array_Get_Item_1;                         // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_965C[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_965D[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_965E[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InventoryFunctionLibrary_C_GetSortType) == 0x000008, "Wrong alignment on InventoryFunctionLibrary_C_GetSortType");
static_assert(sizeof(InventoryFunctionLibrary_C_GetSortType) == 0x000080, "Wrong size on InventoryFunctionLibrary_C_GetSortType");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, SortIndex) == 0x000000, "Member 'InventoryFunctionLibrary_C_GetSortType::SortIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, RowName) == 0x000004, "Member 'InventoryFunctionLibrary_C_GetSortType::RowName' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, FilterIndex) == 0x00000C, "Member 'InventoryFunctionLibrary_C_GetSortType::FilterIndex' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, __WorldContext) == 0x000010, "Member 'InventoryFunctionLibrary_C_GetSortType::__WorldContext' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, Array_Element) == 0x000018, "Member 'InventoryFunctionLibrary_C_GetSortType::Array_Element' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000030, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'InventoryFunctionLibrary_C_GetSortType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_Array_Length_ReturnValue_1) == 0x000040, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_Greater_IntInt_ReturnValue) == 0x000045, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, Temp_int_Array_Index_Variable) == 0x000048, "Member 'InventoryFunctionLibrary_C_GetSortType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, Temp_int_Array_Index_Variable_1) == 0x00004C, "Member 'InventoryFunctionLibrary_C_GetSortType::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_Array_Get_Item) == 0x000050, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_Array_Get_Item_1) == 0x000069, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_Array_Length_ReturnValue_2) == 0x00006C, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000070, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, Temp_int_Loop_Counter_Variable_1) == 0x000074, "Member 'InventoryFunctionLibrary_C_GetSortType::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_Less_IntInt_ReturnValue_1) == 0x000078, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InventoryFunctionLibrary_C_GetSortType, CallFunc_Add_IntInt_ReturnValue_1) == 0x00007C, "Member 'InventoryFunctionLibrary_C_GetSortType::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

}

