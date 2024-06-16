#pragma once

 

// Package: MailListAttachmentContainerBox

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ExecuteUbergraph_MailListAttachmentContainerBox
// 0x03A8 (0x03A8 - 0x0000)
struct MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8706[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailList_attachment_C*                 CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8707[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_2;                               // 0x002C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0030(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8708[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           K2Node_CustomEvent_NewItem_1;                      // 0x0050(0x0118)(ConstParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8709[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailAttachment                      K2Node_CustomEvent_NewItem;                        // 0x0170(0x0040)(ConstParm)
	bool                                          K2Node_CustomEvent_IsNew;                          // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_870A[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bEquip;                         // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_870B[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x01C0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01E8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0200(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           K2Node_CustomEvent_SallInfo;                       // 0x0228(0x0118)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0340(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_870C[0x4];                                     // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailAttachment                      K2Node_CustomEvent_VanishItem;                     // 0x0360(0x0040)()
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox");
static_assert(sizeof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox) == 0x0003A8, "Wrong size on MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, EntryPoint) == 0x000000, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, Temp_bool_Variable) == 0x000004, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, Temp_int_Variable) == 0x000008, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, Temp_int_Variable_1) == 0x00000C, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Create_ReturnValue) == 0x000010, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, K2Node_Event_IsDesignTime) == 0x000018, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, Temp_bool_Variable_1) == 0x000019, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, K2Node_MakeStruct_Margin) == 0x00001C, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, Temp_int_Variable_2) == 0x00002C, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, Temp_int_Variable_3) == 0x000030, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, Temp_int_Variable_4) == 0x000034, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Percent_IntInt_ReturnValue) == 0x000038, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Divide_IntInt_ReturnValue) == 0x00003C, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_AddChildToGrid_ReturnValue) == 0x000040, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, K2Node_CustomEvent_NewItem_1) == 0x000050, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::K2Node_CustomEvent_NewItem_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Array_Add_ReturnValue) == 0x000168, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, K2Node_CustomEvent_NewItem) == 0x000170, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::K2Node_CustomEvent_NewItem' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, K2Node_CustomEvent_IsNew) == 0x0001B0, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::K2Node_CustomEvent_IsNew' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Array_Add_ReturnValue_1) == 0x0001B4, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Array_Add_ReturnValue_2) == 0x0001B8, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, K2Node_CustomEvent_bEquip) == 0x0001BC, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::K2Node_CustomEvent_bEquip' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, K2Node_Select_Default) == 0x0001C0, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, K2Node_Select_Default_1) == 0x0001C4, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001C8, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0001D8, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E8, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000200, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000218, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, K2Node_CustomEvent_SallInfo) == 0x000228, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::K2Node_CustomEvent_SallInfo' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000340, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Array_Add_ReturnValue_3) == 0x000358, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, K2Node_CustomEvent_VanishItem) == 0x000360, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::K2Node_CustomEvent_VanishItem' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox, CallFunc_Array_Add_ReturnValue_4) == 0x0003A0, "Member 'MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddVanishData
// 0x0040 (0x0040 - 0x0000)
struct MailListAttachmentContainerBox_C_AddVanishData final
{
public:
	struct FSBMailAttachment                      VanishItem;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MailListAttachmentContainerBox_C_AddVanishData) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_AddVanishData");
static_assert(sizeof(MailListAttachmentContainerBox_C_AddVanishData) == 0x000040, "Wrong size on MailListAttachmentContainerBox_C_AddVanishData");
static_assert(offsetof(MailListAttachmentContainerBox_C_AddVanishData, VanishItem) == 0x000000, "Member 'MailListAttachmentContainerBox_C_AddVanishData::VanishItem' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddSallItemInfo
// 0x0118 (0x0118 - 0x0000)
struct MailListAttachmentContainerBox_C_AddSallItemInfo final
{
public:
	struct FOwnItemInfo                           SallInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MailListAttachmentContainerBox_C_AddSallItemInfo) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_AddSallItemInfo");
static_assert(sizeof(MailListAttachmentContainerBox_C_AddSallItemInfo) == 0x000118, "Wrong size on MailListAttachmentContainerBox_C_AddSallItemInfo");
static_assert(offsetof(MailListAttachmentContainerBox_C_AddSallItemInfo, SallInfo) == 0x000000, "Member 'MailListAttachmentContainerBox_C_AddSallItemInfo::SallInfo' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Bag
// 0x0001 (0x0001 - 0x0000)
struct MailListAttachmentContainerBox_C_Set_Bag final
{
public:
	bool                                          bEquip;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailListAttachmentContainerBox_C_Set_Bag) == 0x000001, "Wrong alignment on MailListAttachmentContainerBox_C_Set_Bag");
static_assert(sizeof(MailListAttachmentContainerBox_C_Set_Bag) == 0x000001, "Wrong size on MailListAttachmentContainerBox_C_Set_Bag");
static_assert(offsetof(MailListAttachmentContainerBox_C_Set_Bag, bEquip) == 0x000000, "Member 'MailListAttachmentContainerBox_C_Set_Bag::bEquip' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Add RewardType
// 0x0048 (0x0048 - 0x0000)
struct MailListAttachmentContainerBox_C_Add_RewardType final
{
public:
	struct FSBMailAttachment                      NewItem;                                           // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsNew;                                             // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailListAttachmentContainerBox_C_Add_RewardType) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_Add_RewardType");
static_assert(sizeof(MailListAttachmentContainerBox_C_Add_RewardType) == 0x000048, "Wrong size on MailListAttachmentContainerBox_C_Add_RewardType");
static_assert(offsetof(MailListAttachmentContainerBox_C_Add_RewardType, NewItem) == 0x000000, "Member 'MailListAttachmentContainerBox_C_Add_RewardType::NewItem' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_Add_RewardType, IsNew) == 0x000040, "Member 'MailListAttachmentContainerBox_C_Add_RewardType::IsNew' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddItemInfo
// 0x0118 (0x0118 - 0x0000)
struct MailListAttachmentContainerBox_C_AddItemInfo final
{
public:
	struct FOwnItemInfo                           NewItem;                                           // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MailListAttachmentContainerBox_C_AddItemInfo) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_AddItemInfo");
static_assert(sizeof(MailListAttachmentContainerBox_C_AddItemInfo) == 0x000118, "Wrong size on MailListAttachmentContainerBox_C_AddItemInfo");
static_assert(offsetof(MailListAttachmentContainerBox_C_AddItemInfo, NewItem) == 0x000000, "Member 'MailListAttachmentContainerBox_C_AddItemInfo::NewItem' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MailListAttachmentContainerBox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailListAttachmentContainerBox_C_PreConstruct) == 0x000001, "Wrong alignment on MailListAttachmentContainerBox_C_PreConstruct");
static_assert(sizeof(MailListAttachmentContainerBox_C_PreConstruct) == 0x000001, "Wrong size on MailListAttachmentContainerBox_C_PreConstruct");
static_assert(offsetof(MailListAttachmentContainerBox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MailListAttachmentContainerBox_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.GenerateItemIcons
// 0x0548 (0x0548 - 0x0000)
struct MailListAttachmentContainerBox_C_GenerateItemIcons final
{
public:
	struct FSBMailAttachment                      WorkReward;                                        // 0x0000(0x0040)(Edit, BlueprintVisible)
	class UCommonIcon_C*                          Icon;                                              // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalIconNum;                                      // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0078(0x0018)()
	bool                                          CallFunc_IsDuplicateType_Duplicate;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_870D[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_870E[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailAttachment                      CallFunc_Array_Get_Item;                           // 0x0108(0x0040)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdateVanishedTooltip_IsTooltipChange;    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_870F[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          CallFunc_CreateIcon_Icon;                          // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8710[0x6];                                     // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8711[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0180(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0198(0x0018)()
	class USBCharaCreateColorManager*             CallFunc_GetColorManager_ReturnValue;              // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x01B8(0x0078)(HasGetValueTypeHash)
	TArray<struct FSBCharaCreateColor>            CallFunc_GetColorTable_ReturnValue;                // 0x0230(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_3;                              // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8712[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8713[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8714[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailAttachment                      CallFunc_Array_Get_Item_1;                         // 0x0258(0x0040)()
	class UCommonIcon_C*                          CallFunc_CreateIcon_Icon_1;                        // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x02A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8715[0x2];                                     // 0x02A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x02A8(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8716[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo_1;                // 0x02C8(0x0078)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8717[0x3];                                     // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8718[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item_2;                         // 0x0350(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x046C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x046D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8719[0x2];                                     // 0x046E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo_2;                // 0x0470(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x04E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x04EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             CallFunc_ItemTypeToAttachmentType_outAttachmentType; // 0x04EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x04EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x04ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x04EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_871A[0x1];                                     // 0x04EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x04F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x04F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_871B[0x4];                                     // 0x04FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailAttachment                      K2Node_MakeStruct_SBMailAttachment;                // 0x0500(0x0040)()
	class UCommonIcon_C*                          CallFunc_CreateIcon_Icon_2;                        // 0x0540(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailListAttachmentContainerBox_C_GenerateItemIcons) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_GenerateItemIcons");
static_assert(sizeof(MailListAttachmentContainerBox_C_GenerateItemIcons) == 0x000548, "Wrong size on MailListAttachmentContainerBox_C_GenerateItemIcons");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, WorkReward) == 0x000000, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::WorkReward' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Icon) == 0x000040, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Icon' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, TotalIconNum) == 0x000048, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::TotalIconNum' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Temp_int_Array_Index_Variable_1) == 0x000050, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Temp_int_Array_Index_Variable_2) == 0x00005C, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Temp_int_Loop_Counter_Variable_1) == 0x000060, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Add_IntInt_ReturnValue_1) == 0x000064, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000068, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Conv_IntToText_ReturnValue) == 0x000078, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_IsDuplicateType_Duplicate) == 0x000090, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_IsDuplicateType_Duplicate' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, K2Node_MakeArray_Array) == 0x0000D8, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000E8, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000F8, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Array_Length_ReturnValue) == 0x0000FC, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Add_IntInt_ReturnValue_3) == 0x000100, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Array_Get_Item) == 0x000108, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Array_Length_ReturnValue_1) == 0x000148, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Array_Find_ReturnValue) == 0x00014C, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Less_IntInt_ReturnValue) == 0x000150, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_UpdateVanishedTooltip_IsTooltipChange) == 0x000151, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_UpdateVanishedTooltip_IsTooltipChange' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_CreateIcon_Icon) == 0x000158, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_CreateIcon_Icon' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Temp_bool_Variable) == 0x000160, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Temp_bool_Variable_1) == 0x000161, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, K2Node_Select_Default) == 0x000168, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Temp_bool_Variable_2) == 0x000178, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Conv_StringToText_ReturnValue) == 0x000180, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Format_ReturnValue) == 0x000198, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_GetColorManager_ReturnValue) == 0x0001B0, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_GetColorManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, K2Node_MakeStruct_ST_ToolTipInfo) == 0x0001B8, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_GetColorTable_ReturnValue) == 0x000230, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_GetColorTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Temp_bool_Variable_3) == 0x000240, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, Temp_int_Loop_Counter_Variable_2) == 0x000244, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Add_IntInt_ReturnValue_4) == 0x000248, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Less_IntInt_ReturnValue_1) == 0x00024C, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Add_IntInt_ReturnValue_5) == 0x000250, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Array_Get_Item_1) == 0x000258, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_CreateIcon_Icon_1) == 0x000298, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_CreateIcon_Icon_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0002A0, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Greater_IntInt_ReturnValue) == 0x0002A1, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002A2, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002A3, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_BooleanAND_ReturnValue) == 0x0002A4, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, K2Node_Select_Default_1) == 0x0002A5, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0002A8, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0002C0, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, K2Node_MakeStruct_ST_ToolTipInfo_1) == 0x0002C8, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::K2Node_MakeStruct_ST_ToolTipInfo_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, K2Node_SwitchEnum_CmpSuccess) == 0x000340, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Array_Length_ReturnValue_2) == 0x000344, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Less_IntInt_ReturnValue_2) == 0x000348, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Array_Get_Item_2) == 0x000350, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Array_Length_ReturnValue_3) == 0x000468, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Less_IntInt_ReturnValue_3) == 0x00046C, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Not_PreBool_ReturnValue) == 0x00046D, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, K2Node_MakeStruct_ST_ToolTipInfo_2) == 0x000470, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::K2Node_MakeStruct_ST_ToolTipInfo_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Not_PreBool_ReturnValue_1) == 0x0004E8, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0004E9, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0004EA, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_ItemTypeToAttachmentType_outAttachmentType) == 0x0004EB, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_ItemTypeToAttachmentType_outAttachmentType' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, K2Node_SwitchEnum_CmpSuccess_1) == 0x0004EC, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0004ED, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x0004EE, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_Array_Length_ReturnValue_4) == 0x0004F0, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_SelectInt_ReturnValue) == 0x0004F4, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_SelectInt_ReturnValue_1) == 0x0004F8, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, K2Node_MakeStruct_SBMailAttachment) == 0x000500, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::K2Node_MakeStruct_SBMailAttachment' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_GenerateItemIcons, CallFunc_CreateIcon_Icon_2) == 0x000540, "Member 'MailListAttachmentContainerBox_C_GenerateItemIcons::CallFunc_CreateIcon_Icon_2' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.CreateIcon
// 0x0078 (0x0078 - 0x0000)
struct MailListAttachmentContainerBox_C_CreateIcon final
{
public:
	int32                                         A;                                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_871C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailAttachment                      Attachment;                                        // 0x0008(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonIcon_C*                          Icon;                                              // 0x0048(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailList_attachment_C*                 CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailListAttachmentContainerBox_C_CreateIcon) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_CreateIcon");
static_assert(sizeof(MailListAttachmentContainerBox_C_CreateIcon) == 0x000078, "Wrong size on MailListAttachmentContainerBox_C_CreateIcon");
static_assert(offsetof(MailListAttachmentContainerBox_C_CreateIcon, A) == 0x000000, "Member 'MailListAttachmentContainerBox_C_CreateIcon::A' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_CreateIcon, Attachment) == 0x000008, "Member 'MailListAttachmentContainerBox_C_CreateIcon::Attachment' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_CreateIcon, Icon) == 0x000048, "Member 'MailListAttachmentContainerBox_C_CreateIcon::Icon' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_CreateIcon, CallFunc_Create_ReturnValue) == 0x000050, "Member 'MailListAttachmentContainerBox_C_CreateIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_CreateIcon, K2Node_MakeStruct_Margin) == 0x000058, "Member 'MailListAttachmentContainerBox_C_CreateIcon::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_CreateIcon, CallFunc_Divide_IntInt_ReturnValue) == 0x000068, "Member 'MailListAttachmentContainerBox_C_CreateIcon::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_CreateIcon, CallFunc_Percent_IntInt_ReturnValue) == 0x00006C, "Member 'MailListAttachmentContainerBox_C_CreateIcon::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_CreateIcon, CallFunc_AddChildToGrid_ReturnValue) == 0x000070, "Member 'MailListAttachmentContainerBox_C_CreateIcon::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetMailExtraData
// 0x0080 (0x0080 - 0x0000)
struct MailListAttachmentContainerBox_C_SetMailExtraData final
{
public:
	class UCommonIcon_C*                          Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMailAttachment                      AttachmentData;                                    // 0x0008(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int32>                                 ExtraData;                                         // 0x0048(0x0010)(Edit, BlueprintVisible)
	class USBCharaCreateColorManager*             CallFunc_GetColorManager_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharaCreateColor>            CallFunc_GetColorTable_ReturnValue;                // 0x0060(0x0010)(ReferenceParm)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_871D[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailListAttachmentContainerBox_C_SetMailExtraData) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_SetMailExtraData");
static_assert(sizeof(MailListAttachmentContainerBox_C_SetMailExtraData) == 0x000080, "Wrong size on MailListAttachmentContainerBox_C_SetMailExtraData");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetMailExtraData, Icon) == 0x000000, "Member 'MailListAttachmentContainerBox_C_SetMailExtraData::Icon' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetMailExtraData, AttachmentData) == 0x000008, "Member 'MailListAttachmentContainerBox_C_SetMailExtraData::AttachmentData' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetMailExtraData, ExtraData) == 0x000048, "Member 'MailListAttachmentContainerBox_C_SetMailExtraData::ExtraData' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetMailExtraData, CallFunc_GetColorManager_ReturnValue) == 0x000058, "Member 'MailListAttachmentContainerBox_C_SetMailExtraData::CallFunc_GetColorManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetMailExtraData, CallFunc_GetColorTable_ReturnValue) == 0x000060, "Member 'MailListAttachmentContainerBox_C_SetMailExtraData::CallFunc_GetColorTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetMailExtraData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000070, "Member 'MailListAttachmentContainerBox_C_SetMailExtraData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetMailExtraData, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'MailListAttachmentContainerBox_C_SetMailExtraData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetMailExtraData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000078, "Member 'MailListAttachmentContainerBox_C_SetMailExtraData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetMailExtraData, K2Node_SwitchEnum_CmpSuccess) == 0x000079, "Member 'MailListAttachmentContainerBox_C_SetMailExtraData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ItemTooltipCheck
// 0x0410 (0x0410 - 0x0000)
struct MailListAttachmentContainerBox_C_ItemTooltipCheck final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonIcon_C*                          Icon;                                              // 0x0118(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SoldTotalNum;                                      // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FindIndex;                                         // 0x0124(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_871E[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_871F[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0138(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0198(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01B0(0x0018)()
	ESBRewardItemType                             CallFunc_ItemTypeToRewardItemType_Out_RewardItemType; // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8720[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x01D0(0x0078)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0248(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8721[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo_1;                // 0x0268(0x0078)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8722[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x02E8(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0405(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0406(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8723[0x1];                                     // 0x0407(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x040C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x040D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailListAttachmentContainerBox_C_ItemTooltipCheck) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_ItemTooltipCheck");
