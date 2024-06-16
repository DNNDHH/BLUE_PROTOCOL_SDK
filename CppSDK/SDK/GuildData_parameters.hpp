#pragma once

 

// Package: GuildData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function GuildData.GuildData_C.OnSelectEntry__DelegateSignature
// 0x00E0 (0x00E0 - 0x0000)
struct GuildData_C_OnSelectEntry__DelegateSignature final
{
public:
	struct FGuildEntryData                        GuildEntry;                                        // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildData_C_OnSelectEntry__DelegateSignature) == 0x000008, "Wrong alignment on GuildData_C_OnSelectEntry__DelegateSignature");
static_assert(sizeof(GuildData_C_OnSelectEntry__DelegateSignature) == 0x0000E0, "Wrong size on GuildData_C_OnSelectEntry__DelegateSignature");
static_assert(offsetof(GuildData_C_OnSelectEntry__DelegateSignature, GuildEntry) == 0x000000, "Member 'GuildData_C_OnSelectEntry__DelegateSignature::GuildEntry' has a wrong offset!");

// Function GuildData.GuildData_C.SetNowTutorialHelpId__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GuildData_C_SetNowTutorialHelpId__DelegateSignature final
{
public:
	class FName                                   TutorialHelpId;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_SetNowTutorialHelpId__DelegateSignature) == 0x000004, "Wrong alignment on GuildData_C_SetNowTutorialHelpId__DelegateSignature");
static_assert(sizeof(GuildData_C_SetNowTutorialHelpId__DelegateSignature) == 0x000008, "Wrong size on GuildData_C_SetNowTutorialHelpId__DelegateSignature");
static_assert(offsetof(GuildData_C_SetNowTutorialHelpId__DelegateSignature, TutorialHelpId) == 0x000000, "Member 'GuildData_C_SetNowTutorialHelpId__DelegateSignature::TutorialHelpId' has a wrong offset!");

