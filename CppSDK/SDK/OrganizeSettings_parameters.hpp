#pragma once

 

// Package: OrganizeSettings

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function OrganizeSettings.OrganizeSettings_C.ExecuteUbergraph_OrganizeSettings
// 0x0310 (0x0310 - 0x0000)
struct OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B71[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B72[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B73[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_5;                 // 0x0040(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod_2;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B74[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_4;                 // 0x0060(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckGuildName_result;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B75[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_3;                 // 0x0080(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B76[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             CallFunc_ConstructGuildData_GuildData;             // 0x00A0(0x00B8)()
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B77[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0168(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsDuplicate;                   // 0x016C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B78[0x3];                                     // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0170(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B79[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0188(0x0018)()
	TDelegate<void(int32 RetCode, bool bIsDuplicate)> K2Node_CreateDelegate_OutputDelegate;              // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01C0(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B7A[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x01E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B7B[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text_2;                 // 0x01F0(0x0018)(ConstParm)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0208(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0218(0x0018)(ConstParm)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B7C[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0238(0x0018)(ConstParm)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckGuildName_result_1;                  // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B7D[0x6];                                     // 0x0252(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0260(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0266(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B7E[0x1];                                     // 0x0267(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B7F[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0274(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6B80[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0288(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_2;                    // 0x02A0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue_1;                        // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B81[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_3;                    // 0x02E0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_3;          // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue_2;                        // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x030D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x030E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings) == 0x000008, "Wrong alignment on OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings");
static_assert(sizeof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings) == 0x000310, "Wrong size on OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, EntryPoint) == 0x000000, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::EntryPoint' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_Event_IsDesignTime) == 0x000030, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Len_ReturnValue) == 0x000034, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_ComponentBoundEvent_Text_5) == 0x000040, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_ComponentBoundEvent_Text_5' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_ComponentBoundEvent_CommitMethod_2) == 0x000058, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_ComponentBoundEvent_CommitMethod_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_ComponentBoundEvent_Text_4) == 0x000060, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_ComponentBoundEvent_Text_4' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_ComponentBoundEvent_CommitMethod_1) == 0x000078, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_ComponentBoundEvent_CommitMethod_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_CheckGuildName_result) == 0x000079, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_CheckGuildName_result' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_ComponentBoundEvent_Text_3) == 0x000080, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_ComponentBoundEvent_Text_3' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_ComponentBoundEvent_CommitMethod) == 0x000098, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_ConstructGuildData_GuildData) == 0x0000A0, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_ConstructGuildData_GuildData' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, Temp_bool_IsClosed_Variable) == 0x000158, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_GetGuildComp_ReturnValue) == 0x000160, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_CustomEvent_RetCode_1) == 0x000168, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_CustomEvent_bIsDuplicate) == 0x00016C, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_CustomEvent_bIsDuplicate' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_GetSBRetMessage_ReturnValue) == 0x000170, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000180, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Conv_StringToText_ReturnValue) == 0x000188, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_CreateDelegate_OutputDelegate) == 0x0001A0, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001B0, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001C0, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_CustomEvent_Result) == 0x0001D8, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_PlaySE_ReturnValue) == 0x0001DC, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001E0, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, Temp_bool_Has_Been_Initd_Variable) == 0x0001E1, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_BooleanOR_ReturnValue) == 0x0001E2, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_BooleanOR_ReturnValue_1) == 0x0001E3, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Create_ReturnValue) == 0x0001E8, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_ComponentBoundEvent_Text_2) == 0x0001F0, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_ComponentBoundEvent_Text_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_CreateDelegate_OutputDelegate_1) == 0x000208, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_ComponentBoundEvent_Text_1) == 0x000218, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_BooleanOR_ReturnValue_2) == 0x000230, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_ComponentBoundEvent_Text) == 0x000238, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_BooleanOR_ReturnValue_3) == 0x000250, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_CheckGuildName_result_1) == 0x000251, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_CheckGuildName_result_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_GetGuildComp_ReturnValue_1) == 0x000258, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_CustomEvent_RetCode) == 0x000260, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_BooleanOR_ReturnValue_4) == 0x000264, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_SwitchInteger_CmpSuccess) == 0x000265, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000266, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_GetGuildComp_ReturnValue_2) == 0x000268, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_IsValid_ReturnValue) == 0x000270, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, K2Node_CreateDelegate_OutputDelegate_2) == 0x000274, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_GetText_ReturnValue_1) == 0x000288, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_GetText_ReturnValue_2) == 0x0002A0, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_GetText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0002B8, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Conv_TextToString_ReturnValue_2) == 0x0002C8, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Len_ReturnValue_1) == 0x0002D8, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Len_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Greater_IntInt_ReturnValue) == 0x0002DC, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_GetText_ReturnValue_3) == 0x0002E0, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_GetText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Conv_TextToString_ReturnValue_3) == 0x0002F8, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Conv_TextToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_Len_ReturnValue_2) == 0x000308, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_Len_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00030C, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_BooleanOR_ReturnValue_5) == 0x00030D, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings, CallFunc_BooleanOR_ReturnValue_6) == 0x00030E, "Member 'OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.OnCompletedGuildOrganized
// 0x0004 (0x0004 - 0x0000)
struct OrganizeSettings_C_OnCompletedGuildOrganized final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OrganizeSettings_C_OnCompletedGuildOrganized) == 0x000004, "Wrong alignment on OrganizeSettings_C_OnCompletedGuildOrganized");
static_assert(sizeof(OrganizeSettings_C_OnCompletedGuildOrganized) == 0x000004, "Wrong size on OrganizeSettings_C_OnCompletedGuildOrganized");
static_assert(offsetof(OrganizeSettings_C_OnCompletedGuildOrganized, RetCode) == 0x000000, "Member 'OrganizeSettings_C_OnCompletedGuildOrganized::RetCode' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.OnCheckedGuildOrganize
// 0x0001 (0x0001 - 0x0000)
struct OrganizeSettings_C_OnCheckedGuildOrganize final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OrganizeSettings_C_OnCheckedGuildOrganize) == 0x000001, "Wrong alignment on OrganizeSettings_C_OnCheckedGuildOrganize");
static_assert(sizeof(OrganizeSettings_C_OnCheckedGuildOrganize) == 0x000001, "Wrong size on OrganizeSettings_C_OnCheckedGuildOrganize");
static_assert(offsetof(OrganizeSettings_C_OnCheckedGuildOrganize, Result) == 0x000000, "Member 'OrganizeSettings_C_OnCheckedGuildOrganize::Result' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.OnCompleteGuildNameCheck
// 0x0008 (0x0008 - 0x0000)
struct OrganizeSettings_C_OnCompleteGuildNameCheck final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDuplicate;                                      // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OrganizeSettings_C_OnCompleteGuildNameCheck) == 0x000004, "Wrong alignment on OrganizeSettings_C_OnCompleteGuildNameCheck");
static_assert(sizeof(OrganizeSettings_C_OnCompleteGuildNameCheck) == 0x000008, "Wrong size on OrganizeSettings_C_OnCompleteGuildNameCheck");
static_assert(offsetof(OrganizeSettings_C_OnCompleteGuildNameCheck, RetCode) == 0x000000, "Member 'OrganizeSettings_C_OnCompleteGuildNameCheck::RetCode' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_OnCompleteGuildNameCheck, bIsDuplicate) == 0x000004, "Member 'OrganizeSettings_C_OnCompleteGuildNameCheck::bIsDuplicate' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct OrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on OrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(OrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on OrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(OrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'OrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'OrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct OrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on OrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(OrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on OrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(OrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'OrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'OrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct OrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on OrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(OrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on OrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(OrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'OrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'OrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OrganizeSettings_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OrganizeSettings_C_PreConstruct) == 0x000001, "Wrong alignment on OrganizeSettings_C_PreConstruct");
static_assert(sizeof(OrganizeSettings_C_PreConstruct) == 0x000001, "Wrong size on OrganizeSettings_C_PreConstruct");
static_assert(offsetof(OrganizeSettings_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OrganizeSettings_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.GenerateAttribute
// 0x0048 (0x0048 - 0x0000)
struct OrganizeSettings_C_GenerateAttribute final
{
public:
	int32                                         Addcnt;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B82[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B83[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B84[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildAttributeCBIcon_C*                CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B85[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OrganizeSettings_C_GenerateAttribute) == 0x000008, "Wrong alignment on OrganizeSettings_C_GenerateAttribute");
static_assert(sizeof(OrganizeSettings_C_GenerateAttribute) == 0x000048, "Wrong size on OrganizeSettings_C_GenerateAttribute");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, Addcnt) == 0x000000, "Member 'OrganizeSettings_C_GenerateAttribute::Addcnt' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, Temp_int_Variable) == 0x000004, "Member 'OrganizeSettings_C_GenerateAttribute::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, Temp_int_Variable_1) == 0x000008, "Member 'OrganizeSettings_C_GenerateAttribute::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000015, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000016, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_Create_ReturnValue) == 0x000020, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, Temp_int_Variable_2) == 0x000028, "Member 'OrganizeSettings_C_GenerateAttribute::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_MakeLiteralInt_ReturnValue) == 0x00002C, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_Percent_IntInt_ReturnValue) == 0x000038, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_Divide_IntInt_ReturnValue) == 0x00003C, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateAttribute, CallFunc_AddChildToGrid_ReturnValue) == 0x000040, "Member 'OrganizeSettings_C_GenerateAttribute::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.GenerateTimes
// 0x0048 (0x0048 - 0x0000)
struct OrganizeSettings_C_GenerateTimes final
{
public:
	int32                                         Addcnt;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B86[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B87[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B88[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildTimeCBIcon_C*                     CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OrganizeSettings_C_GenerateTimes) == 0x000008, "Wrong alignment on OrganizeSettings_C_GenerateTimes");
static_assert(sizeof(OrganizeSettings_C_GenerateTimes) == 0x000048, "Wrong size on OrganizeSettings_C_GenerateTimes");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, Addcnt) == 0x000000, "Member 'OrganizeSettings_C_GenerateTimes::Addcnt' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, Temp_int_Variable) == 0x000004, "Member 'OrganizeSettings_C_GenerateTimes::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, Temp_int_Variable_1) == 0x000008, "Member 'OrganizeSettings_C_GenerateTimes::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000015, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000016, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000017, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, Temp_int_Variable_2) == 0x00001C, "Member 'OrganizeSettings_C_GenerateTimes::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_MakeLiteralInt_ReturnValue) == 0x000020, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_Percent_IntInt_ReturnValue) == 0x00002C, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_Divide_IntInt_ReturnValue) == 0x000030, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_Create_ReturnValue) == 0x000038, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GenerateTimes, CallFunc_AddChildToGrid_ReturnValue) == 0x000040, "Member 'OrganizeSettings_C_GenerateTimes::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.ConstructGuildData
// 0x0280 (0x0280 - 0x0000)
struct OrganizeSettings_C_ConstructGuildData final
{
public:
	struct FGuildData                             GuildData;                                         // 0x0000(0x00B8)(Parm, OutParm)
	TArray<ESBGuildActivityTime>                  TimeArray;                                         // 0x00B8(0x0010)(Edit, BlueprintVisible)
	TArray<EGuildAttribute>                       AttributeArray;                                    // 0x00C8(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B89[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B8A[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00E8(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0100(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B8B[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_2;                    // 0x0140(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B8C[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGuildAcceptType                              Temp_byte_Variable;                                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGuildAcceptType                              Temp_byte_Variable_1;                              // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGuildAcceptType                              K2Node_Select_Default;                             // 0x0173(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData                             K2Node_MakeStruct_GuildData;                       // 0x0178(0x00B8)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildTimeCBIcon_C*                     K2Node_DynamicCast_AsGuild_Time_CBIcon;            // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBGuildActivityTime                          CallFunc_GetTime_Time;                             // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCheck_IsCheck;                          // 0x024A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B8D[0x1];                                     // 0x024B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B8E[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B8F[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B90[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildAttributeCBIcon_C*                K2Node_DynamicCast_AsGuild_Attribute_CBIcon;       // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGuildAttribute                               CallFunc_GetAttrib_Attribute;                      // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCheck_IsCheck_1;                        // 0x027A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B91[0x1];                                     // 0x027B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OrganizeSettings_C_ConstructGuildData) == 0x000008, "Wrong alignment on OrganizeSettings_C_ConstructGuildData");
static_assert(sizeof(OrganizeSettings_C_ConstructGuildData) == 0x000280, "Wrong size on OrganizeSettings_C_ConstructGuildData");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, GuildData) == 0x000000, "Member 'OrganizeSettings_C_ConstructGuildData::GuildData' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, TimeArray) == 0x0000B8, "Member 'OrganizeSettings_C_ConstructGuildData::TimeArray' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, AttributeArray) == 0x0000C8, "Member 'OrganizeSettings_C_ConstructGuildData::AttributeArray' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, Temp_int_Variable) == 0x0000D8, "Member 'OrganizeSettings_C_ConstructGuildData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, Temp_bool_Variable) == 0x0000DC, "Member 'OrganizeSettings_C_ConstructGuildData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, Temp_int_Variable_1) == 0x0000E0, "Member 'OrganizeSettings_C_ConstructGuildData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_GetText_ReturnValue) == 0x0000E8, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_GetText_ReturnValue_1) == 0x000100, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_Conv_TextToString_ReturnValue) == 0x000118, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000128, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, Temp_int_Variable_2) == 0x000138, "Member 'OrganizeSettings_C_ConstructGuildData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_GetText_ReturnValue_2) == 0x000140, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_GetText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_Conv_TextToString_ReturnValue_2) == 0x000158, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000168, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_Add_IntInt_ReturnValue) == 0x00016C, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, Temp_byte_Variable) == 0x000170, "Member 'OrganizeSettings_C_ConstructGuildData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_IsChecked_ReturnValue) == 0x000171, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, Temp_byte_Variable_1) == 0x000172, "Member 'OrganizeSettings_C_ConstructGuildData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, K2Node_Select_Default) == 0x000173, "Member 'OrganizeSettings_C_ConstructGuildData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_GetChildrenCount_ReturnValue) == 0x000174, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, K2Node_MakeStruct_GuildData) == 0x000178, "Member 'OrganizeSettings_C_ConstructGuildData::K2Node_MakeStruct_GuildData' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000230, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, Temp_int_Variable_3) == 0x000234, "Member 'OrganizeSettings_C_ConstructGuildData::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_GetChildAt_ReturnValue) == 0x000238, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, K2Node_DynamicCast_AsGuild_Time_CBIcon) == 0x000240, "Member 'OrganizeSettings_C_ConstructGuildData::K2Node_DynamicCast_AsGuild_Time_CBIcon' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, K2Node_DynamicCast_bSuccess) == 0x000248, "Member 'OrganizeSettings_C_ConstructGuildData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_GetTime_Time) == 0x000249, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_GetTime_Time' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_IsCheck_IsCheck) == 0x00024A, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_IsCheck_IsCheck' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_Array_AddUnique_ReturnValue) == 0x00024C, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000250, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000254, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000258, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_GetChildAt_ReturnValue_1) == 0x000260, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000268, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, K2Node_DynamicCast_AsGuild_Attribute_CBIcon) == 0x000270, "Member 'OrganizeSettings_C_ConstructGuildData::K2Node_DynamicCast_AsGuild_Attribute_CBIcon' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, K2Node_DynamicCast_bSuccess_1) == 0x000278, "Member 'OrganizeSettings_C_ConstructGuildData::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_GetAttrib_Attribute) == 0x000279, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_GetAttrib_Attribute' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_IsCheck_IsCheck_1) == 0x00027A, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_IsCheck_IsCheck_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_ConstructGuildData, CallFunc_Array_AddUnique_ReturnValue_1) == 0x00027C, "Member 'OrganizeSettings_C_ConstructGuildData::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct OrganizeSettings_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OrganizeSettings_C_GetGuildComp) == 0x000008, "Wrong alignment on OrganizeSettings_C_GetGuildComp");
static_assert(sizeof(OrganizeSettings_C_GetGuildComp) == 0x000018, "Wrong size on OrganizeSettings_C_GetGuildComp");
static_assert(offsetof(OrganizeSettings_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'OrganizeSettings_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'OrganizeSettings_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'OrganizeSettings_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.CheckGuildComment
// 0x0038 (0x0038 - 0x0000)
struct OrganizeSettings_C_CheckGuildComment final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNgWordWithTarget_IsValid;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B92[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OrganizeSettings_C_CheckGuildComment) == 0x000008, "Wrong alignment on OrganizeSettings_C_CheckGuildComment");
static_assert(sizeof(OrganizeSettings_C_CheckGuildComment) == 0x000038, "Wrong size on OrganizeSettings_C_CheckGuildComment");
static_assert(offsetof(OrganizeSettings_C_CheckGuildComment, InText) == 0x000000, "Member 'OrganizeSettings_C_CheckGuildComment::InText' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildComment, CallFunc_Conv_TextToString_ReturnValue) == 0x000018, "Member 'OrganizeSettings_C_CheckGuildComment::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildComment, CallFunc_HasNgWordWithTarget_IsValid) == 0x000028, "Member 'OrganizeSettings_C_CheckGuildComment::CallFunc_HasNgWordWithTarget_IsValid' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildComment, CallFunc_HasNgWordWithTarget_ReturnValue) == 0x000029, "Member 'OrganizeSettings_C_CheckGuildComment::CallFunc_HasNgWordWithTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildComment, CallFunc_Len_ReturnValue) == 0x00002C, "Member 'OrganizeSettings_C_CheckGuildComment::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildComment, CallFunc_InRange_IntInt_ReturnValue) == 0x000030, "Member 'OrganizeSettings_C_CheckGuildComment::CallFunc_InRange_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildComment, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'OrganizeSettings_C_CheckGuildComment::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.CheckGuildTag
// 0x0068 (0x0068 - 0x0000)
struct OrganizeSettings_C_CheckGuildTag final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNgWordWithTarget_IsValid;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_ReturnValue;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OrganizeSettings_C_CheckGuildTag) == 0x000008, "Wrong alignment on OrganizeSettings_C_CheckGuildTag");
static_assert(sizeof(OrganizeSettings_C_CheckGuildTag) == 0x000068, "Wrong size on OrganizeSettings_C_CheckGuildTag");
static_assert(offsetof(OrganizeSettings_C_CheckGuildTag, InText) == 0x000000, "Member 'OrganizeSettings_C_CheckGuildTag::InText' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildTag, CallFunc_Conv_TextToString_ReturnValue) == 0x000018, "Member 'OrganizeSettings_C_CheckGuildTag::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildTag, CallFunc_GetSubstring_ReturnValue) == 0x000028, "Member 'OrganizeSettings_C_CheckGuildTag::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildTag, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'OrganizeSettings_C_CheckGuildTag::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildTag, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000050, "Member 'OrganizeSettings_C_CheckGuildTag::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildTag, CallFunc_HasNgWordWithTarget_IsValid) == 0x000060, "Member 'OrganizeSettings_C_CheckGuildTag::CallFunc_HasNgWordWithTarget_IsValid' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildTag, CallFunc_HasNgWordWithTarget_ReturnValue) == 0x000061, "Member 'OrganizeSettings_C_CheckGuildTag::CallFunc_HasNgWordWithTarget_ReturnValue' has a wrong offset!");

