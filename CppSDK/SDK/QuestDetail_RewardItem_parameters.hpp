#pragma once

 

// Package: QuestDetail_RewardItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.OnToggleCheck_Deligate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct QuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature final
{
public:
	bool                                          Property;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41CE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     ClickedObject;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature) == 0x000008, "Wrong alignment on QuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature");
static_assert(sizeof(QuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature) == 0x000010, "Wrong size on QuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature");
static_assert(offsetof(QuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature, Property) == 0x000000, "Member 'QuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature::Property' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature, ClickedObject) == 0x000008, "Member 'QuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature::ClickedObject' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.ExecuteUbergraph_QuestDetail_RewardItem
// 0x0018 (0x0018 - 0x0000)
struct QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isChecked;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41CF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_CustomEvent_CheckedItem;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem) == 0x000008, "Wrong alignment on QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem");
static_assert(sizeof(QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem) == 0x000018, "Wrong size on QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem");
static_assert(offsetof(QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem, EntryPoint) == 0x000000, "Member 'QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem, K2Node_CustomEvent_isChecked) == 0x000004, "Member 'QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem::K2Node_CustomEvent_isChecked' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem, K2Node_CustomEvent_CheckedItem) == 0x000008, "Member 'QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem::K2Node_CustomEvent_CheckedItem' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem, K2Node_Event_IsDesignTime) == 0x000010, "Member 'QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000011, "Member 'QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.OnToggleChecked
// 0x0010 (0x0010 - 0x0000)
struct QuestDetail_RewardItem_C_OnToggleChecked final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     CheckedItem;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_RewardItem_C_OnToggleChecked) == 0x000008, "Wrong alignment on QuestDetail_RewardItem_C_OnToggleChecked");
static_assert(sizeof(QuestDetail_RewardItem_C_OnToggleChecked) == 0x000010, "Wrong size on QuestDetail_RewardItem_C_OnToggleChecked");
static_assert(offsetof(QuestDetail_RewardItem_C_OnToggleChecked, IsChecked) == 0x000000, "Member 'QuestDetail_RewardItem_C_OnToggleChecked::IsChecked' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_OnToggleChecked, CheckedItem) == 0x000008, "Member 'QuestDetail_RewardItem_C_OnToggleChecked::CheckedItem' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct QuestDetail_RewardItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardItem_C_PreConstruct) == 0x000001, "Wrong alignment on QuestDetail_RewardItem_C_PreConstruct");
static_assert(sizeof(QuestDetail_RewardItem_C_PreConstruct) == 0x000001, "Wrong size on QuestDetail_RewardItem_C_PreConstruct");
static_assert(offsetof(QuestDetail_RewardItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'QuestDetail_RewardItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetTitle
// 0x0004 (0x0004 - 0x0000)
struct QuestDetail_RewardItem_C_SetTitle final
{
public:
	int32                                         InTitleText;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_RewardItem_C_SetTitle) == 0x000004, "Wrong alignment on QuestDetail_RewardItem_C_SetTitle");
static_assert(sizeof(QuestDetail_RewardItem_C_SetTitle) == 0x000004, "Wrong size on QuestDetail_RewardItem_C_SetTitle");
static_assert(offsetof(QuestDetail_RewardItem_C_SetTitle, InTitleText) == 0x000000, "Member 'QuestDetail_RewardItem_C_SetTitle::InTitleText' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetRewardContent
// 0x02E0 (0x02E0 - 0x0000)
struct QuestDetail_RewardItem_C_SetRewardContent final
{
public:
	struct FQuestMasterData                       InQuestMasterData;                                 // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bInChoiceRewardSelectable;                         // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnableHiddenReward;                               // 0x0119(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D1[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpQuestIndex;                                     // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpbEnableHiddenReward;                            // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D2[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     TmpAcceptedQuestInfo;                              // 0x0128(0x0060)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D3[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_FindAcceptedQuestData_AcceptedQuestInfo;  // 0x0198(0x0060)()
	bool                                          CallFunc_FindAcceptedQuestData_Exist;              // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D4[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRewardInfo                            CallFunc_Array_Get_Item;                           // 0x0204(0x0018)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldAddCommonRewardList_ReturnValue;    // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D5[0x2];                                     // 0x0222(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsCheck, class UQuestRewardIcon_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0224(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0236(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D6[0x1];                                     // 0x0237(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRewardInfo>                    CallFunc_GetSpcifiedAdditionalReward_OutReward_Infos; // 0x0240(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetSpcifiedAdditionalReward_OutNextClearCount; // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExistAdditionalReward_Ret;              // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0256(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D7[0x1];                                     // 0x0257(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRewardInfo                            CallFunc_Array_Get_Item_1;                         // 0x0258(0x0018)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41D8[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddReward_OutWidget;                      // 0x0278(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D9[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_DynamicCast_AsQuest_Reward_Icon;            // 0x0288(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41DA[0x3];                                     // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41DB[0x1];                                     // 0x029B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsCheck, class UQuestRewardIcon_C* Widget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x029C(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41DC[0x3];                                     // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRewardNum_Num;                         // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRewardNum_Num_1;                       // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x02BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x02BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41DD[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddReward_OutWidget_1;                    // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41DE[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_DynamicCast_AsQuest_Reward_Icon_1;          // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardItem_C_SetRewardContent) == 0x000008, "Wrong alignment on QuestDetail_RewardItem_C_SetRewardContent");
static_assert(sizeof(QuestDetail_RewardItem_C_SetRewardContent) == 0x0002E0, "Wrong size on QuestDetail_RewardItem_C_SetRewardContent");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, InQuestMasterData) == 0x000000, "Member 'QuestDetail_RewardItem_C_SetRewardContent::InQuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, bInChoiceRewardSelectable) == 0x000118, "Member 'QuestDetail_RewardItem_C_SetRewardContent::bInChoiceRewardSelectable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, bEnableHiddenReward) == 0x000119, "Member 'QuestDetail_RewardItem_C_SetRewardContent::bEnableHiddenReward' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, TmpQuestIndex) == 0x00011C, "Member 'QuestDetail_RewardItem_C_SetRewardContent::TmpQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, TmpbEnableHiddenReward) == 0x000120, "Member 'QuestDetail_RewardItem_C_SetRewardContent::TmpbEnableHiddenReward' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, TmpAcceptedQuestInfo) == 0x000128, "Member 'QuestDetail_RewardItem_C_SetRewardContent::TmpAcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, Temp_int_Loop_Counter_Variable) == 0x000188, "Member 'QuestDetail_RewardItem_C_SetRewardContent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_Add_IntInt_ReturnValue) == 0x00018C, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_Array_Length_ReturnValue) == 0x000190, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_Less_IntInt_ReturnValue) == 0x000194, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_FindAcceptedQuestData_AcceptedQuestInfo) == 0x000198, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_FindAcceptedQuestData_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_FindAcceptedQuestData_Exist) == 0x0001F8, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_FindAcceptedQuestData_Exist' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, Temp_int_Array_Index_Variable) == 0x0001FC, "Member 'QuestDetail_RewardItem_C_SetRewardContent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, Temp_int_Loop_Counter_Variable_1) == 0x000200, "Member 'QuestDetail_RewardItem_C_SetRewardContent::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_Array_Get_Item) == 0x000204, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_Add_IntInt_ReturnValue_1) == 0x00021C, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, K2Node_SwitchEnum_CmpSuccess) == 0x000220, "Member 'QuestDetail_RewardItem_C_SetRewardContent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_ShouldAddCommonRewardList_ReturnValue) == 0x000221, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_ShouldAddCommonRewardList_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, K2Node_CreateDelegate_OutputDelegate) == 0x000224, "Member 'QuestDetail_RewardItem_C_SetRewardContent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, Temp_byte_Variable) == 0x000234, "Member 'QuestDetail_RewardItem_C_SetRewardContent::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, Temp_byte_Variable_1) == 0x000235, "Member 'QuestDetail_RewardItem_C_SetRewardContent::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, Temp_bool_Variable) == 0x000236, "Member 'QuestDetail_RewardItem_C_SetRewardContent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, Temp_int_Array_Index_Variable_1) == 0x000238, "Member 'QuestDetail_RewardItem_C_SetRewardContent::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_Add_IntInt_ReturnValue_2) == 0x00023C, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_GetSpcifiedAdditionalReward_OutReward_Infos) == 0x000240, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_GetSpcifiedAdditionalReward_OutReward_Infos' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_GetSpcifiedAdditionalReward_OutNextClearCount) == 0x000250, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_GetSpcifiedAdditionalReward_OutNextClearCount' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_IsExistAdditionalReward_Ret) == 0x000254, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_IsExistAdditionalReward_Ret' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000255, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000256, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_Array_Get_Item_1) == 0x000258, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_Array_Length_ReturnValue_1) == 0x000270, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_AddReward_OutWidget) == 0x000278, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_AddReward_OutWidget' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_Less_IntInt_ReturnValue_1) == 0x000280, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, K2Node_DynamicCast_AsQuest_Reward_Icon) == 0x000288, "Member 'QuestDetail_RewardItem_C_SetRewardContent::K2Node_DynamicCast_AsQuest_Reward_Icon' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, K2Node_DynamicCast_bSuccess) == 0x000290, "Member 'QuestDetail_RewardItem_C_SetRewardContent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_Array_Length_ReturnValue_2) == 0x000294, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000298, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_BooleanAND_ReturnValue) == 0x000299, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, Temp_byte_Variable_2) == 0x00029A, "Member 'QuestDetail_RewardItem_C_SetRewardContent::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, K2Node_CreateDelegate_OutputDelegate_1) == 0x00029C, "Member 'QuestDetail_RewardItem_C_SetRewardContent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, Temp_byte_Variable_3) == 0x0002AC, "Member 'QuestDetail_RewardItem_C_SetRewardContent::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_GetRewardNum_Num) == 0x0002B0, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_GetRewardNum_Num' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_GetRewardNum_Num_1) == 0x0002B4, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_GetRewardNum_Num_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0002B8, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0002B9, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, K2Node_Select_Default) == 0x0002BA, "Member 'QuestDetail_RewardItem_C_SetRewardContent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, Temp_bool_Variable_1) == 0x0002BB, "Member 'QuestDetail_RewardItem_C_SetRewardContent::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, CallFunc_AddReward_OutWidget_1) == 0x0002C0, "Member 'QuestDetail_RewardItem_C_SetRewardContent::CallFunc_AddReward_OutWidget_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, K2Node_Select_Default_1) == 0x0002C8, "Member 'QuestDetail_RewardItem_C_SetRewardContent::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, K2Node_DynamicCast_AsQuest_Reward_Icon_1) == 0x0002D0, "Member 'QuestDetail_RewardItem_C_SetRewardContent::K2Node_DynamicCast_AsQuest_Reward_Icon_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContent, K2Node_DynamicCast_bSuccess_1) == 0x0002D8, "Member 'QuestDetail_RewardItem_C_SetRewardContent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.IsEmptyList
// 0x0018 (0x0018 - 0x0000)
struct QuestDetail_RewardItem_C_IsEmptyList final
{
public:
	bool                                          bIsEmpty;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41DF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRewardNum_Num;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRewardNum_Num_1;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41E0[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRewardNum_Num_2;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardItem_C_IsEmptyList) == 0x000004, "Wrong alignment on QuestDetail_RewardItem_C_IsEmptyList");
