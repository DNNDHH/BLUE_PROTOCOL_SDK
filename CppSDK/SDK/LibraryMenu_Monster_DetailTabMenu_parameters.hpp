#pragma once

 

// Package: LibraryMenu_Monster_DetailTabMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaListSelect__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EnemyId;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature) == 0x00000C, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature, Param_Index) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature, EnemyId) == 0x000004, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature::EnemyId' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaListVisibleChange__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_OnAreaListVisibleChange__DelegateSignature final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_OnAreaListVisibleChange__DelegateSignature) == 0x000001, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_OnAreaListVisibleChange__DelegateSignature");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_OnAreaListVisibleChange__DelegateSignature) == 0x000001, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_OnAreaListVisibleChange__DelegateSignature");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OnAreaListVisibleChange__DelegateSignature, Visible) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OnAreaListVisibleChange__DelegateSignature::Visible' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu
// 0x0078 (0x0078 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Value;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D17[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibraryEnemyDebugFlag_Flag;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu) == 0x000078, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu, EntryPoint) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu, K2Node_CustomEvent_Value) == 0x000004, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu, K2Node_Event_Animation) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000068, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu, CallFunc_GetLibraryEnemyDebugFlag_Flag) == 0x000070, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu::CallFunc_GetLibraryEnemyDebugFlag_Flag' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_OnAnimationFinished) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_OnAnimationFinished");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_OnAnimationFinished) == 0x000008, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_OnAnimationFinished");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OnAnimationFinished, Animation) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaItemSelect
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_OnAreaItemSelect final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_OnAreaItemSelect) == 0x000004, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_OnAreaItemSelect");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_OnAreaItemSelect) == 0x000004, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_OnAreaItemSelect");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OnAreaItemSelect, Value) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OnAreaItemSelect::Value' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ButtonTextColorChange
// 0x0080 (0x0080 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange final
{
public:
	bool                                          OnCursor;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D18[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            WorkColor;                                         // 0x0008(0x0028)(Edit, BlueprintVisible)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0058(0x0028)()
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange) == 0x000080, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange, OnCursor) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange::OnCursor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange, WorkColor) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange::WorkColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange, K2Node_MakeStruct_SlateColor_1) == 0x000058, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.SetEnemyData
// 0x0048 (0x0048 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData final
{
public:
	struct FSBLibraryEnemyData                    EnemyData;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D19[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetReadMonsterDataCount_Count;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLibraryEnemyKillCount_OutTargetCount;  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLibraryEnemyKillCount_OutSumCount;     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData) == 0x000048, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData, EnemyData) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData::EnemyData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData, CallFunc_GetLibrarySaveManager_IsValid) == 0x000028, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData, CallFunc_GetReadMonsterDataCount_Count) == 0x000038, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData::CallFunc_GetReadMonsterDataCount_Count' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData, CallFunc_GetLibraryEnemyKillCount_OutTargetCount) == 0x00003C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData::CallFunc_GetLibraryEnemyKillCount_OutTargetCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData, CallFunc_GetLibraryEnemyKillCount_OutSumCount) == 0x000040, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData::CallFunc_GetLibraryEnemyKillCount_OutSumCount' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ChangeEnemyViewData