static_assert(sizeof(MailListAttachmentContainerBox_C_ItemTooltipCheck) == 0x000410, "Wrong size on MailListAttachmentContainerBox_C_ItemTooltipCheck");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, ItemInfo) == 0x000000, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::ItemInfo' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, Icon) == 0x000118, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::Icon' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, SoldTotalNum) == 0x000120, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::SoldTotalNum' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, FindIndex) == 0x000124, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::FindIndex' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, Temp_bool_True_if_break_was_hit_Variable) == 0x000128, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, Temp_int_Array_Index_Variable) == 0x00012C, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_Not_PreBool_ReturnValue) == 0x000130, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, K2Node_MakeStruct_FormatArgumentData) == 0x000138, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, K2Node_MakeArray_Array) == 0x000178, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000188, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_Conv_StringToText_ReturnValue) == 0x000198, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_Format_ReturnValue) == 0x0001B0, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_ItemTypeToRewardItemType_Out_RewardItemType) == 0x0001C8, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_ItemTypeToRewardItemType_Out_RewardItemType' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_Greater_IntInt_ReturnValue) == 0x0001C9, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, K2Node_MakeStruct_ST_ToolTipInfo) == 0x0001D0, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_Conv_IntToText_ReturnValue) == 0x000248, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, Temp_int_Loop_Counter_Variable) == 0x000260, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, K2Node_MakeStruct_ST_ToolTipInfo_1) == 0x000268, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::K2Node_MakeStruct_ST_ToolTipInfo_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_Add_IntInt_ReturnValue) == 0x0002E0, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0002E4, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_Array_Get_Item) == 0x0002E8, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_Array_Length_ReturnValue) == 0x000400, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_Less_IntInt_ReturnValue) == 0x000404, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000405, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_BooleanAND_ReturnValue) == 0x000406, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_Add_IntInt_ReturnValue_1) == 0x000408, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00040C, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTooltipCheck, CallFunc_BooleanAND_ReturnValue_1) == 0x00040D, "Member 'MailListAttachmentContainerBox_C_ItemTooltipCheck::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetSoldProfit
// 0x0170 (0x0170 - 0x0000)
struct MailListAttachmentContainerBox_C_SetSoldProfit final
{
public:
	class UCommonIcon_C*                          Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMailAttachment                      MailData;                                          // 0x0008(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         SellNum;                                           // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8724[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        ToolTipInfo;                                       // 0x0050(0x0078)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8725[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E0(0x0018)()
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x00F8(0x0078)(HasGetValueTypeHash)
};
static_assert(alignof(MailListAttachmentContainerBox_C_SetSoldProfit) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_SetSoldProfit");
static_assert(sizeof(MailListAttachmentContainerBox_C_SetSoldProfit) == 0x000170, "Wrong size on MailListAttachmentContainerBox_C_SetSoldProfit");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetSoldProfit, Icon) == 0x000000, "Member 'MailListAttachmentContainerBox_C_SetSoldProfit::Icon' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetSoldProfit, MailData) == 0x000008, "Member 'MailListAttachmentContainerBox_C_SetSoldProfit::MailData' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetSoldProfit, SellNum) == 0x000048, "Member 'MailListAttachmentContainerBox_C_SetSoldProfit::SellNum' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetSoldProfit, ToolTipInfo) == 0x000050, "Member 'MailListAttachmentContainerBox_C_SetSoldProfit::ToolTipInfo' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetSoldProfit, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C8, "Member 'MailListAttachmentContainerBox_C_SetSoldProfit::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetSoldProfit, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000D0, "Member 'MailListAttachmentContainerBox_C_SetSoldProfit::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetSoldProfit, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E0, "Member 'MailListAttachmentContainerBox_C_SetSoldProfit::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_SetSoldProfit, K2Node_MakeStruct_ST_ToolTipInfo) == 0x0000F8, "Member 'MailListAttachmentContainerBox_C_SetSoldProfit::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ItemTypeToAttachmentType
// 0x0003 (0x0003 - 0x0000)
struct MailListAttachmentContainerBox_C_ItemTypeToAttachmentType final
{
public:
	EItemType                                     InItemType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             OutAttachmentType;                                 // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailListAttachmentContainerBox_C_ItemTypeToAttachmentType) == 0x000001, "Wrong alignment on MailListAttachmentContainerBox_C_ItemTypeToAttachmentType");
static_assert(sizeof(MailListAttachmentContainerBox_C_ItemTypeToAttachmentType) == 0x000003, "Wrong size on MailListAttachmentContainerBox_C_ItemTypeToAttachmentType");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTypeToAttachmentType, InItemType) == 0x000000, "Member 'MailListAttachmentContainerBox_C_ItemTypeToAttachmentType::InItemType' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTypeToAttachmentType, OutAttachmentType) == 0x000001, "Member 'MailListAttachmentContainerBox_C_ItemTypeToAttachmentType::OutAttachmentType' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_ItemTypeToAttachmentType, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'MailListAttachmentContainerBox_C_ItemTypeToAttachmentType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.UpdateVanishedTooltip
// 0x0250 (0x0250 - 0x0000)
struct MailListAttachmentContainerBox_C_UpdateVanishedTooltip final
{
public:
	class UCommonIcon_C*                          Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMailAttachment                      AttachmentData;                                    // 0x0008(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsTooltipChange;                                   // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8726[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FindIndex;                                         // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8727[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8728[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8729[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0090(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00F8(0x0018)()
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x0110(0x0078)(HasGetValueTypeHash)
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo_1;                // 0x0188(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_872A[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMailAttachment                      CallFunc_Array_Get_Item;                           // 0x0208(0x0040)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x024D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x024E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip) == 0x000008, "Wrong alignment on MailListAttachmentContainerBox_C_UpdateVanishedTooltip");
static_assert(sizeof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip) == 0x000250, "Wrong size on MailListAttachmentContainerBox_C_UpdateVanishedTooltip");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, Icon) == 0x000000, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::Icon' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, AttachmentData) == 0x000008, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::AttachmentData' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, IsTooltipChange) == 0x000048, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::IsTooltipChange' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, FindIndex) == 0x00004C, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::FindIndex' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, Temp_bool_True_if_break_was_hit_Variable) == 0x000050, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, Temp_int_Array_Index_Variable) == 0x000054, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000058, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_Greater_IntInt_ReturnValue) == 0x000064, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000068, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, K2Node_MakeStruct_FormatArgumentData) == 0x000090, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, K2Node_MakeArray_Array) == 0x0000D0, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_Conv_IntToText_ReturnValue) == 0x0000F8, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, K2Node_MakeStruct_ST_ToolTipInfo) == 0x000110, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, K2Node_MakeStruct_ST_ToolTipInfo_1) == 0x000188, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::K2Node_MakeStruct_ST_ToolTipInfo_1' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000200, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_Array_Add_ReturnValue) == 0x000204, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_Array_Get_Item) == 0x000208, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_Array_Length_ReturnValue) == 0x000248, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_Less_IntInt_ReturnValue) == 0x00024C, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00024D, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_UpdateVanishedTooltip, CallFunc_BooleanAND_ReturnValue) == 0x00024E, "Member 'MailListAttachmentContainerBox_C_UpdateVanishedTooltip::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.IsDuplicateType
// 0x0003 (0x0003 - 0x0000)
struct MailListAttachmentContainerBox_C_IsDuplicateType final
{
public:
	ESBRewardItemType                             ItemType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Duplicate;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailListAttachmentContainerBox_C_IsDuplicateType) == 0x000001, "Wrong alignment on MailListAttachmentContainerBox_C_IsDuplicateType");
static_assert(sizeof(MailListAttachmentContainerBox_C_IsDuplicateType) == 0x000003, "Wrong size on MailListAttachmentContainerBox_C_IsDuplicateType");
static_assert(offsetof(MailListAttachmentContainerBox_C_IsDuplicateType, ItemType) == 0x000000, "Member 'MailListAttachmentContainerBox_C_IsDuplicateType::ItemType' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_IsDuplicateType, Duplicate) == 0x000001, "Member 'MailListAttachmentContainerBox_C_IsDuplicateType::Duplicate' has a wrong offset!");
static_assert(offsetof(MailListAttachmentContainerBox_C_IsDuplicateType, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'MailListAttachmentContainerBox_C_IsDuplicateType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