// Function GuildData.GuildData_C.ExecuteUbergraph_GuildData
// 0x07D8 (0x07D8 - 0x0000)
struct GuildData_C_ExecuteUbergraph_GuildData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BD1[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0008(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetRestrictText_ReturnValue_1;            // 0x0028(0x0018)()
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData_CS                          CallFunc_GetGuildData_CS_ReturnValue;              // 0x0048(0x00A0)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BD2[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_MainPage;                             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_6;                      // 0x0118(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BD3[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_5;                      // 0x0120(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsAccept;                       // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BD4[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InEntryId;                      // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0138(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BD5[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0150(0x0018)()
	struct FGuildEntryData                        K2Node_ComponentBoundEvent_GuildEntryData;         // 0x0168(0x00E0)()
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0248(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BD6[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x0264(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData                             K2Node_CustomEvent_InGuildData;                    // 0x0268(0x00B8)(ConstParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BD7[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0340(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BD8[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue_1;          // 0x0348(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData_CS                          CallFunc_GetGuildData_CS_ReturnValue_1;            // 0x0350(0x00A0)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC_1;             // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict_1;        // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BD9[0x6];                                     // 0x03F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x03F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BDA[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0410(0x0028)()
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BDB[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BDC[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0468(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BDD[0x7];                                     // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0480(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x04B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x04C0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x04D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x04E8(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x04F8(0x0018)()
	TDelegate<void(int32 RetCode, bool IsAccept, const class FString& InEntryId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0510(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0520(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0530(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x0540(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_5;            // 0x0550(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_ComponentBoundEvent_ButtonId_1;             // 0x0560(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0564(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BDE[0x3];                                     // 0x0565(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_NewText;                // 0x0568(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0580(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_3;               // 0x0590(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0598(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x059C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BDF[0x3];                                     // 0x059D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_ButtonId;               // 0x05A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x05A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BE0[0x3];                                     // 0x05A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_TextId;                         // 0x05A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_6;            // 0x05AC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6BE1[0x4];                                     // 0x05BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_4;               // 0x05C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x05C8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x05CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BE2[0x3];                                     // 0x05CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x05D0(0x00B8)()
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0688(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BE3[0x7];                                     // 0x0689(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0690(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x06A8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x06C0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x06D8(0x0018)()
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x06F0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x06F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BE4[0x3];                                     // 0x06F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x06F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_5;               // 0x0700(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_7;            // 0x0708(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_6;               // 0x0718(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x0720(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGuildInvited_Result;                    // 0x0721(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BE5[0x6];                                     // 0x0722(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0728(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0738(0x0018)()
	TDelegate<void(int32 RetCode, struct FGuildData& InGuildData)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0750(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0760(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0764(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BE6[0x3];                                     // 0x0765(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_7;               // 0x0768(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_9;            // 0x0770(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0780(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x0798(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x07A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BE7[0x7];                                     // 0x07A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x07B0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_3;          // 0x07C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_ExecuteUbergraph_GuildData) == 0x000008, "Wrong alignment on GuildData_C_ExecuteUbergraph_GuildData");
static_assert(sizeof(GuildData_C_ExecuteUbergraph_GuildData) == 0x0007D8, "Wrong size on GuildData_C_ExecuteUbergraph_GuildData");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, EntryPoint) == 0x000000, "Member 'GuildData_C_ExecuteUbergraph_GuildData::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, Temp_bool_Variable) == 0x000005, "Member 'GuildData_C_ExecuteUbergraph_GuildData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000006, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetRestrictText_ReturnValue) == 0x000008, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetSBPlayerController_ReturnValue) == 0x000020, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetRestrictText_ReturnValue_1) == 0x000028, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetRestrictText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildComponent_ReturnValue) == 0x000040, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildData_CS_ReturnValue) == 0x000048, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildData_CS_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x0000E8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x0000E9, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_Event_InBookMarkType) == 0x0000F0, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_Event_MainPage) == 0x000100, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_Event_SubPage) == 0x000104, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildComp_ReturnValue) == 0x000108, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildComp_ReturnValue_1) == 0x000110, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_RetCode_6) == 0x000118, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_RetCode_6' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00011C, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_RetCode_5) == 0x000120, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_RetCode_5' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_IsAccept) == 0x000124, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_IsAccept' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_InEntryId) == 0x000128, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_InEntryId' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetSBRetMessage_ReturnValue) == 0x000138, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000148, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_StringToText_ReturnValue) == 0x000150, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_ComponentBoundEvent_GuildEntryData) == 0x000168, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_ComponentBoundEvent_GuildEntryData' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_ComponentBoundEvent_Text) == 0x000248, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_ComponentBoundEvent_CommitMethod) == 0x000260, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_RetCode_4) == 0x000264, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_InGuildData) == 0x000268, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_InGuildData' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000320, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_TextToString_ReturnValue) == 0x000328, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000338, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_RetCode_3) == 0x000340, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildComponent_ReturnValue_1) == 0x000348, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildData_CS_ReturnValue_1) == 0x000350, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildData_CS_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_CheckXboxPrivacyType_IsUGC_1) == 0x0003F0, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_CheckXboxPrivacyType_IsUGC_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_CheckXboxPrivacyType_IsRestrict_1) == 0x0003F1, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_CheckXboxPrivacyType_IsRestrict_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGameConfigValueString_OutValue) == 0x0003F8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000408, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_MakeStruct_SlateColor) == 0x000410, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000438, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000448, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Concat_StrStr_ReturnValue) == 0x000450, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_Result) == 0x000460, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000468, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000478, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_MakeStruct_SlateColor_1) == 0x000480, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetTextFromAsset_ReturnValue) == 0x0004A8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildComp_ReturnValue_2) == 0x0004B8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0004C0, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0004D8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CreateDelegate_OutputDelegate) == 0x0004E8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0004F8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CreateDelegate_OutputDelegate_1) == 0x000510, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CreateDelegate_OutputDelegate_2) == 0x000520, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CreateDelegate_OutputDelegate_3) == 0x000530, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CreateDelegate_OutputDelegate_4) == 0x000540, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CreateDelegate_OutputDelegate_5) == 0x000550, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_ComponentBoundEvent_ButtonId_1) == 0x000560, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_ComponentBoundEvent_ButtonId_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_SwitchInteger_CmpSuccess) == 0x000564, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_ComponentBoundEvent_NewText) == 0x000568, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_ComponentBoundEvent_NewText' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000580, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildComp_ReturnValue_3) == 0x000590, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildComp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Len_ReturnValue) == 0x000598, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00059C, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_ComponentBoundEvent_ButtonId) == 0x0005A0, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_ComponentBoundEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_SwitchInteger_CmpSuccess_1) == 0x0005A4, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_TextId) == 0x0005A8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_TextId' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CreateDelegate_OutputDelegate_6) == 0x0005AC, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildComp_ReturnValue_4) == 0x0005C0, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildComp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_RetCode_2) == 0x0005C8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0005CC, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildData_ReturnValue) == 0x0005D0, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_SetDateTime_ReturnValue) == 0x000688, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000690, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0006A8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0006C0, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_Select_Default) == 0x0006D8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_RetCode_1) == 0x0006F0, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0006F4, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Create_ReturnValue) == 0x0006F8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildComp_ReturnValue_5) == 0x000700, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildComp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CreateDelegate_OutputDelegate_7) == 0x000708, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildComp_ReturnValue_6) == 0x000718, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildComp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_IsGuildMember_ReturnValue) == 0x000720, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_IsGuildInvited_Result) == 0x000721, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_IsGuildInvited_Result' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000728, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000738, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CreateDelegate_OutputDelegate_8) == 0x000750, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CustomEvent_RetCode) == 0x000760, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000764, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetGuildComp_ReturnValue_7) == 0x000768, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetGuildComp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_CreateDelegate_OutputDelegate_9) == 0x000770, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_GetText_ReturnValue) == 0x000780, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_TextToString_ReturnValue_2) == 0x000798, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, Temp_bool_Variable_1) == 0x0007A8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, K2Node_Select_Default_1) == 0x0007B0, "Member 'GuildData_C_ExecuteUbergraph_GuildData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_ExecuteUbergraph_GuildData, CallFunc_Conv_TextToString_ReturnValue_3) == 0x0007C8, "Member 'GuildData_C_ExecuteUbergraph_GuildData::CallFunc_Conv_TextToString_ReturnValue_3' has a wrong offset!");

