#pragma once

 

// Package: GuildMemberList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildMemberList.GuildMemberList_C.OnSelectedMemberData__DelegateSignature
// 0x00D8 (0x00D8 - 0x0000)
struct GuildMemberList_C_OnSelectedMemberData__DelegateSignature final
{
public:
	struct FGuildMemberData                       Data;                                              // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildMemberList_C_OnSelectedMemberData__DelegateSignature) == 0x000008, "Wrong alignment on GuildMemberList_C_OnSelectedMemberData__DelegateSignature");
static_assert(sizeof(GuildMemberList_C_OnSelectedMemberData__DelegateSignature) == 0x0000D8, "Wrong size on GuildMemberList_C_OnSelectedMemberData__DelegateSignature");
static_assert(offsetof(GuildMemberList_C_OnSelectedMemberData__DelegateSignature, Data) == 0x000000, "Member 'GuildMemberList_C_OnSelectedMemberData__DelegateSignature::Data' has a wrong offset!");

// Function GuildMemberList.GuildMemberList_C.ExecuteUbergraph_GuildMemberList
// 0x00E8 (0x00E8 - 0x0000)
struct GuildMemberList_C_ExecuteUbergraph_GuildMemberList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FFA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberListItem_C*                 CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FFB[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FFC[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FFD[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FFE[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0040(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FFF[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	class UGuildMemberListItem_C*                 K2Node_CustomEvent_MemberData;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9000[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberListItem_C*                 K2Node_DynamicCast_AsGuild_Member_List_Item;       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9001[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9002[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x00B0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9003[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Request_GetGuildMemberList_ReturnValue;   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList) == 0x000008, "Wrong alignment on GuildMemberList_C_ExecuteUbergraph_GuildMemberList");
static_assert(sizeof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList) == 0x0000E8, "Wrong size on GuildMemberList_C_ExecuteUbergraph_GuildMemberList");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, EntryPoint) == 0x000000, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_Create_ReturnValue) == 0x000008, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, Temp_int_Array_Index_Variable) == 0x000010, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, K2Node_Event_IsDesignTime) == 0x000014, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, Temp_int_Variable) == 0x000018, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_GetGuildComp_ReturnValue) == 0x000028, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, K2Node_CustomEvent_RetCode_1) == 0x000038, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_GetSBRetMessage_ReturnValue) == 0x000040, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000050, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, K2Node_CustomEvent_MemberData) == 0x000070, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::K2Node_CustomEvent_MemberData' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_GetAllChildren_ReturnValue) == 0x000078, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_Array_Get_Item) == 0x000088, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, K2Node_DynamicCast_AsGuild_Member_List_Item) == 0x000098, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::K2Node_DynamicCast_AsGuild_Member_List_Item' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0000A1, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_Less_IntInt_ReturnValue) == 0x0000A8, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000AC, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, K2Node_CustomEvent_RetCode) == 0x0000B0, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, K2Node_CreateDelegate_OutputDelegate) == 0x0000B4, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000C4, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_GetGuildComp_ReturnValue_1) == 0x0000C8, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D0, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_ExecuteUbergraph_GuildMemberList, CallFunc_Request_GetGuildMemberList_ReturnValue) == 0x0000E0, "Member 'GuildMemberList_C_ExecuteUbergraph_GuildMemberList::CallFunc_Request_GetGuildMemberList_ReturnValue' has a wrong offset!");

// Function GuildMemberList.GuildMemberList_C.CompletedAcceptMember
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberList_C_CompletedAcceptMember final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberList_C_CompletedAcceptMember) == 0x000004, "Wrong alignment on GuildMemberList_C_CompletedAcceptMember");
static_assert(sizeof(GuildMemberList_C_CompletedAcceptMember) == 0x000004, "Wrong size on GuildMemberList_C_CompletedAcceptMember");
static_assert(offsetof(GuildMemberList_C_CompletedAcceptMember, RetCode) == 0x000000, "Member 'GuildMemberList_C_CompletedAcceptMember::RetCode' has a wrong offset!");

