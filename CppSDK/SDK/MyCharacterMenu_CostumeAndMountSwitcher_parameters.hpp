#pragma once

 

// Package: MyCharacterMenu_CostumeAndMountSwitcher

#include "Basic.hpp"


namespace SDK::Params
{

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSubMenuChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_OnSubMenuChanged__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_OnSubMenuChanged__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_OnSubMenuChanged__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSubMenuChanged__DelegateSignature, Param_Index) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_OnSubMenuChanged__DelegateSignature::Param_Index' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAchievementChangeButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature final
{
public:
	class UMyCharaMenu_AchievementList_C*         InAchievementList;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature, InAchievementList) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature::InAchievementList' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAcquiredAchievementLoaded__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature, InResult) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSelectAchievementSaved__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_OnSelectAchievementSaved__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSelectAchievementSaved__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_OnSelectAchievementSaved__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSelectAchievementSaved__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_OnSelectAchievementSaved__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSelectAchievementSaved__DelegateSignature, InResult) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_OnSelectAchievementSaved__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature final
{
public:
	bool                                          IsHidden;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature, IsHidden) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature::IsHidden' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnPlayerAvatarRotateActive__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature, InIsActive) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature::InIsActive' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnIsCmnBackBtnVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature, InIsVisible) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature::InIsVisible' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetCostumeOnFlag__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetCostumeOnFlag__DelegateSignature final
{
public:
	bool                                          InIsCostumeOn;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetCostumeOnFlag__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetCostumeOnFlag__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetCostumeOnFlag__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetCostumeOnFlag__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetCostumeOnFlag__DelegateSignature, InIsCostumeOn) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetCostumeOnFlag__DelegateSignature::InIsCostumeOn' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher
// 0x0100 (0x0100 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5909[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_ItemToFind;                     // 0x0008(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ButtonId;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsFirstOpen;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_590A[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_OpenBookMarkType;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsHidden;                       // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_590B[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_TmpClickedTabButtonId;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_590C[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMyCharaMenu_Interface_C> K2Node_DynamicCast_AsMy_Chara_Menu_Interface;      // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_590D[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetParentWidget_Parent;                   // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCommandMenuChildBase*                K2Node_DynamicCast_AsSBCommand_Menu_Child_Base;    // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_590E[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_Costume_C*                 K2Node_DynamicCast_AsMy_Chara_Menu_Costume;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_590F[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface;     // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5910[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_ArmamentChange_C*          K2Node_DynamicCast_AsMy_Chara_Menu_Armament_Change; // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5911[0x2];                                     // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumWidgets_ReturnValue;                // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5912[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5913[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5914[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_ArmamentChange_C*          K2Node_DynamicCast_AsMy_Chara_Menu_Armament_Change_1; // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher) == 0x000008, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher) == 0x000100, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, EntryPoint) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_CustomEvent_ItemToFind) == 0x000008, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_CustomEvent_ItemToFind' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_Array_Find_ReturnValue) == 0x000018, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_ComponentBoundEvent_ButtonId) == 0x00001C, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_ComponentBoundEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_CustomEvent_IsFirstOpen) == 0x000021, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_CustomEvent_IsFirstOpen' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_CustomEvent_OpenBookMarkType) == 0x000028, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_CustomEvent_OpenBookMarkType' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000048, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00004C, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_CustomEvent_IsHidden) == 0x00004D, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_CustomEvent_IsHidden' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_CustomEvent_TmpClickedTabButtonId) == 0x000050, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_CustomEvent_TmpClickedTabButtonId' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_GetActiveWidget_ReturnValue) == 0x000058, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_AsMy_Chara_Menu_Interface) == 0x000060, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_AsMy_Chara_Menu_Interface' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_IsValid_ReturnValue) == 0x000071, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, Temp_int_Variable) == 0x000074, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_GetParentWidget_Parent) == 0x000078, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_GetParentWidget_Parent' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_AsSBCommand_Menu_Child_Base) == 0x000080, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_AsSBCommand_Menu_Child_Base' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_AsMy_Chara_Menu_Costume) == 0x000090, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_AsMy_Chara_Menu_Costume' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_bSuccess_2) == 0x000098, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_AsSBCommand_Menu_Interface) == 0x0000A0, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_AsSBCommand_Menu_Interface' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_bSuccess_3) == 0x0000B0, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_AsMy_Chara_Menu_Armament_Change) == 0x0000B8, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_AsMy_Chara_Menu_Armament_Change' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_bSuccess_4) == 0x0000C0, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_IsValid_ReturnValue_1) == 0x0000C1, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_GetNumWidgets_ReturnValue) == 0x0000C4, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_GetNumWidgets_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C8, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_GetChildrenCount_ReturnValue) == 0x0000CC, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D0, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, Temp_int_Variable_1) == 0x0000D4, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_GetChildAt_ReturnValue) == 0x0000D8, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E0, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_Add_IntInt_ReturnValue) == 0x0000E4, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, Temp_bool_Variable) == 0x0000E8, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0000E9, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_Select_Default) == 0x0000EC, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_AsMy_Chara_Menu_Armament_Change_1) == 0x0000F0, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_AsMy_Chara_Menu_Armament_Change_1' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher, K2Node_DynamicCast_bSuccess_5) == 0x0000F8, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.ChangeTab
// 0x0004 (0x0004 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_ChangeTab final
{
public:
	int32                                         Param_TmpClickedTabButtonId;                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_ChangeTab) == 0x000004, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_ChangeTab");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_ChangeTab) == 0x000004, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_ChangeTab");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_ChangeTab, Param_TmpClickedTabButtonId) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_ChangeTab::Param_TmpClickedTabButtonId' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetPlayerCaptureStudioHidden_����
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden_____ final
{
public:
	bool                                          IsHidden;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden_____) == 0x000001, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden_____");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden_____) == 0x000001, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden_____");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden_____, IsHidden) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden_____::IsHidden' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Init
