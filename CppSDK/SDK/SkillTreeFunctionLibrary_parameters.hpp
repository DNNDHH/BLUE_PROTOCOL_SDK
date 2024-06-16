#pragma once

 

// Package: SkillTreeFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_SkillTreeMediaTable_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.IsEnableConditionClassLevel
// 0x0038 (0x0038 - 0x0000)
struct SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98F3[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98F4[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x0028(0x0008)(NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel) == 0x000008, "Wrong alignment on SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel");
static_assert(sizeof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel) == 0x000038, "Wrong size on SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel, SkillId) == 0x000000, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel::SkillId' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel, SkillLevel) == 0x000004, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel::SkillLevel' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel, __WorldContext) == 0x000008, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel, Enable) == 0x000010, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel::Enable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel, CallFunc_GetMasterDataManager_IsValid) == 0x000011, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel, CallFunc_GetClassLevel_ReturnValue) == 0x000020, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel, CallFunc_GetSkillMasteryParam_IsExists) == 0x000024, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x000028, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000030, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.IsEnableConditionSkill
// 0x0090 (0x0090 - 0x0000)
struct SkillTreeFunctionLibrary_C_IsEnableConditionSkill final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98F5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98F6[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98F7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0028(0x0058)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98F8[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill) == 0x000008, "Wrong alignment on SkillTreeFunctionLibrary_C_IsEnableConditionSkill");
static_assert(sizeof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill) == 0x000090, "Wrong size on SkillTreeFunctionLibrary_C_IsEnableConditionSkill");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, SkillId) == 0x000000, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::SkillId' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, __WorldContext) == 0x000008, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, Enable) == 0x000010, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::Enable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, CallFunc_GetMasterDataManager_IsValid) == 0x000011, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000020, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000028, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, CallFunc_Greater_IntInt_ReturnValue) == 0x000080, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000081, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue) == 0x000084, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, CallFunc_BooleanAND_ReturnValue) == 0x000088, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_IsEnableConditionSkill, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000089, "Member 'SkillTreeFunctionLibrary_C_IsEnableConditionSkill::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetDerivedSkillIdArray
// 0x01A8 (0x01A8 - 0x0000)
struct SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98F9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 DerivedSkillArray;                                 // 0x0010(0x0010)(Parm, OutParm)
	int32                                         SkillID_L;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98FA[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ResultArray;                                       // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98FB[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CallFunc_GetPassiveSkillDataTable_ReturnValue;     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98FC[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0068(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98FD[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPassiveSkillData              CallFunc_GetDataTableRowFromName_OutRow;           // 0x0088(0x00B8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98FE[0x5];                                     // 0x0143(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0148(0x0058)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray) == 0x000008, "Wrong alignment on SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray");
static_assert(sizeof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray) == 0x0001A8, "Wrong size on SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, SkillId) == 0x000000, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::SkillId' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, __WorldContext) == 0x000008, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, DerivedSkillArray) == 0x000010, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::DerivedSkillArray' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, SkillID_L) == 0x000020, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::SkillID_L' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, ResultArray) == 0x000028, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::ResultArray' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, Temp_int_Array_Index_Variable) == 0x000038, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_GetPlayerClassType_ClassType) == 0x00003C, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_GetMasterDataManager_IsValid) == 0x00003D, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_GetMasterDataManager_ReturnValue) == 0x000040, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_GetPlayerManager_ReturnValue) == 0x000050, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_GetPassiveSkillDataTable_ReturnValue) == 0x000058, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_GetPassiveSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000068, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_Array_Get_Item) == 0x000078, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_GetDataTableRowFromName_OutRow) == 0x000088, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000140, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_Less_IntInt_ReturnValue) == 0x000141, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000142, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000148, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_Array_Add_ReturnValue) == 0x0001A0, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001A4, "Member 'SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillLevelUpOrLearnUnableMessage
// 0x0168 (0x0168 - 0x0000)
struct SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage final
{
public:
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98FF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Result;                                            // 0x0010(0x0018)(Parm, OutParm)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9900[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0030(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0034(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9901[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x0068(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9902[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00E8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0100(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0140(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0150(0x0018)()
};
static_assert(alignof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage) == 0x000008, "Wrong alignment on SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage");
static_assert(sizeof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage) == 0x000168, "Wrong size on SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, Param_Index) == 0x000000, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::Param_Index' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, __WorldContext) == 0x000008, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, Result) == 0x000010, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::Result' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, Temp_byte_Variable) == 0x000028, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, Temp_int_Variable) == 0x00002C, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, Temp_int_Variable_1) == 0x000030, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, Temp_int_Variable_2) == 0x000034, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, Temp_int_Variable_3) == 0x000038, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, K2Node_Select_Default) == 0x000068, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000B0, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000C0, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000E8, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, K2Node_MakeStruct_FormatArgumentData_1) == 0x000100, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, K2Node_MakeArray_Array) == 0x000140, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage, CallFunc_Format_ReturnValue) == 0x000150, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.TryGetSkillMovieID
// 0x00D0 (0x00D0 - 0x0000)
struct SkillTreeFunctionLibrary_C_TryGetSkillMovieID final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9903[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MovieID;                                           // 0x0014(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0028(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9904[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_SkillTreeMediaTable                CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0080)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID) == 0x000008, "Wrong alignment on SkillTreeFunctionLibrary_C_TryGetSkillMovieID");
static_assert(sizeof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID) == 0x0000D0, "Wrong size on SkillTreeFunctionLibrary_C_TryGetSkillMovieID");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, SkillId) == 0x000000, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::SkillId' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, SkillLV) == 0x000004, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::SkillLV' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, __WorldContext) == 0x000008, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, Result) == 0x000010, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::Result' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, MovieID) == 0x000014, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::MovieID' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000028, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, CallFunc_Array_Get_Item) == 0x000038, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C8, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, CallFunc_Less_IntInt_ReturnValue) == 0x0000C9, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000CA, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000CB, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillMovieID, CallFunc_BooleanAND_ReturnValue) == 0x0000CC, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillMovieID::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillLevelText
// 0x00C0 (0x00C0 - 0x0000)
struct SkillTreeFunctionLibrary_C_GetSkillLevelText final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9905[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ReturnParm)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x002C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0034(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x003C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0044(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x004C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x0054(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x005C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_7;                              // 0x0064(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_8;                              // 0x006C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_9;                              // 0x0074(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_10;                             // 0x007C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_11;                             // 0x0084(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x008C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9906[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
};
static_assert(alignof(SkillTreeFunctionLibrary_C_GetSkillLevelText) == 0x000008, "Wrong alignment on SkillTreeFunctionLibrary_C_GetSkillLevelText");
static_assert(sizeof(SkillTreeFunctionLibrary_C_GetSkillLevelText) == 0x0000C0, "Wrong size on SkillTreeFunctionLibrary_C_GetSkillLevelText");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Level) == 0x000000, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Level' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, __WorldContext) == 0x000008, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, ReturnValue) == 0x000010, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_int_Variable) == 0x000028, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable) == 0x00002C, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_1) == 0x000034, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_2) == 0x00003C, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_3) == 0x000044, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_4) == 0x00004C, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_5) == 0x000054, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_6) == 0x00005C, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_7) == 0x000064, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_8) == 0x00006C, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_8' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_9) == 0x000074, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_9' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_10) == 0x00007C, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_10' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, Temp_name_Variable_11) == 0x000084, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::Temp_name_Variable_11' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, K2Node_Select_Default) == 0x00008C, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000098, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillLevelText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'SkillTreeFunctionLibrary_C_GetSkillLevelText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.TryGetSkillImage
// 0x0140 (0x0140 - 0x0000)
struct SkillTreeFunctionLibrary_C_TryGetSkillImage final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMediaSource>            MediaSource;                                       // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Image;                                             // 0x0038(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              ImageIcon;                                         // 0x0060(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9907[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0098(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9908[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_SkillTreeMediaTable                CallFunc_GetDataTableRowFromName_OutRow;           // 0x00B8(0x0080)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillTreeFunctionLibrary_C_TryGetSkillImage) == 0x000008, "Wrong alignment on SkillTreeFunctionLibrary_C_TryGetSkillImage");
static_assert(sizeof(SkillTreeFunctionLibrary_C_TryGetSkillImage) == 0x000140, "Wrong size on SkillTreeFunctionLibrary_C_TryGetSkillImage");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, SkillId) == 0x000000, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::SkillId' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, SkillLV) == 0x000004, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::SkillLV' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, __WorldContext) == 0x000008, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, MediaSource) == 0x000010, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::MediaSource' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, Image) == 0x000038, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::Image' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, ImageIcon) == 0x000060, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::ImageIcon' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, Temp_int_Array_Index_Variable) == 0x000088, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, Temp_int_Loop_Counter_Variable) == 0x00008C, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000098, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000B8, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000138, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, CallFunc_Less_IntInt_ReturnValue) == 0x000139, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00013A, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00013B, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_TryGetSkillImage, CallFunc_BooleanAND_ReturnValue) == 0x00013C, "Member 'SkillTreeFunctionLibrary_C_TryGetSkillImage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillAbillityTypeText
// 0x0088 (0x0088 - 0x0000)
struct SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText final
{
public:
	ESBSkillAbilityType                           InAbilityType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9909[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ReturnParm)
	ESBSkillAbilityType                           Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_990A[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x002C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0034(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x003C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0044(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x004C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0054(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_990B[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
};
static_assert(alignof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText) == 0x000008, "Wrong alignment on SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText");
static_assert(sizeof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText) == 0x000088, "Wrong size on SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, InAbilityType) == 0x000000, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::InAbilityType' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, __WorldContext) == 0x000008, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, ReturnValue) == 0x000010, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, Temp_byte_Variable) == 0x000028, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, Temp_name_Variable) == 0x00002C, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, Temp_name_Variable_1) == 0x000034, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, Temp_name_Variable_2) == 0x00003C, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, Temp_name_Variable_3) == 0x000044, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, Temp_name_Variable_4) == 0x00004C, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, K2Node_Select_Default) == 0x000054, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000060, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.Get Base Skill
// 0x0210 (0x0210 - 0x0000)
struct SkillTreeFunctionLibrary_C_Get_Base_Skill final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBSkillDataMasterData>         List;                                              // 0x0008(0x0010)(Parm, OutParm)
	struct FSBSkillDataMasterData                 Master;                                            // 0x0018(0x0058)(Edit, BlueprintVisible)
	TArray<struct FSBSkillDataMasterData>         Master_List;                                       // 0x0070(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_990C[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue; // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_990D[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillAbilityType                           Temp_byte_Variable;                                // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_990E[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_990F[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CallFunc_GetPassiveSkillDataTable_ReturnValue;     // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9910[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x00C8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9911[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPassiveSkillData              CallFunc_GetDataTableRowFromName_OutRow;           // 0x00E8(0x00B8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9912[0x1];                                     // 0x01A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x01A4(0x0008)(NoDestructor)
	bool                                          CallFunc_IsEnableConditionSkill_Enable;            // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9913[0x2];                                     // 0x01AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x01B0(0x0058)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillTreeFunctionLibrary_C_Get_Base_Skill) == 0x000008, "Wrong alignment on SkillTreeFunctionLibrary_C_Get_Base_Skill");
static_assert(sizeof(SkillTreeFunctionLibrary_C_Get_Base_Skill) == 0x000210, "Wrong size on SkillTreeFunctionLibrary_C_Get_Base_Skill");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, __WorldContext) == 0x000000, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, List) == 0x000008, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::List' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, Master) == 0x000018, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::Master' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, Master_List) == 0x000070, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::Master_List' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, Temp_bool_Variable) == 0x000080, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetPlayerClassType_ClassType) == 0x000081, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, Temp_bool_Variable_1) == 0x000082, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, Temp_bool_Variable_2) == 0x000083, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, Temp_int_Array_Index_Variable) == 0x000084, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_Array_Add_ReturnValue) == 0x000088, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, Temp_bool_Variable_3) == 0x00008C, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00008D, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue) == 0x000090, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetCurrentSkillLevelOthersIncluded_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_Greater_IntInt_ReturnValue) == 0x000094, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetMasterDataManager_IsValid) == 0x000095, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetMasterDataManager_ReturnValue) == 0x000098, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, Temp_bool_Variable_4) == 0x0000A0, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, Temp_byte_Variable) == 0x0000A1, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, K2Node_Select_Default) == 0x0000A8, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetPlayerManager_ReturnValue) == 0x0000B0, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetPassiveSkillDataTable_ReturnValue) == 0x0000B8, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetPassiveSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0000C8, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000E8, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001A0, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_Less_IntInt_ReturnValue) == 0x0001A1, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetSkillMasteryParam_IsExists) == 0x0001A2, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x0001A4, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_IsEnableConditionSkill_Enable) == 0x0001AC, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_IsEnableConditionSkill_Enable' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x0001AD, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x0001B0, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_BooleanAND_ReturnValue) == 0x000208, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeFunctionLibrary_C_Get_Base_Skill, CallFunc_BooleanAND_ReturnValue_1) == 0x000209, "Member 'SkillTreeFunctionLibrary_C_Get_Base_Skill::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}

