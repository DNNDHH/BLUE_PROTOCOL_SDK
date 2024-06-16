#pragma once

 

// Package: GuildFindEntry

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GuildFindEntry.GuildFindEntry_C.ExecuteUbergraph_GuildFindEntry
// 0x0328 (0x0328 - 0x0000)
struct GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B95[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B96[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_Find_Guild_Entry_Output_Get;              // 0x0018(0x00E0)()
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x00F8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
	class FText                                   CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText; // 0x0120(0x0018)()
	bool                                          CallFunc_GetRemainTimeLimitGuideText_ReturnValue;  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B97[0x5];                                     // 0x013B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0168(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B98[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0188(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B99[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01A8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01F8(0x0018)()
	TDelegate<void(EDialogResult OnButton, class FText InputText)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0210(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_TextInputDialog_C*                  CallFunc_Create_ReturnValue;                       // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0230(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_3;               // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_OnButton;                       // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B9A[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InputText;                      // 0x0250(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B9B[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0290(0x0018)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B9C[0x5];                                     // 0x02AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B9D[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x02C8(0x0020)()
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B9E[0x6];                                     // 0x02EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_4;               // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B9F[0x6];                                     // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0310(0x0018)()
};
static_assert(alignof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry) == 0x000008, "Wrong alignment on GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry");
static_assert(sizeof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry) == 0x000328, "Wrong size on GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, EntryPoint) == 0x000000, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetGuildComp_ReturnValue) == 0x000008, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, K2Node_CustomEvent_RetCode) == 0x000010, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Find_Guild_Entry_Output_Get) == 0x000018, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Find_Guild_Entry_Output_Get' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetSBRetMessage_ReturnValue) == 0x0000F8, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText) == 0x000120, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetRemainTimeLimitGuideText_ReturnValue) == 0x000138, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetRemainTimeLimitGuideText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_IsEmpty_ReturnValue) == 0x000139, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00013A, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetGuildComp_ReturnValue_1) == 0x000140, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetTextFromAsset_ReturnValue) == 0x000148, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000158, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000168, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, K2Node_CustomEvent_Result) == 0x000180, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000188, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001A0, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, K2Node_MakeStruct_FormatArgumentData) == 0x0001A8, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, K2Node_MakeArray_Array) == 0x0001E8, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Format_ReturnValue) == 0x0001F8, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, K2Node_CreateDelegate_OutputDelegate_1) == 0x000210, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetGuildComp_ReturnValue_2) == 0x000220, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Create_ReturnValue) == 0x000228, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, K2Node_CreateDelegate_OutputDelegate_2) == 0x000230, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetGuildComp_ReturnValue_3) == 0x000240, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetGuildComp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, K2Node_CustomEvent_OnButton) == 0x000248, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::K2Node_CustomEvent_OnButton' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, K2Node_CustomEvent_InputText) == 0x000250, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::K2Node_CustomEvent_InputText' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Conv_TextToString_ReturnValue) == 0x000268, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000278, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000280, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000290, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0002A8, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002A9, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0002AA, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Create_ReturnValue_1) == 0x0002B0, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Not_PreBool_ReturnValue) == 0x0002B8, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetSBPlayerState_ReturnValue) == 0x0002C0, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetPlatformInfo_ReturnValue) == 0x0002C8, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetIsEnabled_ReturnValue) == 0x0002E8, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0002E9, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetGuildComp_ReturnValue_4) == 0x0002F0, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetGuildComp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x0002F8, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x0002F9, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000300, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000310, "Member 'GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");

// Function GuildFindEntry.GuildFindEntry_C.OnCloseEntry
// 0x0020 (0x0020 - 0x0000)
struct GuildFindEntry_C_OnCloseEntry final
{
public:
	EDialogResult                                 OnButton;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BA0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InputText;                                         // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildFindEntry_C_OnCloseEntry) == 0x000008, "Wrong alignment on GuildFindEntry_C_OnCloseEntry");
static_assert(sizeof(GuildFindEntry_C_OnCloseEntry) == 0x000020, "Wrong size on GuildFindEntry_C_OnCloseEntry");
static_assert(offsetof(GuildFindEntry_C_OnCloseEntry, OnButton) == 0x000000, "Member 'GuildFindEntry_C_OnCloseEntry::OnButton' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_OnCloseEntry, InputText) == 0x000008, "Member 'GuildFindEntry_C_OnCloseEntry::InputText' has a wrong offset!");

// Function GuildFindEntry.GuildFindEntry_C.OnCancelDialog
// 0x0001 (0x0001 - 0x0000)
struct GuildFindEntry_C_OnCancelDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildFindEntry_C_OnCancelDialog) == 0x000001, "Wrong alignment on GuildFindEntry_C_OnCancelDialog");
static_assert(sizeof(GuildFindEntry_C_OnCancelDialog) == 0x000001, "Wrong size on GuildFindEntry_C_OnCancelDialog");
static_assert(offsetof(GuildFindEntry_C_OnCancelDialog, Result) == 0x000000, "Member 'GuildFindEntry_C_OnCancelDialog::Result' has a wrong offset!");

// Function GuildFindEntry.GuildFindEntry_C.OnCompletedGuildEntries
// 0x0004 (0x0004 - 0x0000)
struct GuildFindEntry_C_OnCompletedGuildEntries final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildFindEntry_C_OnCompletedGuildEntries) == 0x000004, "Wrong alignment on GuildFindEntry_C_OnCompletedGuildEntries");
static_assert(sizeof(GuildFindEntry_C_OnCompletedGuildEntries) == 0x000004, "Wrong size on GuildFindEntry_C_OnCompletedGuildEntries");
static_assert(offsetof(GuildFindEntry_C_OnCompletedGuildEntries, RetCode) == 0x000000, "Member 'GuildFindEntry_C_OnCompletedGuildEntries::RetCode' has a wrong offset!");

