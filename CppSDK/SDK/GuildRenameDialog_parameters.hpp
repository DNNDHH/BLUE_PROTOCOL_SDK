#pragma once

 

// Package: GuildRenameDialog

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildRenameDialog.GuildRenameDialog_C.ExecuteUbergraph_GuildRenameDialog
// 0x02C0 (0x02C0 - 0x0000)
struct GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A28[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_3;                 // 0x0008(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A29[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_2;                 // 0x0028(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A2A[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0050(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsDuplicate;                   // 0x0054(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A2B[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x0058(0x00B8)()
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0110(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0120(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0138(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0150(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0168(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A2C[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A2D[0x2];                                     // 0x0192(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0194(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x019B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x019C(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A2E[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x01B0(0x0018)(ConstParm)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A2F[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x01D0(0x0018)(ConstParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A30[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildNetworking_C*                     CallFunc_Create_ReturnValue;                       // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A31[0x3];                                     // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x021C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x022E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x022F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0232(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0233(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A32[0x2];                                     // 0x0236(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode, bool bIsDuplicate)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0238(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_ComponentBoundEvent_InVisibility;           // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A33[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A34[0x6];                                     // 0x026A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A35[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A36[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_3;               // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, bool bIsDuplicate)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0298(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A37[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x02AC(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog) == 0x000008, "Wrong alignment on GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog");
static_assert(sizeof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog) == 0x0002C0, "Wrong size on GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, EntryPoint) == 0x000000, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_ComponentBoundEvent_Text_3) == 0x000008, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_ComponentBoundEvent_Text_3' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_ComponentBoundEvent_CommitMethod_1) == 0x000020, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_ComponentBoundEvent_CommitMethod_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_ComponentBoundEvent_Text_2) == 0x000028, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_ComponentBoundEvent_Text_2' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_ComponentBoundEvent_CommitMethod) == 0x000040, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_GetGuildComp_ReturnValue) == 0x000048, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_CustomEvent_RetCode_1) == 0x000050, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_CustomEvent_bIsDuplicate) == 0x000054, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_CustomEvent_bIsDuplicate' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_GetGuildData_ReturnValue) == 0x000058, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_GetSBRetMessage_ReturnValue) == 0x000110, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Conv_StringToText_ReturnValue) == 0x000120, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Conv_IntToText_ReturnValue) == 0x000138, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000150, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000168, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000180, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_GetGuildComp_ReturnValue_1) == 0x000188, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, Temp_byte_Variable) == 0x000190, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_IsValid_ReturnValue) == 0x000191, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_CustomEvent_RetCode) == 0x000194, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_SwitchInteger_CmpSuccess) == 0x000198, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000199, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_IsValid_ReturnValue_1) == 0x00019A, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, Temp_bool_Variable) == 0x00019B, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_CreateDelegate_OutputDelegate) == 0x00019C, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, Temp_byte_Variable_1) == 0x0001AC, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_ComponentBoundEvent_Text_1) == 0x0001B0, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, Temp_byte_Variable_2) == 0x0001C8, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, Temp_bool_Variable_1) == 0x0001C9, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_ComponentBoundEvent_Text) == 0x0001D0, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_Select_Default) == 0x0001E8, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Create_ReturnValue) == 0x0001F0, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Conv_TextToString_ReturnValue) == 0x0001F8, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000208, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_BooleanOR_ReturnValue) == 0x000218, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_CreateDelegate_OutputDelegate_1) == 0x00021C, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Not_PreBool_ReturnValue) == 0x00022C, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Not_PreBool_ReturnValue_1) == 0x00022D, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_BooleanAND_ReturnValue) == 0x00022E, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_BooleanAND_ReturnValue_1) == 0x00022F, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Not_PreBool_ReturnValue_2) == 0x000230, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_BooleanAND_ReturnValue_2) == 0x000231, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Not_PreBool_ReturnValue_3) == 0x000232, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_BooleanAND_ReturnValue_3) == 0x000233, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Greater_IntInt_ReturnValue) == 0x000234, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_BooleanAND_ReturnValue_4) == 0x000235, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_CreateDelegate_OutputDelegate_2) == 0x000238, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_ComponentBoundEvent_InVisibility) == 0x000248, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_ComponentBoundEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_GetGuildComp_ReturnValue_2) == 0x000250, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Conv_TextToString_ReturnValue_2) == 0x000258, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_Not_PreBool_ReturnValue_4) == 0x000268, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_BooleanAND_ReturnValue_5) == 0x000269, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_PlayAnimation_ReturnValue) == 0x000270, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000278, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_PlayAnimation_ReturnValue_1) == 0x000280, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, Temp_byte_Variable_3) == 0x000288, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, CallFunc_GetGuildComp_ReturnValue_3) == 0x000290, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::CallFunc_GetGuildComp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_CreateDelegate_OutputDelegate_3) == 0x000298, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_Select_Default_1) == 0x0002A8, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog, K2Node_CreateDelegate_OutputDelegate_4) == 0x0002AC, "Member 'GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GuildRenameDialog_C_BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRenameDialog_C_BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on GuildRenameDialog_C_BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature");
static_assert(sizeof(GuildRenameDialog_C_BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature) == 0x000001, "Wrong size on GuildRenameDialog_C_BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature");
static_assert(offsetof(GuildRenameDialog_C_BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature, InVisibility) == 0x000000, "Member 'GuildRenameDialog_C_BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature::InVisibility' has a wrong offset!");

// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function GuildRenameDialog.GuildRenameDialog_C.OnChangedName
// 0x0004 (0x0004 - 0x0000)
struct GuildRenameDialog_C_OnChangedName final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRenameDialog_C_OnChangedName) == 0x000004, "Wrong alignment on GuildRenameDialog_C_OnChangedName");
static_assert(sizeof(GuildRenameDialog_C_OnChangedName) == 0x000004, "Wrong size on GuildRenameDialog_C_OnChangedName");
static_assert(offsetof(GuildRenameDialog_C_OnChangedName, RetCode) == 0x000000, "Member 'GuildRenameDialog_C_OnChangedName::RetCode' has a wrong offset!");

// Function GuildRenameDialog.GuildRenameDialog_C.OnComplete_DuplicationChecked
// 0x0008 (0x0008 - 0x0000)
struct GuildRenameDialog_C_OnComplete_DuplicationChecked final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDuplicate;                                      // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildRenameDialog_C_OnComplete_DuplicationChecked) == 0x000004, "Wrong alignment on GuildRenameDialog_C_OnComplete_DuplicationChecked");
static_assert(sizeof(GuildRenameDialog_C_OnComplete_DuplicationChecked) == 0x000008, "Wrong size on GuildRenameDialog_C_OnComplete_DuplicationChecked");
static_assert(offsetof(GuildRenameDialog_C_OnComplete_DuplicationChecked, RetCode) == 0x000000, "Member 'GuildRenameDialog_C_OnComplete_DuplicationChecked::RetCode' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_OnComplete_DuplicationChecked, bIsDuplicate) == 0x000004, "Member 'GuildRenameDialog_C_OnComplete_DuplicationChecked::bIsDuplicate' has a wrong offset!");

// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct GuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(GuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on GuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(GuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'GuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'GuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct GuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(GuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on GuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(GuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'GuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'GuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function GuildRenameDialog.GuildRenameDialog_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildRenameDialog_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRenameDialog_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildRenameDialog_C_GetGuildComp");
static_assert(sizeof(GuildRenameDialog_C_GetGuildComp) == 0x000018, "Wrong size on GuildRenameDialog_C_GetGuildComp");
static_assert(offsetof(GuildRenameDialog_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildRenameDialog_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildRenameDialog_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildRenameDialog_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildRenameDialog.GuildRenameDialog_C.CheckTypedNewGuildName
// 0x0070 (0x0070 - 0x0000)
struct GuildRenameDialog_C_CheckTypedNewGuildName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNgWordWithTarget_IsValid;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_IsValid_1;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_ReturnValue_1;        // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A38[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue; // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A39[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
};
static_assert(alignof(GuildRenameDialog_C_CheckTypedNewGuildName) == 0x000008, "Wrong alignment on GuildRenameDialog_C_CheckTypedNewGuildName");
static_assert(sizeof(GuildRenameDialog_C_CheckTypedNewGuildName) == 0x000070, "Wrong size on GuildRenameDialog_C_CheckTypedNewGuildName");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, InText) == 0x000000, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::InText' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_Conv_TextToString_ReturnValue) == 0x000018, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_HasNgWordWithTarget_IsValid) == 0x000028, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_HasNgWordWithTarget_IsValid' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_HasNgWordWithTarget_ReturnValue) == 0x000029, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_HasNgWordWithTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_HasNgWordWithTarget_IsValid_1) == 0x00002A, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_HasNgWordWithTarget_IsValid_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_HasNgWordWithTarget_ReturnValue_1) == 0x00002B, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_HasNgWordWithTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_BooleanOR_ReturnValue) == 0x00002C, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000030, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_Len_ReturnValue) == 0x000040, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_Greater_IntInt_ReturnValue) == 0x000044, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue) == 0x000045, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_BooleanAND_ReturnValue) == 0x000046, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_GetSubstring_ReturnValue) == 0x000048, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildName, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'GuildRenameDialog_C_CheckTypedNewGuildName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GuildRenameDialog.GuildRenameDialog_C.CheckTypedNewGuildTag
// 0x0070 (0x0070 - 0x0000)
struct GuildRenameDialog_C_CheckTypedNewGuildTag final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNgWordWithTarget_IsValid;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A3A[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue; // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A3B[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
};
static_assert(alignof(GuildRenameDialog_C_CheckTypedNewGuildTag) == 0x000008, "Wrong alignment on GuildRenameDialog_C_CheckTypedNewGuildTag");
static_assert(sizeof(GuildRenameDialog_C_CheckTypedNewGuildTag) == 0x000070, "Wrong size on GuildRenameDialog_C_CheckTypedNewGuildTag");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, InText) == 0x000000, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::InText' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, CallFunc_Conv_TextToString_ReturnValue) == 0x000018, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000028, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, CallFunc_HasNgWordWithTarget_IsValid) == 0x000038, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::CallFunc_HasNgWordWithTarget_IsValid' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, CallFunc_HasNgWordWithTarget_ReturnValue) == 0x000039, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::CallFunc_HasNgWordWithTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, CallFunc_Len_ReturnValue) == 0x00003C, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue) == 0x000041, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, CallFunc_GetSubstring_ReturnValue) == 0x000048, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRenameDialog_C_CheckTypedNewGuildTag, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'GuildRenameDialog_C_CheckTypedNewGuildTag::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