// Function GuildMemberList.GuildMemberList_C.OnGuildMemberSelected
// 0x0008 (0x0008 - 0x0000)
struct GuildMemberList_C_OnGuildMemberSelected final
{
public:
	class UGuildMemberListItem_C*                 MemberData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberList_C_OnGuildMemberSelected) == 0x000008, "Wrong alignment on GuildMemberList_C_OnGuildMemberSelected");
static_assert(sizeof(GuildMemberList_C_OnGuildMemberSelected) == 0x000008, "Wrong size on GuildMemberList_C_OnGuildMemberSelected");
static_assert(offsetof(GuildMemberList_C_OnGuildMemberSelected, MemberData) == 0x000000, "Member 'GuildMemberList_C_OnGuildMemberSelected::MemberData' has a wrong offset!");

// Function GuildMemberList.GuildMemberList_C.OnMemberListGetted
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberList_C_OnMemberListGetted final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberList_C_OnMemberListGetted) == 0x000004, "Wrong alignment on GuildMemberList_C_OnMemberListGetted");
static_assert(sizeof(GuildMemberList_C_OnMemberListGetted) == 0x000004, "Wrong size on GuildMemberList_C_OnMemberListGetted");
static_assert(offsetof(GuildMemberList_C_OnMemberListGetted, RetCode) == 0x000000, "Member 'GuildMemberList_C_OnMemberListGetted::RetCode' has a wrong offset!");

// Function GuildMemberList.GuildMemberList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberList_C_PreConstruct) == 0x000001, "Wrong alignment on GuildMemberList_C_PreConstruct");
static_assert(sizeof(GuildMemberList_C_PreConstruct) == 0x000001, "Wrong size on GuildMemberList_C_PreConstruct");
static_assert(offsetof(GuildMemberList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GuildMemberList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GuildMemberList.GuildMemberList_C.GenerateMemberData
// 0x0130 (0x0130 - 0x0000)
struct GuildMemberList_C_GenerateMemberData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9004[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberListItem_C*                 CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UGuildMemberListItem_C* MemberData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildMemberData>               CallFunc_GetGuildMemberList_ReturnValue;           // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9005[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildMemberData                       CallFunc_Array_Get_Item;                           // 0x0050(0x00D8)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberList_C_GenerateMemberData) == 0x000008, "Wrong alignment on GuildMemberList_C_GenerateMemberData");
static_assert(sizeof(GuildMemberList_C_GenerateMemberData) == 0x000130, "Wrong size on GuildMemberList_C_GenerateMemberData");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'GuildMemberList_C_GenerateMemberData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'GuildMemberList_C_GenerateMemberData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'GuildMemberList_C_GenerateMemberData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, CallFunc_Create_ReturnValue) == 0x000010, "Member 'GuildMemberList_C_GenerateMemberData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'GuildMemberList_C_GenerateMemberData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'GuildMemberList_C_GenerateMemberData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, CallFunc_GetGuildComp_ReturnValue) == 0x000030, "Member 'GuildMemberList_C_GenerateMemberData::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, CallFunc_GetGuildMemberList_ReturnValue) == 0x000038, "Member 'GuildMemberList_C_GenerateMemberData::CallFunc_GetGuildMemberList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'GuildMemberList_C_GenerateMemberData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, CallFunc_Array_Get_Item) == 0x000050, "Member 'GuildMemberList_C_GenerateMemberData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GenerateMemberData, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'GuildMemberList_C_GenerateMemberData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GuildMemberList.GuildMemberList_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildMemberList_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberList_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildMemberList_C_GetGuildComp");
static_assert(sizeof(GuildMemberList_C_GetGuildComp) == 0x000018, "Wrong size on GuildMemberList_C_GetGuildComp");
static_assert(offsetof(GuildMemberList_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildMemberList_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildMemberList_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberList_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildMemberList_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

}

