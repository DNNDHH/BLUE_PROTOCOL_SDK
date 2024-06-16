#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionQuest

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_EntryConditionQuest.UMG_MatchingMenu_EntryConditionQuest_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest
// 0x0180 (0x0180 - 0x0000)
struct UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72B2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MatchingMenu_EntryConditionQuestItem_C* CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72B3[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestMasterDataByLongId_IsExists;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72B4[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_GetQuestMasterDataByLongId_ReturnValue;   // 0x0038(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72B5[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest) == 0x000180, "Wrong size on UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, Temp_int_Array_Index_Variable) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_GetMasterDataManager_IsValid) == 0x00001C, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_Array_Get_Item) == 0x000028, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_GetQuestMasterDataByLongId_IsExists) == 0x000030, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_GetQuestMasterDataByLongId_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_GetQuestMasterDataByLongId_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_GetQuestMasterDataByLongId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_Array_Length_ReturnValue) == 0x000150, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_Less_IntInt_ReturnValue) == 0x000154, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, K2Node_MakeStruct_Margin) == 0x000158, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_AddChild_ReturnValue) == 0x000168, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_PlayAnimation_ReturnValue) == 0x000170, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest, CallFunc_PlayAnimation_ReturnValue_1) == 0x000178, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionQuest.UMG_MatchingMenu_EntryConditionQuest_C.FindQuestInfo
// 0x0138 (0x0138 - 0x0000)
struct UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo final
{
public:
	struct FQuestMasterData                       MasterData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72B6[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetQuestNameByTextId_ReturnValue;         // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo) == 0x000138, "Wrong size on UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo, MasterData) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo::MasterData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo, CallFunc_GetQuestStatus_ReturnValue) == 0x000118, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo::CallFunc_GetQuestStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo, CallFunc_GetQuestNameByTextId_ReturnValue) == 0x000120, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo::CallFunc_GetQuestNameByTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000130, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_FindQuestInfo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionQuest.UMG_MatchingMenu_EntryConditionQuest_C.Find Npc Info
// 0x0200 (0x0200 - 0x0000)
struct UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info final
{
public:
	struct FQuestMasterData                       MasterData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                   L_CliendId;                                        // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0138(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x014C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72B7[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterProfileData                CallFunc_GetDataTableRowFromName_OutRow;           // 0x0158(0x0028)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72B8[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBCharacterProfileLocationData        CallFunc_Array_Get_Item_1;                         // 0x0198(0x0048)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72B9[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetLocationName_ReturnValue;              // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info) == 0x000200, "Wrong size on UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, MasterData) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::MasterData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, L_CliendId) == 0x000118, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::L_CliendId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, Temp_int_Loop_Counter_Variable) == 0x000120, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_Add_IntInt_ReturnValue) == 0x000124, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, Temp_int_Array_Index_Variable) == 0x000128, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, Temp_int_Loop_Counter_Variable_1) == 0x00012C, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_Add_IntInt_ReturnValue_1) == 0x000130, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, Temp_int_Array_Index_Variable_1) == 0x000134, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000138, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_Array_Get_Item) == 0x00014C, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_Less_IntInt_ReturnValue) == 0x000154, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_GetDataTableRowFromName_OutRow) == 0x000158, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000180, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000188, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_Array_Get_Item_1) == 0x000198, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_Array_Length_ReturnValue_1) == 0x0001E0, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_GetLocationName_ReturnValue) == 0x0001E8, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_GetLocationName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001F8, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0001F9, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0001FA, "Member 'UMG_MatchingMenu_EntryConditionQuest_C_Find_Npc_Info::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

}

