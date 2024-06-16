#pragma once

 

// Package: MyCharacterMenu_StatusSwitcher

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSubMenuChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_OnSubMenuChanged__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_OnSubMenuChanged__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong size on MyCharacterMenu_StatusSwitcher_C_OnSubMenuChanged__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_OnSubMenuChanged__DelegateSignature, Param_Index) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_OnSubMenuChanged__DelegateSignature::Param_Index' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAchievementChangeButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature final
{
public:
	class UMyCharaMenu_AchievementList_C*         InAchievementList;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MyCharacterMenu_StatusSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature, InAchievementList) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature::InAchievementList' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAcquiredAchievementLoaded__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_StatusSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature, InResult) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSelectAchievementSaved__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_OnSelectAchievementSaved__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_OnSelectAchievementSaved__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_OnSelectAchievementSaved__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_OnSelectAchievementSaved__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_StatusSwitcher_C_OnSelectAchievementSaved__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_OnSelectAchievementSaved__DelegateSignature, InResult) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_OnSelectAchievementSaved__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature final
{
public:
	bool                                          IsHidden;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature, IsHidden) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature::IsHidden' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnPlayerAvatarRotateActive__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_StatusSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature, InIsActive) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature::InIsActive' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnIsCmnBackBtnVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_StatusSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature, InIsVisible) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature::InIsVisible' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetCostumeOnFlag__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_OnSetCostumeOnFlag__DelegateSignature final
{
public:
	bool                                          InIsCostumeOn;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_OnSetCostumeOnFlag__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_OnSetCostumeOnFlag__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_OnSetCostumeOnFlag__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_StatusSwitcher_C_OnSetCostumeOnFlag__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_OnSetCostumeOnFlag__DelegateSignature, InIsCostumeOn) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_OnSetCostumeOnFlag__DelegateSignature::InIsCostumeOn' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.ExecuteUbergraph_MyCharacterMenu_StatusSwitcher
// 0x00C0 (0x00C0 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_InIsHidden;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C8D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_IsFirstOpen;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C8E[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_OpenBookMarkType;               // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsHidden;                       // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C8F[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_TmpClickedTabButtonId;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C90[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_BattleSet_C*               K2Node_DynamicCast_AsMy_Chara_Menu_Battle_Set;     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C91[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMyCharaMenu_Interface_C> K2Node_DynamicCast_AsMy_Chara_Menu_Interface;      // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C92[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetParentWidget_Parent;                   // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCommandMenuChildBase*                K2Node_DynamicCast_AsSBCommand_Menu_Child_Base;    // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C93[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8C94[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface;     // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_InIsRotateActive;       // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_InIsVisible;            // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C95[0x1];                                     // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher) == 0x000008, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher) == 0x0000C0, "Wrong size on MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, EntryPoint) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_ComponentBoundEvent_InIsHidden) == 0x000004, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_ComponentBoundEvent_InIsHidden' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_CustomEvent_IsFirstOpen) == 0x000018, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_CustomEvent_IsFirstOpen' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_CustomEvent_OpenBookMarkType) == 0x000020, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_CustomEvent_OpenBookMarkType' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000030, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000034, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_CustomEvent_IsHidden) == 0x000035, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_CustomEvent_IsHidden' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_CustomEvent_TmpClickedTabButtonId) == 0x000038, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_CustomEvent_TmpClickedTabButtonId' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, CallFunc_GetActiveWidget_ReturnValue) == 0x000040, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_DynamicCast_AsMy_Chara_Menu_Battle_Set) == 0x000048, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_DynamicCast_AsMy_Chara_Menu_Battle_Set' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_DynamicCast_AsMy_Chara_Menu_Interface) == 0x000058, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_DynamicCast_AsMy_Chara_Menu_Interface' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, CallFunc_GetParentWidget_Parent) == 0x000070, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::CallFunc_GetParentWidget_Parent' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_DynamicCast_AsSBCommand_Menu_Child_Base) == 0x000078, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_DynamicCast_AsSBCommand_Menu_Child_Base' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_CreateDelegate_OutputDelegate_1) == 0x000084, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_DynamicCast_AsSBCommand_Menu_Interface) == 0x000098, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_DynamicCast_AsSBCommand_Menu_Interface' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_DynamicCast_bSuccess_3) == 0x0000A8, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_ComponentBoundEvent_InIsRotateActive) == 0x0000A9, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_ComponentBoundEvent_InIsRotateActive' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_ComponentBoundEvent_InIsVisible) == 0x0000AA, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_ComponentBoundEvent_InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000AC, "Member 'MyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature final
{
public:
	bool                                          InIsHidden;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature, InIsHidden) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature::InIsHidden' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature, InIsVisible) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature::InIsVisible' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature final
{
public:
	bool                                          InIsRotateActive;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong size on MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature, InIsRotateActive) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature::InIsRotateActive' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.ChangeTab
