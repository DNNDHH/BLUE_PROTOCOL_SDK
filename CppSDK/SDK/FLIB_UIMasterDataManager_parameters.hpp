#pragma once

 

// Package: FLIB_UIMasterDataManager

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindItemBoxMaster
// 0x0090 (0x0090 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindItemBoxMaster final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_734E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_734F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterItemBox                       ItemBoxMaster;                                     // 0x0018(0x0020)(Parm, OutParm)
	struct FSBMasterItemBox                       Temp;                                              // 0x0038(0x0020)(Edit, BlueprintVisible)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7350[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7351[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterItemBox                       CallFunc_GetItemBoxMasterData_ReturnValue;         // 0x0070(0x0020)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindItemBoxMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindItemBoxMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindItemBoxMaster) == 0x000090, "Wrong size on FLIB_UIMasterDataManager_C_FindItemBoxMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemBoxMaster, ItemIndex) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindItemBoxMaster::ItemIndex' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemBoxMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindItemBoxMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemBoxMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindItemBoxMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemBoxMaster, ItemBoxMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindItemBoxMaster::ItemBoxMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemBoxMaster, Temp) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_FindItemBoxMaster::Temp' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemBoxMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000058, "Member 'FLIB_UIMasterDataManager_C_FindItemBoxMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemBoxMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000060, "Member 'FLIB_UIMasterDataManager_C_FindItemBoxMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemBoxMaster, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000068, "Member 'FLIB_UIMasterDataManager_C_FindItemBoxMaster::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemBoxMaster, CallFunc_GetItemBoxMasterData_ReturnValue) == 0x000070, "Member 'FLIB_UIMasterDataManager_C_FindItemBoxMaster::CallFunc_GetItemBoxMasterData_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindItemMaster
