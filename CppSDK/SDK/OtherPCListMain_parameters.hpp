#pragma once

 

// Package: OtherPCListMain

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function OtherPCListMain.OtherPCListMain_C.OnListSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct OtherPCListMain_C_OnListSelected__DelegateSignature final
{
public:
	class ASBPlayerState*                         PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharacterId;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCListMain_C_OnListSelected__DelegateSignature) == 0x000008, "Wrong alignment on OtherPCListMain_C_OnListSelected__DelegateSignature");
static_assert(sizeof(OtherPCListMain_C_OnListSelected__DelegateSignature) == 0x000010, "Wrong size on OtherPCListMain_C_OnListSelected__DelegateSignature");
static_assert(offsetof(OtherPCListMain_C_OnListSelected__DelegateSignature, PlayerState) == 0x000000, "Member 'OtherPCListMain_C_OnListSelected__DelegateSignature::PlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_OnListSelected__DelegateSignature, CharacterId) == 0x000008, "Member 'OtherPCListMain_C_OnListSelected__DelegateSignature::CharacterId' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.ExecuteUbergraph_OtherPCListMain
// 0x0088 (0x0088 - 0x0000)
struct OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ListIndex_1;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetOwningSbPlayerState_Result;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C55[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetOwningSbPlayerState_Result_1;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsBlackListed;                 // 0x0020(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsLoop;                         // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C56[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C57[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_CustomEvent_Widget;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C58[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C59[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsBlackListed)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ListIndex;                      // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bOnlyListUpdate;                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C5A[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOtherPCListItem_C*                     K2Node_DynamicCast_AsOther_PCList_Item;            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C5B[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetPlayerState_OutPlayerState;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain) == 0x000008, "Wrong alignment on OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain");
static_assert(sizeof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain) == 0x000088, "Wrong size on OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, EntryPoint) == 0x000000, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::EntryPoint' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, K2Node_CustomEvent_ListIndex_1) == 0x000004, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::K2Node_CustomEvent_ListIndex_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_GetOwningSbPlayerState_Result) == 0x000008, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_GetOwningSbPlayerState_Result' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_GetOwningSbPlayerState_Result_1) == 0x000018, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_GetOwningSbPlayerState_Result_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, K2Node_CustomEvent_bIsBlackListed) == 0x000020, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::K2Node_CustomEvent_bIsBlackListed' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, K2Node_CustomEvent_IsLoop) == 0x000022, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::K2Node_CustomEvent_IsLoop' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, K2Node_CustomEvent_Widget) == 0x000030, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000039, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_GetChildrenCount_ReturnValue) == 0x00003C, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000040, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_PlaySE_ReturnValue) == 0x000054, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, K2Node_CustomEvent_ListIndex) == 0x000058, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::K2Node_CustomEvent_ListIndex' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, K2Node_CustomEvent_bOnlyListUpdate) == 0x00005C, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::K2Node_CustomEvent_bOnlyListUpdate' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00005D, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_GetChildAt_ReturnValue) == 0x000060, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, K2Node_DynamicCast_AsOther_PCList_Item) == 0x000068, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::K2Node_DynamicCast_AsOther_PCList_Item' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_GetPlayerState_OutPlayerState) == 0x000078, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_GetPlayerState_OutPlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain, CallFunc_IsValid_ReturnValue_3) == 0x000080, "Member 'OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.OnEventListSelectedMain
// 0x0008 (0x0008 - 0x0000)
struct OtherPCListMain_C_OnEventListSelectedMain final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnlyListUpdate;                                   // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCListMain_C_OnEventListSelectedMain) == 0x000004, "Wrong alignment on OtherPCListMain_C_OnEventListSelectedMain");
static_assert(sizeof(OtherPCListMain_C_OnEventListSelectedMain) == 0x000008, "Wrong size on OtherPCListMain_C_OnEventListSelectedMain");
static_assert(offsetof(OtherPCListMain_C_OnEventListSelectedMain, ListIndex) == 0x000000, "Member 'OtherPCListMain_C_OnEventListSelectedMain::ListIndex' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_OnEventListSelectedMain, bOnlyListUpdate) == 0x000004, "Member 'OtherPCListMain_C_OnEventListSelectedMain::bOnlyListUpdate' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.MoveCursorPositionToList
// 0x0008 (0x0008 - 0x0000)
struct OtherPCListMain_C_MoveCursorPositionToList final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCListMain_C_MoveCursorPositionToList) == 0x000008, "Wrong alignment on OtherPCListMain_C_MoveCursorPositionToList");
static_assert(sizeof(OtherPCListMain_C_MoveCursorPositionToList) == 0x000008, "Wrong size on OtherPCListMain_C_MoveCursorPositionToList");
static_assert(offsetof(OtherPCListMain_C_MoveCursorPositionToList, Widget) == 0x000000, "Member 'OtherPCListMain_C_MoveCursorPositionToList::Widget' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.StartUpdateAnim
// 0x0001 (0x0001 - 0x0000)
struct OtherPCListMain_C_StartUpdateAnim final
{
public:
	bool                                          IsLoop;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCListMain_C_StartUpdateAnim) == 0x000001, "Wrong alignment on OtherPCListMain_C_StartUpdateAnim");
static_assert(sizeof(OtherPCListMain_C_StartUpdateAnim) == 0x000001, "Wrong size on OtherPCListMain_C_StartUpdateAnim");
static_assert(offsetof(OtherPCListMain_C_StartUpdateAnim, IsLoop) == 0x000000, "Member 'OtherPCListMain_C_StartUpdateAnim::IsLoop' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.OnIsBlackListed_event_0
// 0x0001 (0x0001 - 0x0000)
struct OtherPCListMain_C_OnIsBlackListed_event_0 final
{
public:
	bool                                          bIsBlackListed;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCListMain_C_OnIsBlackListed_event_0) == 0x000001, "Wrong alignment on OtherPCListMain_C_OnIsBlackListed_event_0");
static_assert(sizeof(OtherPCListMain_C_OnIsBlackListed_event_0) == 0x000001, "Wrong size on OtherPCListMain_C_OnIsBlackListed_event_0");
static_assert(offsetof(OtherPCListMain_C_OnIsBlackListed_event_0, bIsBlackListed) == 0x000000, "Member 'OtherPCListMain_C_OnIsBlackListed_event_0::bIsBlackListed' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.OnEventListSelected
// 0x0004 (0x0004 - 0x0000)
struct OtherPCListMain_C_OnEventListSelected final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCListMain_C_OnEventListSelected) == 0x000004, "Wrong alignment on OtherPCListMain_C_OnEventListSelected");
static_assert(sizeof(OtherPCListMain_C_OnEventListSelected) == 0x000004, "Wrong size on OtherPCListMain_C_OnEventListSelected");
static_assert(offsetof(OtherPCListMain_C_OnEventListSelected, ListIndex) == 0x000000, "Member 'OtherPCListMain_C_OnEventListSelected::ListIndex' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.UpdatePlayerList
// 0x0248 (0x0248 - 0x0000)
struct OtherPCListMain_C_UpdatePlayerList final
{
public:
	int32                                         PlayerNum;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C5C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOtherPCListItem_C*                     WorkItem;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WorkItemIndex;                                     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C5D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         SelfPlayerState;                                   // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCreateList;                                      // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C5E[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         PlayerState;                                       // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C5F[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C60[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetOwningSbPlayerState_Result;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UOtherPCListItem_C*                     CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C61[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C62[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C63[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x00A0(0x0020)()
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue_1;            // 0x00C0(0x0020)()
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C64[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C65[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C66[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Search_Player_List_MatchistID;            // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C67[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOtherPCListItem_C*                     K2Node_DynamicCast_AsOther_PCList_Item;            // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C68[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOtherPCListItem_C*                     K2Node_DynamicCast_AsOther_PCList_Item_1;          // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C69[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C6A[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput;          // 0x0178(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckIsBlackListedByCharacterId_ReturnValue; // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C6B[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCommunicateSettingsComponent*  CallFunc_GetPlayerCommunicateComponent_ReturnValue; // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBTensionTagType                             CallFunc_GetTensionTag_ReturnValue;                // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C6C[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C6D[0x6];                                     // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBActorManager*                        CallFunc_GetActorManager_ReturnValue;              // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetPlayer_ReturnValue;                    // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerNum_ReturnValue;                 // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C6E[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBActorVisibilityInterface> CallFunc_GetActorVisibilityComponent_self_CastInput; // 0x01E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBActorVisibilityComponent*            CallFunc_GetActorVisibilityComponent_ReturnValue;  // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsActorHidden_ReturnValue;             // 0x01FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAdminHide_ReturnValue;                  // 0x01FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C6F[0x1];                                     // 0x01FF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C70[0x3];                                     // 0x020D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ListIndex)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0210(0x0010)(ZeroConstructor, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0220(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_2;           // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C71[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_3;                 // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCListMain_C_UpdatePlayerList) == 0x000008, "Wrong alignment on OtherPCListMain_C_UpdatePlayerList");
static_assert(sizeof(OtherPCListMain_C_UpdatePlayerList) == 0x000248, "Wrong size on OtherPCListMain_C_UpdatePlayerList");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, PlayerNum) == 0x000000, "Member 'OtherPCListMain_C_UpdatePlayerList::PlayerNum' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, WorkItem) == 0x000008, "Member 'OtherPCListMain_C_UpdatePlayerList::WorkItem' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, WorkItemIndex) == 0x000010, "Member 'OtherPCListMain_C_UpdatePlayerList::WorkItemIndex' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, SelfPlayerState) == 0x000018, "Member 'OtherPCListMain_C_UpdatePlayerList::SelfPlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, IsCreateList) == 0x000020, "Member 'OtherPCListMain_C_UpdatePlayerList::IsCreateList' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, PlayerState) == 0x000028, "Member 'OtherPCListMain_C_UpdatePlayerList::PlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, Temp_int_Variable) == 0x000030, "Member 'OtherPCListMain_C_UpdatePlayerList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, K2Node_MakeArray_Array) == 0x000038, "Member 'OtherPCListMain_C_UpdatePlayerList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Array_Get_Item) == 0x000048, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, Temp_int_Variable_1) == 0x000050, "Member 'OtherPCListMain_C_UpdatePlayerList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000058, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetDisplayName_ReturnValue) == 0x000060, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_IsEmpty_ReturnValue) == 0x000074, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetOwningSbPlayerState_Result) == 0x000078, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetOwningSbPlayerState_Result' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Create_ReturnValue) == 0x000080, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, Temp_int_Variable_2) == 0x00008C, "Member 'OtherPCListMain_C_UpdatePlayerList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, Temp_int_Variable_3) == 0x000090, "Member 'OtherPCListMain_C_UpdatePlayerList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000094, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Add_IntInt_ReturnValue_2) == 0x000098, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetPlatformInfo_ReturnValue) == 0x0000A0, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetPlatformInfo_ReturnValue_1) == 0x0000C0, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetPlatformInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000E0, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetNetworkDataCache_IsValid) == 0x0000E1, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000E8, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000F0, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetChildAt_ReturnValue) == 0x0000F8, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetChildrenCount_ReturnValue) == 0x000100, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000104, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000108, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00010C, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000110, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Search_Player_List_MatchistID) == 0x000118, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Search_Player_List_MatchistID' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00011C, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetChildAt_ReturnValue_1) == 0x000120, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, K2Node_DynamicCast_AsOther_PCList_Item) == 0x000128, "Member 'OtherPCListMain_C_UpdatePlayerList::K2Node_DynamicCast_AsOther_PCList_Item' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, K2Node_DynamicCast_bSuccess) == 0x000130, "Member 'OtherPCListMain_C_UpdatePlayerList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Add_IntInt_ReturnValue_4) == 0x000134, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetChildAt_ReturnValue_2) == 0x000138, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, K2Node_DynamicCast_AsOther_PCList_Item_1) == 0x000140, "Member 'OtherPCListMain_C_UpdatePlayerList::K2Node_DynamicCast_AsOther_PCList_Item_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, K2Node_DynamicCast_bSuccess_1) == 0x000148, "Member 'OtherPCListMain_C_UpdatePlayerList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, Temp_int_Variable_4) == 0x00014C, "Member 'OtherPCListMain_C_UpdatePlayerList::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000150, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000151, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetCharacterId_self_CastInput) == 0x000158, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetCharacterId_ReturnValue) == 0x000168, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetCharacterName_self_CastInput) == 0x000178, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetCharacterName_self_CastInput' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetCharacterName_ReturnValue) == 0x000188, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_CheckIsBlackListedByCharacterId_ReturnValue) == 0x000198, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_CheckIsBlackListedByCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetPlayerCommunicateComponent_ReturnValue) == 0x0001A0, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetPlayerCommunicateComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_IsValid_ReturnValue_1) == 0x0001A8, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetTensionTag_ReturnValue) == 0x0001A9, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetTensionTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetGameInstance_ReturnValue) == 0x0001B0, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, K2Node_DynamicCast_AsSBGame_Instance) == 0x0001B8, "Member 'OtherPCListMain_C_UpdatePlayerList::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, K2Node_DynamicCast_bSuccess_2) == 0x0001C0, "Member 'OtherPCListMain_C_UpdatePlayerList::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x0001C1, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetActorManager_ReturnValue) == 0x0001C8, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetActorManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetPlayer_ReturnValue) == 0x0001D0, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetPlayerNum_ReturnValue) == 0x0001D8, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetPlayerNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetActorVisibilityComponent_self_CastInput) == 0x0001E0, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetActorVisibilityComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetActorVisibilityComponent_ReturnValue) == 0x0001F0, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetActorVisibilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001F8, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_IsValid_ReturnValue_2) == 0x0001FC, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_BP_IsActorHidden_ReturnValue) == 0x0001FD, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_BP_IsActorHidden_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_IsAdminHide_ReturnValue) == 0x0001FE, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_IsAdminHide_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetValidPlayerState_ReturnValue) == 0x000200, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, Temp_int_Variable_5) == 0x000208, "Member 'OtherPCListMain_C_UpdatePlayerList::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_IsValid_ReturnValue_3) == 0x00020C, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, K2Node_CreateDelegate_OutputDelegate) == 0x000210, "Member 'OtherPCListMain_C_UpdatePlayerList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, K2Node_MakeStruct_Margin) == 0x000220, "Member 'OtherPCListMain_C_UpdatePlayerList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetChildrenCount_ReturnValue_2) == 0x000230, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetChildrenCount_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_GetChildAt_ReturnValue_3) == 0x000238, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_GetChildAt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000240, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_UpdatePlayerList, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000244, "Member 'OtherPCListMain_C_UpdatePlayerList::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.ResetSelectList
// 0x0030 (0x0030 - 0x0000)
struct OtherPCListMain_C_ResetSelectList final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C72[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOtherPCListItem_C*                     K2Node_DynamicCast_AsOther_PCList_Item;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C73[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCListMain_C_ResetSelectList) == 0x000008, "Wrong alignment on OtherPCListMain_C_ResetSelectList");
static_assert(sizeof(OtherPCListMain_C_ResetSelectList) == 0x000030, "Wrong size on OtherPCListMain_C_ResetSelectList");
static_assert(offsetof(OtherPCListMain_C_ResetSelectList, Temp_int_Variable) == 0x000000, "Member 'OtherPCListMain_C_ResetSelectList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ResetSelectList, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'OtherPCListMain_C_ResetSelectList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ResetSelectList, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'OtherPCListMain_C_ResetSelectList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ResetSelectList, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'OtherPCListMain_C_ResetSelectList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ResetSelectList, K2Node_DynamicCast_AsOther_PCList_Item) == 0x000018, "Member 'OtherPCListMain_C_ResetSelectList::K2Node_DynamicCast_AsOther_PCList_Item' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ResetSelectList, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'OtherPCListMain_C_ResetSelectList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ResetSelectList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'OtherPCListMain_C_ResetSelectList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_ResetSelectList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'OtherPCListMain_C_ResetSelectList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.Search Player List
// 0x0048 (0x0048 - 0x0000)
struct OtherPCListMain_C_Search_Player_List final
{
public:
	class APlayerState*                           InPlayerState;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MatchistID;                                        // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C74[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOtherPCListItem_C*                     K2Node_DynamicCast_AsOther_PCList_Item;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C75[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetPlayerState_OutPlayerState;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCListMain_C_Search_Player_List) == 0x000008, "Wrong alignment on OtherPCListMain_C_Search_Player_List");
static_assert(sizeof(OtherPCListMain_C_Search_Player_List) == 0x000048, "Wrong size on OtherPCListMain_C_Search_Player_List");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, InPlayerState) == 0x000000, "Member 'OtherPCListMain_C_Search_Player_List::InPlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, MatchistID) == 0x000008, "Member 'OtherPCListMain_C_Search_Player_List::MatchistID' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, Temp_int_Variable) == 0x00000C, "Member 'OtherPCListMain_C_Search_Player_List::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'OtherPCListMain_C_Search_Player_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, CallFunc_GetChildrenCount_ReturnValue) == 0x000014, "Member 'OtherPCListMain_C_Search_Player_List::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'OtherPCListMain_C_Search_Player_List::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'OtherPCListMain_C_Search_Player_List::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, K2Node_DynamicCast_AsOther_PCList_Item) == 0x000028, "Member 'OtherPCListMain_C_Search_Player_List::K2Node_DynamicCast_AsOther_PCList_Item' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'OtherPCListMain_C_Search_Player_List::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000031, "Member 'OtherPCListMain_C_Search_Player_List::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, CallFunc_GetPlayerState_OutPlayerState) == 0x000038, "Member 'OtherPCListMain_C_Search_Player_List::CallFunc_GetPlayerState_OutPlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_Search_Player_List, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'OtherPCListMain_C_Search_Player_List::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.SelectPlayer
// 0x0018 (0x0018 - 0x0000)
struct OtherPCListMain_C_SelectPlayer final
{
public:
	class APlayerState*                           InPlayerState;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnlyListUpdate;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C76[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ListId;                                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Search_Player_List_MatchistID;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCListMain_C_SelectPlayer) == 0x000008, "Wrong alignment on OtherPCListMain_C_SelectPlayer");
