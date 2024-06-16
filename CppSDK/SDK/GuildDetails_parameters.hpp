#pragma once

 

// Package: GuildDetails

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GuildDetails.GuildDetails_C.EventEdit__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GuildDetails_C_EventEdit__DelegateSignature final
{
public:
	bool                                          Edit;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_EventEdit__DelegateSignature) == 0x000001, "Wrong alignment on GuildDetails_C_EventEdit__DelegateSignature");
static_assert(sizeof(GuildDetails_C_EventEdit__DelegateSignature) == 0x000001, "Wrong size on GuildDetails_C_EventEdit__DelegateSignature");
static_assert(offsetof(GuildDetails_C_EventEdit__DelegateSignature, Edit) == 0x000000, "Member 'GuildDetails_C_EventEdit__DelegateSignature::Edit' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.ExecuteUbergraph_GuildDetails
// 0x0940 (0x0940 - 0x0000)
struct GuildDetails_C_ExecuteUbergraph_GuildDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8009[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_800A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData_CS                          CallFunc_GetGuildData_CS_ReturnValue;              // 0x0018(0x00A0)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_800B[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x00C0(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_800C[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildChangeData                       CallFunc_ToChangeData_ReturnValue;                 // 0x00E0(0x0038)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0118(0x0018)()
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_800D[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<EGuildAttribute>                       CallFunc_GetAttributes_Ret_Attrib;                 // 0x0148(0x0010)(ReferenceParm)
	TArray<ESBGuildActivityTime>                  CallFunc_Get_Times_Ret_Times;                      // 0x0158(0x0010)(ReferenceParm)
	EGuildAcceptType                              Temp_byte_Variable_2;                              // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNgWord_IsValid;                        // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWord_ReturnValue;                    // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_800E[0x5];                                     // 0x016B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0180(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result_3;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_800F[0x6];                                     // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01B8(0x0018)()
	bool                                          CallFunc_EqualEqual_GuildChangeData_GuildData_ReturnValue; // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8010[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_3;               // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGuildPromoter_ReturnValue;              // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8011[0x5];                                     // 0x01EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_4;               // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x01F8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8012[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             K2Node_CustomEvent_InGuildData;                    // 0x0200(0x00B8)(ConstParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8013[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x02C0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02D0(0x0018)()
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x02E8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8014[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_5;               // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8015[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x0300(0x00B8)()
	bool                                          K2Node_CustomEvent_bFromPlayerProfile;             // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8016[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_6;               // 0x03C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGuildAcceptType                              Temp_byte_Variable_3;                              // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_OnButton;                       // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8017[0x6];                                     // 0x03CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InputText;                      // 0x03D0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x03E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x03F8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8018[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0410(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0420(0x0018)()
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_7;               // 0x0438(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildMember_ReturnValue_1;              // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0441(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8019[0x6];                                     // 0x0442(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0448(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0470(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0498(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x04C0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x04E8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x0510(0x0028)()
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0538(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_801A[0x4];                                     // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0540(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0550(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0560(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0578(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_801B[0x7];                                     // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0598(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x05A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x05A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_801C[0x5];                                     // 0x05A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetParentWidget_Parent;                   // 0x05A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetParentWidget_Parent_1;                 // 0x05B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildRecruitmentDetailCard_C*          K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card; // 0x05B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_801D[0x7];                                     // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildRecruitmentDetailCard_C*          K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card_1; // 0x05C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_801E[0x7];                                     // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetParentWidget_Parent_2;                 // 0x05D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x05E0(0x0010)(ZeroConstructor, NoDestructor)
	class UGuildRecruitmentDetailCard_C*          K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card_2; // 0x05F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x05F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_801F[0x7];                                     // 0x05F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildRecruitmentDetailCard_C*          K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card_3; // 0x0600(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0608(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8020[0x3];                                     // 0x0609(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x060C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsAccept;                       // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8021[0x7];                                     // 0x0611(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InEntryId;                      // 0x0618(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0628(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8022[0x4];                                     // 0x062C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0630(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0640(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0658(0x0018)()
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0670(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0678(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x06B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x06C8(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result_2;                       // 0x06E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x06E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8023[0x2];                                     // 0x06E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x06E4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x06F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x06F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x06F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGuildAcceptType                              K2Node_Select_Default;                             // 0x06F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x06F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0708(0x0018)()
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_2;                     // 0x0720(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0728(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0740(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0780(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0790(0x0018)()
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_3;            // 0x07A8(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x07B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x07B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8024[0x2];                                     // 0x07BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode, bool IsAccept, const class FString& InEntryId)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x07BC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8025[0x4];                                     // 0x07CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x07D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x07E0(0x0018)()
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_5;            // 0x07F8(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0808(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0820(0x0040)(HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0860(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8026[0x7];                                     // 0x0861(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0868(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0878(0x0018)()
	TDelegate<void(EDialogResult OnButton, class FText InputText)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0890(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x08A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8027[0x7];                                     // 0x08A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_TextInputDialog_C*                  CallFunc_Create_ReturnValue_3;                     // 0x08A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x08B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsEnable;                     // 0x08B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8028[0x5];                                     // 0x08B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_8;               // 0x08B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_7;            // 0x08C0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode, struct FGuildData& InGuildData)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x08D0(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x08E0(0x0018)(ConstParm)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x08F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0900(0x0020)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0920(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0921(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8029[0x6];                                     // 0x0922(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_4;                     // 0x0928(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_9;            // 0x0930(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GuildDetails_C_ExecuteUbergraph_GuildDetails) == 0x000008, "Wrong alignment on GuildDetails_C_ExecuteUbergraph_GuildDetails");
static_assert(sizeof(GuildDetails_C_ExecuteUbergraph_GuildDetails) == 0x000940, "Wrong size on GuildDetails_C_ExecuteUbergraph_GuildDetails");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, EntryPoint) == 0x000000, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildComp_ReturnValue) == 0x000008, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, Temp_bool_Variable) == 0x000010, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildData_CS_ReturnValue) == 0x000018, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildData_CS_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, Temp_byte_Variable) == 0x0000B8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, Temp_byte_Variable_1) == 0x0000B9, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, Temp_bool_IsClosed_Variable) == 0x0000BA, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_Event_IsDesignTime) == 0x0000BB, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_ComponentBoundEvent_Text_1) == 0x0000C0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_ComponentBoundEvent_CommitMethod) == 0x0000D8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_ToChangeData_ReturnValue) == 0x0000E0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_ToChangeData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetText_ReturnValue) == 0x000118, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_IsChecked_ReturnValue) == 0x000130, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_TextToString_ReturnValue) == 0x000138, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetAttributes_Ret_Attrib) == 0x000148, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetAttributes_Ret_Attrib' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Get_Times_Ret_Times) == 0x000158, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Get_Times_Ret_Times' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, Temp_byte_Variable_2) == 0x000168, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_HasNgWord_IsValid) == 0x000169, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_HasNgWord_IsValid' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_HasNgWord_ReturnValue) == 0x00016A, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_HasNgWord_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetTextFromAsset_ReturnValue) == 0x000170, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue) == 0x000180, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_Result_3) == 0x000198, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000199, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildComp_ReturnValue_1) == 0x0001A0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0001A8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001B8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_GuildChangeData_GuildData_ReturnValue) == 0x0001D0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_GuildChangeData_GuildData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildComp_ReturnValue_2) == 0x0001D8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildComp_ReturnValue_3) == 0x0001E0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildComp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_IsGuildMember_ReturnValue) == 0x0001E8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_IsGuildPromoter_ReturnValue) == 0x0001E9, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_IsGuildPromoter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Not_PreBool_ReturnValue) == 0x0001EA, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildComp_ReturnValue_4) == 0x0001F0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildComp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_RetCode_4) == 0x0001F8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_InGuildData) == 0x000200, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_InGuildData' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002B8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetSBRetMessage_ReturnValue) == 0x0002C0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002D0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_RetCode_3) == 0x0002E8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildComp_ReturnValue_5) == 0x0002F0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildComp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002F8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildData_ReturnValue) == 0x000300, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_bFromPlayerProfile) == 0x0003B8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_bFromPlayerProfile' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildComp_ReturnValue_6) == 0x0003C0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildComp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, Temp_byte_Variable_3) == 0x0003C8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_OnButton) == 0x0003C9, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_OnButton' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_InputText) == 0x0003D0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_InputText' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0003E8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CreateDelegate_OutputDelegate) == 0x0003F8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000408, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000410, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000420, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildComp_ReturnValue_7) == 0x000438, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildComp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_IsGuildMember_ReturnValue_1) == 0x000440, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_IsGuildMember_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Not_PreBool_ReturnValue_1) == 0x000441, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeStruct_SlateColor) == 0x000448, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeStruct_SlateColor_1) == 0x000470, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeStruct_SlateColor_2) == 0x000498, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeStruct_SlateColor_3) == 0x0004C0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeStruct_SlateColor_4) == 0x0004E8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeStruct_SlateColor_5) == 0x000510, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_RetCode_2) == 0x000538, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000540, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000550, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000560, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000578, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000590, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Create_ReturnValue) == 0x000598, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0005A0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_SwitchInteger_CmpSuccess) == 0x0005A1, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0005A2, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetParentWidget_Parent) == 0x0005A8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetParentWidget_Parent' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetParentWidget_Parent_1) == 0x0005B0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetParentWidget_Parent_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card) == 0x0005B8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_DynamicCast_bSuccess) == 0x0005C0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card_1) == 0x0005C8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_DynamicCast_bSuccess_1) == 0x0005D0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetParentWidget_Parent_2) == 0x0005D8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetParentWidget_Parent_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CreateDelegate_OutputDelegate_1) == 0x0005E0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card_2) == 0x0005F0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_DynamicCast_bSuccess_2) == 0x0005F8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card_3) == 0x000600, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_DynamicCast_AsGuild_Recruitment_Detail_Card_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_DynamicCast_bSuccess_3) == 0x000608, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_RetCode_1) == 0x00060C, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_IsAccept) == 0x000610, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_IsAccept' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_InEntryId) == 0x000618, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_InEntryId' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_RetCode) == 0x000628, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000630, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000640, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000658, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Create_ReturnValue_1) == 0x000670, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeStruct_FormatArgumentData) == 0x000678, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeArray_Array) == 0x0006B8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Format_ReturnValue) == 0x0006C8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_Result_2) == 0x0006E0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0006E1, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CreateDelegate_OutputDelegate_2) == 0x0006E4, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, Temp_bool_Variable_1) == 0x0006F4, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_Result_1) == 0x0006F5, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0006F6, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_Select_Default) == 0x0006F7, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x0006F8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000708, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Create_ReturnValue_2) == 0x000720, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000728, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeStruct_FormatArgumentData_1) == 0x000740, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeArray_Array_1) == 0x000780, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Format_ReturnValue_1) == 0x000790, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CreateDelegate_OutputDelegate_3) == 0x0007A8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_Result) == 0x0007B8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0007B9, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CreateDelegate_OutputDelegate_4) == 0x0007BC, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x0007D0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_10) == 0x0007E0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CreateDelegate_OutputDelegate_5) == 0x0007F8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000808, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeStruct_FormatArgumentData_2) == 0x000820, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, Temp_bool_Has_Been_Initd_Variable) == 0x000860, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_MakeArray_Array_2) == 0x000868, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Format_ReturnValue_2) == 0x000878, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CreateDelegate_OutputDelegate_6) == 0x000890, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0008A0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Create_ReturnValue_3) == 0x0008A8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x0008B0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_Select_Default_1) == 0x0008B1, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CustomEvent_InIsEnable) == 0x0008B2, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CustomEvent_InIsEnable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetGuildComp_ReturnValue_8) == 0x0008B8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetGuildComp_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CreateDelegate_OutputDelegate_7) == 0x0008C0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CreateDelegate_OutputDelegate_8) == 0x0008D0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_ComponentBoundEvent_Text) == 0x0008E0, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetSBPlayerState_ReturnValue) == 0x0008F8, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_GetPlatformInfo_ReturnValue) == 0x000900, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000920, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000921, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, CallFunc_Create_ReturnValue_4) == 0x000928, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_ExecuteUbergraph_GuildDetails, K2Node_CreateDelegate_OutputDelegate_9) == 0x000930, "Member 'GuildDetails_C_ExecuteUbergraph_GuildDetails::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GuildDetails_C_BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GuildDetails_C_BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GuildDetails_C_BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(GuildDetails_C_BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GuildDetails_C_BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(GuildDetails_C_BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'GuildDetails_C_BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.SetGuildDetailsCloseBtnEnables
// 0x0001 (0x0001 - 0x0000)
struct GuildDetails_C_SetGuildDetailsCloseBtnEnables final
{
public:
	bool                                          InIsEnable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_SetGuildDetailsCloseBtnEnables) == 0x000001, "Wrong alignment on GuildDetails_C_SetGuildDetailsCloseBtnEnables");
