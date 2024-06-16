#pragma once

 

// Package: LevelInfo1ForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function LevelInfo1ForBattleSet.LevelInfo1ForBattleSet_C.SetLevel
// 0x0028 (0x0028 - 0x0000)
struct LevelInfo1ForBattleSet_C_SetLevel final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81DC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LevelInfo1ForBattleSet_C_SetLevel) == 0x000008, "Wrong alignment on LevelInfo1ForBattleSet_C_SetLevel");
static_assert(sizeof(LevelInfo1ForBattleSet_C_SetLevel) == 0x000028, "Wrong size on LevelInfo1ForBattleSet_C_SetLevel");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetLevel, InLevel) == 0x000000, "Member 'LevelInfo1ForBattleSet_C_SetLevel::InLevel' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetLevel, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'LevelInfo1ForBattleSet_C_SetLevel::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetLevel, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'LevelInfo1ForBattleSet_C_SetLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LevelInfo1ForBattleSet.LevelInfo1ForBattleSet_C.SetImagineLevelSync
// 0x0160 (0x0160 - 0x0000)
struct LevelInfo1ForBattleSet_C_SetImagineLevelSync final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBClassType                                  InClassType;                                       // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InForceLevelSyncOff;                               // 0x0119(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81DD[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalFinalImagineLevel;                            // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalImagineRawLevel;                              // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalImagineId;                                    // 0x0124(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LocalImagineUniqueId;                              // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81DE[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelSyncTarget_ReturnValue;           // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelSyncApplied_ReturnValue;           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81DF[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCharacterStorageNumber_ReturnValue;    // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangeImagineLevelSync_bIsLevelSync;      // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LevelInfo1ForBattleSet_C_SetImagineLevelSync) == 0x000008, "Wrong alignment on LevelInfo1ForBattleSet_C_SetImagineLevelSync");
static_assert(sizeof(LevelInfo1ForBattleSet_C_SetImagineLevelSync) == 0x000160, "Wrong size on LevelInfo1ForBattleSet_C_SetImagineLevelSync");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, InOwnItemInfo) == 0x000000, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, InClassType) == 0x000118, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::InClassType' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, InForceLevelSyncOff) == 0x000119, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::InForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, LocalFinalImagineLevel) == 0x00011C, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::LocalFinalImagineLevel' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, LocalImagineRawLevel) == 0x000120, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::LocalImagineRawLevel' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, LocalImagineId) == 0x000124, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::LocalImagineId' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, LocalImagineUniqueId) == 0x000128, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000138, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, CallFunc_GetItemLevel_ReturnValue) == 0x00013C, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000140, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, CallFunc_GetLevelSyncTarget_ReturnValue) == 0x00014C, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::CallFunc_GetLevelSyncTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, CallFunc_IsLevelSyncApplied_ReturnValue) == 0x000150, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::CallFunc_IsLevelSyncApplied_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, CallFunc_GetCharacterStorageNumber_ReturnValue) == 0x000154, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::CallFunc_GetCharacterStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000158, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelInfo1ForBattleSet_C_SetImagineLevelSync, CallFunc_ChangeImagineLevelSync_bIsLevelSync) == 0x000159, "Member 'LevelInfo1ForBattleSet_C_SetImagineLevelSync::CallFunc_ChangeImagineLevelSync_bIsLevelSync' has a wrong offset!");

}