static_assert(sizeof(OtherPCListMain_C_SelectPlayer) == 0x000018, "Wrong size on OtherPCListMain_C_SelectPlayer");
static_assert(offsetof(OtherPCListMain_C_SelectPlayer, InPlayerState) == 0x000000, "Member 'OtherPCListMain_C_SelectPlayer::InPlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_SelectPlayer, bOnlyListUpdate) == 0x000008, "Member 'OtherPCListMain_C_SelectPlayer::bOnlyListUpdate' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_SelectPlayer, ListId) == 0x00000C, "Member 'OtherPCListMain_C_SelectPlayer::ListId' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_SelectPlayer, CallFunc_Search_Player_List_MatchistID) == 0x000010, "Member 'OtherPCListMain_C_SelectPlayer::CallFunc_Search_Player_List_MatchistID' has a wrong offset!");

// Function OtherPCListMain.OtherPCListMain_C.GetOwningSbPlayerState
// 0x0048 (0x0048 - 0x0000)
struct OtherPCListMain_C_GetOwningSbPlayerState final
{
public:
	class ASBPlayerState*                         Result;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C77[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C78[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPhotoModeController*                 K2Node_DynamicCast_AsSBPhoto_Mode_Controller;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C79[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCListMain_C_GetOwningSbPlayerState) == 0x000008, "Wrong alignment on OtherPCListMain_C_GetOwningSbPlayerState");
static_assert(sizeof(OtherPCListMain_C_GetOwningSbPlayerState) == 0x000048, "Wrong size on OtherPCListMain_C_GetOwningSbPlayerState");
static_assert(offsetof(OtherPCListMain_C_GetOwningSbPlayerState, Result) == 0x000000, "Member 'OtherPCListMain_C_GetOwningSbPlayerState::Result' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_GetOwningSbPlayerState, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'OtherPCListMain_C_GetOwningSbPlayerState::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_GetOwningSbPlayerState, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'OtherPCListMain_C_GetOwningSbPlayerState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_GetOwningSbPlayerState, K2Node_DynamicCast_AsSBPlayer_State) == 0x000018, "Member 'OtherPCListMain_C_GetOwningSbPlayerState::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_GetOwningSbPlayerState, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'OtherPCListMain_C_GetOwningSbPlayerState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_GetOwningSbPlayerState, K2Node_DynamicCast_AsSBPhoto_Mode_Controller) == 0x000028, "Member 'OtherPCListMain_C_GetOwningSbPlayerState::K2Node_DynamicCast_AsSBPhoto_Mode_Controller' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_GetOwningSbPlayerState, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'OtherPCListMain_C_GetOwningSbPlayerState::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_GetOwningSbPlayerState, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x000038, "Member 'OtherPCListMain_C_GetOwningSbPlayerState::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(OtherPCListMain_C_GetOwningSbPlayerState, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'OtherPCListMain_C_GetOwningSbPlayerState::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

}