// Function GuildData.GuildData_C.On Update Guild Member List
// 0x0004 (0x0004 - 0x0000)
struct GuildData_C_On_Update_Guild_Member_List final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_On_Update_Guild_Member_List) == 0x000004, "Wrong alignment on GuildData_C_On_Update_Guild_Member_List");
static_assert(sizeof(GuildData_C_On_Update_Guild_Member_List) == 0x000004, "Wrong size on GuildData_C_On_Update_Guild_Member_List");
static_assert(offsetof(GuildData_C_On_Update_Guild_Member_List, RetCode) == 0x000000, "Member 'GuildData_C_On_Update_Guild_Member_List::RetCode' has a wrong offset!");

// Function GuildData.GuildData_C.OnMember Denied
// 0x0004 (0x0004 - 0x0000)
struct GuildData_C_OnMember_Denied final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_OnMember_Denied) == 0x000004, "Wrong alignment on GuildData_C_OnMember_Denied");
static_assert(sizeof(GuildData_C_OnMember_Denied) == 0x000004, "Wrong size on GuildData_C_OnMember_Denied");
static_assert(offsetof(GuildData_C_OnMember_Denied, RetCode) == 0x000000, "Member 'GuildData_C_OnMember_Denied::RetCode' has a wrong offset!");

// Function GuildData.GuildData_C.OnMemberAccepted
// 0x0004 (0x0004 - 0x0000)
struct GuildData_C_OnMemberAccepted final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_OnMemberAccepted) == 0x000004, "Wrong alignment on GuildData_C_OnMemberAccepted");
static_assert(sizeof(GuildData_C_OnMemberAccepted) == 0x000004, "Wrong size on GuildData_C_OnMemberAccepted");
static_assert(offsetof(GuildData_C_OnMemberAccepted, RetCode) == 0x000000, "Member 'GuildData_C_OnMemberAccepted::RetCode' has a wrong offset!");

// Function GuildData.GuildData_C.SetTitleTextById
// 0x0004 (0x0004 - 0x0000)
struct GuildData_C_SetTitleTextById final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_SetTitleTextById) == 0x000004, "Wrong alignment on GuildData_C_SetTitleTextById");
static_assert(sizeof(GuildData_C_SetTitleTextById) == 0x000004, "Wrong size on GuildData_C_SetTitleTextById");
static_assert(offsetof(GuildData_C_SetTitleTextById, TextId) == 0x000000, "Member 'GuildData_C_SetTitleTextById::TextId' has a wrong offset!");

