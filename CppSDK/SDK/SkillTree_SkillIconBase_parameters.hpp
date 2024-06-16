#pragma once

 

// Package: SkillTree_SkillIconBase

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct SkillTree_SkillIconBase_C_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_SkillId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTree_SkillIconBase_C_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on SkillTree_SkillIconBase_C_OnClicked__DelegateSignature");
static_assert(sizeof(SkillTree_SkillIconBase_C_OnClicked__DelegateSignature) == 0x000004, "Wrong size on SkillTree_SkillIconBase_C_OnClicked__DelegateSignature");
static_assert(offsetof(SkillTree_SkillIconBase_C_OnClicked__DelegateSignature, Param_SkillId) == 0x000000, "Member 'SkillTree_SkillIconBase_C_OnClicked__DelegateSignature::Param_SkillId' has a wrong offset!");

// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnHovered__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct SkillTree_SkillIconBase_C_OnHovered__DelegateSignature final
{
public:
	int32                                         Param_SkillId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTree_SkillIconBase_C_OnHovered__DelegateSignature) == 0x000004, "Wrong alignment on SkillTree_SkillIconBase_C_OnHovered__DelegateSignature");
static_assert(sizeof(SkillTree_SkillIconBase_C_OnHovered__DelegateSignature) == 0x000004, "Wrong size on SkillTree_SkillIconBase_C_OnHovered__DelegateSignature");
static_assert(offsetof(SkillTree_SkillIconBase_C_OnHovered__DelegateSignature, Param_SkillId) == 0x000000, "Member 'SkillTree_SkillIconBase_C_OnHovered__DelegateSignature::Param_SkillId' has a wrong offset!");

// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnUnhovered__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct SkillTree_SkillIconBase_C_OnUnhovered__DelegateSignature final
{
public:
	int32                                         Param_SkillId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTree_SkillIconBase_C_OnUnhovered__DelegateSignature) == 0x000004, "Wrong alignment on SkillTree_SkillIconBase_C_OnUnhovered__DelegateSignature");
static_assert(sizeof(SkillTree_SkillIconBase_C_OnUnhovered__DelegateSignature) == 0x000004, "Wrong size on SkillTree_SkillIconBase_C_OnUnhovered__DelegateSignature");
static_assert(offsetof(SkillTree_SkillIconBase_C_OnUnhovered__DelegateSignature, Param_SkillId) == 0x000000, "Member 'SkillTree_SkillIconBase_C_OnUnhovered__DelegateSignature::Param_SkillId' has a wrong offset!");

// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.ExecuteUbergraph_SkillTree_SkillIconBase
// 0x0010 (0x0010 - 0x0000)
struct SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B4F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase) == 0x000008, "Wrong alignment on SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase");
static_assert(sizeof(SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase) == 0x000010, "Wrong size on SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase");
static_assert(offsetof(SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase, EntryPoint) == 0x000000, "Member 'SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase, CallFunc_GetUIManager_IsValid) == 0x000004, "Member 'SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase, CallFunc_GetUIManager_ReturnValue) == 0x000008, "Member 'SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");

// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Init
// 0x0078 (0x0078 - 0x0000)
struct SkillTree_SkillIconBase_C_Init final
{
public:
	bool                                          IsPassive;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B50[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_SkillId;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_SkillLevel;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B51[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B52[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B53[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetClassPassiveSkillIcon_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillElementIconType                       CallFunc_GetSkillIconElementType_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B54[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillIconBgType                            CallFunc_GetSkillIconBgType_ReturnValue;           // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B55[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_1;                         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillType                                  CallFunc_GetSkillType_ReturnValue;                 // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B56[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetSkillIconSmall_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillTree_SkillIconBase_C_Init) == 0x000008, "Wrong alignment on SkillTree_SkillIconBase_C_Init");
static_assert(sizeof(SkillTree_SkillIconBase_C_Init) == 0x000078, "Wrong size on SkillTree_SkillIconBase_C_Init");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, IsPassive) == 0x000000, "Member 'SkillTree_SkillIconBase_C_Init::IsPassive' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, Param_SkillId) == 0x000004, "Member 'SkillTree_SkillIconBase_C_Init::Param_SkillId' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, Param_SkillLevel) == 0x000008, "Member 'SkillTree_SkillIconBase_C_Init::Param_SkillLevel' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000020, "Member 'SkillTree_SkillIconBase_C_Init::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SkillTree_SkillIconBase_C_Init::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_IsValid_ReturnValue_2) == 0x00002A, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_IsValid_ReturnValue_3) == 0x00002B, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_GetPlayerManager_ReturnValue) == 0x000030, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_GetClassPassiveSkillIcon_ReturnValue) == 0x000038, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_GetClassPassiveSkillIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_GetSkillIconElementType_ReturnValue) == 0x000040, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_GetSkillIconElementType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_Map_Find_Value) == 0x000048, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_Map_Find_ReturnValue) == 0x000050, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_GetSkillIconBgType_ReturnValue) == 0x000051, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_GetSkillIconBgType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_Map_Find_Value_1) == 0x000058, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_Map_Find_ReturnValue_1) == 0x000060, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_GetSkillType_ReturnValue) == 0x000061, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_GetSkillType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000062, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000063, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000064, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000065, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000066, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_GetSkillIconSmall_ReturnValue) == 0x000068, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_GetSkillIconSmall_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_BooleanOR_ReturnValue) == 0x000070, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_BooleanOR_ReturnValue_1) == 0x000071, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_BooleanOR_ReturnValue_2) == 0x000072, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Init, CallFunc_BooleanOR_ReturnValue_3) == 0x000073, "Member 'SkillTree_SkillIconBase_C_Init::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Update
// 0x00C8 (0x00C8 - 0x0000)
struct SkillTree_SkillIconBase_C_Update final
{
public:
	struct FSBSkillDataMasterData                 MasterData;                                        // 0x0000(0x0058)(Edit, BlueprintVisible)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B57[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B58[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0070(0x0058)()
};
static_assert(alignof(SkillTree_SkillIconBase_C_Update) == 0x000008, "Wrong alignment on SkillTree_SkillIconBase_C_Update");
static_assert(sizeof(SkillTree_SkillIconBase_C_Update) == 0x0000C8, "Wrong size on SkillTree_SkillIconBase_C_Update");
static_assert(offsetof(SkillTree_SkillIconBase_C_Update, MasterData) == 0x000000, "Member 'SkillTree_SkillIconBase_C_Update::MasterData' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Update, CallFunc_GetMasterDataManager_IsValid) == 0x000058, "Member 'SkillTree_SkillIconBase_C_Update::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Update, CallFunc_GetMasterDataManager_ReturnValue) == 0x000060, "Member 'SkillTree_SkillIconBase_C_Update::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Update, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000068, "Member 'SkillTree_SkillIconBase_C_Update::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_Update, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000070, "Member 'SkillTree_SkillIconBase_C_Update::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");

// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.UpdateSimple
// 0x00E0 (0x00E0 - 0x0000)
struct SkillTree_SkillIconBase_C_UpdateSimple final
{
public:
	struct FSBSkillDataMasterData                 MasterData;                                        // 0x0000(0x0058)(Edit, BlueprintVisible)
	ESBSkillType                                  Temp_byte_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B59[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue; // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B5A[0x1];                                     // 0x006F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B5B[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0080(0x0058)()
	bool                                          CallFunc_IsEquipedArtsSkillId_ReturnValue;         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTree_SkillIconBase_C_UpdateSimple) == 0x000008, "Wrong alignment on SkillTree_SkillIconBase_C_UpdateSimple");
static_assert(sizeof(SkillTree_SkillIconBase_C_UpdateSimple) == 0x0000E0, "Wrong size on SkillTree_SkillIconBase_C_UpdateSimple");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, MasterData) == 0x000000, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::MasterData' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_byte_Variable) == 0x000058, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_bool_Variable) == 0x000059, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_bool_Variable_1) == 0x00005A, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_bool_Variable_2) == 0x00005B, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_bool_Variable_3) == 0x00005C, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_bool_Variable_4) == 0x00005D, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_bool_Variable_5) == 0x00005E, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_bool_Variable_6) == 0x00005F, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_bool_Variable_7) == 0x000060, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_bool_Variable_8) == 0x000061, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_bool_Variable_9) == 0x000062, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_byte_Variable_1) == 0x000063, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, Temp_byte_Variable_2) == 0x000064, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue) == 0x000068, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00006C, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, CallFunc_IsValid_ReturnValue) == 0x00006D, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, CallFunc_GetMasterDataManager_IsValid) == 0x00006E, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000078, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000080, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, CallFunc_IsEquipedArtsSkillId_ReturnValue) == 0x0000D8, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::CallFunc_IsEquipedArtsSkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, K2Node_Select_Default) == 0x0000D9, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, CallFunc_BooleanAND_ReturnValue) == 0x0000DA, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_UpdateSimple, K2Node_Select_Default_1) == 0x0000DB, "Member 'SkillTree_SkillIconBase_C_UpdateSimple::K2Node_Select_Default_1' has a wrong offset!");

// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.SetEquipmentIconVisible
// 0x0006 (0x0006 - 0x0000)
struct SkillTree_SkillIconBase_C_SetEquipmentIconVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTree_SkillIconBase_C_SetEquipmentIconVisible) == 0x000001, "Wrong alignment on SkillTree_SkillIconBase_C_SetEquipmentIconVisible");
static_assert(sizeof(SkillTree_SkillIconBase_C_SetEquipmentIconVisible) == 0x000006, "Wrong size on SkillTree_SkillIconBase_C_SetEquipmentIconVisible");
static_assert(offsetof(SkillTree_SkillIconBase_C_SetEquipmentIconVisible, Visible) == 0x000000, "Member 'SkillTree_SkillIconBase_C_SetEquipmentIconVisible::Visible' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_SetEquipmentIconVisible, Temp_bool_Variable) == 0x000001, "Member 'SkillTree_SkillIconBase_C_SetEquipmentIconVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_SetEquipmentIconVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000002, "Member 'SkillTree_SkillIconBase_C_SetEquipmentIconVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_SetEquipmentIconVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000003, "Member 'SkillTree_SkillIconBase_C_SetEquipmentIconVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_SetEquipmentIconVisible, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'SkillTree_SkillIconBase_C_SetEquipmentIconVisible::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconBase_C_SetEquipmentIconVisible, K2Node_Select_Default) == 0x000005, "Member 'SkillTree_SkillIconBase_C_SetEquipmentIconVisible::K2Node_Select_Default' has a wrong offset!");

}