// 0x05B8 (0x05B8 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData final
{
public:
	class FName                                   ChangeEnemyId;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LotItemLoop;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D1A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_Monster_DropItem_C*        Widget;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WorkItemId;                                        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryEnemyDropItemIconType               WorkIconType;                                      // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D1B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 LotId;                                             // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         LotCount;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             RewardType;                                        // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D1C[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ItemLogs;                                          // 0x0038(0x0010)(Edit, BlueprintVisible)
	class ASBPlayerController*                    PlayerController;                                  // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     DropType;                                          // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D1D[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEnemyDropItemData                   ItemData;                                          // 0x0054(0x0030)(Edit, BlueprintVisible, NoDestructor)
	int32                                         WorkIndex;                                         // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         AreaData;                                          // 0x0088(0x0010)(Edit, BlueprintVisible)
	int32                                         DropItemWidgetCount;                               // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D1E[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBEnemyDropItemData>           DropItemData;                                      // 0x00A0(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 ElementIndex;                                      // 0x00B0(0x0010)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D1F[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBLibraryEnemyElementType>            AttackElementList;                                 // 0x00C8(0x0010)(Edit, BlueprintVisible)
	struct FEnemyParamMasterData                  MasterEnemyData;                                   // 0x00D8(0x00D8)(Edit, BlueprintVisible)
	struct FSBLibraryEnemySetting                 FindDataTable;                                     // 0x01B0(0x0060)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D20[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0232(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D21[0x5];                                     // 0x0233(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemySetting                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0238(0x0060)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x029B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x02A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_Monster_DropItem_C*        CallFunc_GetDropItemWidget_Widget;                 // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D22[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_Monster_DropItem_C*        CallFunc_GetDropItemWidget_Widget_1;               // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D23[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_Monster_DropItem_C*        CallFunc_GetDropItemWidget_Widget_2;               // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D24[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBLibraryEnemyDropItemIconType>       CallFunc_GetLibraryEnemyDropIconTypeMulti_IconTypes; // 0x02D8(0x0010)(ReferenceParm)
	TArray<int32>                                 CallFunc_GetLibraryEnemyDropIconTypeMulti_ItemIds; // 0x02E8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0302(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D25[0x5];                                     // 0x0303(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0308(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D26[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0340(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0350(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D27[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0368(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0380(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0390(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x03A0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x03B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D28[0x6];                                     // 0x03BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemySetting                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x03C0(0x0060)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0421(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D29[0x6];                                     // 0x0422(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0430(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetItemLogs_OutList;                      // 0x0438(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_2;                 // 0x044C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D2A[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_Monster_DropItem_C*        CallFunc_GetDropItemWidget_Widget_3;               // 0x0458(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_3;                 // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D2B[0x4];                                     // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0468(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable_2;                               // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_2;            // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D2C[0x3];                                     // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0484(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    CallFunc_Create_ReturnValue;                       // 0x0488(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_4;          // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D2D[0x3];                                     // 0x0491(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0494(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x049C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetLibraryEnemyResistElement_OutList;     // 0x04A8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x04B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEnemyParamMasterData_IsExists;         // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D2E[0x7];                                     // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEnemyParamMasterData                  CallFunc_GetEnemyParamMasterData_ReturnValue;      // 0x04D0(0x00D8)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x05A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D2F[0x7];                                     // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x05B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData) == 0x0005B8, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, ChangeEnemyId) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::ChangeEnemyId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, LotItemLoop) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::LotItemLoop' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, Widget) == 0x000010, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::Widget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, WorkItemId) == 0x000018, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::WorkItemId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, WorkIconType) == 0x00001C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::WorkIconType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, LotId) == 0x000020, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::LotId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, LotCount) == 0x000030, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::LotCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, RewardType) == 0x000034, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::RewardType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, ItemLogs) == 0x000038, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::ItemLogs' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, PlayerController) == 0x000048, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::PlayerController' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, DropType) == 0x000050, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::DropType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, ItemData) == 0x000054, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::ItemData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, WorkIndex) == 0x000084, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::WorkIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, AreaData) == 0x000088, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::AreaData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, DropItemWidgetCount) == 0x000098, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::DropItemWidgetCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, DropItemData) == 0x0000A0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::DropItemData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, ElementIndex) == 0x0000B0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::ElementIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, LoopEnd) == 0x0000C0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, AttackElementList) == 0x0000C8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::AttackElementList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, MasterEnemyData) == 0x0000D8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::MasterEnemyData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, FindDataTable) == 0x0001B0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::FindDataTable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, MasterDataManager) == 0x000210, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::MasterDataManager' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Array_LastIndex_ReturnValue) == 0x000218, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, Temp_int_Variable) == 0x00021C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000220, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Add_IntInt_ReturnValue) == 0x000224, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, Temp_int_Variable_1) == 0x000228, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00022C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000230, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000231, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000232, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000238, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000298, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000299, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00029A, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x00029B, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Array_Find_ReturnValue) == 0x00029C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0002A0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, K2Node_SwitchEnum_CmpSuccess) == 0x0002A1, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_BooleanOR_ReturnValue) == 0x0002A2, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_BooleanOR_ReturnValue_1) == 0x0002A3, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Add_IntInt_ReturnValue_2) == 0x0002A4, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetDropItemWidget_Widget) == 0x0002A8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetDropItemWidget_Widget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002B0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetDropItemWidget_Widget_1) == 0x0002B8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetDropItemWidget_Widget_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002C0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Add_IntInt_ReturnValue_4) == 0x0002C4, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetDropItemWidget_Widget_2) == 0x0002C8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetDropItemWidget_Widget_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Array_Add_ReturnValue) == 0x0002D0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetLibraryEnemyDropIconTypeMulti_IconTypes) == 0x0002D8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetLibraryEnemyDropIconTypeMulti_IconTypes' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetLibraryEnemyDropIconTypeMulti_ItemIds) == 0x0002E8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetLibraryEnemyDropIconTypeMulti_ItemIds' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Array_Find_ReturnValue_1) == 0x0002F8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Array_LastIndex_ReturnValue_1) == 0x0002FC, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000300, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_BooleanOR_ReturnValue_2) == 0x000301, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, K2Node_SwitchEnum_CmpSuccess_1) == 0x000302, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Conv_NameToString_ReturnValue) == 0x000308, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000318, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000328, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000338, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Conv_IntToString_ReturnValue) == 0x000340, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Replace_ReturnValue) == 0x000350, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000360, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Conv_StringToText_ReturnValue) == 0x000368, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000380, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Replace_ReturnValue_1) == 0x000390, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0003A0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_IsValid_ReturnValue) == 0x0003B8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x0003B9, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0003C0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000420, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000421, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetSBPlayerController_ReturnValue) == 0x000428, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000430, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetItemLogs_OutList) == 0x000438, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetItemLogs_OutList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Add_IntInt_ReturnValue_5) == 0x000448, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Array_Find_ReturnValue_2) == 0x00044C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Array_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x000450, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetDropItemWidget_Widget_3) == 0x000458, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetDropItemWidget_Widget_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Array_Find_ReturnValue_3) == 0x000460, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Array_Find_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Map_Keys_Keys) == 0x000468, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, Temp_int_Variable_2) == 0x000478, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Array_LastIndex_ReturnValue_2) == 0x00047C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Array_LastIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000480, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Add_IntInt_ReturnValue_6) == 0x000484, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Create_ReturnValue) == 0x000488, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_NotEqual_ByteByte_ReturnValue_4) == 0x000490, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_NotEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000494, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000498, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Array_Add_ReturnValue_1) == 0x00049C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0004A0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetLibraryEnemyResistElement_OutList) == 0x0004A8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetLibraryEnemyResistElement_OutList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_Conv_NameToString_ReturnValue_1) == 0x0004B8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetEnemyParamMasterData_IsExists) == 0x0004C8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetEnemyParamMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetEnemyParamMasterData_ReturnValue) == 0x0004D0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetEnemyParamMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetMasterDataManager_IsValid) == 0x0005A8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData, CallFunc_GetMasterDataManager_ReturnValue) == 0x0005B0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Initialize Drop Item List
// 0x0014 (0x0014 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List final
{
public:
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D30[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List) == 0x000004, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List) == 0x000014, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List, CallFunc_Array_Add_ReturnValue) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List, CallFunc_Array_Add_ReturnValue_1) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List, CallFunc_Array_Add_ReturnValue_2) == 0x000010, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Initialize_Drop_Item_List::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Update Drop Item Widget Visibility
// 0x0048 (0x0048 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D31[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_Monster_DropItem_C*        CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D32[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D33[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_Monster_DropItem_C*        CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility) == 0x000048, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, Num) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::Num' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, LoopEnd) == 0x000004, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, Temp_int_Variable) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, Temp_int_Variable_1) == 0x000014, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, CallFunc_Array_Get_Item) == 0x000018, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, CallFunc_Array_LastIndex_ReturnValue) == 0x000020, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000024, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, CallFunc_Min_ReturnValue) == 0x00003C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetDropItemWidget
// 0x0050 (0x0050 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D34[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_Monster_DropItem_C*        Widget;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_Monster_DropItem_C*        CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D35[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_Monster_DropItem_C*        CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_Monster_DropItem_C*        CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget) == 0x000050, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, Param_Index) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, Widget) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::Widget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, Temp_int_Variable) == 0x000010, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, CallFunc_Array_Get_Item) == 0x000018, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, CallFunc_Create_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000048, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetEnemyPopAreaData
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData final
{
public:
	TArray<class FString>                         AreaIds;                                           // 0x0000(0x0010)(Parm, OutParm)
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0010(0x0010)(ReferenceParm)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData) == 0x000020, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData, AreaIds) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData::AreaIds' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData::CallFunc_Map_Keys_Keys' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ChangeEnemyData
// 0x0490 (0x0490 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AreaIndex;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D36[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D37[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D38[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0030(0x0010)(ReferenceParm)
	TArray<class FString>                         CallFunc_Map_Keys_Keys_1;                          // 0x0040(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D39[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x0068(0x01E0)()
	bool                                          CallFunc_GetMapInfo_IsExists_1;                    // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D3A[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue_1;                 // 0x0250(0x01E0)()
	class FString                                 CallFunc_GetLocationName_ReturnValue;              // 0x0430(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLocationName_ReturnValue_1;            // 0x0440(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0450(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0468(0x0018)()
	class FName                                   CallFunc_Map_Find_Value;                           // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0489(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x048A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData) == 0x000490, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, Type) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::Type' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, Param_Index) == 0x000004, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, AreaIndex) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::AreaIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GetMasterDataManager_IsValid) == 0x00000C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GetMasterDataManager_IsValid_1) == 0x000018, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000020, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_Map_Keys_Keys) == 0x000030, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_Map_Keys_Keys_1) == 0x000040, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToName_ReturnValue) == 0x000050, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000058, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GetMapInfo_IsExists) == 0x000060, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GetMapInfo_ReturnValue) == 0x000068, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GetMapInfo_IsExists_1) == 0x000248, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GetMapInfo_IsExists_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GetMapInfo_ReturnValue_1) == 0x000250, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GetMapInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GetLocationName_ReturnValue) == 0x000430, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GetLocationName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GetLocationName_ReturnValue_1) == 0x000440, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GetLocationName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToText_ReturnValue) == 0x000450, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000468, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_Map_Find_Value) == 0x000480, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_Map_Find_ReturnValue) == 0x000488, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000489, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00048A, "Member 'LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OpenAreaList
