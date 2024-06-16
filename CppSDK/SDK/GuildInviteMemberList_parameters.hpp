#pragma once

 

// Package: GuildInviteMemberList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildInviteMemberList.GuildInviteMemberList_C.OnSelectedMemberData__DelegateSignature
// 0x00D8 (0x00D8 - 0x0000)
struct GuildInviteMemberList_C_OnSelectedMemberData__DelegateSignature final
{
public:
	struct FGuildMemberData                       Data;                                              // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildInviteMemberList_C_OnSelectedMemberData__DelegateSignature) == 0x000008, "Wrong alignment on GuildInviteMemberList_C_OnSelectedMemberData__DelegateSignature");
static_assert(sizeof(GuildInviteMemberList_C_OnSelectedMemberData__DelegateSignature) == 0x0000D8, "Wrong size on GuildInviteMemberList_C_OnSelectedMemberData__DelegateSignature");
static_assert(offsetof(GuildInviteMemberList_C_OnSelectedMemberData__DelegateSignature, Data) == 0x000000, "Member 'GuildInviteMemberList_C_OnSelectedMemberData__DelegateSignature::Data' has a wrong offset!");

// Function GuildInviteMemberList.GuildInviteMemberList_C.OnClickedCancelInvite__DelegateSignature
// 0x00D8 (0x00D8 - 0x0000)
struct GuildInviteMemberList_C_OnClickedCancelInvite__DelegateSignature final
{
public:
	struct FGuildMemberData                       Data;                                              // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildInviteMemberList_C_OnClickedCancelInvite__DelegateSignature) == 0x000008, "Wrong alignment on GuildInviteMemberList_C_OnClickedCancelInvite__DelegateSignature");
static_assert(sizeof(GuildInviteMemberList_C_OnClickedCancelInvite__DelegateSignature) == 0x0000D8, "Wrong size on GuildInviteMemberList_C_OnClickedCancelInvite__DelegateSignature");
static_assert(offsetof(GuildInviteMemberList_C_OnClickedCancelInvite__DelegateSignature, Data) == 0x000000, "Member 'GuildInviteMemberList_C_OnClickedCancelInvite__DelegateSignature::Data' has a wrong offset!");

// Function GuildInviteMemberList.GuildInviteMemberList_C.OnRequestGuildMemberButtonClicked__DelegateSignature
// 0x00D8 (0x00D8 - 0x0000)
struct GuildInviteMemberList_C_OnRequestGuildMemberButtonClicked__DelegateSignature final
{
public:
	struct FGuildMemberData                       Data;                                              // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildInviteMemberList_C_OnRequestGuildMemberButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on GuildInviteMemberList_C_OnRequestGuildMemberButtonClicked__DelegateSignature");
static_assert(sizeof(GuildInviteMemberList_C_OnRequestGuildMemberButtonClicked__DelegateSignature) == 0x0000D8, "Wrong size on GuildInviteMemberList_C_OnRequestGuildMemberButtonClicked__DelegateSignature");
static_assert(offsetof(GuildInviteMemberList_C_OnRequestGuildMemberButtonClicked__DelegateSignature, Data) == 0x000000, "Member 'GuildInviteMemberList_C_OnRequestGuildMemberButtonClicked__DelegateSignature::Data' has a wrong offset!");

// Function GuildInviteMemberList.GuildInviteMemberList_C.ExecuteUbergraph_GuildInviteMemberList
// 0x0240 (0x0240 - 0x0000)
struct GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FF3[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FF4[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FF5[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberListItem_C*                 K2Node_CustomEvent_MemberData_1;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildMemberData                       CallFunc_GetMemberData_Data;                       // 0x0048(0x00D8)()
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0120(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildMemberListItem_C*                 K2Node_DynamicCast_AsGuild_Member_List_Item;       // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FF6[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FF7[0x6];                                     // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberListItem_C*                 CallFunc_Create_ReturnValue;                       // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildMemberListItem_C*                 K2Node_CustomEvent_MemberData;                     // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildMemberData                       CallFunc_GetMemberData_Data_1;                     // 0x0160(0x00D8)()
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList) == 0x000008, "Wrong alignment on GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList");
static_assert(sizeof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList) == 0x000240, "Wrong size on GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, EntryPoint) == 0x000000, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, K2Node_Event_IsDesignTime) == 0x000020, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, Temp_int_Variable) == 0x000024, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_GetGuildComp_ReturnValue) == 0x000030, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, K2Node_CustomEvent_RetCode) == 0x000038, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003C, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, K2Node_CustomEvent_MemberData_1) == 0x000040, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::K2Node_CustomEvent_MemberData_1' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_GetMemberData_Data) == 0x000048, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_GetMemberData_Data' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_GetAllChildren_ReturnValue) == 0x000120, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_Array_Get_Item) == 0x000130, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, K2Node_DynamicCast_AsGuild_Member_List_Item) == 0x000138, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::K2Node_DynamicCast_AsGuild_Member_List_Item' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, K2Node_DynamicCast_bSuccess) == 0x000140, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_Array_Length_ReturnValue) == 0x000144, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000148, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_Less_IntInt_ReturnValue) == 0x000149, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_Create_ReturnValue) == 0x000150, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, K2Node_CustomEvent_MemberData) == 0x000158, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::K2Node_CustomEvent_MemberData' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_GetMemberData_Data_1) == 0x000160, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_GetMemberData_Data_1' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList, CallFunc_AddChild_ReturnValue) == 0x000238, "Member 'GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function GuildInviteMemberList.GuildInviteMemberList_C.OnClickedCancelInvite_Event
// 0x0008 (0x0008 - 0x0000)
struct GuildInviteMemberList_C_OnClickedCancelInvite_Event final
{
public:
	class UGuildMemberListItem_C*                 MemberData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildInviteMemberList_C_OnClickedCancelInvite_Event) == 0x000008, "Wrong alignment on GuildInviteMemberList_C_OnClickedCancelInvite_Event");
static_assert(sizeof(GuildInviteMemberList_C_OnClickedCancelInvite_Event) == 0x000008, "Wrong size on GuildInviteMemberList_C_OnClickedCancelInvite_Event");
static_assert(offsetof(GuildInviteMemberList_C_OnClickedCancelInvite_Event, MemberData) == 0x000000, "Member 'GuildInviteMemberList_C_OnClickedCancelInvite_Event::MemberData' has a wrong offset!");

// Function GuildInviteMemberList.GuildInviteMemberList_C.OnGuildMemberSelected
// 0x0008 (0x0008 - 0x0000)
struct GuildInviteMemberList_C_OnGuildMemberSelected final
{
public:
	class UGuildMemberListItem_C*                 MemberData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildInviteMemberList_C_OnGuildMemberSelected) == 0x000008, "Wrong alignment on GuildInviteMemberList_C_OnGuildMemberSelected");
static_assert(sizeof(GuildInviteMemberList_C_OnGuildMemberSelected) == 0x000008, "Wrong size on GuildInviteMemberList_C_OnGuildMemberSelected");
static_assert(offsetof(GuildInviteMemberList_C_OnGuildMemberSelected, MemberData) == 0x000000, "Member 'GuildInviteMemberList_C_OnGuildMemberSelected::MemberData' has a wrong offset!");

// Function GuildInviteMemberList.GuildInviteMemberList_C.OnCompletedInviteMemberList_Event
// 0x0004 (0x0004 - 0x0000)
struct GuildInviteMemberList_C_OnCompletedInviteMemberList_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildInviteMemberList_C_OnCompletedInviteMemberList_Event) == 0x000004, "Wrong alignment on GuildInviteMemberList_C_OnCompletedInviteMemberList_Event");
static_assert(sizeof(GuildInviteMemberList_C_OnCompletedInviteMemberList_Event) == 0x000004, "Wrong size on GuildInviteMemberList_C_OnCompletedInviteMemberList_Event");
static_assert(offsetof(GuildInviteMemberList_C_OnCompletedInviteMemberList_Event, RetCode) == 0x000000, "Member 'GuildInviteMemberList_C_OnCompletedInviteMemberList_Event::RetCode' has a wrong offset!");

// Function GuildInviteMemberList.GuildInviteMemberList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GuildInviteMemberList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildInviteMemberList_C_PreConstruct) == 0x000001, "Wrong alignment on GuildInviteMemberList_C_PreConstruct");
static_assert(sizeof(GuildInviteMemberList_C_PreConstruct) == 0x000001, "Wrong size on GuildInviteMemberList_C_PreConstruct");
static_assert(offsetof(GuildInviteMemberList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GuildInviteMemberList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GuildInviteMemberList.GuildInviteMemberList_C.GenerateInviteMemberData
// 0x0140 (0x0140 - 0x0000)
struct GuildInviteMemberList_C_GenerateInviteMemberData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UGuildMemberListItem_C* MemberData)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8FF8[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberListItem_C*                 CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UGuildMemberListItem_C* MemberData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildMemberData>               CallFunc_GetGuildInviteMemberList_ReturnValue;     // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FF9[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildMemberData                       CallFunc_Array_Get_Item;                           // 0x0060(0x00D8)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildInviteMemberList_C_GenerateInviteMemberData) == 0x000008, "Wrong alignment on GuildInviteMemberList_C_GenerateInviteMemberData");
static_assert(sizeof(GuildInviteMemberList_C_GenerateInviteMemberData) == 0x000140, "Wrong size on GuildInviteMemberList_C_GenerateInviteMemberData");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, CallFunc_Create_ReturnValue) == 0x000020, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, CallFunc_GetGuildComp_ReturnValue) == 0x000040, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, CallFunc_GetGuildInviteMemberList_ReturnValue) == 0x000048, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::CallFunc_GetGuildInviteMemberList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, CallFunc_Array_Get_Item) == 0x000060, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GenerateInviteMemberData, CallFunc_Less_IntInt_ReturnValue) == 0x000138, "Member 'GuildInviteMemberList_C_GenerateInviteMemberData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GuildInviteMemberList.GuildInviteMemberList_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildInviteMemberList_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildInviteMemberList_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildInviteMemberList_C_GetGuildComp");
static_assert(sizeof(GuildInviteMemberList_C_GetGuildComp) == 0x000018, "Wrong size on GuildInviteMemberList_C_GetGuildComp");
static_assert(offsetof(GuildInviteMemberList_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildInviteMemberList_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildInviteMemberList_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildInviteMemberList_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildInviteMemberList_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

}