// 0x0018 (0x0018 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_Init final
{
public:
	bool                                          Param_IsFirstOpen;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5915[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_OpenBookMarkType;                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_Init) == 0x000008, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_Init");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_Init) == 0x000018, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_Init");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_Init, Param_IsFirstOpen) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_Init::Param_IsFirstOpen' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_Init, Param_OpenBookMarkType) == 0x000008, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_Init::Param_OpenBookMarkType' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000004, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.SetTab
// 0x0010 (0x0010 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_SetTab final
{
public:
	class FString                                 ItemToFind;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_SetTab) == 0x000008, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_SetTab");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_SetTab) == 0x000010, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_SetTab");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_SetTab, ItemToFind) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_SetTab::ItemToFind' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.IsBattleSetButtonEnable
// 0x0018 (0x0018 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable final
{
public:
	bool                                          OutIsEnable;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMatchedState_bExists;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5916[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetMatchedState_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTraveling_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConfirmed_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable) == 0x000008, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable) == 0x000018, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable, OutIsEnable) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable::OutIsEnable' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable, CallFunc_GetMatchedState_bExists) == 0x000001, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable::CallFunc_GetMatchedState_bExists' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable, CallFunc_GetMatchedState_ReturnValue) == 0x000008, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable::CallFunc_GetMatchedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable, CallFunc_IsTraveling_ReturnValue) == 0x000010, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable::CallFunc_IsTraveling_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable, CallFunc_IsConfirmed_ReturnValue) == 0x000011, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable::CallFunc_IsConfirmed_ReturnValue' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.InitCostumeChangeMenu
// 0x0008 (0x0008 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_InitCostumeChangeMenu final
{
public:
	class UMyCharaMenu_Costume_C*                 InCostumeChangeMenu;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_InitCostumeChangeMenu) == 0x000008, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_InitCostumeChangeMenu");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_InitCostumeChangeMenu) == 0x000008, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_InitCostumeChangeMenu");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_InitCostumeChangeMenu, InCostumeChangeMenu) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_InitCostumeChangeMenu::InCostumeChangeMenu' has a wrong offset!");

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.GetWidgetSwitcherActiveWidget
// 0x0018 (0x0018 - 0x0000)
struct MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget final
{
public:
	class UWidget*                                OutWidget;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget) == 0x000008, "Wrong alignment on MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget");
static_assert(sizeof(MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget) == 0x000018, "Wrong size on MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget, OutWidget) == 0x000000, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget::OutWidget' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget, CallFunc_GetActiveWidget_ReturnValue) == 0x000008, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

