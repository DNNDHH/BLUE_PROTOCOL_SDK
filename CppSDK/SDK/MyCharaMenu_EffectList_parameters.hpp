#pragma once

 

// Package: MyCharaMenu_EffectList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnChangeEquipWeaponProc__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_EffectList_C_OnChangeEquipWeaponProc__DelegateSignature final
{
public:
	bool                                          ProcStart;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EffectList_C_OnChangeEquipWeaponProc__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_EffectList_C_OnChangeEquipWeaponProc__DelegateSignature");
static_assert(sizeof(MyCharaMenu_EffectList_C_OnChangeEquipWeaponProc__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_EffectList_C_OnChangeEquipWeaponProc__DelegateSignature");
static_assert(offsetof(MyCharaMenu_EffectList_C_OnChangeEquipWeaponProc__DelegateSignature, ProcStart) == 0x000000, "Member 'MyCharaMenu_EffectList_C_OnChangeEquipWeaponProc__DelegateSignature::ProcStart' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnSubMenuChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_EffectList_C_OnSubMenuChanged__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EffectList_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong alignment on MyCharaMenu_EffectList_C_OnSubMenuChanged__DelegateSignature");
static_assert(sizeof(MyCharaMenu_EffectList_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong size on MyCharaMenu_EffectList_C_OnSubMenuChanged__DelegateSignature");
static_assert(offsetof(MyCharaMenu_EffectList_C_OnSubMenuChanged__DelegateSignature, Param_Index) == 0x000000, "Member 'MyCharaMenu_EffectList_C_OnSubMenuChanged__DelegateSignature::Param_Index' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAchievementChangeButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_EffectList_C_OnAchievementChangeButtonClicked__DelegateSignature final
{
public:
	class UMyCharaMenu_AchievementList_C*         InAchievementList;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EffectList_C_OnAchievementChangeButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_EffectList_C_OnAchievementChangeButtonClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_EffectList_C_OnAchievementChangeButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MyCharaMenu_EffectList_C_OnAchievementChangeButtonClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_EffectList_C_OnAchievementChangeButtonClicked__DelegateSignature, InAchievementList) == 0x000000, "Member 'MyCharaMenu_EffectList_C_OnAchievementChangeButtonClicked__DelegateSignature::InAchievementList' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAcquiredAchievementLoaded__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_EffectList_C_OnAcquiredAchievementLoaded__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EffectList_C_OnAcquiredAchievementLoaded__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_EffectList_C_OnAcquiredAchievementLoaded__DelegateSignature");
static_assert(sizeof(MyCharaMenu_EffectList_C_OnAcquiredAchievementLoaded__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_EffectList_C_OnAcquiredAchievementLoaded__DelegateSignature");
static_assert(offsetof(MyCharaMenu_EffectList_C_OnAcquiredAchievementLoaded__DelegateSignature, InResult) == 0x000000, "Member 'MyCharaMenu_EffectList_C_OnAcquiredAchievementLoaded__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnSelectAchievementSaved__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_EffectList_C_OnSelectAchievementSaved__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EffectList_C_OnSelectAchievementSaved__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_EffectList_C_OnSelectAchievementSaved__DelegateSignature");
static_assert(sizeof(MyCharaMenu_EffectList_C_OnSelectAchievementSaved__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_EffectList_C_OnSelectAchievementSaved__DelegateSignature");
static_assert(offsetof(MyCharaMenu_EffectList_C_OnSelectAchievementSaved__DelegateSignature, InResult) == 0x000000, "Member 'MyCharaMenu_EffectList_C_OnSelectAchievementSaved__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.ExecuteUbergraph_MyCharaMenu_EffectList
// 0x0048 (0x0048 - 0x0000)
struct MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C87[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_InResult_1;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_InResult;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C88[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8C89[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_AchievementList_C*         K2Node_ComponentBoundEvent_InAchievementListRef;   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList) == 0x000008, "Wrong alignment on MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList");
static_assert(sizeof(MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList) == 0x000048, "Wrong size on MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList");
static_assert(offsetof(MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList, EntryPoint) == 0x000000, "Member 'MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList, K2Node_ComponentBoundEvent_InResult_1) == 0x000010, "Member 'MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList::K2Node_ComponentBoundEvent_InResult_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList, K2Node_ComponentBoundEvent_InResult) == 0x000011, "Member 'MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList::K2Node_ComponentBoundEvent_InResult' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList, K2Node_ComponentBoundEvent_InAchievementListRef) == 0x000040, "Member 'MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList::K2Node_ComponentBoundEvent_InAchievementListRef' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature final
{
public:
	class UMyCharaMenu_AchievementList_C*         InAchievementListRef;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature");
static_assert(sizeof(MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature) == 0x000008, "Wrong size on MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature");
static_assert(offsetof(MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature, InAchievementListRef) == 0x000000, "Member 'MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature::InAchievementListRef' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature");
static_assert(sizeof(MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature");
static_assert(offsetof(MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature, InResult) == 0x000000, "Member 'MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature");
static_assert(sizeof(MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature");
static_assert(offsetof(MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature, InResult) == 0x000000, "Member 'MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.AddEffectItemToList
// 0x0028 (0x0028 - 0x0000)
struct MyCharaMenu_EffectList_C_AddEffectItemToList final
{
public:
	class FText                                   InEffectNameText;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UMyCharaMenu_EffectListItem_C*          CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EffectList_C_AddEffectItemToList) == 0x000008, "Wrong alignment on MyCharaMenu_EffectList_C_AddEffectItemToList");
static_assert(sizeof(MyCharaMenu_EffectList_C_AddEffectItemToList) == 0x000028, "Wrong size on MyCharaMenu_EffectList_C_AddEffectItemToList");
static_assert(offsetof(MyCharaMenu_EffectList_C_AddEffectItemToList, InEffectNameText) == 0x000000, "Member 'MyCharaMenu_EffectList_C_AddEffectItemToList::InEffectNameText' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_AddEffectItemToList, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MyCharaMenu_EffectList_C_AddEffectItemToList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_AddEffectItemToList, CallFunc_AddChild_ReturnValue) == 0x000020, "Member 'MyCharaMenu_EffectList_C_AddEffectItemToList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.AnimMyCharaOut
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_EffectList_C_AnimMyCharaOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EffectList_C_AnimMyCharaOut) == 0x000008, "Wrong alignment on MyCharaMenu_EffectList_C_AnimMyCharaOut");
static_assert(sizeof(MyCharaMenu_EffectList_C_AnimMyCharaOut) == 0x000008, "Wrong size on MyCharaMenu_EffectList_C_AnimMyCharaOut");
static_assert(offsetof(MyCharaMenu_EffectList_C_AnimMyCharaOut, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MyCharaMenu_EffectList_C_AnimMyCharaOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Correct EquipedUIDs
// 0x0080 (0x0080 - 0x0000)
struct MyCharaMenu_EffectList_C_Correct_EquipedUIDs final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C8A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBCharaEquipType>                     K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0020(0x0028)(ConstParm)
	ESBCharaEquipType                             CallFunc_Array_Get_Item;                           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C8B[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_1;           // 0x0050(0x0028)(ConstParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs) == 0x000008, "Wrong alignment on MyCharaMenu_EffectList_C_Correct_EquipedUIDs");
static_assert(sizeof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs) == 0x000080, "Wrong size on MyCharaMenu_EffectList_C_Correct_EquipedUIDs");
static_assert(offsetof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MyCharaMenu_EffectList_C_Correct_EquipedUIDs::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MyCharaMenu_EffectList_C_Correct_EquipedUIDs::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MyCharaMenu_EffectList_C_Correct_EquipedUIDs::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs, K2Node_MakeArray_Array) == 0x000010, "Member 'MyCharaMenu_EffectList_C_Correct_EquipedUIDs::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000020, "Member 'MyCharaMenu_EffectList_C_Correct_EquipedUIDs::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs, CallFunc_Array_Get_Item) == 0x000048, "Member 'MyCharaMenu_EffectList_C_Correct_EquipedUIDs::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs, CallFunc_GetEquipItemInfo_ReturnValue_1) == 0x000050, "Member 'MyCharaMenu_EffectList_C_Correct_EquipedUIDs::CallFunc_GetEquipItemInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'MyCharaMenu_EffectList_C_Correct_EquipedUIDs::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EffectList_C_Correct_EquipedUIDs, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'MyCharaMenu_EffectList_C_Correct_EquipedUIDs::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