static_assert(sizeof(GuildDetails_C_SetGuildDetailsCloseBtnEnables) == 0x000001, "Wrong size on GuildDetails_C_SetGuildDetailsCloseBtnEnables");
static_assert(offsetof(GuildDetails_C_SetGuildDetailsCloseBtnEnables, InIsEnable) == 0x000000, "Member 'GuildDetails_C_SetGuildDetailsCloseBtnEnables::InIsEnable' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.InviteAcceptDecisionDialog
// 0x0001 (0x0001 - 0x0000)
struct GuildDetails_C_InviteAcceptDecisionDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_InviteAcceptDecisionDialog) == 0x000001, "Wrong alignment on GuildDetails_C_InviteAcceptDecisionDialog");
static_assert(sizeof(GuildDetails_C_InviteAcceptDecisionDialog) == 0x000001, "Wrong size on GuildDetails_C_InviteAcceptDecisionDialog");
static_assert(offsetof(GuildDetails_C_InviteAcceptDecisionDialog, Result) == 0x000000, "Member 'GuildDetails_C_InviteAcceptDecisionDialog::Result' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.InviteRefuseDecisionDialog
// 0x0001 (0x0001 - 0x0000)
struct GuildDetails_C_InviteRefuseDecisionDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_InviteRefuseDecisionDialog) == 0x000001, "Wrong alignment on GuildDetails_C_InviteRefuseDecisionDialog");
static_assert(sizeof(GuildDetails_C_InviteRefuseDecisionDialog) == 0x000001, "Wrong size on GuildDetails_C_InviteRefuseDecisionDialog");
static_assert(offsetof(GuildDetails_C_InviteRefuseDecisionDialog, Result) == 0x000000, "Member 'GuildDetails_C_InviteRefuseDecisionDialog::Result' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.EntryRefuseDecisionDialog
// 0x0001 (0x0001 - 0x0000)
struct GuildDetails_C_EntryRefuseDecisionDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_EntryRefuseDecisionDialog) == 0x000001, "Wrong alignment on GuildDetails_C_EntryRefuseDecisionDialog");
static_assert(sizeof(GuildDetails_C_EntryRefuseDecisionDialog) == 0x000001, "Wrong size on GuildDetails_C_EntryRefuseDecisionDialog");
static_assert(offsetof(GuildDetails_C_EntryRefuseDecisionDialog, Result) == 0x000000, "Member 'GuildDetails_C_EntryRefuseDecisionDialog::Result' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.CustomEvent_1
// 0x0004 (0x0004 - 0x0000)
struct GuildDetails_C_CustomEvent_1 final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_CustomEvent_1) == 0x000004, "Wrong alignment on GuildDetails_C_CustomEvent_1");
static_assert(sizeof(GuildDetails_C_CustomEvent_1) == 0x000004, "Wrong size on GuildDetails_C_CustomEvent_1");
static_assert(offsetof(GuildDetails_C_CustomEvent_1, RetCode) == 0x000000, "Member 'GuildDetails_C_CustomEvent_1::RetCode' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.CustomEvent_0
// 0x0018 (0x0018 - 0x0000)
struct GuildDetails_C_CustomEvent_0 final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAccept;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_802A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InEntryId;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_CustomEvent_0) == 0x000008, "Wrong alignment on GuildDetails_C_CustomEvent_0");
static_assert(sizeof(GuildDetails_C_CustomEvent_0) == 0x000018, "Wrong size on GuildDetails_C_CustomEvent_0");
static_assert(offsetof(GuildDetails_C_CustomEvent_0, RetCode) == 0x000000, "Member 'GuildDetails_C_CustomEvent_0::RetCode' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_CustomEvent_0, IsAccept) == 0x000004, "Member 'GuildDetails_C_CustomEvent_0::IsAccept' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_CustomEvent_0, InEntryId) == 0x000008, "Member 'GuildDetails_C_CustomEvent_0::InEntryId' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.OnCompletedGuildEntry_Event
// 0x0004 (0x0004 - 0x0000)
struct GuildDetails_C_OnCompletedGuildEntry_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_OnCompletedGuildEntry_Event) == 0x000004, "Wrong alignment on GuildDetails_C_OnCompletedGuildEntry_Event");
static_assert(sizeof(GuildDetails_C_OnCompletedGuildEntry_Event) == 0x000004, "Wrong size on GuildDetails_C_OnCompletedGuildEntry_Event");
static_assert(offsetof(GuildDetails_C_OnCompletedGuildEntry_Event, RetCode) == 0x000000, "Member 'GuildDetails_C_OnCompletedGuildEntry_Event::RetCode' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.OnCloseEntry
// 0x0020 (0x0020 - 0x0000)
struct GuildDetails_C_OnCloseEntry final
{
public:
	EDialogResult                                 OnButton;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_802B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InputText;                                         // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildDetails_C_OnCloseEntry) == 0x000008, "Wrong alignment on GuildDetails_C_OnCloseEntry");
static_assert(sizeof(GuildDetails_C_OnCloseEntry) == 0x000020, "Wrong size on GuildDetails_C_OnCloseEntry");
static_assert(offsetof(GuildDetails_C_OnCloseEntry, OnButton) == 0x000000, "Member 'GuildDetails_C_OnCloseEntry::OnButton' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_OnCloseEntry, InputText) == 0x000008, "Member 'GuildDetails_C_OnCloseEntry::InputText' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.Set ShowEntryMode
// 0x0001 (0x0001 - 0x0000)
struct GuildDetails_C_Set_ShowEntryMode final
{
public:
	bool                                          bFromPlayerProfile;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_Set_ShowEntryMode) == 0x000001, "Wrong alignment on GuildDetails_C_Set_ShowEntryMode");
static_assert(sizeof(GuildDetails_C_Set_ShowEntryMode) == 0x000001, "Wrong size on GuildDetails_C_Set_ShowEntryMode");
static_assert(offsetof(GuildDetails_C_Set_ShowEntryMode, bFromPlayerProfile) == 0x000000, "Member 'GuildDetails_C_Set_ShowEntryMode::bFromPlayerProfile' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.OnGuildNameChanged
// 0x0004 (0x0004 - 0x0000)
struct GuildDetails_C_OnGuildNameChanged final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_OnGuildNameChanged) == 0x000004, "Wrong alignment on GuildDetails_C_OnGuildNameChanged");
static_assert(sizeof(GuildDetails_C_OnGuildNameChanged) == 0x000004, "Wrong size on GuildDetails_C_OnGuildNameChanged");
static_assert(offsetof(GuildDetails_C_OnGuildNameChanged, RetCode) == 0x000000, "Member 'GuildDetails_C_OnGuildNameChanged::RetCode' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.OnComplete GuildDataChanged
// 0x00C0 (0x00C0 - 0x0000)
struct GuildDetails_C_OnComplete_GuildDataChanged final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_802C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             InGuildData;                                       // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GuildDetails_C_OnComplete_GuildDataChanged) == 0x000008, "Wrong alignment on GuildDetails_C_OnComplete_GuildDataChanged");
static_assert(sizeof(GuildDetails_C_OnComplete_GuildDataChanged) == 0x0000C0, "Wrong size on GuildDetails_C_OnComplete_GuildDataChanged");
static_assert(offsetof(GuildDetails_C_OnComplete_GuildDataChanged, RetCode) == 0x000000, "Member 'GuildDetails_C_OnComplete_GuildDataChanged::RetCode' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_OnComplete_GuildDataChanged, InGuildData) == 0x000008, "Member 'GuildDetails_C_OnComplete_GuildDataChanged::InGuildData' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.On Change GuildData
// 0x0001 (0x0001 - 0x0000)
struct GuildDetails_C_On_Change_GuildData final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_On_Change_GuildData) == 0x000001, "Wrong alignment on GuildDetails_C_On_Change_GuildData");
static_assert(sizeof(GuildDetails_C_On_Change_GuildData) == 0x000001, "Wrong size on GuildDetails_C_On_Change_GuildData");
static_assert(offsetof(GuildDetails_C_On_Change_GuildData, Result) == 0x000000, "Member 'GuildDetails_C_On_Change_GuildData::Result' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct GuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(GuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on GuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(GuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'GuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'GuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GuildDetails_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_PreConstruct) == 0x000001, "Wrong alignment on GuildDetails_C_PreConstruct");
static_assert(sizeof(GuildDetails_C_PreConstruct) == 0x000001, "Wrong size on GuildDetails_C_PreConstruct");
static_assert(offsetof(GuildDetails_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GuildDetails_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.SetGuildData
// 0x00C0 (0x00C0 - 0x0000)
struct GuildDetails_C_SetGuildData final
{
public:
	struct FGuildData                             Param_GuildData;                                   // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         ButtonsSwitcherIndex;                              // 0x00B8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_SetGuildData) == 0x000008, "Wrong alignment on GuildDetails_C_SetGuildData");
static_assert(sizeof(GuildDetails_C_SetGuildData) == 0x0000C0, "Wrong size on GuildDetails_C_SetGuildData");
static_assert(offsetof(GuildDetails_C_SetGuildData, Param_GuildData) == 0x000000, "Member 'GuildDetails_C_SetGuildData::Param_GuildData' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildData, ButtonsSwitcherIndex) == 0x0000B8, "Member 'GuildDetails_C_SetGuildData::ButtonsSwitcherIndex' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.GenerateAttributes
// 0x0050 (0x0050 - 0x0000)
struct GuildDetails_C_GenerateAttributes final
{
public:
	int32                                         AddCount;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_802D[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_802E[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_802F[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildAttributeIconBtn_C*               CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_GenerateAttributes) == 0x000008, "Wrong alignment on GuildDetails_C_GenerateAttributes");
static_assert(sizeof(GuildDetails_C_GenerateAttributes) == 0x000050, "Wrong size on GuildDetails_C_GenerateAttributes");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, AddCount) == 0x000000, "Member 'GuildDetails_C_GenerateAttributes::AddCount' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, Temp_int_Variable) == 0x000004, "Member 'GuildDetails_C_GenerateAttributes::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, Temp_int_Variable_1) == 0x000008, "Member 'GuildDetails_C_GenerateAttributes::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000015, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000016, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, Temp_int_Variable_2) == 0x00001C, "Member 'GuildDetails_C_GenerateAttributes::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_MakeLiteralInt_ReturnValue) == 0x000020, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000024, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_Percent_IntInt_ReturnValue) == 0x000030, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_Divide_IntInt_ReturnValue) == 0x000034, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_Create_ReturnValue) == 0x000038, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000040, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateAttributes, CallFunc_Array_Contains_ReturnValue) == 0x000048, "Member 'GuildDetails_C_GenerateAttributes::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.GenerateTimes
// 0x0050 (0x0050 - 0x0000)
struct GuildDetails_C_GenerateTimes final
{
public:
	int32                                         AddCount;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8030[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8031[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildTimeIconBtn_C*                    CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_GenerateTimes) == 0x000008, "Wrong alignment on GuildDetails_C_GenerateTimes");
static_assert(sizeof(GuildDetails_C_GenerateTimes) == 0x000050, "Wrong size on GuildDetails_C_GenerateTimes");
static_assert(offsetof(GuildDetails_C_GenerateTimes, AddCount) == 0x000000, "Member 'GuildDetails_C_GenerateTimes::AddCount' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, Temp_int_Variable) == 0x000004, "Member 'GuildDetails_C_GenerateTimes::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, Temp_int_Variable_1) == 0x000008, "Member 'GuildDetails_C_GenerateTimes::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'GuildDetails_C_GenerateTimes::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'GuildDetails_C_GenerateTimes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'GuildDetails_C_GenerateTimes::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000015, "Member 'GuildDetails_C_GenerateTimes::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000016, "Member 'GuildDetails_C_GenerateTimes::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000017, "Member 'GuildDetails_C_GenerateTimes::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'GuildDetails_C_GenerateTimes::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, Temp_int_Variable_2) == 0x00001C, "Member 'GuildDetails_C_GenerateTimes::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_MakeLiteralInt_ReturnValue) == 0x000020, "Member 'GuildDetails_C_GenerateTimes::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000024, "Member 'GuildDetails_C_GenerateTimes::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'GuildDetails_C_GenerateTimes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'GuildDetails_C_GenerateTimes::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_Percent_IntInt_ReturnValue) == 0x000030, "Member 'GuildDetails_C_GenerateTimes::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_Divide_IntInt_ReturnValue) == 0x000034, "Member 'GuildDetails_C_GenerateTimes::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_Create_ReturnValue) == 0x000038, "Member 'GuildDetails_C_GenerateTimes::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000040, "Member 'GuildDetails_C_GenerateTimes::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GenerateTimes, CallFunc_Array_Contains_ReturnValue) == 0x000048, "Member 'GuildDetails_C_GenerateTimes::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.Set EditMode Attributes
// 0x0048 (0x0048 - 0x0000)
struct GuildDetails_C_Set_EditMode_Attributes final
{
public:
	bool                                          Param_bisEditMode;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8032[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8033[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8034[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildAttributeIconBtn_C*               K2Node_DynamicCast_AsGuild_Attribute_Icon_Btn;     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_Set_EditMode_Attributes) == 0x000008, "Wrong alignment on GuildDetails_C_Set_EditMode_Attributes");
static_assert(sizeof(GuildDetails_C_Set_EditMode_Attributes) == 0x000048, "Wrong size on GuildDetails_C_Set_EditMode_Attributes");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Attributes, Param_bisEditMode) == 0x000000, "Member 'GuildDetails_C_Set_EditMode_Attributes::Param_bisEditMode' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Attributes, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GuildDetails_C_Set_EditMode_Attributes::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Attributes, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GuildDetails_C_Set_EditMode_Attributes::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Attributes, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GuildDetails_C_Set_EditMode_Attributes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Attributes, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'GuildDetails_C_Set_EditMode_Attributes::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Attributes, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'GuildDetails_C_Set_EditMode_Attributes::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Attributes, CallFunc_Array_Get_Item) == 0x000028, "Member 'GuildDetails_C_Set_EditMode_Attributes::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Attributes, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'GuildDetails_C_Set_EditMode_Attributes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Attributes, K2Node_DynamicCast_AsGuild_Attribute_Icon_Btn) == 0x000038, "Member 'GuildDetails_C_Set_EditMode_Attributes::K2Node_DynamicCast_AsGuild_Attribute_Icon_Btn' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Attributes, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'GuildDetails_C_Set_EditMode_Attributes::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.Set EditMode Times
// 0x0048 (0x0048 - 0x0000)
struct GuildDetails_C_Set_EditMode_Times final
{
public:
	bool                                          Param_bisEditMode;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8035[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8036[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8037[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildTimeIconBtn_C*                    K2Node_DynamicCast_AsGuild_Time_Icon_Btn;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_Set_EditMode_Times) == 0x000008, "Wrong alignment on GuildDetails_C_Set_EditMode_Times");
static_assert(sizeof(GuildDetails_C_Set_EditMode_Times) == 0x000048, "Wrong size on GuildDetails_C_Set_EditMode_Times");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Times, Param_bisEditMode) == 0x000000, "Member 'GuildDetails_C_Set_EditMode_Times::Param_bisEditMode' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Times, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GuildDetails_C_Set_EditMode_Times::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Times, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GuildDetails_C_Set_EditMode_Times::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Times, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GuildDetails_C_Set_EditMode_Times::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Times, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'GuildDetails_C_Set_EditMode_Times::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Times, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'GuildDetails_C_Set_EditMode_Times::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Times, CallFunc_Array_Get_Item) == 0x000028, "Member 'GuildDetails_C_Set_EditMode_Times::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Times, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'GuildDetails_C_Set_EditMode_Times::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Times, K2Node_DynamicCast_AsGuild_Time_Icon_Btn) == 0x000038, "Member 'GuildDetails_C_Set_EditMode_Times::K2Node_DynamicCast_AsGuild_Time_Icon_Btn' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_EditMode_Times, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'GuildDetails_C_Set_EditMode_Times::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildDetails_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildDetails_C_GetGuildComp");
static_assert(sizeof(GuildDetails_C_GetGuildComp) == 0x000018, "Wrong size on GuildDetails_C_GetGuildComp");
static_assert(offsetof(GuildDetails_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildDetails_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildDetails_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildDetails_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.GetAttributes
// 0x0060 (0x0060 - 0x0000)
struct GuildDetails_C_GetAttributes final
{
public:
	TArray<EGuildAttribute>                       Ret_Attrib;                                        // 0x0000(0x0010)(Parm, OutParm)
	TArray<EGuildAttribute>                       Attrib;                                            // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8038[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8039[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildAttributeIconBtn_C*               K2Node_DynamicCast_AsGuild_Attribute_Icon_Btn;     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck;                          // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGuildAttribute                               CallFunc_GetAttrib_Attribute;                      // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_GetAttributes) == 0x000008, "Wrong alignment on GuildDetails_C_GetAttributes");
static_assert(sizeof(GuildDetails_C_GetAttributes) == 0x000060, "Wrong size on GuildDetails_C_GetAttributes");
static_assert(offsetof(GuildDetails_C_GetAttributes, Ret_Attrib) == 0x000000, "Member 'GuildDetails_C_GetAttributes::Ret_Attrib' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, Attrib) == 0x000010, "Member 'GuildDetails_C_GetAttributes::Attrib' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, Temp_int_Array_Index_Variable) == 0x000020, "Member 'GuildDetails_C_GetAttributes::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'GuildDetails_C_GetAttributes::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'GuildDetails_C_GetAttributes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, CallFunc_GetAllChildren_ReturnValue) == 0x000030, "Member 'GuildDetails_C_GetAttributes::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, CallFunc_Array_Get_Item) == 0x000040, "Member 'GuildDetails_C_GetAttributes::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'GuildDetails_C_GetAttributes::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, K2Node_DynamicCast_AsGuild_Attribute_Icon_Btn) == 0x000050, "Member 'GuildDetails_C_GetAttributes::K2Node_DynamicCast_AsGuild_Attribute_Icon_Btn' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GuildDetails_C_GetAttributes::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, CallFunc_Less_IntInt_ReturnValue) == 0x000059, "Member 'GuildDetails_C_GetAttributes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, CallFunc_IsCheck_IsCheck) == 0x00005A, "Member 'GuildDetails_C_GetAttributes::CallFunc_IsCheck_IsCheck' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, CallFunc_GetAttrib_Attribute) == 0x00005B, "Member 'GuildDetails_C_GetAttributes::CallFunc_GetAttrib_Attribute' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_GetAttributes, CallFunc_Array_Add_ReturnValue) == 0x00005C, "Member 'GuildDetails_C_GetAttributes::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.Get Times
// 0x0068 (0x0068 - 0x0000)
struct GuildDetails_C_Get_Times final
{
public:
	TArray<ESBGuildActivityTime>                  Ret_Times;                                         // 0x0000(0x0010)(Parm, OutParm)
	TArray<ESBGuildActivityTime>                  Times;                                             // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_803A[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_803B[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_803C[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildTimeIconBtn_C*                    K2Node_DynamicCast_AsGuild_Time_Icon_Btn;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBGuildActivityTime                          CallFunc_GetTime_Time;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCheck_IsCheck;                          // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_803D[0x1];                                     // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_Get_Times) == 0x000008, "Wrong alignment on GuildDetails_C_Get_Times");
static_assert(sizeof(GuildDetails_C_Get_Times) == 0x000068, "Wrong size on GuildDetails_C_Get_Times");
static_assert(offsetof(GuildDetails_C_Get_Times, Ret_Times) == 0x000000, "Member 'GuildDetails_C_Get_Times::Ret_Times' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, Times) == 0x000010, "Member 'GuildDetails_C_Get_Times::Times' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, Temp_int_Array_Index_Variable) == 0x000020, "Member 'GuildDetails_C_Get_Times::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'GuildDetails_C_Get_Times::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'GuildDetails_C_Get_Times::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, CallFunc_GetAllChildren_ReturnValue) == 0x000030, "Member 'GuildDetails_C_Get_Times::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'GuildDetails_C_Get_Times::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, CallFunc_Array_Get_Item) == 0x000048, "Member 'GuildDetails_C_Get_Times::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'GuildDetails_C_Get_Times::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, K2Node_DynamicCast_AsGuild_Time_Icon_Btn) == 0x000058, "Member 'GuildDetails_C_Get_Times::K2Node_DynamicCast_AsGuild_Time_Icon_Btn' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'GuildDetails_C_Get_Times::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, CallFunc_GetTime_Time) == 0x000061, "Member 'GuildDetails_C_Get_Times::CallFunc_GetTime_Time' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, CallFunc_IsCheck_IsCheck) == 0x000062, "Member 'GuildDetails_C_Get_Times::CallFunc_IsCheck_IsCheck' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Get_Times, CallFunc_Array_Add_ReturnValue) == 0x000064, "Member 'GuildDetails_C_Get_Times::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.SetGuildNameInfos
// 0x00B8 (0x00B8 - 0x0000)
struct GuildDetails_C_SetGuildNameInfos final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_803E[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0008(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_803F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue_1;            // 0x0028(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8040[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0078(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0090(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_SetGuildNameInfos) == 0x000008, "Wrong alignment on GuildDetails_C_SetGuildNameInfos");
static_assert(sizeof(GuildDetails_C_SetGuildNameInfos) == 0x0000B8, "Wrong size on GuildDetails_C_SetGuildNameInfos");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'GuildDetails_C_SetGuildNameInfos::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, Temp_bool_Variable) == 0x000001, "Member 'GuildDetails_C_SetGuildNameInfos::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'GuildDetails_C_SetGuildNameInfos::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, CallFunc_GetRestrictText_ReturnValue) == 0x000008, "Member 'GuildDetails_C_SetGuildNameInfos::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, Temp_bool_Variable_1) == 0x000020, "Member 'GuildDetails_C_SetGuildNameInfos::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, CallFunc_GetRestrictText_ReturnValue_1) == 0x000028, "Member 'GuildDetails_C_SetGuildNameInfos::CallFunc_GetRestrictText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x000040, "Member 'GuildDetails_C_SetGuildNameInfos::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x000041, "Member 'GuildDetails_C_SetGuildNameInfos::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'GuildDetails_C_SetGuildNameInfos::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'GuildDetails_C_SetGuildNameInfos::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, K2Node_Select_Default) == 0x000078, "Member 'GuildDetails_C_SetGuildNameInfos::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, K2Node_Select_Default_1) == 0x000090, "Member 'GuildDetails_C_SetGuildNameInfos::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildNameInfos, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A8, "Member 'GuildDetails_C_SetGuildNameInfos::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.SetGuildIdInfos
// 0x0020 (0x0020 - 0x0000)
struct GuildDetails_C_SetGuildIdInfos final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8041[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
};
static_assert(alignof(GuildDetails_C_SetGuildIdInfos) == 0x000008, "Wrong alignment on GuildDetails_C_SetGuildIdInfos");
static_assert(sizeof(GuildDetails_C_SetGuildIdInfos) == 0x000020, "Wrong size on GuildDetails_C_SetGuildIdInfos");
static_assert(offsetof(GuildDetails_C_SetGuildIdInfos, Temp_bool_Variable) == 0x000000, "Member 'GuildDetails_C_SetGuildIdInfos::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildIdInfos, Temp_byte_Variable) == 0x000001, "Member 'GuildDetails_C_SetGuildIdInfos::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildIdInfos, Temp_byte_Variable_1) == 0x000002, "Member 'GuildDetails_C_SetGuildIdInfos::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildIdInfos, K2Node_Select_Default) == 0x000003, "Member 'GuildDetails_C_SetGuildIdInfos::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildIdInfos, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'GuildDetails_C_SetGuildIdInfos::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.SetGuildComment
// 0x0050 (0x0050 - 0x0000)
struct GuildDetails_C_SetGuildComment final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8042[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0038(0x0018)()
};
static_assert(alignof(GuildDetails_C_SetGuildComment) == 0x000008, "Wrong alignment on GuildDetails_C_SetGuildComment");
static_assert(sizeof(GuildDetails_C_SetGuildComment) == 0x000050, "Wrong size on GuildDetails_C_SetGuildComment");
static_assert(offsetof(GuildDetails_C_SetGuildComment, Temp_bool_Variable) == 0x000000, "Member 'GuildDetails_C_SetGuildComment::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildComment, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'GuildDetails_C_SetGuildComment::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildComment, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x000002, "Member 'GuildDetails_C_SetGuildComment::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildComment, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x000003, "Member 'GuildDetails_C_SetGuildComment::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildComment, CallFunc_GetRestrictText_ReturnValue) == 0x000008, "Member 'GuildDetails_C_SetGuildComment::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildComment, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GuildDetails_C_SetGuildComment::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildComment, K2Node_Select_Default) == 0x000038, "Member 'GuildDetails_C_SetGuildComment::K2Node_Select_Default' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.Set Guild Leader Infos
// 0x0080 (0x0080 - 0x0000)
struct GuildDetails_C_Set_Guild_Leader_Infos final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8043[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8044[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0050(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0068(0x0018)()
};
static_assert(alignof(GuildDetails_C_Set_Guild_Leader_Infos) == 0x000008, "Wrong alignment on GuildDetails_C_Set_Guild_Leader_Infos");
static_assert(sizeof(GuildDetails_C_Set_Guild_Leader_Infos) == 0x000080, "Wrong size on GuildDetails_C_Set_Guild_Leader_Infos");
static_assert(offsetof(GuildDetails_C_Set_Guild_Leader_Infos, Temp_bool_Variable) == 0x000000, "Member 'GuildDetails_C_Set_Guild_Leader_Infos::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_Guild_Leader_Infos, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'GuildDetails_C_Set_Guild_Leader_Infos::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_Guild_Leader_Infos, CallFunc_GetRestrictText_ReturnValue) == 0x000008, "Member 'GuildDetails_C_Set_Guild_Leader_Infos::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_Guild_Leader_Infos, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GuildDetails_C_Set_Guild_Leader_Infos::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_Guild_Leader_Infos, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x000038, "Member 'GuildDetails_C_Set_Guild_Leader_Infos::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_Guild_Leader_Infos, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x000039, "Member 'GuildDetails_C_Set_Guild_Leader_Infos::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_Guild_Leader_Infos, CallFunc_GetPlayerName_ReturnValue) == 0x000040, "Member 'GuildDetails_C_Set_Guild_Leader_Infos::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_Guild_Leader_Infos, K2Node_Select_Default) == 0x000050, "Member 'GuildDetails_C_Set_Guild_Leader_Infos::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_Set_Guild_Leader_Infos, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000068, "Member 'GuildDetails_C_Set_Guild_Leader_Infos::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.SetGuildAcceptTypeInfos
// 0x0030 (0x0030 - 0x0000)
struct GuildDetails_C_SetGuildAcceptTypeInfos final
{
public:
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGuildId_ReturnValue;                   // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAbleToSendGuildEntry_bResult;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8045[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_SetGuildAcceptTypeInfos) == 0x000008, "Wrong alignment on GuildDetails_C_SetGuildAcceptTypeInfos");
static_assert(sizeof(GuildDetails_C_SetGuildAcceptTypeInfos) == 0x000030, "Wrong size on GuildDetails_C_SetGuildAcceptTypeInfos");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_GetGuildComp_ReturnValue) == 0x000000, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_GetGuildId_ReturnValue) == 0x000008, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_GetGuildId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000018, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_IsAbleToSendGuildEntry_bResult) == 0x000019, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_IsAbleToSendGuildEntry_bResult' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00001B, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001C, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_BooleanAND_ReturnValue) == 0x00001D, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_Not_PreBool_ReturnValue_2) == 0x00001E, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_GetGuildComp_ReturnValue_1) == 0x000020, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_IsGuildMember_ReturnValue) == 0x000028, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildAcceptTypeInfos, CallFunc_BooleanOR_ReturnValue) == 0x000029, "Member 'GuildDetails_C_SetGuildAcceptTypeInfos::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.SetGuildExperienceInfos
// 0x0078 (0x0078 - 0x0000)
struct GuildDetails_C_SetGuildExperienceInfos final
{
public:
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8046[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0040(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8047[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetGuildRankFromExp_RemainExp;         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetGuildRankFromExp_NeedExp;           // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetGuildRankFromExp_ReturnValue;       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_SetGuildExperienceInfos) == 0x000008, "Wrong alignment on GuildDetails_C_SetGuildExperienceInfos");
static_assert(sizeof(GuildDetails_C_SetGuildExperienceInfos) == 0x000078, "Wrong size on GuildDetails_C_SetGuildExperienceInfos");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000000, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000020, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000040, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_GetMasterDataManager_IsValid) == 0x000058, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_GetMasterDataManager_ReturnValue) == 0x000060, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_BP_GetGuildRankFromExp_RemainExp) == 0x000068, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_BP_GetGuildRankFromExp_RemainExp' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_BP_GetGuildRankFromExp_NeedExp) == 0x00006C, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_BP_GetGuildRankFromExp_NeedExp' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildExperienceInfos, CallFunc_BP_GetGuildRankFromExp_ReturnValue) == 0x000070, "Member 'GuildDetails_C_SetGuildExperienceInfos::CallFunc_BP_GetGuildRankFromExp_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.SetGuildMemberInfos
// 0x0030 (0x0030 - 0x0000)
struct GuildDetails_C_SetGuildMemberInfos final
{
public:
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0000(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0018(0x0018)()
};
static_assert(alignof(GuildDetails_C_SetGuildMemberInfos) == 0x000008, "Wrong alignment on GuildDetails_C_SetGuildMemberInfos");
static_assert(sizeof(GuildDetails_C_SetGuildMemberInfos) == 0x000030, "Wrong size on GuildDetails_C_SetGuildMemberInfos");
static_assert(offsetof(GuildDetails_C_SetGuildMemberInfos, CallFunc_Conv_IntToText_ReturnValue) == 0x000000, "Member 'GuildDetails_C_SetGuildMemberInfos::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildMemberInfos, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000018, "Member 'GuildDetails_C_SetGuildMemberInfos::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.SetGuildTimeInfos
// 0x0020 (0x0020 - 0x0000)
struct GuildDetails_C_SetGuildTimeInfos final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8048[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              K2Node_Select_Default;                             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetails_C_SetGuildTimeInfos) == 0x000008, "Wrong alignment on GuildDetails_C_SetGuildTimeInfos");
static_assert(sizeof(GuildDetails_C_SetGuildTimeInfos) == 0x000020, "Wrong size on GuildDetails_C_SetGuildTimeInfos");
static_assert(offsetof(GuildDetails_C_SetGuildTimeInfos, Temp_bool_Variable) == 0x000000, "Member 'GuildDetails_C_SetGuildTimeInfos::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildTimeInfos, CallFunc_UtcNow_ReturnValue) == 0x000008, "Member 'GuildDetails_C_SetGuildTimeInfos::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildTimeInfos, K2Node_Select_Default) == 0x000010, "Member 'GuildDetails_C_SetGuildTimeInfos::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_SetGuildTimeInfos, CallFunc_SetDateTime_ReturnValue) == 0x000018, "Member 'GuildDetails_C_SetGuildTimeInfos::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.CheckGuildComment
// 0x0038 (0x0038 - 0x0000)
struct GuildDetails_C_CheckGuildComment final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bGuildCommentNG;                                   // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8049[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNgWordWithTarget_IsValid;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_CheckGuildComment) == 0x000008, "Wrong alignment on GuildDetails_C_CheckGuildComment");
static_assert(sizeof(GuildDetails_C_CheckGuildComment) == 0x000038, "Wrong size on GuildDetails_C_CheckGuildComment");
static_assert(offsetof(GuildDetails_C_CheckGuildComment, InText) == 0x000000, "Member 'GuildDetails_C_CheckGuildComment::InText' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_CheckGuildComment, bGuildCommentNG) == 0x000018, "Member 'GuildDetails_C_CheckGuildComment::bGuildCommentNG' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_CheckGuildComment, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'GuildDetails_C_CheckGuildComment::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_CheckGuildComment, CallFunc_HasNgWordWithTarget_IsValid) == 0x000030, "Member 'GuildDetails_C_CheckGuildComment::CallFunc_HasNgWordWithTarget_IsValid' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_CheckGuildComment, CallFunc_HasNgWordWithTarget_ReturnValue) == 0x000031, "Member 'GuildDetails_C_CheckGuildComment::CallFunc_HasNgWordWithTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_CheckGuildComment, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'GuildDetails_C_CheckGuildComment::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function GuildDetails.GuildDetails_C.IsAbleToSendGuildEntry
// 0x0040 (0x0040 - 0x0000)
struct GuildDetails_C_IsAbleToSendGuildEntry final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_804A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetPlayerEntryList_ReturnValue;           // 0x0010(0x0010)(ReferenceParm)
	TArray<struct FGuildEntryData>                CallFunc_GetPlayerInviteList_ReturnValue;          // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetails_C_IsAbleToSendGuildEntry) == 0x000008, "Wrong alignment on GuildDetails_C_IsAbleToSendGuildEntry");
static_assert(sizeof(GuildDetails_C_IsAbleToSendGuildEntry) == 0x000040, "Wrong size on GuildDetails_C_IsAbleToSendGuildEntry");
static_assert(offsetof(GuildDetails_C_IsAbleToSendGuildEntry, bResult) == 0x000000, "Member 'GuildDetails_C_IsAbleToSendGuildEntry::bResult' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_IsAbleToSendGuildEntry, CallFunc_GetGuildComp_ReturnValue) == 0x000008, "Member 'GuildDetails_C_IsAbleToSendGuildEntry::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_IsAbleToSendGuildEntry, CallFunc_GetPlayerEntryList_ReturnValue) == 0x000010, "Member 'GuildDetails_C_IsAbleToSendGuildEntry::CallFunc_GetPlayerEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_IsAbleToSendGuildEntry, CallFunc_GetPlayerInviteList_ReturnValue) == 0x000020, "Member 'GuildDetails_C_IsAbleToSendGuildEntry::CallFunc_GetPlayerInviteList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_IsAbleToSendGuildEntry, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'GuildDetails_C_IsAbleToSendGuildEntry::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_IsAbleToSendGuildEntry, CallFunc_Array_Length_ReturnValue_1) == 0x000034, "Member 'GuildDetails_C_IsAbleToSendGuildEntry::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_IsAbleToSendGuildEntry, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'GuildDetails_C_IsAbleToSendGuildEntry::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_IsAbleToSendGuildEntry, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000039, "Member 'GuildDetails_C_IsAbleToSendGuildEntry::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildDetails_C_IsAbleToSendGuildEntry, CallFunc_BooleanOR_ReturnValue) == 0x00003A, "Member 'GuildDetails_C_IsAbleToSendGuildEntry::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

