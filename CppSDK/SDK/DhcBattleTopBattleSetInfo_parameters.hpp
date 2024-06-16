#pragma once

 

// Package: DhcBattleTopBattleSetInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.SetupInfo
// 0x0300 (0x0300 - 0x0000)
struct DhcBattleTopBattleSetInfo_C_SetupInfo final
{
public:
	struct FSBDhcBattleHighScoreInfo              InScoreInfo;                                       // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBDhcBattleHighScoreInfo              LocalScoreInfo;                                    // 0x00D8(0x00D8)(Edit, BlueprintVisible)
	ESBPlayerPresetEquipItem                      LocalPresetEquipItem;                              // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635D[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBPlayerPresetEquipItem>              LocalTopInfoItems;                                 // 0x01B8(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalClassLevel;                                   // 0x01C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x01CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635E[0x3];                                     // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillId;                                      // 0x01D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalArrayIndex;                                   // 0x01D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalType;                                         // 0x01D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635F[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalUniqueId;                                     // 0x01E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalItemId;                                       // 0x01F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6360[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPresetEquipItem               LocalCordeItem;                                    // 0x01F8(0x0028)(Edit, BlueprintVisible)
	TArray<struct FSBPlayerPresetEquipItem>       LocalCordeItemArray;                               // 0x0220(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalImagineSlotId;                                // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalEquipItemId;                                  // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalEquipItemUniqueId;                            // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBCharaEquipType                             LocalEquipType;                                    // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6361[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBCharaEquipType>                     LocalCharaEquipTypes;                              // 0x0250(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 LocalClassAbililtySkillIdArrayForCorde;            // 0x0260(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 LocalTacticalSkillIdArrayForCorde;                 // 0x0270(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalULTSkillIdForCorde;                           // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6362[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 LocalRegularSkillIdArrayForCorde;                  // 0x0288(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         LocalInnerImagineUniqueIdArrayForCorde;            // 0x0298(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         LocalBattleImagineUniqueIdArrayForCorde;           // 0x02A8(0x0010)(Edit, BlueprintVisible)
	class FString                                 LocalWeaponUniqueIdForCorde;                       // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalWeaponItemIdForCorde;                         // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsStorageMode;                                // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6363[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalCordeId;                                      // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSubPaletteReleased_ReturnValue;         // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x02D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6364[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassAbilitySlotCnt_OutSlotCnt;        // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTacticalSkillSlotCnt_OutSlotCnt;       // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInnerImagineSlotCnt_OutSlotCnt;        // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBattleImagineSlotCnt_OutSlotCnt;       // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRegularSkillSlotCnt_OutSlotCnt;        // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x02F0(0x0010)(ReferenceParm)
};
static_assert(alignof(DhcBattleTopBattleSetInfo_C_SetupInfo) == 0x000008, "Wrong alignment on DhcBattleTopBattleSetInfo_C_SetupInfo");
static_assert(sizeof(DhcBattleTopBattleSetInfo_C_SetupInfo) == 0x000300, "Wrong size on DhcBattleTopBattleSetInfo_C_SetupInfo");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, InScoreInfo) == 0x000000, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::InScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalScoreInfo) == 0x0000D8, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalPresetEquipItem) == 0x0001B0, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalPresetEquipItem' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalTopInfoItems) == 0x0001B8, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalTopInfoItems' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalClassLevel) == 0x0001C8, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalClassType) == 0x0001CC, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalSkillId) == 0x0001D0, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalSkillId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalArrayIndex) == 0x0001D4, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalArrayIndex' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalType) == 0x0001D8, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalUniqueId) == 0x0001E0, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalUniqueId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalItemId) == 0x0001F0, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalItemId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalCordeItem) == 0x0001F8, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalCordeItem' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalCordeItemArray) == 0x000220, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalCordeItemArray' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalImagineSlotId) == 0x000230, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalImagineSlotId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalEquipItemId) == 0x000234, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalEquipItemId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalEquipItemUniqueId) == 0x000238, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalEquipItemUniqueId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalEquipType) == 0x000248, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalEquipType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalCharaEquipTypes) == 0x000250, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalCharaEquipTypes' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalClassAbililtySkillIdArrayForCorde) == 0x000260, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalClassAbililtySkillIdArrayForCorde' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalTacticalSkillIdArrayForCorde) == 0x000270, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalTacticalSkillIdArrayForCorde' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalULTSkillIdForCorde) == 0x000280, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalULTSkillIdForCorde' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalRegularSkillIdArrayForCorde) == 0x000288, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalRegularSkillIdArrayForCorde' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalInnerImagineUniqueIdArrayForCorde) == 0x000298, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalInnerImagineUniqueIdArrayForCorde' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalBattleImagineUniqueIdArrayForCorde) == 0x0002A8, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalBattleImagineUniqueIdArrayForCorde' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalWeaponUniqueIdForCorde) == 0x0002B8, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalWeaponUniqueIdForCorde' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalWeaponItemIdForCorde) == 0x0002C8, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalWeaponItemIdForCorde' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalIsStorageMode) == 0x0002CC, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalIsStorageMode' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, LocalCordeId) == 0x0002D0, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::LocalCordeId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, CallFunc_IsSubPaletteReleased_ReturnValue) == 0x0002D4, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::CallFunc_IsSubPaletteReleased_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, CallFunc_IsValid_ReturnValue) == 0x0002D5, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, CallFunc_IsValid_ReturnValue_1) == 0x0002D6, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, CallFunc_IsValid_ReturnValue_2) == 0x0002D7, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, CallFunc_IsValid_ReturnValue_3) == 0x0002D8, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, CallFunc_GetClassAbilitySlotCnt_OutSlotCnt) == 0x0002DC, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::CallFunc_GetClassAbilitySlotCnt_OutSlotCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, CallFunc_GetTacticalSkillSlotCnt_OutSlotCnt) == 0x0002E0, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::CallFunc_GetTacticalSkillSlotCnt_OutSlotCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, CallFunc_GetInnerImagineSlotCnt_OutSlotCnt) == 0x0002E4, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::CallFunc_GetInnerImagineSlotCnt_OutSlotCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, CallFunc_GetBattleImagineSlotCnt_OutSlotCnt) == 0x0002E8, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::CallFunc_GetBattleImagineSlotCnt_OutSlotCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, CallFunc_GetRegularSkillSlotCnt_OutSlotCnt) == 0x0002EC, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::CallFunc_GetRegularSkillSlotCnt_OutSlotCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_SetupInfo, K2Node_MakeArray_Array) == 0x0002F0, "Member 'DhcBattleTopBattleSetInfo_C_SetupInfo::K2Node_MakeArray_Array' has a wrong offset!");

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetBattleImagineSlotCnt
// 0x0020 (0x0020 - 0x0000)
struct DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt final
{
public:
	int32                                         OutSlotCnt;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6365[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBCharaEquipType>                     K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt) == 0x000008, "Wrong alignment on DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt");
