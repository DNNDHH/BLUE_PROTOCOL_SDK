#pragma once

 

// Package: ST_ToolTipInfo

#include "Basic.hpp"

#include "ToolTipType_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_ToolTipInfo.ST_ToolTipInfo
// 0x0078 (0x0078 - 0x0000)
struct FST_ToolTipInfo final
{
public:
	EToolTipType                                  ToolTipType_39_F64BA1944CFF4E2E6F18E0A7C4D3303F;   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_896D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex_2_91A6CEE54F9A0250369511AC8EA16F7F;      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType_19_11629CEE4B1F3CE30A45B2A8E2ABE9D3;      // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_896E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ItemUniqueId_23_9B7CCEA9461C95BC58BEE8B1D61E13A0;  // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Amount_4_6C4643BF44D9ECA5569ABEA6FFA24E0A;         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin_53_F90B894B4936F279F8556F972DCB594C;     // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUnidentified_7_E8A6CEDE46AB73612E05919A2D51F5D4;  // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_896F[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   EmotionId_20_75A60567427E8F0F7C319992C9F29D89;     // 0x002C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageId_40_8CF0688B4EFA0488AC25DE964EADC303;     // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             RewardItemType_46_50BE11624EC0D43A3A871E9BF516E5F3; // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8970[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OptionText_43_5446AD5F49A0537389E6AA897B5AC59B;    // 0x0040(0x0018)(Edit, BlueprintVisible)
	class FText                                   OptionText2_49_6531BD894BC1723E2B9064872D0B7326;   // 0x0058(0x0018)(Edit, BlueprintVisible)
	bool                                          UseClassTypeForLevelSync_57_D75608E341FBE40ECB89D3BDF9D53347; // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  ClassTypeForLevelSync_60_703C865542D19A3C6DA3B39E7021B67B; // 0x0071(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay_62_4F2050BC435FDDBE0C3108A4130F8395; // 0x0072(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ForceLevelSyncOff_65_C4223B7449215C72E8F1C7B563F737CA; // 0x0073(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FST_ToolTipInfo) == 0x000008, "Wrong alignment on FST_ToolTipInfo");
static_assert(sizeof(FST_ToolTipInfo) == 0x000078, "Wrong size on FST_ToolTipInfo");
static_assert(offsetof(FST_ToolTipInfo, ToolTipType_39_F64BA1944CFF4E2E6F18E0A7C4D3303F) == 0x000000, "Member 'FST_ToolTipInfo::ToolTipType_39_F64BA1944CFF4E2E6F18E0A7C4D3303F' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, ItemIndex_2_91A6CEE54F9A0250369511AC8EA16F7F) == 0x000004, "Member 'FST_ToolTipInfo::ItemIndex_2_91A6CEE54F9A0250369511AC8EA16F7F' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, ItemType_19_11629CEE4B1F3CE30A45B2A8E2ABE9D3) == 0x000008, "Member 'FST_ToolTipInfo::ItemType_19_11629CEE4B1F3CE30A45B2A8E2ABE9D3' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, ItemUniqueId_23_9B7CCEA9461C95BC58BEE8B1D61E13A0) == 0x000010, "Member 'FST_ToolTipInfo::ItemUniqueId_23_9B7CCEA9461C95BC58BEE8B1D61E13A0' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, Amount_4_6C4643BF44D9ECA5569ABEA6FFA24E0A) == 0x000020, "Member 'FST_ToolTipInfo::Amount_4_6C4643BF44D9ECA5569ABEA6FFA24E0A' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, AmountMin_53_F90B894B4936F279F8556F972DCB594C) == 0x000024, "Member 'FST_ToolTipInfo::AmountMin_53_F90B894B4936F279F8556F972DCB594C' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, bUnidentified_7_E8A6CEDE46AB73612E05919A2D51F5D4) == 0x000028, "Member 'FST_ToolTipInfo::bUnidentified_7_E8A6CEDE46AB73612E05919A2D51F5D4' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, EmotionId_20_75A60567427E8F0F7C319992C9F29D89) == 0x00002C, "Member 'FST_ToolTipInfo::EmotionId_20_75A60567427E8F0F7C319992C9F29D89' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, StorageId_40_8CF0688B4EFA0488AC25DE964EADC303) == 0x000034, "Member 'FST_ToolTipInfo::StorageId_40_8CF0688B4EFA0488AC25DE964EADC303' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, RewardItemType_46_50BE11624EC0D43A3A871E9BF516E5F3) == 0x000038, "Member 'FST_ToolTipInfo::RewardItemType_46_50BE11624EC0D43A3A871E9BF516E5F3' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, OptionText_43_5446AD5F49A0537389E6AA897B5AC59B) == 0x000040, "Member 'FST_ToolTipInfo::OptionText_43_5446AD5F49A0537389E6AA897B5AC59B' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, OptionText2_49_6531BD894BC1723E2B9064872D0B7326) == 0x000058, "Member 'FST_ToolTipInfo::OptionText2_49_6531BD894BC1723E2B9064872D0B7326' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, UseClassTypeForLevelSync_57_D75608E341FBE40ECB89D3BDF9D53347) == 0x000070, "Member 'FST_ToolTipInfo::UseClassTypeForLevelSync_57_D75608E341FBE40ECB89D3BDF9D53347' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, ClassTypeForLevelSync_60_703C865542D19A3C6DA3B39E7021B67B) == 0x000071, "Member 'FST_ToolTipInfo::ClassTypeForLevelSync_60_703C865542D19A3C6DA3B39E7021B67B' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, IsEffectiveDisplay_62_4F2050BC435FDDBE0C3108A4130F8395) == 0x000072, "Member 'FST_ToolTipInfo::IsEffectiveDisplay_62_4F2050BC435FDDBE0C3108A4130F8395' has a wrong offset!");
static_assert(offsetof(FST_ToolTipInfo, ForceLevelSyncOff_65_C4223B7449215C72E8F1C7B563F737CA) == 0x000073, "Member 'FST_ToolTipInfo::ForceLevelSyncOff_65_C4223B7449215C72E8F1C7B563F737CA' has a wrong offset!");

}