// Function GuildData.GuildData_C.BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct GuildData_C_BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on GuildData_C_BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature");
static_assert(sizeof(GuildData_C_BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature) == 0x000004, "Wrong size on GuildData_C_BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature");
static_assert(offsetof(GuildData_C_BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'GuildData_C_BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function GuildData.GuildData_C.BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GuildData_C_BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature final
{
public:
	class FText                                   NewText;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildData_C_BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature) == 0x000008, "Wrong alignment on GuildData_C_BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature");
static_assert(sizeof(GuildData_C_BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature) == 0x000018, "Wrong size on GuildData_C_BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature");
static_assert(offsetof(GuildData_C_BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature, NewText) == 0x000000, "Member 'GuildData_C_BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature::NewText' has a wrong offset!");

// Function GuildData.GuildData_C.BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct GuildData_C_BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on GuildData_C_BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature");
static_assert(sizeof(GuildData_C_BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature) == 0x000004, "Wrong size on GuildData_C_BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature");
static_assert(offsetof(GuildData_C_BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'GuildData_C_BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function GuildData.GuildData_C.OnBootExternalBrowser
// 0x0001 (0x0001 - 0x0000)
struct GuildData_C_OnBootExternalBrowser final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_OnBootExternalBrowser) == 0x000001, "Wrong alignment on GuildData_C_OnBootExternalBrowser");
static_assert(sizeof(GuildData_C_OnBootExternalBrowser) == 0x000001, "Wrong size on GuildData_C_OnBootExternalBrowser");
static_assert(offsetof(GuildData_C_OnBootExternalBrowser, Result) == 0x000000, "Member 'GuildData_C_OnBootExternalBrowser::Result' has a wrong offset!");

// Function GuildData.GuildData_C.OnSearched
// 0x0004 (0x0004 - 0x0000)
struct GuildData_C_OnSearched final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_OnSearched) == 0x000004, "Wrong alignment on GuildData_C_OnSearched");
static_assert(sizeof(GuildData_C_OnSearched) == 0x000004, "Wrong size on GuildData_C_OnSearched");
static_assert(offsetof(GuildData_C_OnSearched, RetCode) == 0x000000, "Member 'GuildData_C_OnSearched::RetCode' has a wrong offset!");

// Function GuildData.GuildData_C.OnGuiluildDatailGeted
// 0x00C0 (0x00C0 - 0x0000)
struct GuildData_C_OnGuiluildDatailGeted final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BE8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             InGuildData;                                       // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GuildData_C_OnGuiluildDatailGeted) == 0x000008, "Wrong alignment on GuildData_C_OnGuiluildDatailGeted");
static_assert(sizeof(GuildData_C_OnGuiluildDatailGeted) == 0x0000C0, "Wrong size on GuildData_C_OnGuiluildDatailGeted");
static_assert(offsetof(GuildData_C_OnGuiluildDatailGeted, RetCode) == 0x000000, "Member 'GuildData_C_OnGuiluildDatailGeted::RetCode' has a wrong offset!");
static_assert(offsetof(GuildData_C_OnGuiluildDatailGeted, InGuildData) == 0x000008, "Member 'GuildData_C_OnGuiluildDatailGeted::InGuildData' has a wrong offset!");

