#pragma once

 

// Package: MailLimitIndicator

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MailLimitIndicator.MailLimitIndicator_C.ExecuteUbergraph_MailLimitIndicator
// 0x0278 (0x0278 - 0x0000)
struct MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBPadKeySkinType SkinType)>   K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ECC[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ECD[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ECE[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ECF[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             K2Node_CustomEvent_SkinType;                       // 0x00A8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMailLimitAleat_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEncourageOrganization_ReturnValue;      // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRestrictedUsage_ReturnValue;            // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetOpenCommandMenuFlag_ReturnValue;       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ED0[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x00C8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ED1[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue_1;           // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ED2[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue_2;           // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEncourageOrganization_ReturnValue_1;    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRestrictedUsage_ReturnValue_1;          // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ED3[0x5];                                     // 0x0113(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBookMarkerSlot                             CallFunc_FindBookMarkSlot_New_Slot;                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindBookMarkSlot_New_ReturnValue;         // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ED4[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0124(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ED5[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0138(0x0028)()
	class FString                                 CallFunc_GetBookMarkTypeKey_ReturnValue;           // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0170(0x0088)()
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0220(0x0018)()
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x023B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ED6[0x4];                                     // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x024A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ED7[0x5];                                     // 0x024B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPhotoMode_ReturnValue;                  // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ED8[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0272(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator) == 0x000008, "Wrong alignment on MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator");
static_assert(sizeof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator) == 0x000278, "Wrong size on MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, EntryPoint) == 0x000000, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, Temp_bool_Variable) == 0x000034, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, Temp_struct_Variable) == 0x000038, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, Temp_struct_Variable_1) == 0x000048, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, Temp_bool_Variable_1) == 0x000058, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CreateDelegate_OutputDelegate_3) == 0x00005C, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_MakeLiteralByte_ReturnValue) == 0x00007C, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetPlayerManager_ReturnValue) == 0x000080, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetConfigSaveManager_IsValid) == 0x000088, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000090, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetSBPlayerController_ReturnValue) == 0x000098, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetMailComponent_ReturnValue) == 0x0000A0, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetMailComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CustomEvent_SkinType) == 0x0000A8, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CustomEvent_SkinType' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetMailLimitAleat_ReturnValue) == 0x0000A9, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetMailLimitAleat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_IsEncourageOrganization_ReturnValue) == 0x0000AA, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_IsEncourageOrganization_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_IsRestrictedUsage_ReturnValue) == 0x0000AB, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_IsRestrictedUsage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000AC, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_BooleanOR_ReturnValue) == 0x0000AD, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_BooleanOR_ReturnValue_1) == 0x0000AE, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000AF, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetOpenCommandMenuFlag_ReturnValue) == 0x0000B0, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetOpenCommandMenuFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0000B8, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x0000C0, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CustomEvent_Result) == 0x0000C8, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0000D0, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetPlayerManager_ReturnValue_1) == 0x0000D8, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetMailComponent_ReturnValue_1) == 0x0000E0, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetMailComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x0000E8, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0000F0, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0000F8, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x000100, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetMailComponent_ReturnValue_2) == 0x000108, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetMailComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_IsEncourageOrganization_ReturnValue_1) == 0x000110, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_IsEncourageOrganization_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_IsRestrictedUsage_ReturnValue_1) == 0x000111, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_IsRestrictedUsage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_BooleanOR_ReturnValue_2) == 0x000112, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_PlayAnimation_ReturnValue) == 0x000118, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_FindBookMarkSlot_New_Slot) == 0x000120, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_FindBookMarkSlot_New_Slot' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_FindBookMarkSlot_New_ReturnValue) == 0x000121, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_FindBookMarkSlot_New_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_Select_Default) == 0x000124, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_MakeStruct_SlateColor) == 0x000138, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetBookMarkTypeKey_ReturnValue) == 0x000160, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetBookMarkTypeKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_MakeStruct_SlateBrush) == 0x000170, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x0001F8, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_Select_Default_1) == 0x000208, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000218, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_Conv_StringToText_ReturnValue) == 0x000220, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetVisibleSetting_ReturnValue) == 0x000238, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CustomEvent_InUIType) == 0x000239, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CustomEvent_bInVisibility) == 0x00023A, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CustomEvent_bInInstantly) == 0x00023B, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000240, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000248, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_BooleanAND_ReturnValue) == 0x000249, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, Temp_bool_Variable_2) == 0x00024A, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x000250, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_IsPhotoMode_ReturnValue) == 0x000258, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_IsPhotoMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CustomEvent_Sender) == 0x000260, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_CustomEvent_Param) == 0x000268, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_Not_PreBool_ReturnValue) == 0x000270, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, CallFunc_BooleanAND_ReturnValue_1) == 0x000271, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator, K2Node_Select_Default_2) == 0x000272, "Member 'MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator::K2Node_Select_Default_2' has a wrong offset!");

// Function MailLimitIndicator.MailLimitIndicator_C.OnPhotoMode
// 0x0010 (0x0010 - 0x0000)
struct MailLimitIndicator_C_OnPhotoMode final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailLimitIndicator_C_OnPhotoMode) == 0x000008, "Wrong alignment on MailLimitIndicator_C_OnPhotoMode");
static_assert(sizeof(MailLimitIndicator_C_OnPhotoMode) == 0x000010, "Wrong size on MailLimitIndicator_C_OnPhotoMode");
static_assert(offsetof(MailLimitIndicator_C_OnPhotoMode, Sender) == 0x000000, "Member 'MailLimitIndicator_C_OnPhotoMode::Sender' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_OnPhotoMode, Param) == 0x000008, "Member 'MailLimitIndicator_C_OnPhotoMode::Param' has a wrong offset!");

// Function MailLimitIndicator.MailLimitIndicator_C.UIVisibleSettingChangeDelegates
// 0x0003 (0x0003 - 0x0000)
struct MailLimitIndicator_C_UIVisibleSettingChangeDelegates final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailLimitIndicator_C_UIVisibleSettingChangeDelegates) == 0x000001, "Wrong alignment on MailLimitIndicator_C_UIVisibleSettingChangeDelegates");
static_assert(sizeof(MailLimitIndicator_C_UIVisibleSettingChangeDelegates) == 0x000003, "Wrong size on MailLimitIndicator_C_UIVisibleSettingChangeDelegates");
static_assert(offsetof(MailLimitIndicator_C_UIVisibleSettingChangeDelegates, InUIType) == 0x000000, "Member 'MailLimitIndicator_C_UIVisibleSettingChangeDelegates::InUIType' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_UIVisibleSettingChangeDelegates, bInVisibility) == 0x000001, "Member 'MailLimitIndicator_C_UIVisibleSettingChangeDelegates::bInVisibility' has a wrong offset!");
static_assert(offsetof(MailLimitIndicator_C_UIVisibleSettingChangeDelegates, bInInstantly) == 0x000002, "Member 'MailLimitIndicator_C_UIVisibleSettingChangeDelegates::bInInstantly' has a wrong offset!");

// Function MailLimitIndicator.MailLimitIndicator_C.OnChangeCommandMenuFlag
// 0x0001 (0x0001 - 0x0000)
struct MailLimitIndicator_C_OnChangeCommandMenuFlag final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MailLimitIndicator_C_OnChangeCommandMenuFlag) == 0x000001, "Wrong alignment on MailLimitIndicator_C_OnChangeCommandMenuFlag");
static_assert(sizeof(MailLimitIndicator_C_OnChangeCommandMenuFlag) == 0x000001, "Wrong size on MailLimitIndicator_C_OnChangeCommandMenuFlag");
static_assert(offsetof(MailLimitIndicator_C_OnChangeCommandMenuFlag, Result) == 0x000000, "Member 'MailLimitIndicator_C_OnChangeCommandMenuFlag::Result' has a wrong offset!");

// Function MailLimitIndicator.MailLimitIndicator_C.OnUpdateSkin
// 0x0001 (0x0001 - 0x0000)
struct MailLimitIndicator_C_OnUpdateSkin final
{
public:
	ESBPadKeySkinType                             SkinType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MailLimitIndicator_C_OnUpdateSkin) == 0x000001, "Wrong alignment on MailLimitIndicator_C_OnUpdateSkin");
static_assert(sizeof(MailLimitIndicator_C_OnUpdateSkin) == 0x000001, "Wrong size on MailLimitIndicator_C_OnUpdateSkin");
static_assert(offsetof(MailLimitIndicator_C_OnUpdateSkin, SkinType) == 0x000000, "Member 'MailLimitIndicator_C_OnUpdateSkin::SkinType' has a wrong offset!");

}