// 0x01D0 (0x01D0 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindItemMaster final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7352[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7353[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        ItemMaster;                                        // 0x0018(0x00D0)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7354[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7355[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0100(0x00D0)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindItemMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindItemMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindItemMaster) == 0x0001D0, "Wrong size on FLIB_UIMasterDataManager_C_FindItemMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemMaster, ItemIndex) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindItemMaster::ItemIndex' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindItemMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindItemMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemMaster, ItemMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindItemMaster::ItemMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemMaster, CallFunc_GetMasterDataManager_IsValid) == 0x0000E8, "Member 'FLIB_UIMasterDataManager_C_FindItemMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000F0, "Member 'FLIB_UIMasterDataManager_C_FindItemMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemMaster, CallFunc_GetItemMasterData_IsExists) == 0x0000F8, "Member 'FLIB_UIMasterDataManager_C_FindItemMaster::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindItemMaster, CallFunc_GetItemMasterData_ReturnValue) == 0x000100, "Member 'FLIB_UIMasterDataManager_C_FindItemMaster::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindCostumeMaster
// 0x0140 (0x0140 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindCostumeMaster final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7356[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7357[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CostumeMaster;                                     // 0x0018(0x0088)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7358[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7359[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x00B8(0x0088)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindCostumeMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindCostumeMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindCostumeMaster) == 0x000140, "Wrong size on FLIB_UIMasterDataManager_C_FindCostumeMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCostumeMaster, ItemIndex) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindCostumeMaster::ItemIndex' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCostumeMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindCostumeMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCostumeMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindCostumeMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCostumeMaster, CostumeMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindCostumeMaster::CostumeMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCostumeMaster, CallFunc_GetMasterDataManager_IsValid) == 0x0000A0, "Member 'FLIB_UIMasterDataManager_C_FindCostumeMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCostumeMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000A8, "Member 'FLIB_UIMasterDataManager_C_FindCostumeMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCostumeMaster, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0000B0, "Member 'FLIB_UIMasterDataManager_C_FindCostumeMaster::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCostumeMaster, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0000B8, "Member 'FLIB_UIMasterDataManager_C_FindCostumeMaster::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindWeaponMaster
// 0x0190 (0x0190 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindWeaponMaster final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_735A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_735B[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    WeaponMaster;                                      // 0x0018(0x00B0)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_735C[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_735D[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x00E0(0x00B0)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindWeaponMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindWeaponMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindWeaponMaster) == 0x000190, "Wrong size on FLIB_UIMasterDataManager_C_FindWeaponMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWeaponMaster, ItemIndex) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindWeaponMaster::ItemIndex' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWeaponMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindWeaponMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWeaponMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindWeaponMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWeaponMaster, WeaponMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindWeaponMaster::WeaponMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWeaponMaster, CallFunc_GetMasterDataManager_IsValid) == 0x0000C8, "Member 'FLIB_UIMasterDataManager_C_FindWeaponMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWeaponMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D0, "Member 'FLIB_UIMasterDataManager_C_FindWeaponMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWeaponMaster, CallFunc_GetWeaponMasterData_IsExists) == 0x0000D8, "Member 'FLIB_UIMasterDataManager_C_FindWeaponMaster::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWeaponMaster, CallFunc_GetWeaponMasterData_ReturnValue) == 0x0000E0, "Member 'FLIB_UIMasterDataManager_C_FindWeaponMaster::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineMaster
// 0x0280 (0x0280 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindImagineMaster final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_735E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_735F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       ImagineMaster;                                     // 0x0018(0x00B0)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7360[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineRecepi_InExists;         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7361[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindMasterImagineRecepi_ReturnValue;      // 0x00E0(0x0038)()
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7362[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0120(0x00B0)()
	struct FSBMasterImagine                       CallFunc_FindMasterImagine_ReturnValue;            // 0x01D0(0x00B0)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindImagineMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindImagineMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindImagineMaster) == 0x000280, "Wrong size on FLIB_UIMasterDataManager_C_FindImagineMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, ItemIndex) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::ItemIndex' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, ImagineMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::ImagineMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, CallFunc_GetMasterDataManager_IsValid) == 0x0000C8, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D0, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, CallFunc_FindMasterImagineRecepi_InExists) == 0x0000D8, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::CallFunc_FindMasterImagineRecepi_InExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, CallFunc_FindMasterImagineRecepi_ReturnValue) == 0x0000E0, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::CallFunc_FindMasterImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, CallFunc_FindMasterImagineData_IsExists) == 0x000118, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, CallFunc_FindMasterImagineData_ReturnValue) == 0x000120, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMaster, CallFunc_FindMasterImagine_ReturnValue) == 0x0001D0, "Member 'FLIB_UIMasterDataManager_C_FindImagineMaster::CallFunc_FindMasterImagine_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineMasterByRewardData
// 0x01C8 (0x01C8 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7363[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7364[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       ImagineMaster;                                     // 0x0018(0x00B0)(Parm, OutParm)
	int32                                         ImagineId;                                         // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineRecipeByMaterialItem_bIsValid; // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7365[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindImagineRecipeByMaterialItem_ImagineRecipeMaster; // 0x00D0(0x0038)()
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7366[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0110(0x00B0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData) == 0x0001C8, "Wrong size on FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, RewardType) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::RewardType' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, ItemIndex) == 0x000004, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::ItemIndex' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, ImagineMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::ImagineMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, ImagineId) == 0x0000C8, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::ImagineId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, CallFunc_FindImagineRecipeByMaterialItem_bIsValid) == 0x0000CC, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::CallFunc_FindImagineRecipeByMaterialItem_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, CallFunc_FindImagineRecipeByMaterialItem_ImagineRecipeMaster) == 0x0000D0, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::CallFunc_FindImagineRecipeByMaterialItem_ImagineRecipeMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, CallFunc_FindImagineMaster_bIsValid) == 0x000108, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, CallFunc_FindImagineMaster_ImagineMaster) == 0x000110, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001C0, "Member 'FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindMountImagineMaster
// 0x0110 (0x0110 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindMountImagineMaster final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7367[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7368[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  MountImagineMaster;                                // 0x0018(0x0070)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7369[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_736A[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x00A0(0x0070)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindMountImagineMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindMountImagineMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindMountImagineMaster) == 0x000110, "Wrong size on FLIB_UIMasterDataManager_C_FindMountImagineMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindMountImagineMaster, ItemIndex) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindMountImagineMaster::ItemIndex' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindMountImagineMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindMountImagineMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindMountImagineMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindMountImagineMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindMountImagineMaster, MountImagineMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindMountImagineMaster::MountImagineMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindMountImagineMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000088, "Member 'FLIB_UIMasterDataManager_C_FindMountImagineMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindMountImagineMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000090, "Member 'FLIB_UIMasterDataManager_C_FindMountImagineMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindMountImagineMaster, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x000098, "Member 'FLIB_UIMasterDataManager_C_FindMountImagineMaster::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindMountImagineMaster, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x0000A0, "Member 'FLIB_UIMasterDataManager_C_FindMountImagineMaster::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindCraftMaster
// 0x0140 (0x0140 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindCraftMaster final
{
public:
	int32                                         RecepiId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_736B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_736C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CraftMaster;                                       // 0x0018(0x0088)(ConstParm, Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_736D[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_736E[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x00B8(0x0088)(ConstParm)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindCraftMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindCraftMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindCraftMaster) == 0x000140, "Wrong size on FLIB_UIMasterDataManager_C_FindCraftMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCraftMaster, RecepiId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindCraftMaster::RecepiId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCraftMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindCraftMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCraftMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindCraftMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCraftMaster, CraftMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindCraftMaster::CraftMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCraftMaster, CallFunc_GetMasterDataManager_IsValid) == 0x0000A0, "Member 'FLIB_UIMasterDataManager_C_FindCraftMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCraftMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000A8, "Member 'FLIB_UIMasterDataManager_C_FindCraftMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCraftMaster, CallFunc_FindCraftMasterData_isExists) == 0x0000B0, "Member 'FLIB_UIMasterDataManager_C_FindCraftMaster::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindCraftMaster, CallFunc_FindCraftMasterData_ReturnValue) == 0x0000B8, "Member 'FLIB_UIMasterDataManager_C_FindCraftMaster::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindTokenMaster
// 0x00E0 (0x00E0 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindTokenMaster final
{
public:
	int32                                         InTokenId;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_736F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7370[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           TokenMaster;                                       // 0x0018(0x0058)(ConstParm, Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7371[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7372[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0088(0x0058)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindTokenMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindTokenMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindTokenMaster) == 0x0000E0, "Wrong size on FLIB_UIMasterDataManager_C_FindTokenMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindTokenMaster, InTokenId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindTokenMaster::InTokenId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindTokenMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindTokenMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindTokenMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindTokenMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindTokenMaster, TokenMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindTokenMaster::TokenMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindTokenMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000070, "Member 'FLIB_UIMasterDataManager_C_FindTokenMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindTokenMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000078, "Member 'FLIB_UIMasterDataManager_C_FindTokenMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindTokenMaster, CallFunc_BP_FindMasterToken_bIsValid) == 0x000080, "Member 'FLIB_UIMasterDataManager_C_FindTokenMaster::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindTokenMaster, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000088, "Member 'FLIB_UIMasterDataManager_C_FindTokenMaster::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAchievementMaster
// 0x0120 (0x0120 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindAchievementMaster final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7373[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7374[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 AchievementMaster;                                 // 0x0018(0x0078)(ConstParm, Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7375[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7376[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x00A8(0x0078)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindAchievementMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindAchievementMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindAchievementMaster) == 0x000120, "Wrong size on FLIB_UIMasterDataManager_C_FindAchievementMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAchievementMaster, Param_Index) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindAchievementMaster::Param_Index' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAchievementMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindAchievementMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAchievementMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindAchievementMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAchievementMaster, AchievementMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindAchievementMaster::AchievementMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAchievementMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000090, "Member 'FLIB_UIMasterDataManager_C_FindAchievementMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAchievementMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000098, "Member 'FLIB_UIMasterDataManager_C_FindAchievementMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAchievementMaster, CallFunc_GetAchievementMasterData_IsExists) == 0x0000A0, "Member 'FLIB_UIMasterDataManager_C_FindAchievementMaster::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAchievementMaster, CallFunc_GetAchievementMasterData_ReturnValue) == 0x0000A8, "Member 'FLIB_UIMasterDataManager_C_FindAchievementMaster::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindOrnamentMaster
// 0x00F0 (0x00F0 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindOrnamentMaster final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7377[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7378[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterOrnament                      ReturnValue;                                       // 0x0018(0x0060)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7379[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterOrnamentDataBP_bExists;         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_737A[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterOrnament                      CallFunc_FindMasterOrnamentDataBP_ReturnValue;     // 0x0090(0x0060)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindOrnamentMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindOrnamentMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindOrnamentMaster) == 0x0000F0, "Wrong size on FLIB_UIMasterDataManager_C_FindOrnamentMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindOrnamentMaster, ID) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindOrnamentMaster::ID' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindOrnamentMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindOrnamentMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindOrnamentMaster, Valid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindOrnamentMaster::Valid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindOrnamentMaster, ReturnValue) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindOrnamentMaster::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindOrnamentMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000078, "Member 'FLIB_UIMasterDataManager_C_FindOrnamentMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindOrnamentMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000080, "Member 'FLIB_UIMasterDataManager_C_FindOrnamentMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindOrnamentMaster, CallFunc_FindMasterOrnamentDataBP_bExists) == 0x000088, "Member 'FLIB_UIMasterDataManager_C_FindOrnamentMaster::CallFunc_FindMasterOrnamentDataBP_bExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindOrnamentMaster, CallFunc_FindMasterOrnamentDataBP_ReturnValue) == 0x000090, "Member 'FLIB_UIMasterDataManager_C_FindOrnamentMaster::CallFunc_FindMasterOrnamentDataBP_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindEmoteMaster
// 0x0080 (0x0080 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindEmoteMaster final
{
public:
	int32                                         EmoteId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_737B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_737C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEmoteMasterData                     EmoteMaster;                                       // 0x0018(0x0028)(ConstParm, Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_737D[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindEmoteData_IsExists;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_737E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEmoteMasterData                     CallFunc_FindEmoteData_ReturnValue;                // 0x0058(0x0028)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindEmoteMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindEmoteMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindEmoteMaster) == 0x000080, "Wrong size on FLIB_UIMasterDataManager_C_FindEmoteMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindEmoteMaster, EmoteId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindEmoteMaster::EmoteId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindEmoteMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindEmoteMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindEmoteMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindEmoteMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindEmoteMaster, EmoteMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindEmoteMaster::EmoteMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindEmoteMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000040, "Member 'FLIB_UIMasterDataManager_C_FindEmoteMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindEmoteMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000048, "Member 'FLIB_UIMasterDataManager_C_FindEmoteMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindEmoteMaster, CallFunc_FindEmoteData_IsExists) == 0x000050, "Member 'FLIB_UIMasterDataManager_C_FindEmoteMaster::CallFunc_FindEmoteData_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindEmoteMaster, CallFunc_FindEmoteData_ReturnValue) == 0x000058, "Member 'FLIB_UIMasterDataManager_C_FindEmoteMaster::CallFunc_FindEmoteData_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindStampCategoryMaster
// 0x0070 (0x0070 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindStampCategoryMaster final
{
public:
	int32                                         CategoryId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_737F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7380[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             StampCategoryMaster;                               // 0x0018(0x0020)(ConstParm, Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7381[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindStampMasterData_IsExists;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7382[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             CallFunc_FindStampMasterData_ReturnValue;          // 0x0050(0x0020)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindStampCategoryMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindStampCategoryMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindStampCategoryMaster) == 0x000070, "Wrong size on FLIB_UIMasterDataManager_C_FindStampCategoryMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMaster, CategoryId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMaster::CategoryId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMaster, StampCategoryMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMaster::StampCategoryMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000040, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMaster, CallFunc_FindStampMasterData_IsExists) == 0x000048, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMaster::CallFunc_FindStampMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMaster, CallFunc_FindStampMasterData_ReturnValue) == 0x000050, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMaster::CallFunc_FindStampMasterData_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindStampCategoryMasterByStampId
// 0x0070 (0x0070 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId final
{
public:
	int32                                         StampId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7383[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7384[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             StampCategoryMaster;                               // 0x0018(0x0020)(ConstParm, Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7385[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindStampMasterDataByStampId_IsExists;    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7386[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             CallFunc_FindStampMasterDataByStampId_ReturnValue; // 0x0050(0x0020)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId) == 0x000070, "Wrong size on FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId, StampId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId::StampId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId, StampCategoryMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId::StampCategoryMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId, CallFunc_GetMasterDataManager_IsValid) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000040, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId, CallFunc_FindStampMasterDataByStampId_IsExists) == 0x000048, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId::CallFunc_FindStampMasterDataByStampId_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId, CallFunc_FindStampMasterDataByStampId_ReturnValue) == 0x000050, "Member 'FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId::CallFunc_FindStampMasterDataByStampId_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineRecipeMaster
// 0x00A0 (0x00A0 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindImagineRecipeMaster final
{
public:
	int32                                         ImagineId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7387[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7388[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   ImagineRecipeMaster;                               // 0x0018(0x0038)(ConstParm, Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7389[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineRecepi_InExists;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_738A[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindMasterImagineRecepi_ReturnValue;      // 0x0068(0x0038)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindImagineRecipeMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindImagineRecipeMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindImagineRecipeMaster) == 0x0000A0, "Wrong size on FLIB_UIMasterDataManager_C_FindImagineRecipeMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeMaster, ImagineId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeMaster::ImagineId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeMaster, ImagineRecipeMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeMaster::ImagineRecipeMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000050, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000058, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeMaster, CallFunc_FindMasterImagineRecepi_InExists) == 0x000060, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeMaster::CallFunc_FindMasterImagineRecepi_InExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeMaster, CallFunc_FindMasterImagineRecepi_ReturnValue) == 0x000068, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeMaster::CallFunc_FindMasterImagineRecepi_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineRecipeByMaterialItem
// 0x00F0 (0x00F0 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_738B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_738C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   ImagineRecipeMaster;                               // 0x0018(0x0038)(Parm, OutParm)
	TArray<struct FMasterImagineRecepi>           TempImagineRecipeList;                             // 0x0050(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasterImagineRecepi                   CallFunc_Array_Get_Item;                           // 0x0070(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_738D[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineMaterial                 CallFunc_Array_Get_Item_1;                         // 0x00B0(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_738E[0x2];                                     // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_738F[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMasterImagineRecepi>           CallFunc_GetAllMasterImagineRecepi_ReturnValue;    // 0x00D8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7390[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem) == 0x0000F0, "Wrong size on FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, ItemId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::ItemId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, ImagineRecipeMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::ImagineRecipeMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, TempImagineRecipeList) == 0x000050, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::TempImagineRecipeList' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, Temp_int_Array_Index_Variable) == 0x000060, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, Temp_int_Array_Index_Variable_1) == 0x00006C, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_Array_Get_Item) == 0x000070, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_Array_Length_ReturnValue_1) == 0x0000BC, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C1, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, Temp_int_Loop_Counter_Variable_1) == 0x0000C4, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_GetMasterDataManager_IsValid) == 0x0000C8, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D0, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_GetAllMasterImagineRecepi_ReturnValue) == 0x0000D8, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_GetAllMasterImagineRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E8, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000EC, "Member 'FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindProductImagineByMaterialItem
// 0x01C8 (0x01C8 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7391[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7392[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       ImagineMaster;                                     // 0x0018(0x00B0)(Parm, OutParm)
	bool                                          CallFunc_FindImagineRecipeByMaterialItem_bIsValid; // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7393[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterImagineRecepi                   CallFunc_FindImagineRecipeByMaterialItem_ImagineRecipeMaster; // 0x00D0(0x0038)()
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7394[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0110(0x00B0)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem) == 0x0001C8, "Wrong size on FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem, ItemId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem::ItemId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem, ImagineMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem::ImagineMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem, CallFunc_FindImagineRecipeByMaterialItem_bIsValid) == 0x0000C8, "Member 'FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem::CallFunc_FindImagineRecipeByMaterialItem_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem, CallFunc_FindImagineRecipeByMaterialItem_ImagineRecipeMaster) == 0x0000D0, "Member 'FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem::CallFunc_FindImagineRecipeByMaterialItem_ImagineRecipeMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem, CallFunc_FindImagineMaster_bIsValid) == 0x000108, "Member 'FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem, CallFunc_FindImagineMaster_ImagineMaster) == 0x000110, "Member 'FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem, K2Node_SwitchEnum_CmpSuccess) == 0x0001C0, "Member 'FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindWarehouseAbilityRecipeMaster
// 0x0068 (0x0068 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7395[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7396[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWarehouseAbilityRecipeMasterData    WarehouseAbilityRecipeMaster;                      // 0x0014(0x0020)(ConstParm, Parm, OutParm, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7397[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterWarehouseAbilityRecipe_bExists; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7398[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWarehouseAbilityRecipeMasterData    CallFunc_BP_FindMasterWarehouseAbilityRecipe_ReturnValue; // 0x0044(0x0020)(ConstParm, NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster) == 0x000068, "Wrong size on FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster, ID) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster::ID' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster, WarehouseAbilityRecipeMaster) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster::WarehouseAbilityRecipeMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000034, "Member 'FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster, CallFunc_BP_FindMasterWarehouseAbilityRecipe_bExists) == 0x000040, "Member 'FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster::CallFunc_BP_FindMasterWarehouseAbilityRecipe_bExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster, CallFunc_BP_FindMasterWarehouseAbilityRecipe_ReturnValue) == 0x000044, "Member 'FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster::CallFunc_BP_FindMasterWarehouseAbilityRecipe_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindSkillDataMaster
// 0x00E0 (0x00E0 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindSkillDataMaster final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7399[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_739A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 SkillDataMaster;                                   // 0x0018(0x0058)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_739B[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_739C[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0088(0x0058)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindSkillDataMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindSkillDataMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindSkillDataMaster) == 0x0000E0, "Wrong size on FLIB_UIMasterDataManager_C_FindSkillDataMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillDataMaster, SkillId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindSkillDataMaster::SkillId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillDataMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindSkillDataMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillDataMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindSkillDataMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillDataMaster, SkillDataMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindSkillDataMaster::SkillDataMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillDataMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000070, "Member 'FLIB_UIMasterDataManager_C_FindSkillDataMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillDataMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000078, "Member 'FLIB_UIMasterDataManager_C_FindSkillDataMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillDataMaster, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000080, "Member 'FLIB_UIMasterDataManager_C_FindSkillDataMaster::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillDataMaster, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000088, "Member 'FLIB_UIMasterDataManager_C_FindSkillDataMaster::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindSkillMasteryParam
// 0x0038 (0x0038 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindSkillMasteryParam final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InLevel;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_739D[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   OutSkillMasteryParam;                              // 0x0014(0x0008)(Parm, OutParm, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_739E[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_739F[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x002C(0x0008)(NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindSkillMasteryParam");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam) == 0x000038, "Wrong size on FLIB_UIMasterDataManager_C_FindSkillMasteryParam");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam, InSkillId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindSkillMasteryParam::InSkillId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam, InLevel) == 0x000004, "Member 'FLIB_UIMasterDataManager_C_FindSkillMasteryParam::InLevel' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindSkillMasteryParam::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindSkillMasteryParam::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam, OutSkillMasteryParam) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_FindSkillMasteryParam::OutSkillMasteryParam' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam, CallFunc_GetMasterDataManager_IsValid) == 0x00001C, "Member 'FLIB_UIMasterDataManager_C_FindSkillMasteryParam::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'FLIB_UIMasterDataManager_C_FindSkillMasteryParam::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam, CallFunc_GetSkillMasteryParam_IsExists) == 0x000028, "Member 'FLIB_UIMasterDataManager_C_FindSkillMasteryParam::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindSkillMasteryParam, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x00002C, "Member 'FLIB_UIMasterDataManager_C_FindSkillMasteryParam::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetSkillLevelMax
// 0x0030 (0x0030 - 0x0000)
struct FLIB_UIMasterDataManager_C_GetSkillLevelMax final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73A0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73A1[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutSkillLevelMax;                                  // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73A2[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSkillLevelMax_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_GetSkillLevelMax) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_GetSkillLevelMax");
static_assert(sizeof(FLIB_UIMasterDataManager_C_GetSkillLevelMax) == 0x000030, "Wrong size on FLIB_UIMasterDataManager_C_GetSkillLevelMax");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelMax, InSkillId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelMax::InSkillId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelMax, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelMax::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelMax, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelMax::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelMax, OutSkillLevelMax) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelMax::OutSkillLevelMax' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelMax, CallFunc_GetMasterDataManager_IsValid) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelMax::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelMax, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelMax::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelMax, CallFunc_GetSkillLevelMax_ReturnValue) == 0x000028, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelMax::CallFunc_GetSkillLevelMax_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetSkillLevelFromClassLevel
// 0x0030 (0x0030 - 0x0000)
struct FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InClassLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73A3[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutSkillLevel;                                     // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73A4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSkillLevelFromClassLevel_ReturnValue;  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel");
static_assert(sizeof(FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel) == 0x000030, "Wrong size on FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel, InSkillId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel::InSkillId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel, InClassLevel) == 0x000004, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel::InClassLevel' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel, OutSkillLevel) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel::OutSkillLevel' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel, CallFunc_GetMasterDataManager_IsValid) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel, CallFunc_GetSkillLevelFromClassLevel_ReturnValue) == 0x000028, "Member 'FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel::CallFunc_GetSkillLevelFromClassLevel_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRewardLotteryGroupsMaster
// 0x0060 (0x0060 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73A5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73A6[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroups           RewardLotteryGroupsMaster;                         // 0x0018(0x0018)(ConstParm, Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73A7[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterRewardLotteryGroups_bExists; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73A8[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroups           CallFunc_BP_FindMasterRewardLotteryGroups_ReturnValue; // 0x0048(0x0018)(ConstParm)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster) == 0x000060, "Wrong size on FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster, ID) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster::ID' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster, RewardLotteryGroupsMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster::RewardLotteryGroupsMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000030, "Member 'FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster, CallFunc_BP_FindMasterRewardLotteryGroups_bExists) == 0x000040, "Member 'FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster::CallFunc_BP_FindMasterRewardLotteryGroups_bExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster, CallFunc_BP_FindMasterRewardLotteryGroups_ReturnValue) == 0x000048, "Member 'FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster::CallFunc_BP_FindMasterRewardLotteryGroups_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.Find Lottery Reward
// 0x00B8 (0x00B8 - 0x0000)
struct FLIB_UIMasterDataManager_C_Find_Lottery_Reward final
{
public:
	int32                                         LotteryGroupsId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73A9[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroupsRewards    LotteryReward;                                     // 0x0014(0x0038)(Parm, OutParm, NoDestructor)
	bool                                          CallFunc_FindRewardLotteryGroupsMaster_bIsValid;   // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73AA[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroups           CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster; // 0x0050(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterRewardLotteryGroupsRewards    CallFunc_Array_Get_Item;                           // 0x006C(0x0038)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73AB[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73AC[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_Find_Lottery_Reward");
static_assert(sizeof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward) == 0x0000B8, "Wrong size on FLIB_UIMasterDataManager_C_Find_Lottery_Reward");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, LotteryGroupsId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::LotteryGroupsId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, ItemIndex) == 0x000004, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::ItemIndex' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, LotteryReward) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::LotteryReward' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, CallFunc_FindRewardLotteryGroupsMaster_bIsValid) == 0x00004C, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::CallFunc_FindRewardLotteryGroupsMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster) == 0x000050, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, Temp_int_Array_Index_Variable) == 0x000068, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, CallFunc_Array_Get_Item) == 0x00006C, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, Temp_int_Loop_Counter_Variable) == 0x0000AC, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, CallFunc_Less_IntInt_ReturnValue) == 0x0000B0, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_Find_Lottery_Reward, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'FLIB_UIMasterDataManager_C_Find_Lottery_Reward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAbilityMaster
// 0x00C0 (0x00C0 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindAbilityMaster final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73AD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73AE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   AbilityMaster;                                     // 0x0018(0x0048)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73AF[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAbilityMasterDataByEffectId_IsExists;  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73B0[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_GetAbilityMasterDataByEffectId_ReturnValue; // 0x0078(0x0048)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindAbilityMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindAbilityMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindAbilityMaster) == 0x0000C0, "Wrong size on FLIB_UIMasterDataManager_C_FindAbilityMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityMaster, InId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindAbilityMaster::InId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindAbilityMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindAbilityMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityMaster, AbilityMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindAbilityMaster::AbilityMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000060, "Member 'FLIB_UIMasterDataManager_C_FindAbilityMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000068, "Member 'FLIB_UIMasterDataManager_C_FindAbilityMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityMaster, CallFunc_GetAbilityMasterDataByEffectId_IsExists) == 0x000070, "Member 'FLIB_UIMasterDataManager_C_FindAbilityMaster::CallFunc_GetAbilityMasterDataByEffectId_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityMaster, CallFunc_GetAbilityMasterDataByEffectId_ReturnValue) == 0x000078, "Member 'FLIB_UIMasterDataManager_C_FindAbilityMaster::CallFunc_GetAbilityMasterDataByEffectId_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAbilityEffectMaster
// 0x0070 (0x0070 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindAbilityEffectMaster final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73B1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73B2[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             AbilityEffectMaster;                               // 0x0014(0x0024)(Parm, OutParm, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73B3[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetAbilityEffectMasterData_IsExists;   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73B4[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_BP_GetAbilityEffectMasterData_ReturnValue; // 0x004C(0x0024)(NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindAbilityEffectMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindAbilityEffectMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindAbilityEffectMaster) == 0x000070, "Wrong size on FLIB_UIMasterDataManager_C_FindAbilityEffectMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityEffectMaster, InId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindAbilityEffectMaster::InId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityEffectMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindAbilityEffectMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityEffectMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindAbilityEffectMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityEffectMaster, AbilityEffectMaster) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_FindAbilityEffectMaster::AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityEffectMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_FindAbilityEffectMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityEffectMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000040, "Member 'FLIB_UIMasterDataManager_C_FindAbilityEffectMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityEffectMaster, CallFunc_BP_GetAbilityEffectMasterData_IsExists) == 0x000048, "Member 'FLIB_UIMasterDataManager_C_FindAbilityEffectMaster::CallFunc_BP_GetAbilityEffectMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAbilityEffectMaster, CallFunc_BP_GetAbilityEffectMasterData_ReturnValue) == 0x00004C, "Member 'FLIB_UIMasterDataManager_C_FindAbilityEffectMaster::CallFunc_BP_GetAbilityEffectMasterData_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindFusionItemMaster
// 0x0058 (0x0058 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindFusionItemMaster final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73B5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73B6[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    OutFusionItemMaster;                               // 0x0014(0x0018)(Parm, OutParm, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73B7[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73B8[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x003C(0x0018)(NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindFusionItemMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindFusionItemMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindFusionItemMaster) == 0x000058, "Wrong size on FLIB_UIMasterDataManager_C_FindFusionItemMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindFusionItemMaster, InId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindFusionItemMaster::InId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindFusionItemMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindFusionItemMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindFusionItemMaster, IsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindFusionItemMaster::IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindFusionItemMaster, OutFusionItemMaster) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_FindFusionItemMaster::OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindFusionItemMaster, CallFunc_GetMasterDataManager_IsValid) == 0x00002C, "Member 'FLIB_UIMasterDataManager_C_FindFusionItemMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindFusionItemMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'FLIB_UIMasterDataManager_C_FindFusionItemMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindFusionItemMaster, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_FindFusionItemMaster::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindFusionItemMaster, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x00003C, "Member 'FLIB_UIMasterDataManager_C_FindFusionItemMaster::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRewardMaster
// 0x0050 (0x0050 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindRewardMaster final
{
public:
	class FName                                   RewardId;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73B9[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        RewardMaster;                                      // 0x0014(0x0014)(Parm, OutParm, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73BA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterReward_IsExists;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73BB[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x003C(0x0014)(NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindRewardMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindRewardMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindRewardMaster) == 0x000050, "Wrong size on FLIB_UIMasterDataManager_C_FindRewardMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardMaster, RewardId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindRewardMaster::RewardId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindRewardMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardMaster, IsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindRewardMaster::IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardMaster, RewardMaster) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_FindRewardMaster::RewardMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000028, "Member 'FLIB_UIMasterDataManager_C_FindRewardMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'FLIB_UIMasterDataManager_C_FindRewardMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardMaster, CallFunc_FindMasterReward_IsExists) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_FindRewardMaster::CallFunc_FindMasterReward_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRewardMaster, CallFunc_FindMasterReward_ReturnValue) == 0x00003C, "Member 'FLIB_UIMasterDataManager_C_FindRewardMaster::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetDateChangeTime
// 0x00A0 (0x00A0 - 0x0000)
struct FLIB_UIMasterDataManager_C_GetDateChangeTime final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              Date_Change_Time;                                  // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73BC[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73BD[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCountryConfigMasterData             CallFunc_BP_GetCountryConfigMasterById_ReturnValue; // 0x0058(0x0048)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_GetDateChangeTime) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_GetDateChangeTime");
static_assert(sizeof(FLIB_UIMasterDataManager_C_GetDateChangeTime) == 0x0000A0, "Wrong size on FLIB_UIMasterDataManager_C_GetDateChangeTime");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetDateChangeTime, __WorldContext) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_GetDateChangeTime::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetDateChangeTime, Date_Change_Time) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_GetDateChangeTime::Date_Change_Time' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetDateChangeTime, K2Node_MakeArray_Array) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_GetDateChangeTime::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetDateChangeTime, CallFunc_Array_Get_Item) == 0x000020, "Member 'FLIB_UIMasterDataManager_C_GetDateChangeTime::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetDateChangeTime, CallFunc_IsEmpty_ReturnValue) == 0x000028, "Member 'FLIB_UIMasterDataManager_C_GetDateChangeTime::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetDateChangeTime, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000030, "Member 'FLIB_UIMasterDataManager_C_GetDateChangeTime::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetDateChangeTime, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_GetDateChangeTime::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetDateChangeTime, CallFunc_GetMasterDataManager_IsValid) == 0x000048, "Member 'FLIB_UIMasterDataManager_C_GetDateChangeTime::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetDateChangeTime, CallFunc_GetMasterDataManager_ReturnValue) == 0x000050, "Member 'FLIB_UIMasterDataManager_C_GetDateChangeTime::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetDateChangeTime, CallFunc_BP_GetCountryConfigMasterById_ReturnValue) == 0x000058, "Member 'FLIB_UIMasterDataManager_C_GetDateChangeTime::CallFunc_BP_GetCountryConfigMasterById_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheShopCharaParamRestrictionMaster
// 0x00A8 (0x00A8 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster final
{
public:
	class FString                                 InId;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73BE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCharaParamRestrictionMasterData OutData;                                           // 0x0020(0x0030)(Parm, OutParm)
	class FString                                 LocalID;                                           // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73BF[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists; // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73C0[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCharaParamRestrictionMasterData CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue; // 0x0078(0x0030)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster) == 0x0000A8, "Wrong size on FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster, InId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster::InId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster, __WorldContext) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster, bIsValid) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster, OutData) == 0x000020, "Member 'FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster::OutData' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster, LocalID) == 0x000050, "Member 'FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster::LocalID' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000060, "Member 'FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000068, "Member 'FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster, CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists) == 0x000070, "Member 'FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster::CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster, CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue) == 0x000078, "Member 'FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster::CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheCharaPartsMasterByIconId
// 0x00D8 (0x00D8 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId final
{
public:
	class FString                                 InIconId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73C1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopPartsMasterData           OutData;                                           // 0x0020(0x0048)(Parm, OutParm)
	class FString                                 LocalID;                                           // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73C2[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindAestheShopPartsMasterByIconId_IsExists; // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73C3[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopPartsMasterData           CallFunc_BP_FindAestheShopPartsMasterByIconId_ReturnValue; // 0x0090(0x0048)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId) == 0x0000D8, "Wrong size on FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId, InIconId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId::InIconId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId, __WorldContext) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId, bIsValid) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId, OutData) == 0x000020, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId::OutData' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId, LocalID) == 0x000068, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId::LocalID' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId, CallFunc_GetMasterDataManager_IsValid) == 0x000078, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000080, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId, CallFunc_BP_FindAestheShopPartsMasterByIconId_IsExists) == 0x000088, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId::CallFunc_BP_FindAestheShopPartsMasterByIconId_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId, CallFunc_BP_FindAestheShopPartsMasterByIconId_ReturnValue) == 0x000090, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId::CallFunc_BP_FindAestheShopPartsMasterByIconId_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheCharaPartsMasterByAssetId
// 0x00D8 (0x00D8 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId final
{
public:
	class FString                                 InAssetId;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73C4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopPartsMasterData           OutData;                                           // 0x0020(0x0048)(Parm, OutParm)
	class FString                                 LocalID;                                           // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73C5[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindAestheShopPartsMasterByAssetId_IsExists; // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73C6[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopPartsMasterData           CallFunc_BP_FindAestheShopPartsMasterByAssetId_ReturnValue; // 0x0090(0x0048)()
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId) == 0x0000D8, "Wrong size on FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId, InAssetId) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId::InAssetId' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId, __WorldContext) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId, bIsValid) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId, OutData) == 0x000020, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId::OutData' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId, LocalID) == 0x000068, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId::LocalID' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId, CallFunc_GetMasterDataManager_IsValid) == 0x000078, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000080, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId, CallFunc_BP_FindAestheShopPartsMasterByAssetId_IsExists) == 0x000088, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId::CallFunc_BP_FindAestheShopPartsMasterByAssetId_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId, CallFunc_BP_FindAestheShopPartsMasterByAssetId_ReturnValue) == 0x000090, "Member 'FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId::CallFunc_BP_FindAestheShopPartsMasterByAssetId_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRealGoodsMaster
// 0x0048 (0x0048 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindRealGoodsMaster final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73C7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73C8[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopRealGoodsMasterData        RealGoodsMaster;                                   // 0x0014(0x0010)(Parm, OutParm, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73C9[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetEventShopRealGoodsMasterById_IsExists; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73CA[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventShopRealGoodsMasterData        CallFunc_BP_GetEventShopRealGoodsMasterById_ReturnValue; // 0x0034(0x0010)(NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindRealGoodsMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindRealGoodsMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindRealGoodsMaster) == 0x000048, "Wrong size on FLIB_UIMasterDataManager_C_FindRealGoodsMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRealGoodsMaster, Param_Index) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindRealGoodsMaster::Param_Index' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRealGoodsMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindRealGoodsMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRealGoodsMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindRealGoodsMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRealGoodsMaster, RealGoodsMaster) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_FindRealGoodsMaster::RealGoodsMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRealGoodsMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000024, "Member 'FLIB_UIMasterDataManager_C_FindRealGoodsMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRealGoodsMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'FLIB_UIMasterDataManager_C_FindRealGoodsMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRealGoodsMaster, CallFunc_BP_GetEventShopRealGoodsMasterById_IsExists) == 0x000030, "Member 'FLIB_UIMasterDataManager_C_FindRealGoodsMaster::CallFunc_BP_GetEventShopRealGoodsMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRealGoodsMaster, CallFunc_BP_GetEventShopRealGoodsMasterById_ReturnValue) == 0x000034, "Member 'FLIB_UIMasterDataManager_C_FindRealGoodsMaster::CallFunc_BP_GetEventShopRealGoodsMasterById_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRecipeSetMaster
// 0x0060 (0x0060 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindRecipeSetMaster final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73CB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73CC[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRecipeSetMasterData                   RecipeSetMaster;                                   // 0x0018(0x0018)(ConstParm, Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73CD[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindRecipeSetMasterData_isExists;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73CE[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRecipeSetMasterData                   CallFunc_FindRecipeSetMasterData_ReturnValue;      // 0x0048(0x0018)(ConstParm)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindRecipeSetMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindRecipeSetMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindRecipeSetMaster) == 0x000060, "Wrong size on FLIB_UIMasterDataManager_C_FindRecipeSetMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRecipeSetMaster, Param_Index) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindRecipeSetMaster::Param_Index' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRecipeSetMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindRecipeSetMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRecipeSetMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindRecipeSetMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRecipeSetMaster, RecipeSetMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindRecipeSetMaster::RecipeSetMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRecipeSetMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000030, "Member 'FLIB_UIMasterDataManager_C_FindRecipeSetMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRecipeSetMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_FindRecipeSetMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRecipeSetMaster, CallFunc_FindRecipeSetMasterData_isExists) == 0x000040, "Member 'FLIB_UIMasterDataManager_C_FindRecipeSetMaster::CallFunc_FindRecipeSetMasterData_isExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindRecipeSetMaster, CallFunc_FindRecipeSetMasterData_ReturnValue) == 0x000048, "Member 'FLIB_UIMasterDataManager_C_FindRecipeSetMaster::CallFunc_FindRecipeSetMasterData_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAdventureBoardMaster
// 0x0120 (0x0120 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindAdventureBoardMaster final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73CF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73D0[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventureBoardParamMasterData       AdventureBoardMaster;                              // 0x0018(0x0078)(ConstParm, Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73D1[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAdventureBoard_IsExists;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73D2[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventureBoardParamMasterData       CallFunc_FindAdventureBoard_ReturnValue;           // 0x00A8(0x0078)(ConstParm)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindAdventureBoardMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindAdventureBoardMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindAdventureBoardMaster) == 0x000120, "Wrong size on FLIB_UIMasterDataManager_C_FindAdventureBoardMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureBoardMaster, ID) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindAdventureBoardMaster::ID' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureBoardMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindAdventureBoardMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureBoardMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindAdventureBoardMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureBoardMaster, AdventureBoardMaster) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_FindAdventureBoardMaster::AdventureBoardMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureBoardMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000090, "Member 'FLIB_UIMasterDataManager_C_FindAdventureBoardMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureBoardMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000098, "Member 'FLIB_UIMasterDataManager_C_FindAdventureBoardMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureBoardMaster, CallFunc_FindAdventureBoard_IsExists) == 0x0000A0, "Member 'FLIB_UIMasterDataManager_C_FindAdventureBoardMaster::CallFunc_FindAdventureBoard_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureBoardMaster, CallFunc_FindAdventureBoard_ReturnValue) == 0x0000A8, "Member 'FLIB_UIMasterDataManager_C_FindAdventureBoardMaster::CallFunc_FindAdventureBoard_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetItemMasterItemIdListFromEfficacyType
// 0x0048 (0x0048 - 0x0000)
struct FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType final
{
public:
	EItemEfficacyType                             InEfficacyType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73D3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73D4[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 OutItemIdList;                                     // 0x0018(0x0010)(Parm, OutParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73D5[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetItemMasterItemIDListFromEfficacyType_ReturnValue; // 0x0038(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType");
static_assert(sizeof(FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType) == 0x000048, "Wrong size on FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType, InEfficacyType) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType::InEfficacyType' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType, IsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType::IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType, OutItemIdList) == 0x000018, "Member 'FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType::OutItemIdList' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType, CallFunc_GetMasterDataManager_IsValid) == 0x000028, "Member 'FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType, CallFunc_GetItemMasterItemIDListFromEfficacyType_ReturnValue) == 0x000038, "Member 'FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType::CallFunc_GetItemMasterItemIDListFromEfficacyType_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindShopItemSetMaster
// 0x00A0 (0x00A0 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindShopItemSetMaster final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73D6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73D7[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFlatShopItemSetMasterData           ShopItemSetMaster;                                 // 0x0014(0x003C)(Parm, OutParm, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73D8[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetShopItemSetMasterById_IsExists;     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73D9[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFlatShopItemSetMasterData           CallFunc_BP_GetShopItemSetMasterById_ReturnValue;  // 0x0064(0x003C)(NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindShopItemSetMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindShopItemSetMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindShopItemSetMaster) == 0x0000A0, "Wrong size on FLIB_UIMasterDataManager_C_FindShopItemSetMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindShopItemSetMaster, Param_Index) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindShopItemSetMaster::Param_Index' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindShopItemSetMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindShopItemSetMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindShopItemSetMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindShopItemSetMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindShopItemSetMaster, ShopItemSetMaster) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_FindShopItemSetMaster::ShopItemSetMaster' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindShopItemSetMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000050, "Member 'FLIB_UIMasterDataManager_C_FindShopItemSetMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindShopItemSetMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000058, "Member 'FLIB_UIMasterDataManager_C_FindShopItemSetMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindShopItemSetMaster, CallFunc_BP_GetShopItemSetMasterById_IsExists) == 0x000060, "Member 'FLIB_UIMasterDataManager_C_FindShopItemSetMaster::CallFunc_BP_GetShopItemSetMasterById_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindShopItemSetMaster, CallFunc_BP_GetShopItemSetMasterById_ReturnValue) == 0x000064, "Member 'FLIB_UIMasterDataManager_C_FindShopItemSetMaster::CallFunc_BP_GetShopItemSetMasterById_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAdventureCardDecorationMaster
// 0x0048 (0x0048 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73DA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73DB[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAdventureCardDecoration       ReturnValue;                                       // 0x0014(0x0010)(ConstParm, Parm, OutParm, ReturnParm, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73DC[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSBMasterAdventureCardDecorationDataForBP_bIsExists; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73DD[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAdventureCardDecoration       CallFunc_FindSBMasterAdventureCardDecorationDataForBP_ReturnValue; // 0x0034(0x0010)(ConstParm, NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster) == 0x000048, "Wrong size on FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster, Param_Index) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster::Param_Index' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster, ReturnValue) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000024, "Member 'FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster, CallFunc_FindSBMasterAdventureCardDecorationDataForBP_bIsExists) == 0x000030, "Member 'FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster::CallFunc_FindSBMasterAdventureCardDecorationDataForBP_bIsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster, CallFunc_FindSBMasterAdventureCardDecorationDataForBP_ReturnValue) == 0x000034, "Member 'FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster::CallFunc_FindSBMasterAdventureCardDecorationDataForBP_ReturnValue' has a wrong offset!");

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAwardsMaster
// 0x0040 (0x0040 - 0x0000)
struct FLIB_UIMasterDataManager_C_FindAwardsMaster final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73DE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73DF[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAwardsData                    ReturnValue;                                       // 0x0014(0x000C)(Parm, OutParm, ReturnParm, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E0[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSBMasterAwardsDataForBP_IsExists;     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E1[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAwardsData                    CallFunc_FindSBMasterAwardsDataForBP_ReturnValue;  // 0x0034(0x000C)(NoDestructor)
};
static_assert(alignof(FLIB_UIMasterDataManager_C_FindAwardsMaster) == 0x000008, "Wrong alignment on FLIB_UIMasterDataManager_C_FindAwardsMaster");
static_assert(sizeof(FLIB_UIMasterDataManager_C_FindAwardsMaster) == 0x000040, "Wrong size on FLIB_UIMasterDataManager_C_FindAwardsMaster");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAwardsMaster, Param_Index) == 0x000000, "Member 'FLIB_UIMasterDataManager_C_FindAwardsMaster::Param_Index' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAwardsMaster, __WorldContext) == 0x000008, "Member 'FLIB_UIMasterDataManager_C_FindAwardsMaster::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAwardsMaster, bIsValid) == 0x000010, "Member 'FLIB_UIMasterDataManager_C_FindAwardsMaster::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAwardsMaster, ReturnValue) == 0x000014, "Member 'FLIB_UIMasterDataManager_C_FindAwardsMaster::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAwardsMaster, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'FLIB_UIMasterDataManager_C_FindAwardsMaster::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAwardsMaster, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'FLIB_UIMasterDataManager_C_FindAwardsMaster::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAwardsMaster, CallFunc_FindSBMasterAwardsDataForBP_IsExists) == 0x000030, "Member 'FLIB_UIMasterDataManager_C_FindAwardsMaster::CallFunc_FindSBMasterAwardsDataForBP_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_UIMasterDataManager_C_FindAwardsMaster, CallFunc_FindSBMasterAwardsDataForBP_ReturnValue) == 0x000034, "Member 'FLIB_UIMasterDataManager_C_FindAwardsMaster::CallFunc_FindSBMasterAwardsDataForBP_ReturnValue' has a wrong offset!");

}