// Function GuildFindEntry.GuildFindEntry_C.SetGuildData
// 0x00B8 (0x00B8 - 0x0000)
struct GuildFindEntry_C_SetGuildData final
{
public:
	struct FGuildData                             Param_GuildData;                                   // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildFindEntry_C_SetGuildData) == 0x000008, "Wrong alignment on GuildFindEntry_C_SetGuildData");
static_assert(sizeof(GuildFindEntry_C_SetGuildData) == 0x0000B8, "Wrong size on GuildFindEntry_C_SetGuildData");
static_assert(offsetof(GuildFindEntry_C_SetGuildData, Param_GuildData) == 0x000000, "Member 'GuildFindEntry_C_SetGuildData::Param_GuildData' has a wrong offset!");

// Function GuildFindEntry.GuildFindEntry_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildFindEntry_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildFindEntry_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildFindEntry_C_GetGuildComp");
static_assert(sizeof(GuildFindEntry_C_GetGuildComp) == 0x000018, "Wrong size on GuildFindEntry_C_GetGuildComp");
static_assert(offsetof(GuildFindEntry_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildFindEntry_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildFindEntry_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildFindEntry_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildFindEntry.GuildFindEntry_C.Find Guild Entry
// 0x0400 (0x0400 - 0x0000)
struct GuildFindEntry_C_Find_Guild_Entry final
{
public:
	struct FGuildEntryData                        Output_Get;                                        // 0x0000(0x00E0)(Parm, OutParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BA1[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetPlayerInviteList_ReturnValue;          // 0x0110(0x0010)(ReferenceParm)
	TArray<struct FGuildEntryData>                CallFunc_GetPlayerEntryList_ReturnValue;           // 0x0120(0x0010)(ReferenceParm)
	struct FGuildEntryData                        CallFunc_Array_Get_Item;                           // 0x0130(0x00E0)()
	struct FGuildEntryData                        CallFunc_Array_Get_Item_1;                         // 0x0210(0x00E0)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BA2[0x2];                                     // 0x02F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BA3[0x2];                                     // 0x02FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0300(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BA4[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_Array_Get_Item_2;                         // 0x0318(0x00E0)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x03F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildFindEntry_C_Find_Guild_Entry) == 0x000008, "Wrong alignment on GuildFindEntry_C_Find_Guild_Entry");
static_assert(sizeof(GuildFindEntry_C_Find_Guild_Entry) == 0x000400, "Wrong size on GuildFindEntry_C_Find_Guild_Entry");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, Output_Get) == 0x000000, "Member 'GuildFindEntry_C_Find_Guild_Entry::Output_Get' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, Temp_int_Loop_Counter_Variable) == 0x0000E0, "Member 'GuildFindEntry_C_Find_Guild_Entry::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Add_IntInt_ReturnValue) == 0x0000E4, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, Temp_int_Array_Index_Variable) == 0x0000E8, "Member 'GuildFindEntry_C_Find_Guild_Entry::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, Temp_int_Array_Index_Variable_1) == 0x0000EC, "Member 'GuildFindEntry_C_Find_Guild_Entry::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, Temp_int_Loop_Counter_Variable_1) == 0x0000F0, "Member 'GuildFindEntry_C_Find_Guild_Entry::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000F4, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, Temp_int_Array_Index_Variable_2) == 0x0000F8, "Member 'GuildFindEntry_C_Find_Guild_Entry::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, Temp_int_Loop_Counter_Variable_2) == 0x0000FC, "Member 'GuildFindEntry_C_Find_Guild_Entry::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Add_IntInt_ReturnValue_2) == 0x000100, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_IsEmpty_ReturnValue) == 0x000104, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_GetGuildComp_ReturnValue) == 0x000108, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_GetPlayerInviteList_ReturnValue) == 0x000110, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_GetPlayerInviteList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_GetPlayerEntryList_ReturnValue) == 0x000120, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_GetPlayerEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Array_Get_Item) == 0x000130, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Array_Get_Item_1) == 0x000210, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0002F0, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0002F1, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Array_Length_ReturnValue) == 0x0002F4, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Array_Length_ReturnValue_1) == 0x0002F8, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Less_IntInt_ReturnValue) == 0x0002FC, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002FD, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_GetGuildEntryList_ReturnValue) == 0x000300, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Array_Length_ReturnValue_2) == 0x000310, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Array_Get_Item_2) == 0x000318, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_Less_IntInt_ReturnValue_2) == 0x0003F8, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildFindEntry_C_Find_Guild_Entry, CallFunc_EqualEqual_StrStr_ReturnValue_2) == 0x0003F9, "Member 'GuildFindEntry_C_Find_Guild_Entry::CallFunc_EqualEqual_StrStr_ReturnValue_2' has a wrong offset!");

// Function GuildFindEntry.GuildFindEntry_C.Set Entry
// 0x00E0 (0x00E0 - 0x0000)
struct GuildFindEntry_C_Set_Entry final
{
public:
	struct FGuildEntryData                        Param_Entry;                                       // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildFindEntry_C_Set_Entry) == 0x000008, "Wrong alignment on GuildFindEntry_C_Set_Entry");
static_assert(sizeof(GuildFindEntry_C_Set_Entry) == 0x0000E0, "Wrong size on GuildFindEntry_C_Set_Entry");
static_assert(offsetof(GuildFindEntry_C_Set_Entry, Param_Entry) == 0x000000, "Member 'GuildFindEntry_C_Set_Entry::Param_Entry' has a wrong offset!");

}

