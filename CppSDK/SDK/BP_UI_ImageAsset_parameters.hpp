#pragma once

 

// Package: BP_UI_ImageAsset

#include "Basic.hpp"

#include "ImageAssetTable_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset
// 0x0078 (0x0078 - 0x0000)
struct BP_UI_ImageAsset_C_GetUIImageAsset final
{
public:
	class UDataTable*                             DataTable;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ImageName;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              ImageAsset;                                        // 0x0018(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8578[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FImageAssetTable                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_ImageAsset_C_GetUIImageAsset) == 0x000008, "Wrong alignment on BP_UI_ImageAsset_C_GetUIImageAsset");
static_assert(sizeof(BP_UI_ImageAsset_C_GetUIImageAsset) == 0x000078, "Wrong size on BP_UI_ImageAsset_C_GetUIImageAsset");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset, DataTable) == 0x000000, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset::DataTable' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset, ImageName) == 0x000008, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset::ImageName' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset, __WorldContext) == 0x000010, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset, ImageAsset) == 0x000018, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset::ImageAsset' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset, Exist) == 0x000040, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset::Exist' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000070, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset_Dungeon
// 0x0068 (0x0068 - 0x0000)
struct BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon final
{
public:
	class FName                                   ImageName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              ImageAsset;                                        // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetUIImageAsset_ImageAsset;               // 0x0038(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_GetUIImageAsset_Exist;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon) == 0x000008, "Wrong alignment on BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon");
static_assert(sizeof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon) == 0x000068, "Wrong size on BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon, ImageName) == 0x000000, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon::ImageName' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon, __WorldContext) == 0x000008, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon, ImageAsset) == 0x000010, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon::ImageAsset' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon, CallFunc_GetUIImageAsset_ImageAsset) == 0x000038, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon::CallFunc_GetUIImageAsset_ImageAsset' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon, CallFunc_GetUIImageAsset_Exist) == 0x000060, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon::CallFunc_GetUIImageAsset_Exist' has a wrong offset!");

// Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset_Dungeon_ById
// 0x0248 (0x0248 - 0x0000)
struct BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById final
{
public:
	class FName                                   DungeonId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              ImageAsset;                                        // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	struct FSBMapInfo                             CallFunc_GetDungeonMapInfo_MapInfo;                // 0x0038(0x01E0)()
	bool                                          CallFunc_GetDungeonMapInfo_ReturnValue;            // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8579[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetUIImageAsset_Dungeon_ImageAsset;       // 0x0220(0x0028)(HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById) == 0x000008, "Wrong alignment on BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById");
static_assert(sizeof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById) == 0x000248, "Wrong size on BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById, DungeonId) == 0x000000, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById::DungeonId' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById, __WorldContext) == 0x000008, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById, ImageAsset) == 0x000010, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById::ImageAsset' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById, CallFunc_GetDungeonMapInfo_MapInfo) == 0x000038, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById::CallFunc_GetDungeonMapInfo_MapInfo' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById, CallFunc_GetDungeonMapInfo_ReturnValue) == 0x000218, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById::CallFunc_GetDungeonMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById, CallFunc_GetUIImageAsset_Dungeon_ImageAsset) == 0x000220, "Member 'BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById::CallFunc_GetUIImageAsset_Dungeon_ImageAsset' has a wrong offset!");

}

