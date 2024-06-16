#pragma once

 

// Package: NpcGuildJoin

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function NpcGuildJoin.NpcGuildJoin_C.ExecuteUbergraph_NpcGuildJoin
// 0x03C8 (0x03C8 - 0x0000)
struct NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A1B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildData>                     CallFunc_GetGuildList_ReturnValue;                 // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A1C[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_5;                      // 0x0030(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A1D[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_6;                      // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x003C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A1E[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0048(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0078(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A1F[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             K2Node_CustomEvent_InGuildData;                    // 0x0080(0x00B8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0138(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A20[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0140(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A21[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0158(0x0018)()
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x0170(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A22[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0188(0x0018)()
	struct FGuildEntryData                        K2Node_ComponentBoundEvent_GuildEntry;             // 0x01A0(0x00E0)()
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0280(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsAccept;                       // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A23[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InEntryId;                      // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_3;            // 0x0298(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A24[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x02B0(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A25[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02E0(0x0018)()
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x02F8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0308(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0318(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode, struct FGuildData& InGuildData)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0328(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x0338(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode, bool IsAccept, const class FString& InEntryId)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0348(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName TutorialHelpId)>   K2Node_CreateDelegate_OutputDelegate_6;            // 0x0358(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_7;            // 0x0368(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0378(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0388(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A26[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_4;            // 0x0390(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A27[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x03A8(0x0018)()
	class FName                                   K2Node_CustomEvent_TutorialHelpId;                 // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin) == 0x000008, "Wrong alignment on NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin");
static_assert(sizeof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin) == 0x0003C8, "Wrong size on NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, EntryPoint) == 0x000000, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::EntryPoint' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_GetGuildComp_ReturnValue) == 0x000008, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_GetGuildList_ReturnValue) == 0x000010, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_GetGuildList_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_GetGuildComp_ReturnValue_1) == 0x000028, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_RetCode_5) == 0x000030, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_RetCode_5' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000034, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_RetCode_6) == 0x000038, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_RetCode_6' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_RetCode_4) == 0x00003C, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000040, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000041, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_Not_PreBool_ReturnValue) == 0x000042, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_GetSBRetMessage_ReturnValue) == 0x000048, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_GetGuildComp_ReturnValue_2) == 0x000070, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_RetCode_3) == 0x000078, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_InGuildData) == 0x000080, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_InGuildData' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_RetCode_2) == 0x000138, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000140, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000150, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000158, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x000170, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000180, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000188, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_ComponentBoundEvent_GuildEntry) == 0x0001A0, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_ComponentBoundEvent_GuildEntry' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_RetCode_1) == 0x000280, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_IsAccept) == 0x000284, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_IsAccept' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_InEntryId) == 0x000288, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_InEntryId' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_GetSBRetMessage_ReturnValue_3) == 0x000298, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_GetSBRetMessage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x0002A8, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0002B0, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002C8, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_GetTextFromAsset_ReturnValue) == 0x0002D0, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002E0, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CreateDelegate_OutputDelegate) == 0x0002F8, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CreateDelegate_OutputDelegate_1) == 0x000308, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CreateDelegate_OutputDelegate_2) == 0x000318, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CreateDelegate_OutputDelegate_3) == 0x000328, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CreateDelegate_OutputDelegate_4) == 0x000338, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CreateDelegate_OutputDelegate_5) == 0x000348, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CreateDelegate_OutputDelegate_6) == 0x000358, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CreateDelegate_OutputDelegate_7) == 0x000368, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CreateDelegate_OutputDelegate_8) == 0x000378, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_RetCode) == 0x000388, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_GetSBRetMessage_ReturnValue_4) == 0x000390, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_GetSBRetMessage_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x0003A0, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0003A8, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin, K2Node_CustomEvent_TutorialHelpId) == 0x0003C0, "Member 'NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin::K2Node_CustomEvent_TutorialHelpId' has a wrong offset!");

// Function NpcGuildJoin.NpcGuildJoin_C.Event_SetNowTurorialHelpId
// 0x0008 (0x0008 - 0x0000)
struct NpcGuildJoin_C_Event_SetNowTurorialHelpId final
{
public:
	class FName                                   TutorialHelpId;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuildJoin_C_Event_SetNowTurorialHelpId) == 0x000004, "Wrong alignment on NpcGuildJoin_C_Event_SetNowTurorialHelpId");
static_assert(sizeof(NpcGuildJoin_C_Event_SetNowTurorialHelpId) == 0x000008, "Wrong size on NpcGuildJoin_C_Event_SetNowTurorialHelpId");
static_assert(offsetof(NpcGuildJoin_C_Event_SetNowTurorialHelpId, TutorialHelpId) == 0x000000, "Member 'NpcGuildJoin_C_Event_SetNowTurorialHelpId::TutorialHelpId' has a wrong offset!");

// Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteGetGuildData_Event
// 0x0004 (0x0004 - 0x0000)
struct NpcGuildJoin_C_OnCompleteGetGuildData_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuildJoin_C_OnCompleteGetGuildData_Event) == 0x000004, "Wrong alignment on NpcGuildJoin_C_OnCompleteGetGuildData_Event");
static_assert(sizeof(NpcGuildJoin_C_OnCompleteGetGuildData_Event) == 0x000004, "Wrong size on NpcGuildJoin_C_OnCompleteGetGuildData_Event");
static_assert(offsetof(NpcGuildJoin_C_OnCompleteGetGuildData_Event, RetCode) == 0x000000, "Member 'NpcGuildJoin_C_OnCompleteGetGuildData_Event::RetCode' has a wrong offset!");

// Function NpcGuildJoin.NpcGuildJoin_C.OnInviteArraimented
// 0x0018 (0x0018 - 0x0000)
struct NpcGuildJoin_C_OnInviteArraimented final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAccept;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A28[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InEntryId;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuildJoin_C_OnInviteArraimented) == 0x000008, "Wrong alignment on NpcGuildJoin_C_OnInviteArraimented");
static_assert(sizeof(NpcGuildJoin_C_OnInviteArraimented) == 0x000018, "Wrong size on NpcGuildJoin_C_OnInviteArraimented");
static_assert(offsetof(NpcGuildJoin_C_OnInviteArraimented, RetCode) == 0x000000, "Member 'NpcGuildJoin_C_OnInviteArraimented::RetCode' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_OnInviteArraimented, IsAccept) == 0x000004, "Member 'NpcGuildJoin_C_OnInviteArraimented::IsAccept' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_OnInviteArraimented, InEntryId) == 0x000008, "Member 'NpcGuildJoin_C_OnInviteArraimented::InEntryId' has a wrong offset!");

// Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteCancelEntry
// 0x0004 (0x0004 - 0x0000)
struct NpcGuildJoin_C_OnCompleteCancelEntry final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuildJoin_C_OnCompleteCancelEntry) == 0x000004, "Wrong alignment on NpcGuildJoin_C_OnCompleteCancelEntry");
static_assert(sizeof(NpcGuildJoin_C_OnCompleteCancelEntry) == 0x000004, "Wrong size on NpcGuildJoin_C_OnCompleteCancelEntry");
static_assert(offsetof(NpcGuildJoin_C_OnCompleteCancelEntry, RetCode) == 0x000000, "Member 'NpcGuildJoin_C_OnCompleteCancelEntry::RetCode' has a wrong offset!");

// Function NpcGuildJoin.NpcGuildJoin_C.OnComplete_GuildDetail
// 0x00C0 (0x00C0 - 0x0000)
struct NpcGuildJoin_C_OnComplete_GuildDetail final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A29[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             InGuildData;                                       // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(NpcGuildJoin_C_OnComplete_GuildDetail) == 0x000008, "Wrong alignment on NpcGuildJoin_C_OnComplete_GuildDetail");
static_assert(sizeof(NpcGuildJoin_C_OnComplete_GuildDetail) == 0x0000C0, "Wrong size on NpcGuildJoin_C_OnComplete_GuildDetail");
static_assert(offsetof(NpcGuildJoin_C_OnComplete_GuildDetail, RetCode) == 0x000000, "Member 'NpcGuildJoin_C_OnComplete_GuildDetail::RetCode' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_OnComplete_GuildDetail, InGuildData) == 0x000008, "Member 'NpcGuildJoin_C_OnComplete_GuildDetail::InGuildData' has a wrong offset!");

// Function NpcGuildJoin.NpcGuildJoin_C.OnOrganized
// 0x0004 (0x0004 - 0x0000)
struct NpcGuildJoin_C_OnOrganized final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuildJoin_C_OnOrganized) == 0x000004, "Wrong alignment on NpcGuildJoin_C_OnOrganized");
static_assert(sizeof(NpcGuildJoin_C_OnOrganized) == 0x000004, "Wrong size on NpcGuildJoin_C_OnOrganized");
static_assert(offsetof(NpcGuildJoin_C_OnOrganized, RetCode) == 0x000000, "Member 'NpcGuildJoin_C_OnOrganized::RetCode' has a wrong offset!");

