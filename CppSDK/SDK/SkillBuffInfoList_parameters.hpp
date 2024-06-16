#pragma once

 

// Package: SkillBuffInfoList

#include "Basic.hpp"

#include "BuffIconAssetData_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function SkillBuffInfoList.SkillBuffInfoList_C.ExecuteUbergraph_SkillBuffInfoList
// 0x0008 (0x0008 - 0x0000)
struct SkillBuffInfoList_C_ExecuteUbergraph_SkillBuffInfoList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillBuffInfoList_C_ExecuteUbergraph_SkillBuffInfoList) == 0x000004, "Wrong alignment on SkillBuffInfoList_C_ExecuteUbergraph_SkillBuffInfoList");
static_assert(sizeof(SkillBuffInfoList_C_ExecuteUbergraph_SkillBuffInfoList) == 0x000008, "Wrong size on SkillBuffInfoList_C_ExecuteUbergraph_SkillBuffInfoList");
static_assert(offsetof(SkillBuffInfoList_C_ExecuteUbergraph_SkillBuffInfoList, EntryPoint) == 0x000000, "Member 'SkillBuffInfoList_C_ExecuteUbergraph_SkillBuffInfoList::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_ExecuteUbergraph_SkillBuffInfoList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'SkillBuffInfoList_C_ExecuteUbergraph_SkillBuffInfoList::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function SkillBuffInfoList.SkillBuffInfoList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillBuffInfoList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillBuffInfoList_C_PreConstruct) == 0x000001, "Wrong alignment on SkillBuffInfoList_C_PreConstruct");
static_assert(sizeof(SkillBuffInfoList_C_PreConstruct) == 0x000001, "Wrong size on SkillBuffInfoList_C_PreConstruct");
static_assert(offsetof(SkillBuffInfoList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillBuffInfoList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillBuffInfoList.SkillBuffInfoList_C.Init
// 0x0038 (0x0038 - 0x0000)
struct SkillBuffInfoList_C_Init final
{
public:
	class USkillBuffInfoItem_C*                   LocalInfoItem;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_669E[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillBuffInfoItem_C*                   CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_669F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillBuffInfoList_C_Init) == 0x000008, "Wrong alignment on SkillBuffInfoList_C_Init");
static_assert(sizeof(SkillBuffInfoList_C_Init) == 0x000038, "Wrong size on SkillBuffInfoList_C_Init");
static_assert(offsetof(SkillBuffInfoList_C_Init, LocalInfoItem) == 0x000000, "Member 'SkillBuffInfoList_C_Init::LocalInfoItem' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_Init, Temp_int_Variable) == 0x000008, "Member 'SkillBuffInfoList_C_Init::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_Init, Temp_int_Variable_1) == 0x00000C, "Member 'SkillBuffInfoList_C_Init::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_Init, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillBuffInfoList_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_Init, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000011, "Member 'SkillBuffInfoList_C_Init::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_Init, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'SkillBuffInfoList_C_Init::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_Init, CallFunc_Create_ReturnValue) == 0x000018, "Member 'SkillBuffInfoList_C_Init::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_Init, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'SkillBuffInfoList_C_Init::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_Init, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000028, "Member 'SkillBuffInfoList_C_Init::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_Init, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'SkillBuffInfoList_C_Init::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function SkillBuffInfoList.SkillBuffInfoList_C.SetSKill
// 0x0130 (0x0130 - 0x0000)
struct SkillBuffInfoList_C_SetSKill final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           LocalSkillBuffIconDataTableRowNames;               // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalBuffIconDataCnt;                              // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBuffIconAssetData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66A0[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66A1[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66A2[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillBuffInfoItem_C*                   K2Node_DynamicCast_AsSkill_Buff_Info_Item;         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66A3[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66A4[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66A5[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x00B0(0x0058)()
	TArray<class FName>                           CallFunc_GetSkillBufIconList_ReturnValue;          // 0x0108(0x0010)(ReferenceParm)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66A6[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillBuffInfoList_C_SetSKill) == 0x000008, "Wrong alignment on SkillBuffInfoList_C_SetSKill");
static_assert(sizeof(SkillBuffInfoList_C_SetSKill) == 0x000130, "Wrong size on SkillBuffInfoList_C_SetSKill");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, InSkillId) == 0x000000, "Member 'SkillBuffInfoList_C_SetSKill::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, InSkillLevel) == 0x000004, "Member 'SkillBuffInfoList_C_SetSKill::InSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, LocalSkillBuffIconDataTableRowNames) == 0x000008, "Member 'SkillBuffInfoList_C_SetSKill::LocalSkillBuffIconDataTableRowNames' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, LocalBuffIconDataCnt) == 0x000018, "Member 'SkillBuffInfoList_C_SetSKill::LocalBuffIconDataCnt' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'SkillBuffInfoList_C_SetSKill::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'SkillBuffInfoList_C_SetSKill::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_Array_Get_Item) == 0x000024, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000058, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_Less_IntInt_ReturnValue) == 0x000059, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, Temp_int_Variable) == 0x000060, "Member 'SkillBuffInfoList_C_SetSKill::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_Add_IntInt_ReturnValue_1) == 0x000064, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_Add_IntInt_ReturnValue_2) == 0x000068, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_Greater_IntInt_ReturnValue) == 0x00006C, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_GetChildAt_ReturnValue) == 0x000070, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, K2Node_DynamicCast_AsSkill_Buff_Info_Item) == 0x000080, "Member 'SkillBuffInfoList_C_SetSKill::K2Node_DynamicCast_AsSkill_Buff_Info_Item' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'SkillBuffInfoList_C_SetSKill::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_IsValid_ReturnValue_1) == 0x000089, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, Temp_int_Variable_1) == 0x00008C, "Member 'SkillBuffInfoList_C_SetSKill::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_GetPlayerManager_ReturnValue) == 0x000090, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_IsValid_ReturnValue_2) == 0x000098, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_GetMasterDataManager_IsValid) == 0x000099, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000A0, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x0000A8, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x0000B0, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_GetSkillBufIconList_ReturnValue) == 0x000108, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_GetSkillBufIconList_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_GetChildAt_ReturnValue_1) == 0x000118, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_GetChildrenCount_ReturnValue) == 0x000120, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_IsValid_ReturnValue_3) == 0x000124, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_Subtract_IntInt_ReturnValue) == 0x000128, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillBuffInfoList_C_SetSKill, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00012C, "Member 'SkillBuffInfoList_C_SetSKill::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