static_assert(sizeof(QuestDetail_RewardItem_C_IsEmptyList) == 0x000018, "Wrong size on QuestDetail_RewardItem_C_IsEmptyList");
static_assert(offsetof(QuestDetail_RewardItem_C_IsEmptyList, bIsEmpty) == 0x000000, "Member 'QuestDetail_RewardItem_C_IsEmptyList::bIsEmpty' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsEmptyList, CallFunc_GetRewardNum_Num) == 0x000004, "Member 'QuestDetail_RewardItem_C_IsEmptyList::CallFunc_GetRewardNum_Num' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsEmptyList, CallFunc_GetRewardNum_Num_1) == 0x000008, "Member 'QuestDetail_RewardItem_C_IsEmptyList::CallFunc_GetRewardNum_Num_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsEmptyList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'QuestDetail_RewardItem_C_IsEmptyList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsEmptyList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000D, "Member 'QuestDetail_RewardItem_C_IsEmptyList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsEmptyList, CallFunc_GetRewardNum_Num_2) == 0x000010, "Member 'QuestDetail_RewardItem_C_IsEmptyList::CallFunc_GetRewardNum_Num_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsEmptyList, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000014, "Member 'QuestDetail_RewardItem_C_IsEmptyList::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsEmptyList, CallFunc_BooleanAND_ReturnValue) == 0x000015, "Member 'QuestDetail_RewardItem_C_IsEmptyList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsEmptyList, CallFunc_BooleanAND_ReturnValue_1) == 0x000016, "Member 'QuestDetail_RewardItem_C_IsEmptyList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.DebugDumpRewardInfo
// 0x01A0 (0x01A0 - 0x0000)
struct QuestDetail_RewardItem_C_DebugDumpRewardInfo final
{
public:
	TArray<struct FRewardInfo>                    InRewardInfo;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 OutText;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41E1[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FRewardInfo                            CallFunc_Array_Get_Item;                           // 0x0040(0x0018)(NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBMasterReward                        CallFunc_FindRewardMasterData_ReturnValue;         // 0x0078(0x0014)(NoDestructor)
	bool                                          CallFunc_FindRewardMasterData_IsExist;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41E2[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41E3[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41E4[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_9;              // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_10;             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_11;             // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_12;             // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_RewardItem_C_DebugDumpRewardInfo) == 0x000008, "Wrong alignment on QuestDetail_RewardItem_C_DebugDumpRewardInfo");
static_assert(sizeof(QuestDetail_RewardItem_C_DebugDumpRewardInfo) == 0x0001A0, "Wrong size on QuestDetail_RewardItem_C_DebugDumpRewardInfo");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, InRewardInfo) == 0x000000, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::InRewardInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, OutText) == 0x000010, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::OutText' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Array_Length_ReturnValue_1) == 0x000024, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, Temp_int_Array_Index_Variable) == 0x000028, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Array_Get_Item) == 0x000040, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_FindRewardMasterData_ReturnValue) == 0x000078, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_FindRewardMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_FindRewardMasterData_IsExist) == 0x00008C, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_FindRewardMasterData_IsExist' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Conv_NameToString_ReturnValue) == 0x000090, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000A0, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Conv_IntToString_ReturnValue_2) == 0x0000B0, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000C0, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Conv_IntToString_ReturnValue_3) == 0x0000D0, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, Temp_int_Loop_Counter_Variable) == 0x0000E0, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Less_IntInt_ReturnValue) == 0x0000E4, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Add_IntInt_ReturnValue) == 0x0000E8, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000F0, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000100, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000110, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000120, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000130, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000140, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_8) == 0x000150, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_9) == 0x000160, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_10) == 0x000170, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_11) == 0x000180, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_DebugDumpRewardInfo, CallFunc_Concat_StrStr_ReturnValue_12) == 0x000190, "Member 'QuestDetail_RewardItem_C_DebugDumpRewardInfo::CallFunc_Concat_StrStr_ReturnValue_12' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.IsExistAdditionalReward
// 0x0020 (0x0020 - 0x0000)
struct QuestDetail_RewardItem_C_IsExistAdditionalReward final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41E5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBQuestAdditionalRewardUIInfo> CallFunc_GetQuestAdditionalRewardInfo_OutInfos;    // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardItem_C_IsExistAdditionalReward) == 0x000008, "Wrong alignment on QuestDetail_RewardItem_C_IsExistAdditionalReward");
static_assert(sizeof(QuestDetail_RewardItem_C_IsExistAdditionalReward) == 0x000020, "Wrong size on QuestDetail_RewardItem_C_IsExistAdditionalReward");
static_assert(offsetof(QuestDetail_RewardItem_C_IsExistAdditionalReward, InQuestIndex) == 0x000000, "Member 'QuestDetail_RewardItem_C_IsExistAdditionalReward::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsExistAdditionalReward, Ret) == 0x000004, "Member 'QuestDetail_RewardItem_C_IsExistAdditionalReward::Ret' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsExistAdditionalReward, CallFunc_GetQuestAdditionalRewardInfo_OutInfos) == 0x000008, "Member 'QuestDetail_RewardItem_C_IsExistAdditionalReward::CallFunc_GetQuestAdditionalRewardInfo_OutInfos' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsExistAdditionalReward, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'QuestDetail_RewardItem_C_IsExistAdditionalReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_IsExistAdditionalReward, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'QuestDetail_RewardItem_C_IsExistAdditionalReward::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.GetSpcifiedAdditionalReward
// 0x0128 (0x0128 - 0x0000)
struct QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InClearCount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRewardInfo>                    OutReward_Infos;                                   // 0x0008(0x0010)(Parm, OutParm)
	int32                                         OutNextClearCount;                                 // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetClearCount;                                  // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRewardInfo>                    TmpRewardInfo;                                     // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         NextClearCount;                                    // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBQuestAdditionalRewardUIInfo> CallFunc_GetQuestAdditionalRewardInfo_OutInfos;    // 0x0038(0x0010)(ReferenceParm)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41E6[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBQuestAdditionalRewardUIInfo         CallFunc_Array_Get_Item;                           // 0x0050(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41E7[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41E8[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41E9[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41EA[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41EB[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward) == 0x000008, "Wrong alignment on QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward");