// Function NpcGuildJoin.NpcGuildJoin_C.OnCompletedChangeName
// 0x0004 (0x0004 - 0x0000)
struct NpcGuildJoin_C_OnCompletedChangeName final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuildJoin_C_OnCompletedChangeName) == 0x000004, "Wrong alignment on NpcGuildJoin_C_OnCompletedChangeName");
static_assert(sizeof(NpcGuildJoin_C_OnCompletedChangeName) == 0x000004, "Wrong size on NpcGuildJoin_C_OnCompletedChangeName");
static_assert(offsetof(NpcGuildJoin_C_OnCompletedChangeName, RetCode) == 0x000000, "Member 'NpcGuildJoin_C_OnCompletedChangeName::RetCode' has a wrong offset!");

// Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteFindGuildShortID
// 0x0004 (0x0004 - 0x0000)
struct NpcGuildJoin_C_OnCompleteFindGuildShortID final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuildJoin_C_OnCompleteFindGuildShortID) == 0x000004, "Wrong alignment on NpcGuildJoin_C_OnCompleteFindGuildShortID");
static_assert(sizeof(NpcGuildJoin_C_OnCompleteFindGuildShortID) == 0x000004, "Wrong size on NpcGuildJoin_C_OnCompleteFindGuildShortID");
static_assert(offsetof(NpcGuildJoin_C_OnCompleteFindGuildShortID, RetCode) == 0x000000, "Member 'NpcGuildJoin_C_OnCompleteFindGuildShortID::RetCode' has a wrong offset!");

// Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature
// 0x00E0 (0x00E0 - 0x0000)
struct NpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature final
{
public:
	struct FGuildEntryData                        GuildEntry;                                        // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature) == 0x000008, "Wrong alignment on NpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature");
static_assert(sizeof(NpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature) == 0x0000E0, "Wrong size on NpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature");
static_assert(offsetof(NpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature, GuildEntry) == 0x000000, "Member 'NpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature::GuildEntry' has a wrong offset!");

// Function NpcGuildJoin.NpcGuildJoin_C.GetGuildComp
// 0x0020 (0x0020 - 0x0000)
struct NpcGuildJoin_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcGuildJoin_C_GetGuildComp) == 0x000008, "Wrong alignment on NpcGuildJoin_C_GetGuildComp");
static_assert(sizeof(NpcGuildJoin_C_GetGuildComp) == 0x000020, "Wrong size on NpcGuildJoin_C_GetGuildComp");
static_assert(offsetof(NpcGuildJoin_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'NpcGuildJoin_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'NpcGuildJoin_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'NpcGuildJoin_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildJoin_C_GetGuildComp, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'NpcGuildJoin_C_GetGuildComp::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