static_assert(sizeof(DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt) == 0x000020, "Wrong size on DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt, OutSlotCnt) == 0x000000, "Member 'DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt::OutSlotCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt, K2Node_MakeArray_Array) == 0x000008, "Member 'DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetInnerImagineSlotCnt
// 0x0034 (0x0034 - 0x0000)
struct DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt final
{
public:
	int32                                         OutSlotCnt;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCnt;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6366[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6367[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt) == 0x000004, "Wrong alignment on DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt");
static_assert(sizeof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt) == 0x000034, "Wrong size on DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, OutSlotCnt) == 0x000000, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::OutSlotCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, LocalCnt) == 0x000004, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::LocalCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, Temp_int_Variable) == 0x000008, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, Temp_int_Variable_1) == 0x00000C, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, CallFunc_GetValidValue_ReturnValue) == 0x000018, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000019, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001B, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00001C, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, Temp_int_Variable_2) == 0x000020, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, CallFunc_MakeLiteralInt_ReturnValue) == 0x000024, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt, CallFunc_MakeLiteralBool_ReturnValue) == 0x000030, "Member 'DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetRegularSkillSlotCnt
// 0x0020 (0x0020 - 0x0000)
struct DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt final
{
public:
	int32                                         OutSlotCnt;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6368[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBSkillType>                          K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt) == 0x000008, "Wrong alignment on DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt");
static_assert(sizeof(DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt) == 0x000020, "Wrong size on DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt, OutSlotCnt) == 0x000000, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt::OutSlotCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt, K2Node_MakeArray_Array) == 0x000008, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetTacticalSkillSlotCnt
// 0x0030 (0x0030 - 0x0000)
struct DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt final
{
public:
	int32                                         OutSlotCnt;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCnt;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6369[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_636A[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt) == 0x000004, "Wrong alignment on DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt");
static_assert(sizeof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt) == 0x000030, "Wrong size on DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, OutSlotCnt) == 0x000000, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::OutSlotCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, LocalCnt) == 0x000004, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::LocalCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, Temp_int_Variable) == 0x000008, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, Temp_int_Variable_1) == 0x00000C, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, CallFunc_GetValidValue_ReturnValue) == 0x000018, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000019, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001B, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00001C, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, Temp_int_Variable_2) == 0x000020, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, CallFunc_MakeLiteralInt_ReturnValue) == 0x000024, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, CallFunc_MakeLiteralBool_ReturnValue) == 0x000028, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, CallFunc_Less_IntInt_ReturnValue) == 0x000029, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetClassAbilitySlotCnt
// 0x0030 (0x0030 - 0x0000)
struct DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt final
{
public:
	int32                                         OutSlotCnt;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCnt;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_636B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_636C[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt) == 0x000004, "Wrong alignment on DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt");
static_assert(sizeof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt) == 0x000030, "Wrong size on DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, OutSlotCnt) == 0x000000, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::OutSlotCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, LocalCnt) == 0x000004, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::LocalCnt' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, Temp_int_Variable) == 0x000008, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, Temp_int_Variable_1) == 0x00000C, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, CallFunc_GetValidValue_ReturnValue) == 0x000018, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000019, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001B, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00001C, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, Temp_int_Variable_2) == 0x000020, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, CallFunc_MakeLiteralInt_ReturnValue) == 0x000024, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, CallFunc_MakeLiteralBool_ReturnValue) == 0x000028, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, CallFunc_Less_IntInt_ReturnValue) == 0x000029, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetIsWeaponLost
// 0x0003 (0x0003 - 0x0000)
struct DhcBattleTopBattleSetInfo_C_GetIsWeaponLost final
{
public:
	bool                                          OutIsWeaponLost;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsWeaponLost_OutIsLost;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopBattleSetInfo_C_GetIsWeaponLost) == 0x000001, "Wrong alignment on DhcBattleTopBattleSetInfo_C_GetIsWeaponLost");
static_assert(sizeof(DhcBattleTopBattleSetInfo_C_GetIsWeaponLost) == 0x000003, "Wrong size on DhcBattleTopBattleSetInfo_C_GetIsWeaponLost");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetIsWeaponLost, OutIsWeaponLost) == 0x000000, "Member 'DhcBattleTopBattleSetInfo_C_GetIsWeaponLost::OutIsWeaponLost' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetIsWeaponLost, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'DhcBattleTopBattleSetInfo_C_GetIsWeaponLost::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetIsWeaponLost, CallFunc_GetIsWeaponLost_OutIsLost) == 0x000002, "Member 'DhcBattleTopBattleSetInfo_C_GetIsWeaponLost::CallFunc_GetIsWeaponLost_OutIsLost' has a wrong offset!");

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetRegularAndULTSkillIdByClassType
// 0x0280 (0x0280 - 0x0000)
struct DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_636D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutRegularMainSkillId;                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutRegularSubSkillId;                              // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutULTSkillId;                                     // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_636E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           LocalRowNames;                                     // 0x0018(0x0010)(Edit, BlueprintVisible)
	class UDataTable*                             LocalSkillDataTable;                               // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalClassLevel;                                   // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalULTSkillId;                                   // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalRegularSubSkillId;                            // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalRegularMainSkillId;                           // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillMasteryParam_bIsValid;           // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_636F[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_FindSkillMasteryParam_OutSkillMasteryParam; // 0x0058(0x0008)(NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillType                                  CallFunc_GetSkillType_ReturnValue;                 // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6370[0x5];                                     // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerSkillData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0068(0x0180)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6371[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x01F0(0x0058)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6372[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6373[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CallFunc_GetSkillDataTable_ReturnValue;            // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6374[0x2];                                     // 0x026A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0270(0x0010)(ReferenceParm)
};
static_assert(alignof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType) == 0x000008, "Wrong alignment on DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType");
static_assert(sizeof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType) == 0x000280, "Wrong size on DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, InClassType) == 0x000000, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, OutRegularMainSkillId) == 0x000004, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::OutRegularMainSkillId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, OutRegularSubSkillId) == 0x000008, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::OutRegularSubSkillId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, OutULTSkillId) == 0x00000C, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::OutULTSkillId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, LocalSkillId) == 0x000010, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::LocalSkillId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, LocalRowNames) == 0x000018, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::LocalRowNames' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, LocalSkillDataTable) == 0x000028, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::LocalSkillDataTable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, LocalClassLevel) == 0x000030, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::LocalClassLevel' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, LocalULTSkillId) == 0x000034, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::LocalULTSkillId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, LocalRegularSubSkillId) == 0x000038, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::LocalRegularSubSkillId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, LocalRegularMainSkillId) == 0x00003C, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::LocalRegularMainSkillId' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, Temp_int_Array_Index_Variable) == 0x000040, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000044, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_Array_Get_Item) == 0x000048, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_FindSkillMasteryParam_bIsValid) == 0x000054, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_FindSkillMasteryParam_bIsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_FindSkillMasteryParam_OutSkillMasteryParam) == 0x000058, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_FindSkillMasteryParam_OutSkillMasteryParam' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000060, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetSkillType_ReturnValue) == 0x000061, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetSkillType_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, K2Node_SwitchEnum_CmpSuccess) == 0x000062, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000068, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001E8, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_FindSkillDataMaster_bIsValid) == 0x0001E9, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x0001F0, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, Temp_int_Loop_Counter_Variable) == 0x000248, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetPlayerManager_ReturnValue) == 0x000250, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_IsValid_ReturnValue) == 0x000258, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetSkillDataTable_ReturnValue) == 0x000260, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_IsValid_ReturnValue_1) == 0x000268, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_Less_IntInt_ReturnValue) == 0x000269, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_Add_IntInt_ReturnValue) == 0x00026C, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000270, "Member 'DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetClassTypeFromWeaponId
// 0x00C8 (0x00C8 - 0x0000)
struct DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  OutClassType;                                      // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6375[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6376[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0018(0x00B0)()
};
static_assert(alignof(DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId) == 0x000008, "Wrong alignment on DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId");
static_assert(sizeof(DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId) == 0x0000C8, "Wrong size on DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId, InWeaponID) == 0x000000, "Member 'DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId::InWeaponID' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId, OutClassType) == 0x000004, "Member 'DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId::OutClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId, CallFunc_GetWeaponMasterData_IsExists) == 0x000010, "Member 'DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000018, "Member 'DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.ResetSkillInfoSubPalette
// 0x0002 (0x0002 - 0x0000)
struct DhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette final
{
public:
	bool                                          bInIsSubPaletteReleased;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette) == 0x000001, "Wrong alignment on DhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette");
static_assert(sizeof(DhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette) == 0x000002, "Wrong size on DhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette, bInIsSubPaletteReleased) == 0x000000, "Member 'DhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette::bInIsSubPaletteReleased' has a wrong offset!");
static_assert(offsetof(DhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'DhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

