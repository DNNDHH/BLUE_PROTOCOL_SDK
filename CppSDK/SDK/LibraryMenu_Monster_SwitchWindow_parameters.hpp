#pragma once

 

// Package: LibraryMenu_Monster_SwitchWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.OnAreaListVisibleChange__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Monster_SwitchWindow_C_OnAreaListVisibleChange__DelegateSignature final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_SwitchWindow_C_OnAreaListVisibleChange__DelegateSignature) == 0x000001, "Wrong alignment on LibraryMenu_Monster_SwitchWindow_C_OnAreaListVisibleChange__DelegateSignature");
static_assert(sizeof(LibraryMenu_Monster_SwitchWindow_C_OnAreaListVisibleChange__DelegateSignature) == 0x000001, "Wrong size on LibraryMenu_Monster_SwitchWindow_C_OnAreaListVisibleChange__DelegateSignature");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_OnAreaListVisibleChange__DelegateSignature, Visible) == 0x000000, "Member 'LibraryMenu_Monster_SwitchWindow_C_OnAreaListVisibleChange__DelegateSignature::Visible' has a wrong offset!");

// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.OnAreaListSelect__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct LibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EnemyId;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature");
static_assert(sizeof(LibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature) == 0x00000C, "Wrong size on LibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature, Param_Index) == 0x000000, "Member 'LibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature, EnemyId) == 0x000004, "Member 'LibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature::EnemyId' has a wrong offset!");

// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow
// 0x0034 (0x0034 - 0x0000)
struct LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Visible)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index, class FName EnemyId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Visible;                        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D4C[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EnemyId;                        // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow) == 0x000004, "Wrong alignment on LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow");
static_assert(sizeof(LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow) == 0x000034, "Wrong size on LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow, EntryPoint) == 0x000000, "Member 'LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow, K2Node_CustomEvent_Visible) == 0x000024, "Member 'LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow::K2Node_CustomEvent_Visible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow, K2Node_CustomEvent_Index) == 0x000028, "Member 'LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow, K2Node_CustomEvent_EnemyId) == 0x00002C, "Member 'LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow::K2Node_CustomEvent_EnemyId' has a wrong offset!");

// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.AreaListSelect
// 0x000C (0x000C - 0x0000)
struct LibraryMenu_Monster_SwitchWindow_C_AreaListSelect final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EnemyId;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_SwitchWindow_C_AreaListSelect) == 0x000004, "Wrong alignment on LibraryMenu_Monster_SwitchWindow_C_AreaListSelect");
static_assert(sizeof(LibraryMenu_Monster_SwitchWindow_C_AreaListSelect) == 0x00000C, "Wrong size on LibraryMenu_Monster_SwitchWindow_C_AreaListSelect");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_AreaListSelect, Param_Index) == 0x000000, "Member 'LibraryMenu_Monster_SwitchWindow_C_AreaListSelect::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_AreaListSelect, EnemyId) == 0x000004, "Member 'LibraryMenu_Monster_SwitchWindow_C_AreaListSelect::EnemyId' has a wrong offset!");

// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.AreaListVisibleChange
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Monster_SwitchWindow_C_AreaListVisibleChange final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_SwitchWindow_C_AreaListVisibleChange) == 0x000001, "Wrong alignment on LibraryMenu_Monster_SwitchWindow_C_AreaListVisibleChange");
static_assert(sizeof(LibraryMenu_Monster_SwitchWindow_C_AreaListVisibleChange) == 0x000001, "Wrong size on LibraryMenu_Monster_SwitchWindow_C_AreaListVisibleChange");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_AreaListVisibleChange, Visible) == 0x000000, "Member 'LibraryMenu_Monster_SwitchWindow_C_AreaListVisibleChange::Visible' has a wrong offset!");

// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.SetActiveTab
// 0x0038 (0x0038 - 0x0000)
struct LibraryMenu_Monster_SwitchWindow_C_SetActiveTab final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  SaveManager;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibraryEnemyReadData                ReadCountData;                                     // 0x0010(0x0020)(Edit, BlueprintVisible)
	int32                                         ActiveIndex;                                       // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_SwitchWindow_C_SetActiveTab) == 0x000008, "Wrong alignment on LibraryMenu_Monster_SwitchWindow_C_SetActiveTab");
