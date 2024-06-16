#pragma once

 

// Package: QuestConfirmationMenu

#include "Basic.hpp"

#include "QuestDetail_FinishStatus_structs.hpp"


namespace SDK::Params
{

// Function QuestConfirmationMenu.QuestConfirmationMenu_C.OnFinish__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuestConfirmationMenu_C_OnFinish__DelegateSignature final
{
public:
	EQuestDetail_FinishStatus                     FinishStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EA6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_QuestIndex;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestConfirmationMenu_C_OnFinish__DelegateSignature) == 0x000004, "Wrong alignment on QuestConfirmationMenu_C_OnFinish__DelegateSignature");
static_assert(sizeof(QuestConfirmationMenu_C_OnFinish__DelegateSignature) == 0x000008, "Wrong size on QuestConfirmationMenu_C_OnFinish__DelegateSignature");
static_assert(offsetof(QuestConfirmationMenu_C_OnFinish__DelegateSignature, FinishStatus) == 0x000000, "Member 'QuestConfirmationMenu_C_OnFinish__DelegateSignature::FinishStatus' has a wrong offset!");
static_assert(offsetof(QuestConfirmationMenu_C_OnFinish__DelegateSignature, Param_QuestIndex) == 0x000004, "Member 'QuestConfirmationMenu_C_OnFinish__DelegateSignature::Param_QuestIndex' has a wrong offset!");

// Function QuestConfirmationMenu.QuestConfirmationMenu_C.ExecuteUbergraph_QuestConfirmationMenu
// 0x0030 (0x0030 - 0x0000)
struct QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestDetail_FinishStatus                     K2Node_ComponentBoundEvent_FinishStatus;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EA7[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_QuestIndex;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EA8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu) == 0x000008, "Wrong alignment on QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu");
static_assert(sizeof(QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu) == 0x000030, "Wrong size on QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu");
static_assert(offsetof(QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu, EntryPoint) == 0x000000, "Member 'QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu, K2Node_ComponentBoundEvent_FinishStatus) == 0x000008, "Member 'QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu::K2Node_ComponentBoundEvent_FinishStatus' has a wrong offset!");
static_assert(offsetof(QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu, K2Node_ComponentBoundEvent_QuestIndex) == 0x00000C, "Member 'QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu::K2Node_ComponentBoundEvent_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu, CallFunc_PlaySE_ReturnValue_1) == 0x000010, "Member 'QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000028, "Member 'QuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function QuestConfirmationMenu.QuestConfirmationMenu_C.BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature final
{
public:
	EQuestDetail_FinishStatus                     FinishStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EA9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_QuestIndex;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature) == 0x000004, "Wrong alignment on QuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature");
static_assert(sizeof(QuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature) == 0x000008, "Wrong size on QuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature");
static_assert(offsetof(QuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature, FinishStatus) == 0x000000, "Member 'QuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature::FinishStatus' has a wrong offset!");
static_assert(offsetof(QuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature, Param_QuestIndex) == 0x000004, "Member 'QuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature::Param_QuestIndex' has a wrong offset!");

}