// Function GuildData.GuildData_C.BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct GuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(GuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on GuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(GuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'GuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(GuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'GuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function GuildData.GuildData_C.BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature
// 0x00E0 (0x00E0 - 0x0000)
struct GuildData_C_BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature final
{
public:
	struct FGuildEntryData                        GuildEntryData;                                    // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildData_C_BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature) == 0x000008, "Wrong alignment on GuildData_C_BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature");
static_assert(sizeof(GuildData_C_BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature) == 0x0000E0, "Wrong size on GuildData_C_BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature");
static_assert(offsetof(GuildData_C_BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature, GuildEntryData) == 0x000000, "Member 'GuildData_C_BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature::GuildEntryData' has a wrong offset!");

// Function GuildData.GuildData_C.OnCmplInviteArraignment
// 0x0018 (0x0018 - 0x0000)
struct GuildData_C_OnCmplInviteArraignment final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAccept;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BE9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InEntryId;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_OnCmplInviteArraignment) == 0x000008, "Wrong alignment on GuildData_C_OnCmplInviteArraignment");
static_assert(sizeof(GuildData_C_OnCmplInviteArraignment) == 0x000018, "Wrong size on GuildData_C_OnCmplInviteArraignment");
static_assert(offsetof(GuildData_C_OnCmplInviteArraignment, RetCode) == 0x000000, "Member 'GuildData_C_OnCmplInviteArraignment::RetCode' has a wrong offset!");
static_assert(offsetof(GuildData_C_OnCmplInviteArraignment, IsAccept) == 0x000004, "Member 'GuildData_C_OnCmplInviteArraignment::IsAccept' has a wrong offset!");
static_assert(offsetof(GuildData_C_OnCmplInviteArraignment, InEntryId) == 0x000008, "Member 'GuildData_C_OnCmplInviteArraignment::InEntryId' has a wrong offset!");

// Function GuildData.GuildData_C.OnCompleteRefleshData
// 0x0004 (0x0004 - 0x0000)
struct GuildData_C_OnCompleteRefleshData final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_OnCompleteRefleshData) == 0x000004, "Wrong alignment on GuildData_C_OnCompleteRefleshData");
static_assert(sizeof(GuildData_C_OnCompleteRefleshData) == 0x000004, "Wrong size on GuildData_C_OnCompleteRefleshData");
static_assert(offsetof(GuildData_C_OnCompleteRefleshData, RetCode) == 0x000000, "Member 'GuildData_C_OnCompleteRefleshData::RetCode' has a wrong offset!");

