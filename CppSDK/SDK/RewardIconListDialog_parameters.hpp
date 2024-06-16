#pragma once

 

// Package: RewardIconListDialog

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function RewardIconListDialog.RewardIconListDialog_C.ExecuteUbergraph_RewardIconListDialog
// 0x0030 (0x0030 - 0x0000)
struct RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90CF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog) == 0x000008, "Wrong alignment on RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog");
static_assert(sizeof(RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog) == 0x000030, "Wrong size on RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog");
static_assert(offsetof(RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog, EntryPoint) == 0x000000, "Member 'RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000010, "Member 'RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000028, "Member 'RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function RewardIconListDialog.RewardIconListDialog_C.SetMessage
// 0x0020 (0x0020 - 0x0000)
struct RewardIconListDialog_C_SetMessage final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsIconVisible;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RewardIconListDialog_C_SetMessage) == 0x000008, "Wrong alignment on RewardIconListDialog_C_SetMessage");
static_assert(sizeof(RewardIconListDialog_C_SetMessage) == 0x000020, "Wrong size on RewardIconListDialog_C_SetMessage");
static_assert(offsetof(RewardIconListDialog_C_SetMessage, Message) == 0x000000, "Member 'RewardIconListDialog_C_SetMessage::Message' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMessage, IsIconVisible) == 0x000018, "Member 'RewardIconListDialog_C_SetMessage::IsIconVisible' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMessage, CallFunc_MakeLiteralByte_ReturnValue) == 0x000019, "Member 'RewardIconListDialog_C_SetMessage::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMessage, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00001A, "Member 'RewardIconListDialog_C_SetMessage::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMessage, Temp_bool_Variable) == 0x00001B, "Member 'RewardIconListDialog_C_SetMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMessage, K2Node_Select_Default) == 0x00001C, "Member 'RewardIconListDialog_C_SetMessage::K2Node_Select_Default' has a wrong offset!");

// Function RewardIconListDialog.RewardIconListDialog_C.SetMasterRewardList
// 0x0058 (0x0058 - 0x0000)
struct RewardIconListDialog_C_SetMasterRewardList final
{
public:
	TArray<struct FSBMasterReward>                MasterRewards;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterReward                        CallFunc_Array_Get_Item;                           // 0x001C(0x0014)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90D0[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URewardIconItem_C*                      CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RewardIconListDialog_C_SetMasterRewardList) == 0x000008, "Wrong alignment on RewardIconListDialog_C_SetMasterRewardList");
static_assert(sizeof(RewardIconListDialog_C_SetMasterRewardList) == 0x000058, "Wrong size on RewardIconListDialog_C_SetMasterRewardList");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardList, MasterRewards) == 0x000000, "Member 'RewardIconListDialog_C_SetMasterRewardList::MasterRewards' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardList, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'RewardIconListDialog_C_SetMasterRewardList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardList, Temp_int_Array_Index_Variable) == 0x000014, "Member 'RewardIconListDialog_C_SetMasterRewardList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardList, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'RewardIconListDialog_C_SetMasterRewardList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardList, CallFunc_Array_Get_Item) == 0x00001C, "Member 'RewardIconListDialog_C_SetMasterRewardList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardList, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'RewardIconListDialog_C_SetMasterRewardList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardList, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'RewardIconListDialog_C_SetMasterRewardList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardList, CallFunc_Create_ReturnValue) == 0x000038, "Member 'RewardIconListDialog_C_SetMasterRewardList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardList, K2Node_MakeStruct_Margin) == 0x000040, "Member 'RewardIconListDialog_C_SetMasterRewardList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardList, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000050, "Member 'RewardIconListDialog_C_SetMasterRewardList::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function RewardIconListDialog.RewardIconListDialog_C.SetMasterRewardIDList
// 0x0068 (0x0068 - 0x0000)
struct RewardIconListDialog_C_SetMasterRewardIDList final
{
public:
	TArray<class FName>                           IDList;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindRewardMaster_IsValid;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90D1[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindRewardMaster_RewardMaster;            // 0x0028(0x0014)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90D2[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90D3[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URewardIconItem_C*                      CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RewardIconListDialog_C_SetMasterRewardIDList) == 0x000008, "Wrong alignment on RewardIconListDialog_C_SetMasterRewardIDList");
static_assert(sizeof(RewardIconListDialog_C_SetMasterRewardIDList) == 0x000068, "Wrong size on RewardIconListDialog_C_SetMasterRewardIDList");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, IDList) == 0x000000, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::IDList' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, Temp_int_Array_Index_Variable) == 0x000014, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, CallFunc_Array_Get_Item) == 0x00001C, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, CallFunc_FindRewardMaster_IsValid) == 0x000024, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::CallFunc_FindRewardMaster_IsValid' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, CallFunc_FindRewardMaster_RewardMaster) == 0x000028, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::CallFunc_FindRewardMaster_RewardMaster' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, CallFunc_Create_ReturnValue) == 0x000048, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, K2Node_MakeStruct_Margin) == 0x000050, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetMasterRewardIDList, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000060, "Member 'RewardIconListDialog_C_SetMasterRewardIDList::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function RewardIconListDialog.RewardIconListDialog_C.SetBgBlurVisible
// 0x0005 (0x0005 - 0x0000)
struct RewardIconListDialog_C_SetBgBlurVisible final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RewardIconListDialog_C_SetBgBlurVisible) == 0x000001, "Wrong alignment on RewardIconListDialog_C_SetBgBlurVisible");
static_assert(sizeof(RewardIconListDialog_C_SetBgBlurVisible) == 0x000005, "Wrong size on RewardIconListDialog_C_SetBgBlurVisible");
static_assert(offsetof(RewardIconListDialog_C_SetBgBlurVisible, Enable) == 0x000000, "Member 'RewardIconListDialog_C_SetBgBlurVisible::Enable' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetBgBlurVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'RewardIconListDialog_C_SetBgBlurVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetBgBlurVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'RewardIconListDialog_C_SetBgBlurVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetBgBlurVisible, Temp_bool_Variable) == 0x000003, "Member 'RewardIconListDialog_C_SetBgBlurVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RewardIconListDialog_C_SetBgBlurVisible, K2Node_Select_Default) == 0x000004, "Member 'RewardIconListDialog_C_SetBgBlurVisible::K2Node_Select_Default' has a wrong offset!");

}

