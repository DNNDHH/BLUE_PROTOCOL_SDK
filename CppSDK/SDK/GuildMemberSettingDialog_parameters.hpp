#pragma once

 

// Package: GuildMemberSettingDialog

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.ExecuteUbergraph_GuildMemberSettingDialog
// 0x0850 (0x0850 - 0x0000)
struct GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5479[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result_4;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_547A[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_547B[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0070(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0098(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result_3;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_547C[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_547D[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00E0(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result_2;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_547E[0x5];                                     // 0x00FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0100(0x0018)()
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0120(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0138(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_3;               // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0190(0x0018)()
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x01A8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_547F[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSelectedOption_ReturnValue;            // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EGuildMemberRole                              CallFunc_Map_Find_Value;                           // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5480[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_3;            // 0x01D0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x01E0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGuildMemberRole                              CallFunc_Map_Find_Value_1;                         // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0203(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck;                          // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck_1;                        // 0x0205(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5481[0x2];                                     // 0x0206(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_4;               // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_WithDraw_ReturnValue;             // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5482[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0228(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5483[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildMemberData                       K2Node_CustomEvent_MemberData;                     // 0x0248(0x00D8)()
	bool                                          CallFunc_IsCheck_IsCheck_2;                        // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5484[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_5;            // 0x0324(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck_3;                        // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck_4;                        // 0x0335(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck_5;                        // 0x0336(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5485[0x1];                                     // 0x0337(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_2;                     // 0x0338(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_6;            // 0x0340(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck_6;                        // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck_7;                        // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5486[0x6];                                     // 0x0352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5487[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0370(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5488[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_5;               // 0x0390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_3;                     // 0x0398(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x03B8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5489[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x03C0(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x07B8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_548A[0x4];                                     // 0x07BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x07C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x07C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_548B[0x7];                                     // 0x07C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x07D0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x07E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x07E8(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0800(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0808(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_548C[0x7];                                     // 0x0811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_1;           // 0x0818(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0820(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0830(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0831(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_548D[0x2];                                     // 0x0832(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0834(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_548E[0x4];                                     // 0x0844(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_4;                     // 0x0848(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog");
static_assert(sizeof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog) == 0x000850, "Wrong size on GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, EntryPoint) == 0x000000, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, Temp_bool_Variable) == 0x000004, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CustomEvent_Result_4) == 0x000050, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CreateDelegate_OutputDelegate_2) == 0x000054, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000064, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetGuildComp_ReturnValue) == 0x000068, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000070, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000088, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000098, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CustomEvent_Result_3) == 0x0000B0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Create_ReturnValue) == 0x0000B8, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000C0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetGuildComp_ReturnValue_1) == 0x0000C8, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000D0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000E0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CustomEvent_Result_2) == 0x0000F8, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000F9, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000FA, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetRestrictText_ReturnValue) == 0x000100, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetGuildComp_ReturnValue_2) == 0x000118, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_Select_Default) == 0x000120, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_MakeStruct_FormatArgumentData) == 0x000138, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_MakeArray_Array) == 0x000178, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetGuildComp_ReturnValue_3) == 0x000188, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetGuildComp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Format_ReturnValue) == 0x000190, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CustomEvent_RetCode_1) == 0x0001A8, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001AC, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetSelectedOption_ReturnValue) == 0x0001B0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetSelectedOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Map_Find_Value) == 0x0001C0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Map_Find_ReturnValue) == 0x0001C1, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CustomEvent_Result_1) == 0x0001C2, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0001C3, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Create_ReturnValue_1) == 0x0001C8, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001D0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001E0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_ComponentBoundEvent_SelectedItem) == 0x0001F0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_ComponentBoundEvent_SelectionType) == 0x000200, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Map_Find_Value_1) == 0x000201, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Map_Find_ReturnValue_1) == 0x000202, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000203, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_IsCheck_IsCheck) == 0x000204, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_IsCheck_IsCheck' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_IsCheck_IsCheck_1) == 0x000205, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_IsCheck_IsCheck_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetGuildComp_ReturnValue_4) == 0x000208, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetGuildComp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Request_WithDraw_ReturnValue) == 0x000210, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Request_WithDraw_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000218, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000228, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_Event_IsDesignTime) == 0x000240, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CustomEvent_MemberData) == 0x000248, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CustomEvent_MemberData' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_IsCheck_IsCheck_2) == 0x000320, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_IsCheck_IsCheck_2' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CreateDelegate_OutputDelegate_5) == 0x000324, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_IsCheck_IsCheck_3) == 0x000334, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_IsCheck_IsCheck_3' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_IsCheck_IsCheck_4) == 0x000335, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_IsCheck_IsCheck_4' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_IsCheck_IsCheck_5) == 0x000336, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_IsCheck_IsCheck_5' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Create_ReturnValue_2) == 0x000338, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CreateDelegate_OutputDelegate_6) == 0x000340, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_IsCheck_IsCheck_6) == 0x000350, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_IsCheck_IsCheck_6' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_IsCheck_IsCheck_7) == 0x000351, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_IsCheck_IsCheck_7' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000358, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CustomEvent_Result) == 0x000368, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000370, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000388, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetGuildComp_ReturnValue_5) == 0x000390, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetGuildComp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Create_ReturnValue_3) == 0x000398, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_PlayAnimation_ReturnValue) == 0x0003A0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_PlayAnimation_ReturnValue_1) == 0x0003A8, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetPlayerController_ReturnValue) == 0x0003B0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CustomEvent_bWasSuccessful) == 0x0003B8, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x0003C0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CustomEvent_RetCode) == 0x0007B8, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0007C0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_DynamicCast_bSuccess) == 0x0007C8, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetSBRetMessage_ReturnValue) == 0x0007D0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetConcernedList_ReturnValue) == 0x0007E0, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0007E8, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetPlayerController_ReturnValue_1) == 0x000800, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000808, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_DynamicCast_bSuccess_1) == 0x000810, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_GetConcernedList_ReturnValue_1) == 0x000818, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_GetConcernedList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CreateDelegate_OutputDelegate_7) == 0x000820, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_IsVisible_ReturnValue) == 0x000830, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Not_PreBool_ReturnValue) == 0x000831, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, K2Node_CreateDelegate_OutputDelegate_8) == 0x000834, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog, CallFunc_Create_ReturnValue_4) == 0x000848, "Member 'GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog::CallFunc_Create_ReturnValue_4' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenReportUI_Event
// 0x0408 (0x0408 - 0x0000)
struct GuildMemberSettingDialog_C_OpenReportUI_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_548F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberSettingDialog_C_OpenReportUI_Event) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_OpenReportUI_Event");
static_assert(sizeof(GuildMemberSettingDialog_C_OpenReportUI_Event) == 0x000408, "Wrong size on GuildMemberSettingDialog_C_OpenReportUI_Event");
static_assert(offsetof(GuildMemberSettingDialog_C_OpenReportUI_Event, bWasSuccessful) == 0x000000, "Member 'GuildMemberSettingDialog_C_OpenReportUI_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_OpenReportUI_Event, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildMemberSettingDialog_C_OpenReportUI_Event::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_OpenReportUI_Event, RetCode) == 0x000400, "Member 'GuildMemberSettingDialog_C_OpenReportUI_Event::RetCode' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnAssumeLeader
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberSettingDialog_C_OnAssumeLeader final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberSettingDialog_C_OnAssumeLeader) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_OnAssumeLeader");
static_assert(sizeof(GuildMemberSettingDialog_C_OnAssumeLeader) == 0x000001, "Wrong size on GuildMemberSettingDialog_C_OnAssumeLeader");
static_assert(offsetof(GuildMemberSettingDialog_C_OnAssumeLeader, Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_OnAssumeLeader::Result' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Open
// 0x00D8 (0x00D8 - 0x0000)
struct GuildMemberSettingDialog_C_Open final
{
public:
	struct FGuildMemberData                       Param_MemberData;                                  // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildMemberSettingDialog_C_Open) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_Open");
static_assert(sizeof(GuildMemberSettingDialog_C_Open) == 0x0000D8, "Wrong size on GuildMemberSettingDialog_C_Open");
static_assert(offsetof(GuildMemberSettingDialog_C_Open, Param_MemberData) == 0x000000, "Member 'GuildMemberSettingDialog_C_Open::Param_MemberData' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberSettingDialog_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_PreConstruct) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_PreConstruct");
static_assert(sizeof(GuildMemberSettingDialog_C_PreConstruct) == 0x000001, "Wrong size on GuildMemberSettingDialog_C_PreConstruct");
static_assert(offsetof(GuildMemberSettingDialog_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GuildMemberSettingDialog_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnWithDrow
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberSettingDialog_C_OnWithDrow final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberSettingDialog_C_OnWithDrow) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_OnWithDrow");
static_assert(sizeof(GuildMemberSettingDialog_C_OnWithDrow) == 0x000001, "Wrong size on GuildMemberSettingDialog_C_OnWithDrow");
static_assert(offsetof(GuildMemberSettingDialog_C_OnWithDrow, Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_OnWithDrow::Result' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnCompleteSetting_Event
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberSettingDialog_C_OnCompleteSetting_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberSettingDialog_C_OnCompleteSetting_Event) == 0x000004, "Wrong alignment on GuildMemberSettingDialog_C_OnCompleteSetting_Event");
static_assert(sizeof(GuildMemberSettingDialog_C_OnCompleteSetting_Event) == 0x000004, "Wrong size on GuildMemberSettingDialog_C_OnCompleteSetting_Event");
static_assert(offsetof(GuildMemberSettingDialog_C_OnCompleteSetting_Event, RetCode) == 0x000000, "Member 'GuildMemberSettingDialog_C_OnCompleteSetting_Event::RetCode' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnChangeRole
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberSettingDialog_C_OnChangeRole final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberSettingDialog_C_OnChangeRole) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_OnChangeRole");
static_assert(sizeof(GuildMemberSettingDialog_C_OnChangeRole) == 0x000001, "Wrong size on GuildMemberSettingDialog_C_OnChangeRole");
static_assert(offsetof(GuildMemberSettingDialog_C_OnChangeRole, Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_OnChangeRole::Result' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnChangeLeader
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberSettingDialog_C_OnChangeLeader final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberSettingDialog_C_OnChangeLeader) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_OnChangeLeader");
static_assert(sizeof(GuildMemberSettingDialog_C_OnChangeLeader) == 0x000001, "Wrong size on GuildMemberSettingDialog_C_OnChangeLeader");
static_assert(offsetof(GuildMemberSettingDialog_C_OnChangeLeader, Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_OnChangeLeader::Result' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnKicked
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberSettingDialog_C_OnKicked final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberSettingDialog_C_OnKicked) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_OnKicked");
static_assert(sizeof(GuildMemberSettingDialog_C_OnKicked) == 0x000001, "Wrong size on GuildMemberSettingDialog_C_OnKicked");
static_assert(offsetof(GuildMemberSettingDialog_C_OnKicked, Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_OnKicked::Result' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.GenerateGuildRole
// 0x0048 (0x0048 - 0x0000)
struct GuildMemberSettingDialog_C_GenerateGuildRole final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5490[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5491[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5492[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetGuildMemberRoleTextId_ReturnValue;     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5493[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetOptionCount_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5494[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_GenerateGuildRole) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_GenerateGuildRole");
static_assert(sizeof(GuildMemberSettingDialog_C_GenerateGuildRole) == 0x000048, "Wrong size on GuildMemberSettingDialog_C_GenerateGuildRole");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, Temp_int_Variable) == 0x000000, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, Temp_int_Variable_1) == 0x000004, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_Conv_IntToByte_ReturnValue) == 0x000008, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_GetValidValue_ReturnValue) == 0x000010, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000011, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000012, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000013, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000014, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_BooleanAND_ReturnValue) == 0x00001C, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_GetGuildMemberRoleTextId_ReturnValue) == 0x000020, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_GetGuildMemberRoleTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_GetOptionCount_ReturnValue) == 0x000038, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_GetOptionCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003C, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_MakeLiteralInt_ReturnValue) == 0x000040, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GenerateGuildRole, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'GuildMemberSettingDialog_C_GenerateGuildRole::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildMemberSettingDialog_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberSettingDialog_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_GetGuildComp");
static_assert(sizeof(GuildMemberSettingDialog_C_GetGuildComp) == 0x000018, "Wrong size on GuildMemberSettingDialog_C_GetGuildComp");
static_assert(offsetof(GuildMemberSettingDialog_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildMemberSettingDialog_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildMemberSettingDialog_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildMemberSettingDialog_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Initialize
// 0x0088 (0x0088 - 0x0000)
struct GuildMemberSettingDialog_C_Initialize final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGuildMaster_Result;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCBChecking_Result;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5495[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0008(0x0018)()
	class FString                                 CallFunc_GetSelectedOption_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EGuildMemberRole                              CallFunc_Map_Find_Value;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5496[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5497[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5498[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0070(0x0018)()
};
static_assert(alignof(GuildMemberSettingDialog_C_Initialize) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_Initialize");
static_assert(sizeof(GuildMemberSettingDialog_C_Initialize) == 0x000088, "Wrong size on GuildMemberSettingDialog_C_Initialize");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, Temp_bool_Variable) == 0x000000, "Member 'GuildMemberSettingDialog_C_Initialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_IsGuildMaster_Result) == 0x000001, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_IsGuildMaster_Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_IsCBChecking_Result) == 0x000002, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_IsCBChecking_Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_MakeLiteralByte_ReturnValue) == 0x000003, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_GetRestrictText_ReturnValue) == 0x000008, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_GetSelectedOption_ReturnValue) == 0x000020, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_GetSelectedOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_Map_Find_Value) == 0x000030, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_Map_Find_ReturnValue) == 0x000031, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'GuildMemberSettingDialog_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000044, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_BooleanAND_ReturnValue) == 0x000045, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000046, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_BooleanOR_ReturnValue) == 0x000047, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_BooleanAND_ReturnValue_1) == 0x000048, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x000068, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x000069, "Member 'GuildMemberSettingDialog_C_Initialize::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Initialize, K2Node_Select_Default) == 0x000070, "Member 'GuildMemberSettingDialog_C_Initialize::K2Node_Select_Default' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnComboBoxRoleGenerate
// 0x0038 (0x0038 - 0x0000)
struct GuildMemberSettingDialog_C_OnComboBoxRoleGenerate final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GuildMemberSettingDialog_C_OnComboBoxRoleGenerate) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_OnComboBoxRoleGenerate");
static_assert(sizeof(GuildMemberSettingDialog_C_OnComboBoxRoleGenerate) == 0x000038, "Wrong size on GuildMemberSettingDialog_C_OnComboBoxRoleGenerate");
static_assert(offsetof(GuildMemberSettingDialog_C_OnComboBoxRoleGenerate, Item) == 0x000000, "Member 'GuildMemberSettingDialog_C_OnComboBoxRoleGenerate::Item' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_OnComboBoxRoleGenerate, ReturnValue) == 0x000010, "Member 'GuildMemberSettingDialog_C_OnComboBoxRoleGenerate::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_OnComboBoxRoleGenerate, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GuildMemberSettingDialog_C_OnComboBoxRoleGenerate::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_OnComboBoxRoleGenerate, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GuildMemberSettingDialog_C_OnComboBoxRoleGenerate::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.UpdateChangeBtn
// 0x0010 (0x0010 - 0x0000)
struct GuildMemberSettingDialog_C_UpdateChangeBtn final
{
public:
	class UGuildMemberManageCBIcon_C*             CheckBox;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsChecked;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck;                          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_UpdateChangeBtn) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_UpdateChangeBtn");
static_assert(sizeof(GuildMemberSettingDialog_C_UpdateChangeBtn) == 0x000010, "Wrong size on GuildMemberSettingDialog_C_UpdateChangeBtn");
static_assert(offsetof(GuildMemberSettingDialog_C_UpdateChangeBtn, CheckBox) == 0x000000, "Member 'GuildMemberSettingDialog_C_UpdateChangeBtn::CheckBox' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_UpdateChangeBtn, IsChecked) == 0x000008, "Member 'GuildMemberSettingDialog_C_UpdateChangeBtn::IsChecked' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_UpdateChangeBtn, CallFunc_IsCheck_IsCheck) == 0x000009, "Member 'GuildMemberSettingDialog_C_UpdateChangeBtn::CallFunc_IsCheck_IsCheck' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.IsCBChecking
// 0x0008 (0x0008 - 0x0000)
struct GuildMemberSettingDialog_C_IsCBChecking final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck;                          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck_1;                        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck_2;                        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheck_IsCheck_3;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_IsCBChecking) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_IsCBChecking");
static_assert(sizeof(GuildMemberSettingDialog_C_IsCBChecking) == 0x000008, "Wrong size on GuildMemberSettingDialog_C_IsCBChecking");
static_assert(offsetof(GuildMemberSettingDialog_C_IsCBChecking, Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_IsCBChecking::Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsCBChecking, CallFunc_IsCheck_IsCheck) == 0x000001, "Member 'GuildMemberSettingDialog_C_IsCBChecking::CallFunc_IsCheck_IsCheck' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsCBChecking, CallFunc_IsCheck_IsCheck_1) == 0x000002, "Member 'GuildMemberSettingDialog_C_IsCBChecking::CallFunc_IsCheck_IsCheck_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsCBChecking, CallFunc_IsCheck_IsCheck_2) == 0x000003, "Member 'GuildMemberSettingDialog_C_IsCBChecking::CallFunc_IsCheck_IsCheck_2' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsCBChecking, CallFunc_IsCheck_IsCheck_3) == 0x000004, "Member 'GuildMemberSettingDialog_C_IsCBChecking::CallFunc_IsCheck_IsCheck_3' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsCBChecking, CallFunc_BooleanOR_ReturnValue) == 0x000005, "Member 'GuildMemberSettingDialog_C_IsCBChecking::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsCBChecking, CallFunc_BooleanOR_ReturnValue_1) == 0x000006, "Member 'GuildMemberSettingDialog_C_IsCBChecking::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsCBChecking, CallFunc_BooleanOR_ReturnValue_2) == 0x000007, "Member 'GuildMemberSettingDialog_C_IsCBChecking::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitSelfMemberData
// 0x0120 (0x0120 - 0x0000)
struct GuildMemberSettingDialog_C_InitSelfMemberData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5499[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildMemberData>               CallFunc_GetGuildMemberList_ReturnValue;           // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_549A[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildMemberData                       CallFunc_Array_Get_Item;                           // 0x0040(0x00D8)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_InitSelfMemberData) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_InitSelfMemberData");
static_assert(sizeof(GuildMemberSettingDialog_C_InitSelfMemberData) == 0x000120, "Wrong size on GuildMemberSettingDialog_C_InitSelfMemberData");
static_assert(offsetof(GuildMemberSettingDialog_C_InitSelfMemberData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'GuildMemberSettingDialog_C_InitSelfMemberData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitSelfMemberData, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'GuildMemberSettingDialog_C_InitSelfMemberData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitSelfMemberData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'GuildMemberSettingDialog_C_InitSelfMemberData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitSelfMemberData, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'GuildMemberSettingDialog_C_InitSelfMemberData::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitSelfMemberData, CallFunc_GetGuildComp_ReturnValue) == 0x000020, "Member 'GuildMemberSettingDialog_C_InitSelfMemberData::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitSelfMemberData, CallFunc_GetGuildMemberList_ReturnValue) == 0x000028, "Member 'GuildMemberSettingDialog_C_InitSelfMemberData::CallFunc_GetGuildMemberList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitSelfMemberData, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'GuildMemberSettingDialog_C_InitSelfMemberData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitSelfMemberData, CallFunc_Array_Get_Item) == 0x000040, "Member 'GuildMemberSettingDialog_C_InitSelfMemberData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitSelfMemberData, CallFunc_Less_IntInt_ReturnValue) == 0x000118, "Member 'GuildMemberSettingDialog_C_InitSelfMemberData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitSelfMemberData, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000119, "Member 'GuildMemberSettingDialog_C_InitSelfMemberData::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.IsGuildMaster
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberSettingDialog_C_IsGuildMaster final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_IsGuildMaster) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_IsGuildMaster");
static_assert(sizeof(GuildMemberSettingDialog_C_IsGuildMaster) == 0x000004, "Wrong size on GuildMemberSettingDialog_C_IsGuildMaster");
static_assert(offsetof(GuildMemberSettingDialog_C_IsGuildMaster, Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_IsGuildMaster::Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsGuildMaster, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'GuildMemberSettingDialog_C_IsGuildMaster::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsGuildMaster, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000002, "Member 'GuildMemberSettingDialog_C_IsGuildMaster::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsGuildMaster, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'GuildMemberSettingDialog_C_IsGuildMaster::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.IsGuildGrandMaster
// 0x0002 (0x0002 - 0x0000)
struct GuildMemberSettingDialog_C_IsGuildGrandMaster final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_IsGuildGrandMaster) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_IsGuildGrandMaster");
static_assert(sizeof(GuildMemberSettingDialog_C_IsGuildGrandMaster) == 0x000002, "Wrong size on GuildMemberSettingDialog_C_IsGuildGrandMaster");
static_assert(offsetof(GuildMemberSettingDialog_C_IsGuildGrandMaster, Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_IsGuildGrandMaster::Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_IsGuildGrandMaster, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'GuildMemberSettingDialog_C_IsGuildGrandMaster::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Update Menu State
// 0x0005 (0x0005 - 0x0000)
struct GuildMemberSettingDialog_C_Update_Menu_State final
{
public:
	bool                                          bKick;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLeader;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAssumeLeader;                                     // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bWithDraw;                                         // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_Update_Menu_State) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_Update_Menu_State");
static_assert(sizeof(GuildMemberSettingDialog_C_Update_Menu_State) == 0x000005, "Wrong size on GuildMemberSettingDialog_C_Update_Menu_State");
static_assert(offsetof(GuildMemberSettingDialog_C_Update_Menu_State, bKick) == 0x000000, "Member 'GuildMemberSettingDialog_C_Update_Menu_State::bKick' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Update_Menu_State, bLeader) == 0x000001, "Member 'GuildMemberSettingDialog_C_Update_Menu_State::bLeader' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Update_Menu_State, bAssumeLeader) == 0x000002, "Member 'GuildMemberSettingDialog_C_Update_Menu_State::bAssumeLeader' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Update_Menu_State, bWithDraw) == 0x000003, "Member 'GuildMemberSettingDialog_C_Update_Menu_State::bWithDraw' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Update_Menu_State, CallFunc_GetIsEnabled_ReturnValue) == 0x000004, "Member 'GuildMemberSettingDialog_C_Update_Menu_State::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.On_ComboBoxRole_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0");
static_assert(sizeof(GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0) == 0x000038, "Wrong size on GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0");
static_assert(offsetof(GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0, Item) == 0x000000, "Member 'GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Init Btn with Draw
// 0x0006 (0x0006 - 0x0000)
struct GuildMemberSettingDialog_C_Init_Btn_with_Draw final
{
public:
	bool                                          NewLocalVar_0;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Self_Selected_bResult;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Self_Selected_bResult_1;               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGuildGrandMaster_Result;                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_Init_Btn_with_Draw) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_Init_Btn_with_Draw");
static_assert(sizeof(GuildMemberSettingDialog_C_Init_Btn_with_Draw) == 0x000006, "Wrong size on GuildMemberSettingDialog_C_Init_Btn_with_Draw");
static_assert(offsetof(GuildMemberSettingDialog_C_Init_Btn_with_Draw, NewLocalVar_0) == 0x000000, "Member 'GuildMemberSettingDialog_C_Init_Btn_with_Draw::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Init_Btn_with_Draw, CallFunc_Is_Self_Selected_bResult) == 0x000001, "Member 'GuildMemberSettingDialog_C_Init_Btn_with_Draw::CallFunc_Is_Self_Selected_bResult' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Init_Btn_with_Draw, CallFunc_Is_Self_Selected_bResult_1) == 0x000002, "Member 'GuildMemberSettingDialog_C_Init_Btn_with_Draw::CallFunc_Is_Self_Selected_bResult_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Init_Btn_with_Draw, CallFunc_IsGuildGrandMaster_Result) == 0x000003, "Member 'GuildMemberSettingDialog_C_Init_Btn_with_Draw::CallFunc_IsGuildGrandMaster_Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Init_Btn_with_Draw, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'GuildMemberSettingDialog_C_Init_Btn_with_Draw::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Init_Btn_with_Draw, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'GuildMemberSettingDialog_C_Init_Btn_with_Draw::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Is Self Selected
// 0x0002 (0x0002 - 0x0000)
struct GuildMemberSettingDialog_C_Is_Self_Selected final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_Is_Self_Selected) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_Is_Self_Selected");
static_assert(sizeof(GuildMemberSettingDialog_C_Is_Self_Selected) == 0x000002, "Wrong size on GuildMemberSettingDialog_C_Is_Self_Selected");
static_assert(offsetof(GuildMemberSettingDialog_C_Is_Self_Selected, bResult) == 0x000000, "Member 'GuildMemberSettingDialog_C_Is_Self_Selected::bResult' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_Is_Self_Selected, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000001, "Member 'GuildMemberSettingDialog_C_Is_Self_Selected::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitRoleComboBox
// 0x0006 (0x0006 - 0x0000)
struct GuildMemberSettingDialog_C_InitRoleComboBox final
{
public:
	bool                                          CallFunc_IsCBChecking_Result;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGuildMaster_Result;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_InitRoleComboBox) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_InitRoleComboBox");
static_assert(sizeof(GuildMemberSettingDialog_C_InitRoleComboBox) == 0x000006, "Wrong size on GuildMemberSettingDialog_C_InitRoleComboBox");
static_assert(offsetof(GuildMemberSettingDialog_C_InitRoleComboBox, CallFunc_IsCBChecking_Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_InitRoleComboBox::CallFunc_IsCBChecking_Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitRoleComboBox, CallFunc_IsGuildMaster_Result) == 0x000001, "Member 'GuildMemberSettingDialog_C_InitRoleComboBox::CallFunc_IsGuildMaster_Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitRoleComboBox, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'GuildMemberSettingDialog_C_InitRoleComboBox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitRoleComboBox, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000003, "Member 'GuildMemberSettingDialog_C_InitRoleComboBox::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitRoleComboBox, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'GuildMemberSettingDialog_C_InitRoleComboBox::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitRoleComboBox, CallFunc_BooleanAND_ReturnValue_1) == 0x000005, "Member 'GuildMemberSettingDialog_C_InitRoleComboBox::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnKick
// 0x0006 (0x0006 - 0x0000)
struct GuildMemberSettingDialog_C_InitBtnKick final
{
public:
	bool                                          CallFunc_IsGuildMaster_Result;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Self_Selected_bResult;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_InitBtnKick) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_InitBtnKick");
static_assert(sizeof(GuildMemberSettingDialog_C_InitBtnKick) == 0x000006, "Wrong size on GuildMemberSettingDialog_C_InitBtnKick");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnKick, CallFunc_IsGuildMaster_Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_InitBtnKick::CallFunc_IsGuildMaster_Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnKick, CallFunc_Is_Self_Selected_bResult) == 0x000001, "Member 'GuildMemberSettingDialog_C_InitBtnKick::CallFunc_Is_Self_Selected_bResult' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnKick, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'GuildMemberSettingDialog_C_InitBtnKick::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnKick, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000003, "Member 'GuildMemberSettingDialog_C_InitBtnKick::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnKick, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'GuildMemberSettingDialog_C_InitBtnKick::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnKick, CallFunc_BooleanAND_ReturnValue_1) == 0x000005, "Member 'GuildMemberSettingDialog_C_InitBtnKick::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnChangeLeader
// 0x0006 (0x0006 - 0x0000)
struct GuildMemberSettingDialog_C_InitBtnChangeLeader final
{
public:
	bool                                          CallFunc_IsGuildGrandMaster_Result;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Self_Selected_bResult;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_InitBtnChangeLeader) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_InitBtnChangeLeader");
static_assert(sizeof(GuildMemberSettingDialog_C_InitBtnChangeLeader) == 0x000006, "Wrong size on GuildMemberSettingDialog_C_InitBtnChangeLeader");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnChangeLeader, CallFunc_IsGuildGrandMaster_Result) == 0x000000, "Member 'GuildMemberSettingDialog_C_InitBtnChangeLeader::CallFunc_IsGuildGrandMaster_Result' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnChangeLeader, CallFunc_Is_Self_Selected_bResult) == 0x000001, "Member 'GuildMemberSettingDialog_C_InitBtnChangeLeader::CallFunc_Is_Self_Selected_bResult' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnChangeLeader, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'GuildMemberSettingDialog_C_InitBtnChangeLeader::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnChangeLeader, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000003, "Member 'GuildMemberSettingDialog_C_InitBtnChangeLeader::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnChangeLeader, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'GuildMemberSettingDialog_C_InitBtnChangeLeader::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnChangeLeader, CallFunc_BooleanAND_ReturnValue_1) == 0x000005, "Member 'GuildMemberSettingDialog_C_InitBtnChangeLeader::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnAssumeLeader
// 0x0010 (0x0010 - 0x0000)
struct GuildMemberSettingDialog_C_InitBtnAssumeLeader final
{
public:
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActivateAssumeLeader_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Self_Selected_bResult;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_InitBtnAssumeLeader) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_InitBtnAssumeLeader");
static_assert(sizeof(GuildMemberSettingDialog_C_InitBtnAssumeLeader) == 0x000010, "Wrong size on GuildMemberSettingDialog_C_InitBtnAssumeLeader");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnAssumeLeader, CallFunc_GetGuildComp_ReturnValue) == 0x000000, "Member 'GuildMemberSettingDialog_C_InitBtnAssumeLeader::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnAssumeLeader, CallFunc_IsActivateAssumeLeader_ReturnValue) == 0x000008, "Member 'GuildMemberSettingDialog_C_InitBtnAssumeLeader::CallFunc_IsActivateAssumeLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnAssumeLeader, CallFunc_Is_Self_Selected_bResult) == 0x000009, "Member 'GuildMemberSettingDialog_C_InitBtnAssumeLeader::CallFunc_Is_Self_Selected_bResult' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnAssumeLeader, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'GuildMemberSettingDialog_C_InitBtnAssumeLeader::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnAssumeLeader, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'GuildMemberSettingDialog_C_InitBtnAssumeLeader::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnAssumeLeader, CallFunc_BooleanAND_ReturnValue_1) == 0x00000C, "Member 'GuildMemberSettingDialog_C_InitBtnAssumeLeader::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.CreateSwapBlocker
// 0x0010 (0x0010 - 0x0000)
struct GuildMemberSettingDialog_C_CreateSwapBlocker final
{
public:
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_CreateSwapBlocker) == 0x000008, "Wrong alignment on GuildMemberSettingDialog_C_CreateSwapBlocker");
static_assert(sizeof(GuildMemberSettingDialog_C_CreateSwapBlocker) == 0x000010, "Wrong size on GuildMemberSettingDialog_C_CreateSwapBlocker");
static_assert(offsetof(GuildMemberSettingDialog_C_CreateSwapBlocker, CallFunc_Create_ReturnValue) == 0x000000, "Member 'GuildMemberSettingDialog_C_CreateSwapBlocker::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_CreateSwapBlocker, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'GuildMemberSettingDialog_C_CreateSwapBlocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_CreateSwapBlocker, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'GuildMemberSettingDialog_C_CreateSwapBlocker::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.DeleteSwapBlocker
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberSettingDialog_C_DeleteSwapBlocker final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_DeleteSwapBlocker) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_DeleteSwapBlocker");
static_assert(sizeof(GuildMemberSettingDialog_C_DeleteSwapBlocker) == 0x000001, "Wrong size on GuildMemberSettingDialog_C_DeleteSwapBlocker");
static_assert(offsetof(GuildMemberSettingDialog_C_DeleteSwapBlocker, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GuildMemberSettingDialog_C_DeleteSwapBlocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnReport
// 0x0005 (0x0005 - 0x0000)
struct GuildMemberSettingDialog_C_InitBtnReport final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Self_Selected_bResult;                 // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberSettingDialog_C_InitBtnReport) == 0x000001, "Wrong alignment on GuildMemberSettingDialog_C_InitBtnReport");
static_assert(sizeof(GuildMemberSettingDialog_C_InitBtnReport) == 0x000005, "Wrong size on GuildMemberSettingDialog_C_InitBtnReport");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnReport, Temp_bool_Variable) == 0x000000, "Member 'GuildMemberSettingDialog_C_InitBtnReport::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnReport, Temp_bool_Variable_1) == 0x000001, "Member 'GuildMemberSettingDialog_C_InitBtnReport::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnReport, Temp_bool_Variable_2) == 0x000002, "Member 'GuildMemberSettingDialog_C_InitBtnReport::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnReport, CallFunc_Is_Self_Selected_bResult) == 0x000003, "Member 'GuildMemberSettingDialog_C_InitBtnReport::CallFunc_Is_Self_Selected_bResult' has a wrong offset!");
static_assert(offsetof(GuildMemberSettingDialog_C_InitBtnReport, K2Node_Select_Default) == 0x000004, "Member 'GuildMemberSettingDialog_C_InitBtnReport::K2Node_Select_Default' has a wrong offset!");

}

