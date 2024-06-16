#pragma once

 

// Package: Fang_expedition_DetailReleaseConditions

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DetailReleaseConditions.Fang_expedition_DetailReleaseConditions_C.SetData
// 0x01B8 (0x01B8 - 0x0000)
struct Fang_expedition_DetailReleaseConditions_C_SetData final
{
public:
	struct FSBFang_expeditionLimitData            LimitData;                                         // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	class USBMasterDataManager*                   MasterManager;                                     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D5[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D6[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44D7[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0018)()
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D8[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x00D0(0x0078)()
	class FString                                 CallFunc_GetQuestName_ReturnValue;                 // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_2;                    // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0188(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01A0(0x0018)()
};
static_assert(alignof(Fang_expedition_DetailReleaseConditions_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_DetailReleaseConditions_C_SetData");
static_assert(sizeof(Fang_expedition_DetailReleaseConditions_C_SetData) == 0x0001B8, "Wrong size on Fang_expedition_DetailReleaseConditions_C_SetData");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, LimitData) == 0x000000, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::LimitData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, MasterManager) == 0x000020, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::MasterManager' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000038, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000060, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000070, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_GetMasterDataManager_IsValid) == 0x000080, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000088, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, K2Node_SwitchEnum_CmpSuccess) == 0x000091, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_Replace_ReturnValue) == 0x000098, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_Conv_StringToInt_ReturnValue) == 0x0000A8, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_GetAchievementMasterData_IsExists) == 0x0000C8, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_GetAchievementMasterData_ReturnValue) == 0x0000D0, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_GetQuestName_ReturnValue) == 0x000148, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_GetQuestName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_GetAchievementName_ReturnValue) == 0x000158, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_Replace_ReturnValue_1) == 0x000168, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_Replace_ReturnValue_2) == 0x000178, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_Replace_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000188, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailReleaseConditions_C_SetData, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001A0, "Member 'Fang_expedition_DetailReleaseConditions_C_SetData::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

}