// 0x0038 (0x0038 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList final
{
public:
	class USBLibrarySaveManager*                  SaveManager;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D3B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D3C[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList) == 0x000038, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList, SaveManager) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList::SaveManager' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList, CallFunc_GetPlayerId_ReturnValue) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList, CallFunc_GetLibrarySaveManager_IsValid) == 0x000018, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000020, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList, CallFunc_SaveLibraryData_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_DetailTabMenu_C_OpenAreaList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.CloseAreaList
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_CloseAreaList final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_CloseAreaList) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_CloseAreaList");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_CloseAreaList) == 0x000008, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_CloseAreaList");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_CloseAreaList, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_CloseAreaList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.MakeAreaList
// 0x0750 (0x0750 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList final
{
public:
	bool                                          NewMarkCheck;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D3D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_MonsterAreaListItem_C*     AreaNameWidget;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapInfo                             MapInfo;                                           // 0x0010(0x01E0)(Edit, BlueprintVisible)
	struct FSBLibraryEnemySetting                 TableData;                                         // 0x01F0(0x0060)(Edit, BlueprintVisible)
	TMap<class FName, struct FSBLibraryEnemySetting> TmpTableData;                                      // 0x0250(0x0050)(Edit, BlueprintVisible)
	class FName                                   CheckEnemyId;                                      // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         AreaIdList;                                        // 0x02A8(0x0010)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AreaCount;                                         // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibraryEnemyIndividualData          RefData;                                           // 0x02C0(0x00E8)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   MasterDataManger;                                  // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x03B0(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D3E[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_MonsterAreaListItem_C*     CallFunc_GetAreaListWidget_OutWidget;              // 0x03D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D3F[0x3];                                     // 0x03E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D40[0x3];                                     // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x03F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x03FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D41[0x3];                                     // 0x03FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x040C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D42[0x3];                                     // 0x040D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0410(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D43[0x3];                                     // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0424(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x042C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D44[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_MonsterAreaListItem_C*     CallFunc_Array_Get_Item_1;                         // 0x0438(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0444(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x044C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D45[0x3];                                     // 0x044D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0450(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D46[0x4];                                     // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetLocationName_ReturnValue;              // 0x0458(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_2;          // 0x0468(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D47[0x7];                                     // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x0478(0x01E0)()
	struct FSBLibraryEnemySetting                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0658(0x0060)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x06B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D48[0x7];                                     // 0x06B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemySetting                 CallFunc_Map_Find_Value_1;                         // 0x06C0(0x0060)()
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0720(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D49[0x3];                                     // 0x0721(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Map_Find_Value_2;                         // 0x0724(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x072C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x072D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D4A[0x2];                                     // 0x072E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0730(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadMonsterAreaIdList_IdList;          // 0x0738(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0748(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x074C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList) == 0x000750, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, NewMarkCheck) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::NewMarkCheck' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, AreaNameWidget) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::AreaNameWidget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, MapInfo) == 0x000010, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::MapInfo' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, TableData) == 0x0001F0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::TableData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, TmpTableData) == 0x000250, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::TmpTableData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CheckEnemyId) == 0x0002A0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CheckEnemyId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, AreaIdList) == 0x0002A8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::AreaIdList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, LoopEnd) == 0x0002B8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, AreaCount) == 0x0002BC, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::AreaCount' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, RefData) == 0x0002C0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::RefData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, MasterDataManger) == 0x0003A8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::MasterDataManger' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Map_Keys_Keys) == 0x0003B0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, Temp_int_Array_Index_Variable) == 0x0003C0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, Temp_int_Variable) == 0x0003C4, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Add_IntInt_ReturnValue) == 0x0003C8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, Temp_int_Variable_1) == 0x0003CC, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0003D0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetAreaListWidget_OutWidget) == 0x0003D8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetAreaListWidget_OutWidget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0003E0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0003E4, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Array_LastIndex_ReturnValue) == 0x0003E8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Map_Find_Value) == 0x0003EC, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Map_Find_ReturnValue) == 0x0003F0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Conv_StringToName_ReturnValue) == 0x0003F4, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetLibrarySaveManager_IsValid) == 0x0003FC, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000400, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Array_Find_ReturnValue) == 0x000408, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00040C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Array_Get_Item) == 0x000410, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_BooleanOR_ReturnValue) == 0x000420, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000424, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Array_Add_ReturnValue) == 0x00042C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Array_Length_ReturnValue) == 0x000430, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Array_Get_Item_1) == 0x000438, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Array_Length_ReturnValue_1) == 0x000440, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, Temp_int_Loop_Counter_Variable) == 0x000444, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000448, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Less_IntInt_ReturnValue) == 0x00044C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Add_IntInt_ReturnValue_2) == 0x000450, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetLocationName_ReturnValue) == 0x000458, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetLocationName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Conv_StringToName_ReturnValue_2) == 0x000468, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Conv_StringToName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetMapInfo_IsExists) == 0x000470, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetMapInfo_ReturnValue) == 0x000478, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetDataTableRowFromName_OutRow) == 0x000658, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0006B8, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Map_Find_Value_1) == 0x0006C0, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Map_Find_ReturnValue_1) == 0x000720, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Map_Find_Value_2) == 0x000724, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Map_Find_ReturnValue_2) == 0x00072C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetMasterDataManager_IsValid) == 0x00072D, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000730, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_GetReadMonsterAreaIdList_IdList) == 0x000738, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_GetReadMonsterAreaIdList_IdList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_Array_Length_ReturnValue_2) == 0x000748, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x00074C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_MakeAreaList::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetAreaListWidget
// 0x0068 (0x0068 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D4B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_MonsterAreaListItem_C*     OutWidget;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     WorkWidget;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Value)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7D4C[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_MonsterAreaListItem_C*     CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D4D[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget) == 0x000068, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, Param_Index) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, OutWidget) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::OutWidget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, WorkWidget) == 0x000010, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::WorkWidget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, Temp_int_Variable) == 0x000018, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, CallFunc_Array_Get_Item) == 0x000020, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, CallFunc_Create_ReturnValue) == 0x000048, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000060, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.SetActiveArea
// 0x0038 (0x0038 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D4E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_MonsterAreaListItem_C*     WorkWidget;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D4F[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D50[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_MonsterAreaListItem_C*     CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D51[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea) == 0x000038, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, Param_Index) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, WorkWidget) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::WorkWidget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, LoopEnd) == 0x000010, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, Temp_int_Variable) == 0x000014, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, CallFunc_GetVisibility_ReturnValue) == 0x000021, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, CallFunc_Array_Get_Item) == 0x000028, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000030, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea, CallFunc_Array_LastIndex_ReturnValue) == 0x000034, "Member 'LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.UpdateDetailOpenSetting
// 0x0050 (0x0050 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting final
{
public:
	struct FSBLibraryEnemyDetailOpenSetting       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0000(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D52[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemyDetailOpenSetting       CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0028(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting) == 0x000050, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting, CallFunc_GetDataTableRowFromName_OutRow) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000020, "Member 'LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000028, "Member 'LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000048, "Member 'LibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetDetailOpenSetting
// 0x0058 (0x0058 - 0x0000)
struct LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting final
{
public:
	class FName                                   CheckType;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibraryEnemyDetailOpenSetting       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0008(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D53[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemyDetailOpenSetting       CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0030(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting) == 0x000008, "Wrong alignment on LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting");
static_assert(sizeof(LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting) == 0x000058, "Wrong size on LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting, CheckType) == 0x000000, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting::CheckType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting, CallFunc_GetDataTableRowFromName_OutRow) == 0x000008, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000028, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting, CallFunc_NotEqual_NameName_ReturnValue) == 0x000029, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000030, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000050, "Member 'LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");

}

