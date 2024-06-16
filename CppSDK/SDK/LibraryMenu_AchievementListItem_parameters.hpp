#pragma once

 

// Package: LibraryMenu_AchievementListItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_AchievementListItem_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_ListIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_AchievementListItem_C_OnClick__DelegateSignature");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_AchievementListItem_C_OnClick__DelegateSignature");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_OnClick__DelegateSignature, Param_ListIndex) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_OnClick__DelegateSignature::Param_ListIndex' has a wrong offset!");

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.EventCheckStateChanged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A7E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_ListIndex;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature) == 0x000008, "Wrong size on LibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature, Param_ListIndex) == 0x000004, "Member 'LibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature::Param_ListIndex' has a wrong offset!");

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.ExecuteUbergraph_LibraryMenu_AchievementListItem
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem) == 0x000004, "Wrong alignment on LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem) == 0x000010, "Wrong size on LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem, EntryPoint) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000004, "Member 'LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem, CallFunc_GetActiveWidgetIndex_ReturnValue_1) == 0x000008, "Member 'LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem::CallFunc_GetActiveWidgetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000D, "Member 'LibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.Initialize
// 0x0028 (0x0028 - 0x0000)
struct LibraryMenu_AchievementListItem_C_Initialize final
{
public:
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_Initialize) == 0x000008, "Wrong alignment on LibraryMenu_AchievementListItem_C_Initialize");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_Initialize) == 0x000028, "Wrong size on LibraryMenu_AchievementListItem_C_Initialize");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_Initialize, CallFunc_GetAchievementName_ReturnValue) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_Initialize::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_Initialize, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'LibraryMenu_AchievementListItem_C_Initialize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetBtnSelected
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_AchievementListItem_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_SetBtnSelected) == 0x000001, "Wrong alignment on LibraryMenu_AchievementListItem_C_SetBtnSelected");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_SetBtnSelected) == 0x000001, "Wrong size on LibraryMenu_AchievementListItem_C_SetBtnSelected");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetBtnSelected, bSelected) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_SetBtnSelected::bSelected' has a wrong offset!");

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetExcramationIconVisible
// 0x0005 (0x0005 - 0x0000)
struct LibraryMenu_AchievementListItem_C_SetExcramationIconVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_SetExcramationIconVisible) == 0x000001, "Wrong alignment on LibraryMenu_AchievementListItem_C_SetExcramationIconVisible");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_SetExcramationIconVisible) == 0x000005, "Wrong size on LibraryMenu_AchievementListItem_C_SetExcramationIconVisible");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetExcramationIconVisible, Visible) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_SetExcramationIconVisible::Visible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetExcramationIconVisible, Temp_bool_Variable) == 0x000001, "Member 'LibraryMenu_AchievementListItem_C_SetExcramationIconVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetExcramationIconVisible, Temp_byte_Variable) == 0x000002, "Member 'LibraryMenu_AchievementListItem_C_SetExcramationIconVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetExcramationIconVisible, Temp_byte_Variable_1) == 0x000003, "Member 'LibraryMenu_AchievementListItem_C_SetExcramationIconVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetExcramationIconVisible, K2Node_Select_Default) == 0x000004, "Member 'LibraryMenu_AchievementListItem_C_SetExcramationIconVisible::K2Node_Select_Default' has a wrong offset!");

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetProgress
// 0x0070 (0x0070 - 0x0000)
struct LibraryMenu_AchievementListItem_C_SetProgress final
{
public:
	int32                                         InObjectNum;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InProgress;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InObejectKind;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A7F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A80[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A81[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievemetProgress_ReturnValue;        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A82[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_SetProgress) == 0x000008, "Wrong alignment on LibraryMenu_AchievementListItem_C_SetProgress");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_SetProgress) == 0x000070, "Wrong size on LibraryMenu_AchievementListItem_C_SetProgress");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, InObjectNum) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::InObjectNum' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, InProgress) == 0x000004, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::InProgress' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, InObejectKind) == 0x000008, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::InObejectKind' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000020, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000030, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, CallFunc_GetAchievemetProgress_ReturnValue) == 0x000038, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::CallFunc_GetAchievemetProgress_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, CallFunc_Conv_IntToString_ReturnValue) == 0x000040, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetProgress, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000068, "Member 'LibraryMenu_AchievementListItem_C_SetProgress::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetRewardIcon
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_AchievementListItem_C_SetRewardIcon final
{
public:
	TArray<class FString>                         RewardIdList;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsClear;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsRecievedReward;                                  // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsTermEnd;                                         // 0x0012(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A83[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_SetRewardIcon) == 0x000008, "Wrong alignment on LibraryMenu_AchievementListItem_C_SetRewardIcon");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_SetRewardIcon) == 0x000020, "Wrong size on LibraryMenu_AchievementListItem_C_SetRewardIcon");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetRewardIcon, RewardIdList) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_SetRewardIcon::RewardIdList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetRewardIcon, IsClear) == 0x000010, "Member 'LibraryMenu_AchievementListItem_C_SetRewardIcon::IsClear' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetRewardIcon, IsRecievedReward) == 0x000011, "Member 'LibraryMenu_AchievementListItem_C_SetRewardIcon::IsRecievedReward' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetRewardIcon, IsTermEnd) == 0x000012, "Member 'LibraryMenu_AchievementListItem_C_SetRewardIcon::IsTermEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetRewardIcon, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'LibraryMenu_AchievementListItem_C_SetRewardIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetRewardIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'LibraryMenu_AchievementListItem_C_SetRewardIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetVisibilityAchievementTitleIcon
// 0x0005 (0x0005 - 0x0000)
struct LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon final
{
public:
	bool                                          IsVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon) == 0x000001, "Wrong alignment on LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon) == 0x000005, "Wrong size on LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon, IsVisibility) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon::IsVisibility' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon, Temp_bool_Variable) == 0x000001, "Member 'LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon, Temp_byte_Variable) == 0x000002, "Member 'LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon, Temp_byte_Variable_1) == 0x000003, "Member 'LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon, K2Node_Select_Default) == 0x000004, "Member 'LibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon::K2Node_Select_Default' has a wrong offset!");

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetVisibilityAchievementEventTermIcon
// 0x0005 (0x0005 - 0x0000)
struct LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon final
{
public:
	bool                                          IsVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon) == 0x000001, "Wrong alignment on LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon) == 0x000005, "Wrong size on LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon, IsVisibility) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon::IsVisibility' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon, Temp_bool_Variable) == 0x000001, "Member 'LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon, Temp_byte_Variable) == 0x000002, "Member 'LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon, Temp_byte_Variable_1) == 0x000003, "Member 'LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon, K2Node_Select_Default) == 0x000004, "Member 'LibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon::K2Node_Select_Default' has a wrong offset!");

// Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetFontColor
// 0x0038 (0x0038 - 0x0000)
struct LibraryMenu_AchievementListItem_C_SetFontColor final
{
public:
	struct FLinearColor                           Specified_Color;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
};
static_assert(alignof(LibraryMenu_AchievementListItem_C_SetFontColor) == 0x000008, "Wrong alignment on LibraryMenu_AchievementListItem_C_SetFontColor");
static_assert(sizeof(LibraryMenu_AchievementListItem_C_SetFontColor) == 0x000038, "Wrong size on LibraryMenu_AchievementListItem_C_SetFontColor");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetFontColor, Specified_Color) == 0x000000, "Member 'LibraryMenu_AchievementListItem_C_SetFontColor::Specified_Color' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementListItem_C_SetFontColor, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'LibraryMenu_AchievementListItem_C_SetFontColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