// Function OrganizeSettings.OrganizeSettings_C.CheckGuildName
// 0x0070 (0x0070 - 0x0000)
struct OrganizeSettings_C_CheckGuildName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Result;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bNgExisted;                                        // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B93[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNgWordWithTarget_IsValid;              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_ReturnValue;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_IsValid_1;            // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_ReturnValue_1;        // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OrganizeSettings_C_CheckGuildName) == 0x000008, "Wrong alignment on OrganizeSettings_C_CheckGuildName");
static_assert(sizeof(OrganizeSettings_C_CheckGuildName) == 0x000070, "Wrong size on OrganizeSettings_C_CheckGuildName");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, InText) == 0x000000, "Member 'OrganizeSettings_C_CheckGuildName::InText' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, Result) == 0x000018, "Member 'OrganizeSettings_C_CheckGuildName::Result' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, bNgExisted) == 0x000019, "Member 'OrganizeSettings_C_CheckGuildName::bNgExisted' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'OrganizeSettings_C_CheckGuildName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, CallFunc_GetSubstring_ReturnValue) == 0x000030, "Member 'OrganizeSettings_C_CheckGuildName::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'OrganizeSettings_C_CheckGuildName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000058, "Member 'OrganizeSettings_C_CheckGuildName::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, CallFunc_HasNgWordWithTarget_IsValid) == 0x000068, "Member 'OrganizeSettings_C_CheckGuildName::CallFunc_HasNgWordWithTarget_IsValid' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, CallFunc_HasNgWordWithTarget_ReturnValue) == 0x000069, "Member 'OrganizeSettings_C_CheckGuildName::CallFunc_HasNgWordWithTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, CallFunc_HasNgWordWithTarget_IsValid_1) == 0x00006A, "Member 'OrganizeSettings_C_CheckGuildName::CallFunc_HasNgWordWithTarget_IsValid_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, CallFunc_HasNgWordWithTarget_ReturnValue_1) == 0x00006B, "Member 'OrganizeSettings_C_CheckGuildName::CallFunc_HasNgWordWithTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OrganizeSettings_C_CheckGuildName, CallFunc_BooleanOR_ReturnValue) == 0x00006C, "Member 'OrganizeSettings_C_CheckGuildName::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