static_assert(sizeof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward) == 0x000128, "Wrong size on QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, InQuestIndex) == 0x000000, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, InClearCount) == 0x000004, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::InClearCount' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, OutReward_Infos) == 0x000008, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::OutReward_Infos' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, OutNextClearCount) == 0x000018, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::OutNextClearCount' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, TargetClearCount) == 0x00001C, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::TargetClearCount' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, TmpRewardInfo) == 0x000020, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::TmpRewardInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, NextClearCount) == 0x000030, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::NextClearCount' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, Temp_int_Array_Index_Variable) == 0x000034, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_GetQuestAdditionalRewardInfo_OutInfos) == 0x000038, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_GetQuestAdditionalRewardInfo_OutInfos' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, Temp_bool_True_if_break_was_hit_Variable) == 0x000048, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Array_Get_Item) == 0x000050, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Not_PreBool_ReturnValue) == 0x000068, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000088, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000098, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, Temp_int_Loop_Counter_Variable) == 0x0000A8, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_BooleanAND_ReturnValue) == 0x0000B4, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B8, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C8, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000D8, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E8, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000F0, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000100, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000110, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000120, "Member 'QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetCoomonRewardLabelString
// 0x0010 (0x0010 - 0x0000)
struct QuestDetail_RewardItem_C_SetCoomonRewardLabelString final
{
public:
	class FString                                 InLabelString;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_RewardItem_C_SetCoomonRewardLabelString) == 0x000008, "Wrong alignment on QuestDetail_RewardItem_C_SetCoomonRewardLabelString");