// 0x0004 (0x0004 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_ChangeTab final
{
public:
	int32                                         Param_TmpClickedTabButtonId;                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_ChangeTab) == 0x000004, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_ChangeTab");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_ChangeTab) == 0x000004, "Wrong size on MyCharacterMenu_StatusSwitcher_C_ChangeTab");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_ChangeTab, Param_TmpClickedTabButtonId) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_ChangeTab::Param_TmpClickedTabButtonId' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetPlayerCaptureStudioHidden_����
// 0x0001 (0x0001 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden_____ final
{
public:
	bool                                          IsHidden;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden_____) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden_____");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden_____) == 0x000001, "Wrong size on MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden_____");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden_____, IsHidden) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden_____::IsHidden' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Init
// 0x0018 (0x0018 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_Init final
{
public:
	bool                                          Param_IsFirstOpen;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C96[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_OpenBookMarkType;                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_Init) == 0x000008, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_Init");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_Init) == 0x000018, "Wrong size on MyCharacterMenu_StatusSwitcher_C_Init");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_Init, Param_IsFirstOpen) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_Init::Param_IsFirstOpen' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_Init, Param_OpenBookMarkType) == 0x000008, "Member 'MyCharacterMenu_StatusSwitcher_C_Init::Param_OpenBookMarkType' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.IsBattleSetButtonEnable
// 0x0018 (0x0018 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable final
{
public:
	bool                                          OutIsEnable;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMatchedState_bExists;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C97[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetMatchedState_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTraveling_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConfirmed_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable) == 0x000008, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable) == 0x000018, "Wrong size on MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable, OutIsEnable) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable::OutIsEnable' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable, CallFunc_GetMatchedState_bExists) == 0x000001, "Member 'MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable::CallFunc_GetMatchedState_bExists' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable, CallFunc_GetMatchedState_ReturnValue) == 0x000008, "Member 'MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable::CallFunc_GetMatchedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable, CallFunc_IsTraveling_ReturnValue) == 0x000010, "Member 'MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable::CallFunc_IsTraveling_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable, CallFunc_IsConfirmed_ReturnValue) == 0x000011, "Member 'MyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable::CallFunc_IsConfirmed_ReturnValue' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.InitCostumeChangeMenu
// 0x0008 (0x0008 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_InitCostumeChangeMenu final
{
public:
	class UMyCharaMenu_Costume_C*                 InCostumeChangeMenu;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_InitCostumeChangeMenu) == 0x000008, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_InitCostumeChangeMenu");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_InitCostumeChangeMenu) == 0x000008, "Wrong size on MyCharacterMenu_StatusSwitcher_C_InitCostumeChangeMenu");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_InitCostumeChangeMenu, InCostumeChangeMenu) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_InitCostumeChangeMenu::InCostumeChangeMenu' has a wrong offset!");

// Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.SetPlayerAvatarImageVisibility
// 0x0007 (0x0007 - 0x0000)
struct MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility final
{
public:
	bool                                          bInIsVisible;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility) == 0x000001, "Wrong alignment on MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility");
static_assert(sizeof(MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility) == 0x000007, "Wrong size on MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility, bInIsVisible) == 0x000000, "Member 'MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility::bInIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility, Temp_byte_Variable) == 0x000001, "Member 'MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility, Temp_bool_Variable) == 0x000003, "Member 'MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility, K2Node_Select_Default) == 0x000005, "Member 'MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility, CallFunc_IsValid_ReturnValue_1) == 0x000006, "Member 'MyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