// Function GuildData.GuildData_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct GuildData_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on GuildData_C_OnSubMenuUpdate");
static_assert(sizeof(GuildData_C_OnSubMenuUpdate) == 0x000008, "Wrong size on GuildData_C_OnSubMenuUpdate");
static_assert(offsetof(GuildData_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'GuildData_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(GuildData_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'GuildData_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function GuildData.GuildData_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct GuildData_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on GuildData_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(GuildData_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on GuildData_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(GuildData_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'GuildData_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function GuildData.GuildData_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildData_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildData_C_GetGuildComp");
static_assert(sizeof(GuildData_C_GetGuildComp) == 0x000018, "Wrong size on GuildData_C_GetGuildComp");
static_assert(offsetof(GuildData_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildData_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildData_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildData_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildData.GuildData_C.SetPage
// 0x0050 (0x0050 - 0x0000)
struct GuildData_C_SetPage final
{
public:
	int32                                         PageIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalPageIndex;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetParentWidget_Parent;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNpcGuildJoin_C*                        K2Node_DynamicCast_AsNpc_Guild_Join;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BEA[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNpcGuild_C*                            K2Node_DynamicCast_AsNpc_Guild;                    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BEB[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BEC[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildData_C_SetPage) == 0x000008, "Wrong alignment on GuildData_C_SetPage");
static_assert(sizeof(GuildData_C_SetPage) == 0x000050, "Wrong size on GuildData_C_SetPage");
static_assert(offsetof(GuildData_C_SetPage, PageIndex) == 0x000000, "Member 'GuildData_C_SetPage::PageIndex' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, LocalPageIndex) == 0x000004, "Member 'GuildData_C_SetPage::LocalPageIndex' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, CallFunc_GetParentWidget_Parent) == 0x000008, "Member 'GuildData_C_SetPage::CallFunc_GetParentWidget_Parent' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, K2Node_DynamicCast_AsNpc_Guild_Join) == 0x000010, "Member 'GuildData_C_SetPage::K2Node_DynamicCast_AsNpc_Guild_Join' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GuildData_C_SetPage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, K2Node_DynamicCast_AsNpc_Guild) == 0x000020, "Member 'GuildData_C_SetPage::K2Node_DynamicCast_AsNpc_Guild' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'GuildData_C_SetPage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'GuildData_C_SetPage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000030, "Member 'GuildData_C_SetPage::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, CallFunc_Array_Get_Item) == 0x000034, "Member 'GuildData_C_SetPage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, K2Node_SwitchInteger_CmpSuccess) == 0x00003C, "Member 'GuildData_C_SetPage::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'GuildData_C_SetPage::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000048, "Member 'GuildData_C_SetPage::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_SetPage, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x000049, "Member 'GuildData_C_SetPage::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");

// Function GuildData.GuildData_C.UpdateSubMenuButtonStateByIndex
// 0x0030 (0x0030 - 0x0000)
struct GuildData_C_UpdateSubMenuButtonStateByIndex final
{
public:
	int32                                         SubButtonIndex;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BED[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_HasNewMember_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BEE[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildData_C_UpdateSubMenuButtonStateByIndex) == 0x000008, "Wrong alignment on GuildData_C_UpdateSubMenuButtonStateByIndex");
static_assert(sizeof(GuildData_C_UpdateSubMenuButtonStateByIndex) == 0x000030, "Wrong size on GuildData_C_UpdateSubMenuButtonStateByIndex");
static_assert(offsetof(GuildData_C_UpdateSubMenuButtonStateByIndex, SubButtonIndex) == 0x000000, "Member 'GuildData_C_UpdateSubMenuButtonStateByIndex::SubButtonIndex' has a wrong offset!");
static_assert(offsetof(GuildData_C_UpdateSubMenuButtonStateByIndex, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'GuildData_C_UpdateSubMenuButtonStateByIndex::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildData_C_UpdateSubMenuButtonStateByIndex, CallFunc_GetGuildComp_ReturnValue) == 0x000008, "Member 'GuildData_C_UpdateSubMenuButtonStateByIndex::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_UpdateSubMenuButtonStateByIndex, CallFunc_GetGuildEntryList_ReturnValue) == 0x000010, "Member 'GuildData_C_UpdateSubMenuButtonStateByIndex::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_UpdateSubMenuButtonStateByIndex, CallFunc_HasNewMember_ReturnValue) == 0x000020, "Member 'GuildData_C_UpdateSubMenuButtonStateByIndex::CallFunc_HasNewMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_UpdateSubMenuButtonStateByIndex, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'GuildData_C_UpdateSubMenuButtonStateByIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_UpdateSubMenuButtonStateByIndex, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'GuildData_C_UpdateSubMenuButtonStateByIndex::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function GuildData.GuildData_C.IsGuildInvited
// 0x0028 (0x0028 - 0x0000)
struct GuildData_C_IsGuildInvited final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BEF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetPlayerInviteList_ReturnValue;          // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildData_C_IsGuildInvited) == 0x000008, "Wrong alignment on GuildData_C_IsGuildInvited");
static_assert(sizeof(GuildData_C_IsGuildInvited) == 0x000028, "Wrong size on GuildData_C_IsGuildInvited");
static_assert(offsetof(GuildData_C_IsGuildInvited, Result) == 0x000000, "Member 'GuildData_C_IsGuildInvited::Result' has a wrong offset!");
static_assert(offsetof(GuildData_C_IsGuildInvited, CallFunc_GetGuildComp_ReturnValue) == 0x000008, "Member 'GuildData_C_IsGuildInvited::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_IsGuildInvited, CallFunc_GetPlayerInviteList_ReturnValue) == 0x000010, "Member 'GuildData_C_IsGuildInvited::CallFunc_GetPlayerInviteList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_IsGuildInvited, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'GuildData_C_IsGuildInvited::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildData_C_IsGuildInvited, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'GuildData_C_IsGuildInvited::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function GuildData.GuildData_C.TermRequest
// 0x0002 (0x0002 - 0x0000)
struct GuildData_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildData_C_TermRequest) == 0x000001, "Wrong alignment on GuildData_C_TermRequest");
static_assert(sizeof(GuildData_C_TermRequest) == 0x000002, "Wrong size on GuildData_C_TermRequest");
static_assert(offsetof(GuildData_C_TermRequest, InReason) == 0x000000, "Member 'GuildData_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(GuildData_C_TermRequest, ReturnValue) == 0x000001, "Member 'GuildData_C_TermRequest::ReturnValue' has a wrong offset!");

}