static_assert(sizeof(QuestDetail_RewardItem_C_SetCoomonRewardLabelString) == 0x000010, "Wrong size on QuestDetail_RewardItem_C_SetCoomonRewardLabelString");
static_assert(offsetof(QuestDetail_RewardItem_C_SetCoomonRewardLabelString, InLabelString) == 0x000000, "Member 'QuestDetail_RewardItem_C_SetCoomonRewardLabelString::InLabelString' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetRewardContentByRewardId
// 0x0080 (0x0080 - 0x0000)
struct QuestDetail_RewardItem_C_SetRewardContentByRewardId final
{
public:
	TArray<struct FRewardInfo>                    RewardInfoList;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41EC[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRewardInfo                            CallFunc_Array_Get_Item;                           // 0x001C(0x0018)(NoDestructor)
	bool                                          CallFunc_ShouldAddCommonRewardList_ReturnValue;    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41ED[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41EE[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsCheck, class UQuestRewardIcon_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetRewardNum_Num;                         // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41EF[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddReward_OutWidget;                      // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41F0[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_DynamicCast_AsQuest_Reward_Icon;            // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardItem_C_SetRewardContentByRewardId) == 0x000008, "Wrong alignment on QuestDetail_RewardItem_C_SetRewardContentByRewardId");
static_assert(sizeof(QuestDetail_RewardItem_C_SetRewardContentByRewardId) == 0x000080, "Wrong size on QuestDetail_RewardItem_C_SetRewardContentByRewardId");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, RewardInfoList) == 0x000000, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::RewardInfoList' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, Temp_int_Array_Index_Variable) == 0x000014, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, Temp_byte_Variable) == 0x000018, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, CallFunc_Array_Get_Item) == 0x00001C, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, CallFunc_ShouldAddCommonRewardList_ReturnValue) == 0x000034, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::CallFunc_ShouldAddCommonRewardList_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, K2Node_SwitchEnum_CmpSuccess) == 0x000035, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, Temp_byte_Variable_1) == 0x000036, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, CallFunc_GetRewardNum_Num) == 0x000054, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::CallFunc_GetRewardNum_Num' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000058, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, Temp_bool_Variable) == 0x000059, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, CallFunc_AddReward_OutWidget) == 0x000060, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::CallFunc_AddReward_OutWidget' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, K2Node_Select_Default) == 0x000068, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, K2Node_DynamicCast_AsQuest_Reward_Icon) == 0x000070, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::K2Node_DynamicCast_AsQuest_Reward_Icon' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_SetRewardContentByRewardId, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'QuestDetail_RewardItem_C_SetRewardContentByRewardId::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.ShouldAddCommonRewardList
// 0x001C (0x001C - 0x0000)
struct QuestDetail_RewardItem_C_ShouldAddCommonRewardList final
{
public:
	struct FRewardInfo                            InRewardInfo;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardItem_C_ShouldAddCommonRewardList) == 0x000004, "Wrong alignment on QuestDetail_RewardItem_C_ShouldAddCommonRewardList");
static_assert(sizeof(QuestDetail_RewardItem_C_ShouldAddCommonRewardList) == 0x00001C, "Wrong size on QuestDetail_RewardItem_C_ShouldAddCommonRewardList");
static_assert(offsetof(QuestDetail_RewardItem_C_ShouldAddCommonRewardList, InRewardInfo) == 0x000000, "Member 'QuestDetail_RewardItem_C_ShouldAddCommonRewardList::InRewardInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_ShouldAddCommonRewardList, ReturnValue) == 0x000018, "Member 'QuestDetail_RewardItem_C_ShouldAddCommonRewardList::ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardItem_C_ShouldAddCommonRewardList, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'QuestDetail_RewardItem_C_ShouldAddCommonRewardList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

