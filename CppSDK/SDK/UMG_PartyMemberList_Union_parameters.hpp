#pragma once

 

// Package: UMG_PartyMemberList_Union

#include "Basic.hpp"

#include "E_PartyListPartyType_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.ExecuteUbergraph_UMG_PartyMemberList_Union
// 0x0020 (0x0020 - 0x0000)
struct UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71FC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUMG_PartyMemberList_UnionList_C*> K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	E_PartyListPartyType                          CallFunc_GetPartyType_PartyType;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union) == 0x000008, "Wrong alignment on UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union");
static_assert(sizeof(UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union) == 0x000020, "Wrong size on UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union");
static_assert(offsetof(UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union, EntryPoint) == 0x000000, "Member 'UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union, K2Node_MakeArray_Array) == 0x000008, "Member 'UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union, CallFunc_GetPartyType_PartyType) == 0x000018, "Member 'UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union::CallFunc_GetPartyType_PartyType' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000019, "Member 'UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.Update Member List
// 0x0160 (0x0160 - 0x0000)
struct UMG_PartyMemberList_Union_C_Update_Member_List final
{
public:
	int32                                         InstantPartyMemberListIndex;                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InstantPartyMemberIndex;                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            InstantMembers;                                    // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<class USBPartyMemberState*>            PersistentMembers;                                 // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71FD[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_PartyMemberList_UnionList_C*       CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CreateMemberListWidget_NextMemberIndex;   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_PartyMemberList_UnionList_C*       CallFunc_CreateMemberListWidget_OutListWidget;     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71FE[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CreateMemberListWidget_NextMemberIndex_1; // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_PartyMemberList_UnionList_C*       CallFunc_CreateMemberListWidget_OutListWidget_1;   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            CallFunc_GetCurrentRaidPartyMember_OutPersistentMembers; // 0x0068(0x0010)(ReferenceParm)
	TArray<class USBPartyMemberState*>            CallFunc_GetCurrentRaidPartyMember_OutInstantMembers; // 0x0078(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetCurrentRaidPartyMember_ReturnValue;    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71FF[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CreateMemberListWidget_NextMemberIndex_2; // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_PartyMemberList_UnionList_C*       CallFunc_CreateMemberListWidget_OutListWidget_2;   // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7200[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A0(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7201[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00E8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0128(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0138(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PartyMemberList_Union_C_Update_Member_List) == 0x000008, "Wrong alignment on UMG_PartyMemberList_Union_C_Update_Member_List");
static_assert(sizeof(UMG_PartyMemberList_Union_C_Update_Member_List) == 0x000160, "Wrong size on UMG_PartyMemberList_Union_C_Update_Member_List");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, InstantPartyMemberListIndex) == 0x000000, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::InstantPartyMemberListIndex' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, InstantPartyMemberIndex) == 0x000004, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::InstantPartyMemberIndex' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, InstantMembers) == 0x000008, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::InstantMembers' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, PersistentMembers) == 0x000018, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::PersistentMembers' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, Temp_int_Variable) == 0x000028, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Percent_IntInt_ReturnValue) == 0x000030, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Array_Get_Item) == 0x000038, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_CreateMemberListWidget_NextMemberIndex) == 0x000044, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_CreateMemberListWidget_NextMemberIndex' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_CreateMemberListWidget_OutListWidget) == 0x000048, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_CreateMemberListWidget_OutListWidget' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Subtract_IntInt_ReturnValue) == 0x000054, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_CreateMemberListWidget_NextMemberIndex_1) == 0x00005C, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_CreateMemberListWidget_NextMemberIndex_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_CreateMemberListWidget_OutListWidget_1) == 0x000060, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_CreateMemberListWidget_OutListWidget_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_GetCurrentRaidPartyMember_OutPersistentMembers) == 0x000068, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_GetCurrentRaidPartyMember_OutPersistentMembers' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_GetCurrentRaidPartyMember_OutInstantMembers) == 0x000078, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_GetCurrentRaidPartyMember_OutInstantMembers' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_GetCurrentRaidPartyMember_ReturnValue) == 0x000088, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_GetCurrentRaidPartyMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_CreateMemberListWidget_NextMemberIndex_2) == 0x00008C, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_CreateMemberListWidget_NextMemberIndex_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_CreateMemberListWidget_OutListWidget_2) == 0x000090, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_CreateMemberListWidget_OutListWidget_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Array_Length_ReturnValue_2) == 0x000098, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Array_Length_ReturnValue_3) == 0x0000E0, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E8, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, K2Node_MakeArray_Array) == 0x000128, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Format_ReturnValue) == 0x000138, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_Update_Member_List, CallFunc_Conv_TextToString_ReturnValue) == 0x000150, "Member 'UMG_PartyMemberList_Union_C_Update_Member_List::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.CreateMemberListWidget
// 0x0088 (0x0088 - 0x0000)
struct UMG_PartyMemberList_Union_C_CreateMemberListWidget final
{
public:
	class UUMG_PartyMemberList_UnionList_C*       OutMemberListWidget;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            InMemberList;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         InStart;                                           // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InLimitCount;                                      // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextMemberIndex;                                   // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7202[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_PartyMemberList_UnionList_C*       OutListWidget;                                     // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EndIndex;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartIndex;                                        // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            TmpMemberList;                                     // 0x0038(0x0010)(Edit, BlueprintVisible)
	class UUMG_PartyMemberList_UnionList_C*       MemberListWidget;                                  // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7203[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7204[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PartyMemberList_Union_C_CreateMemberListWidget) == 0x000008, "Wrong alignment on UMG_PartyMemberList_Union_C_CreateMemberListWidget");
static_assert(sizeof(UMG_PartyMemberList_Union_C_CreateMemberListWidget) == 0x000088, "Wrong size on UMG_PartyMemberList_Union_C_CreateMemberListWidget");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, OutMemberListWidget) == 0x000000, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::OutMemberListWidget' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, InMemberList) == 0x000008, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::InMemberList' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, InStart) == 0x000018, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::InStart' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, InLimitCount) == 0x00001C, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::InLimitCount' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, NextMemberIndex) == 0x000020, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::NextMemberIndex' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, OutListWidget) == 0x000028, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::OutListWidget' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, EndIndex) == 0x000030, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::EndIndex' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, StartIndex) == 0x000034, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::StartIndex' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, TmpMemberList) == 0x000038, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::TmpMemberList' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, MemberListWidget) == 0x000048, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::MemberListWidget' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_Subtract_IntInt_ReturnValue) == 0x000050, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, Temp_int_Variable) == 0x000054, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000064, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000068, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_Array_Length_ReturnValue_1) == 0x00006C, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_Array_Get_Item) == 0x000070, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000078, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_Add_IntInt_ReturnValue_2) == 0x00007C, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_CreateMemberListWidget, CallFunc_Min_ReturnValue) == 0x000080, "Member 'UMG_PartyMemberList_Union_C_CreateMemberListWidget::CallFunc_Min_ReturnValue' has a wrong offset!");

// Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.GetPartyType
// 0x0030 (0x0030 - 0x0000)
struct UMG_PartyMemberList_Union_C_GetPartyType final
{
public:
	E_PartyListPartyType                          PartyType;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7205[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_DxBattle*                  K2Node_DynamicCast_AsSBGame_State_Dx_Battle;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7206[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_RaidBattle*                K2Node_DynamicCast_AsSBGame_State_Raid_Battle;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PartyMemberList_Union_C_GetPartyType) == 0x000008, "Wrong alignment on UMG_PartyMemberList_Union_C_GetPartyType");
static_assert(sizeof(UMG_PartyMemberList_Union_C_GetPartyType) == 0x000030, "Wrong size on UMG_PartyMemberList_Union_C_GetPartyType");
static_assert(offsetof(UMG_PartyMemberList_Union_C_GetPartyType, PartyType) == 0x000000, "Member 'UMG_PartyMemberList_Union_C_GetPartyType::PartyType' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_GetPartyType, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'UMG_PartyMemberList_Union_C_GetPartyType::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_GetPartyType, K2Node_DynamicCast_AsSBGame_State_Dx_Battle) == 0x000010, "Member 'UMG_PartyMemberList_Union_C_GetPartyType::K2Node_DynamicCast_AsSBGame_State_Dx_Battle' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_GetPartyType, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UMG_PartyMemberList_Union_C_GetPartyType::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_GetPartyType, K2Node_DynamicCast_AsSBGame_State_Raid_Battle) == 0x000020, "Member 'UMG_PartyMemberList_Union_C_GetPartyType::K2Node_DynamicCast_AsSBGame_State_Raid_Battle' has a wrong offset!");
static_assert(offsetof(UMG_PartyMemberList_Union_C_GetPartyType, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'UMG_PartyMemberList_Union_C_GetPartyType::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