static_assert(sizeof(LibraryMenu_Monster_SwitchWindow_C_SetActiveTab) == 0x000038, "Wrong size on LibraryMenu_Monster_SwitchWindow_C_SetActiveTab");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_SetActiveTab, Param_Index) == 0x000000, "Member 'LibraryMenu_Monster_SwitchWindow_C_SetActiveTab::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_SetActiveTab, SaveManager) == 0x000008, "Member 'LibraryMenu_Monster_SwitchWindow_C_SetActiveTab::SaveManager' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_SetActiveTab, ReadCountData) == 0x000010, "Member 'LibraryMenu_Monster_SwitchWindow_C_SetActiveTab::ReadCountData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_SetActiveTab, ActiveIndex) == 0x000030, "Member 'LibraryMenu_Monster_SwitchWindow_C_SetActiveTab::ActiveIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_SetActiveTab, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000034, "Member 'LibraryMenu_Monster_SwitchWindow_C_SetActiveTab::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.SetEnemyData
// 0x0058 (0x0058 - 0x0000)
struct LibraryMenu_Monster_SwitchWindow_C_SetEnemyData final
{
public:
	struct FSBLibraryEnemyData                    EnemyData;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_GetLibraryEnemyDebugModelID_ID;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_SwitchWindow_C_SetEnemyData) == 0x000008, "Wrong alignment on LibraryMenu_Monster_SwitchWindow_C_SetEnemyData");
static_assert(sizeof(LibraryMenu_Monster_SwitchWindow_C_SetEnemyData) == 0x000058, "Wrong size on LibraryMenu_Monster_SwitchWindow_C_SetEnemyData");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_SetEnemyData, EnemyData) == 0x000000, "Member 'LibraryMenu_Monster_SwitchWindow_C_SetEnemyData::EnemyData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_SetEnemyData, CallFunc_GetLibraryEnemyDebugModelID_ID) == 0x000028, "Member 'LibraryMenu_Monster_SwitchWindow_C_SetEnemyData::CallFunc_GetLibraryEnemyDebugModelID_ID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_SetEnemyData, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'LibraryMenu_Monster_SwitchWindow_C_SetEnemyData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_SetEnemyData, CallFunc_IsEmpty_ReturnValue) == 0x000050, "Member 'LibraryMenu_Monster_SwitchWindow_C_SetEnemyData::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_SetEnemyData, CallFunc_Not_PreBool_ReturnValue) == 0x000051, "Member 'LibraryMenu_Monster_SwitchWindow_C_SetEnemyData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.ChangeEnemyType
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Monster_SwitchWindow_C_ChangeEnemyType final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_SwitchWindow_C_ChangeEnemyType) == 0x000004, "Wrong alignment on LibraryMenu_Monster_SwitchWindow_C_ChangeEnemyType");
static_assert(sizeof(LibraryMenu_Monster_SwitchWindow_C_ChangeEnemyType) == 0x000004, "Wrong size on LibraryMenu_Monster_SwitchWindow_C_ChangeEnemyType");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_ChangeEnemyType, Type) == 0x000000, "Member 'LibraryMenu_Monster_SwitchWindow_C_ChangeEnemyType::Type' has a wrong offset!");

// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.UpdateReadMarkCount
// 0x0048 (0x0048 - 0x0000)
struct LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount final
{
public:
	class USBLibrarySaveManager*                  LibSaveManager;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D4E[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetReadMonsterDataCount_Count;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D4F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLibraryEnemyKillCount_OutTargetCount;  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLibraryEnemyKillCount_OutSumCount;     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount) == 0x000008, "Wrong alignment on LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount");
static_assert(sizeof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount) == 0x000048, "Wrong size on LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, LibSaveManager) == 0x000000, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::LibSaveManager' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, CallFunc_GetPlayerId_ReturnValue) == 0x000008, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, CallFunc_SaveLibraryData_ReturnValue) == 0x000018, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, CallFunc_GetReadMonsterDataCount_Count) == 0x000020, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::CallFunc_GetReadMonsterDataCount_Count' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, CallFunc_GetActiveWidgetIndex_ReturnValue_1) == 0x000024, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::CallFunc_GetActiveWidgetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, CallFunc_GetLibrarySaveManager_IsValid) == 0x000028, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, CallFunc_GetLibraryEnemyKillCount_OutTargetCount) == 0x000038, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::CallFunc_GetLibraryEnemyKillCount_OutTargetCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, CallFunc_GetLibraryEnemyKillCount_OutSumCount) == 0x00003C, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::CallFunc_GetLibraryEnemyKillCount_OutSumCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

}

