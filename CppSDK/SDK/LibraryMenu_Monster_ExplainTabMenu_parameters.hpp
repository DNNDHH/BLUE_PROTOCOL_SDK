#pragma once

 

// Package: LibraryMenu_Monster_ExplainTabMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.SetEnemyData
// 0x0048 (0x0048 - 0x0000)
struct LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData final
{
public:
	struct FSBLibraryEnemyData                    EnemyData;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CFC[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLibraryEnemyKillCount_OutTargetCount;  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLibraryEnemyKillCount_OutSumCount;     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetReadMonsterDataCount_Count;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData) == 0x000008, "Wrong alignment on LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData");
static_assert(sizeof(LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData) == 0x000048, "Wrong size on LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData, EnemyData) == 0x000000, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData::EnemyData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData, CallFunc_GetLibrarySaveManager_IsValid) == 0x000028, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData, CallFunc_GetLibraryEnemyKillCount_OutTargetCount) == 0x000038, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData::CallFunc_GetLibraryEnemyKillCount_OutTargetCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData, CallFunc_GetLibraryEnemyKillCount_OutSumCount) == 0x00003C, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData::CallFunc_GetLibraryEnemyKillCount_OutSumCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData, CallFunc_GetReadMonsterDataCount_Count) == 0x000040, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData::CallFunc_GetReadMonsterDataCount_Count' has a wrong offset!");

// Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.ChangeEnemyData
// 0x0508 (0x0508 - 0x0000)
struct LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Type;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AttrTextStartIndex;                                // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CFD[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         AttrDummyString;                                   // 0x0010(0x0010)(Edit, BlueprintVisible)
	class FString                                 BaseAttrString;                                    // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                 AttrList;                                          // 0x0030(0x0010)(Edit, BlueprintVisible)
	struct FEnemyParamMasterData                  MasterEnemyData;                                   // 0x0040(0x00D8)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibraryEnemySetting                 FindData;                                          // 0x0120(0x0060)(Edit, BlueprintVisible)
	class FName                                   TargetEnemyId;                                     // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CFE[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEnemyHPRank_ReturnValue;               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CFF[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D00[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01C0(0x0018)()
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEnemyAttackRank_ReturnValue;           // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D01[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_2;          // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D02[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0230(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0258(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0290(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02A8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x02D0(0x0018)()
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x02E8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetEnemyRaceIdName_ReturnValue;           // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0308(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_4;        // 0x0322(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_5;        // 0x0323(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D03[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemySetting                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0328(0x0060)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D04[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D05[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x03A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x03B0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x03C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x03D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetLibraryEnemyAttribute_OutList;         // 0x03E8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_3;          // 0x03F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D06[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEnemyParamMasterData_IsExists;         // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D07[0x7];                                     // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEnemyParamMasterData                  CallFunc_GetEnemyParamMasterData_ReturnValue;      // 0x0420(0x00D8)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x04FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D08[0x3];                                     // 0x04FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0500(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData) == 0x000008, "Wrong alignment on LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData");
static_assert(sizeof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData) == 0x000508, "Wrong size on LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, Param_Index) == 0x000000, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, Type) == 0x000004, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::Type' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, AttrTextStartIndex) == 0x000008, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::AttrTextStartIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, AttrDummyString) == 0x000010, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::AttrDummyString' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, BaseAttrString) == 0x000020, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::BaseAttrString' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, AttrList) == 0x000030, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::AttrList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, MasterEnemyData) == 0x000040, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::MasterEnemyData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, MasterDataManager) == 0x000118, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::MasterDataManager' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, FindData) == 0x000120, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::FindData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, TargetEnemyId) == 0x000180, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::TargetEnemyId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000188, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_NameToString_ReturnValue) == 0x000190, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetEnemyHPRank_ReturnValue) == 0x0001A0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetEnemyHPRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0001A4, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Add_IntInt_ReturnValue) == 0x0001A8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001B0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToText_ReturnValue) == 0x0001C0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_NameToString_ReturnValue_1) == 0x0001D8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetEnemyAttackRank_ReturnValue) == 0x0001E8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetEnemyAttackRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_NameToString_ReturnValue_2) == 0x0001F0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_NameToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000200, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Left_ReturnValue) == 0x000208, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000218, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToName_ReturnValue) == 0x000228, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000230, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000248, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000258, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000270, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000280, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000290, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002A8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x0002C0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0002D0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, K2Node_MakeArray_Array) == 0x0002E8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetEnemyRaceIdName_ReturnValue) == 0x0002F8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetEnemyRaceIdName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000308, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000320, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x000321, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GreaterEqual_IntInt_ReturnValue_4) == 0x000322, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GreaterEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GreaterEqual_IntInt_ReturnValue_5) == 0x000323, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GreaterEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000328, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000388, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, Temp_int_Array_Index_Variable) == 0x00038C, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000390, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Array_Get_Item) == 0x000394, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Add_IntInt_ReturnValue_2) == 0x000398, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Array_Length_ReturnValue) == 0x00039C, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x0003A0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0003B0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Concat_StrStr_ReturnValue) == 0x0003C8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0003D8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetLibraryEnemyAttribute_OutList) == 0x0003E8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetLibraryEnemyAttribute_OutList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Conv_NameToString_ReturnValue_3) == 0x0003F8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Conv_NameToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetMasterDataManager_IsValid) == 0x000408, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000410, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetEnemyParamMasterData_IsExists) == 0x000418, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetEnemyParamMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_GetEnemyParamMasterData_ReturnValue) == 0x000420, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_GetEnemyParamMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, Temp_int_Loop_Counter_Variable) == 0x0004F8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Less_IntInt_ReturnValue) == 0x0004FC, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData, CallFunc_Add_IntInt_ReturnValue_3) == 0x000500, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");

// Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.UpdateDetailOpenSetting
// 0x0058 (0x0058 - 0x0000)
struct LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting final
{
public:
	class FName                                   CheckType;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibraryEnemyDetailOpenSetting       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0008(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D09[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemyDetailOpenSetting       CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0030(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting) == 0x000008, "Wrong alignment on LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting");
static_assert(sizeof(LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting) == 0x000058, "Wrong size on LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting, CheckType) == 0x000000, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting::CheckType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting, CallFunc_GetDataTableRowFromName_OutRow) == 0x000008, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000030, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000050, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.Set Info Tooltip
// 0x00C0 (0x00C0 - 0x0000)
struct LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip final
{
public:
	class UImage*                                 TargetIcon;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    TipWidget;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalCount;                                        // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowCount;                                          // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D0A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D0B[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A0(0x0018)()
	class UWBP_CommonToolTipDetail_Variable_C*    CallFunc_Create_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip) == 0x000008, "Wrong alignment on LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip");
static_assert(sizeof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip) == 0x0000C0, "Wrong size on LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, TargetIcon) == 0x000000, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::TargetIcon' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, TipWidget) == 0x000008, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::TipWidget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, TotalCount) == 0x000010, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::TotalCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, NowCount) == 0x000014, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::NowCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000030, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_Conv_IntToString_ReturnValue) == 0x000048, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000058, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_Replace_ReturnValue) == 0x000068, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_Replace_ReturnValue_1) == 0x000078, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip, CallFunc_Create_ReturnValue) == 0x0000B8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.ChangeEnemyDataFromId
// 0x0408 (0x0408 - 0x0000)
struct LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId final
{
public:
	class FName                                   EnemyId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AttrTextStartIndex;                                // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D0C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BaseAttrString;                                    // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                 AttrList;                                          // 0x0020(0x0010)(Edit, BlueprintVisible)
	struct FEnemyParamMasterData                  MasterEnemyData;                                   // 0x0030(0x00D8)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TargetEnemyId;                                     // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D0D[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEnemyHPRank_ReturnValue;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0154(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0180(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0198(0x0018)()
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_2;          // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_3;          // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEnemyAttackRank_ReturnValue;           // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01E8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0220(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0238(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0260(0x0018)()
	class FString                                 CallFunc_GetEnemyRaceIdName_ReturnValue;           // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0288(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x02A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Get_Item;                           // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D0E[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D0F[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x02D0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetLibraryEnemyAttribute_OutList;         // 0x0308(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetEnemyParamMasterData_IsExists;         // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D10[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEnemyParamMasterData                  CallFunc_GetEnemyParamMasterData_ReturnValue;      // 0x0320(0x00D8)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D11[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId) == 0x000008, "Wrong alignment on LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId");
static_assert(sizeof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId) == 0x000408, "Wrong size on LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, EnemyId) == 0x000000, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::EnemyId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, AttrTextStartIndex) == 0x000008, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::AttrTextStartIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, BaseAttrString) == 0x000010, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::BaseAttrString' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, AttrList) == 0x000020, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::AttrList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, MasterEnemyData) == 0x000030, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::MasterEnemyData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, MasterDataManager) == 0x000108, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::MasterDataManager' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, TargetEnemyId) == 0x000110, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::TargetEnemyId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, Temp_int_Array_Index_Variable) == 0x000118, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00011C, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_NameToString_ReturnValue) == 0x000120, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000130, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Left_ReturnValue) == 0x000140, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetEnemyHPRank_ReturnValue) == 0x000150, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetEnemyHPRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_StringToName_ReturnValue) == 0x000154, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Add_IntInt_ReturnValue) == 0x00015C, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000160, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetTextFromAsset_ReturnValue) == 0x000170, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_StringToText_ReturnValue) == 0x000180, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000198, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_NameToString_ReturnValue_2) == 0x0001B0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_NameToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_NameToString_ReturnValue_3) == 0x0001C0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_NameToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetEnemyAttackRank_ReturnValue) == 0x0001D0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetEnemyAttackRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001D4, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0001D8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001E8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000200, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000210, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000220, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000238, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000250, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000260, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetEnemyRaceIdName_ReturnValue) == 0x000278, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetEnemyRaceIdName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000288, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0002A0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0002A1, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x0002A2, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x0002A3, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Array_Get_Item) == 0x0002A4, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Array_Length_ReturnValue) == 0x0002A8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Add_IntInt_ReturnValue_2) == 0x0002AC, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x0002B0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, Temp_int_Loop_Counter_Variable) == 0x0002C0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Less_IntInt_ReturnValue) == 0x0002C4, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002C8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0002D0, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Concat_StrStr_ReturnValue) == 0x0002E8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0002F8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetLibraryEnemyAttribute_OutList) == 0x000308, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetLibraryEnemyAttribute_OutList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetEnemyParamMasterData_IsExists) == 0x000318, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetEnemyParamMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetEnemyParamMasterData_ReturnValue) == 0x000320, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetEnemyParamMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetMasterDataManager_IsValid) == 0x0003F8, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000400, "Member 'LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

}

