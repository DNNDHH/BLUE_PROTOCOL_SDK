#pragma once

 

// Package: BattleInfoHUD

#include "Basic.hpp"

#include "ST_TutorialExtendData_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "ST_TutorialExtendDataMain_structs.hpp"


namespace SDK::Params
{

// Function BattleInfoHUD.BattleInfoHUD_C.ExecuteUbergraph_BattleInfoHUD
// 0x0228 (0x0228 - 0x0000)
struct BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5007[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlaceGuide_C*                          CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTickerMessage_C*                       CallFunc_Create_ReturnValue_1;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5008[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_wildcard_Variable;                            // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5009[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0040(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_500A[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x00A0(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_500B[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item;                           // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetJingleManager_IsValid;                 // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_500C[0x5];                                     // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UJingleManager*                         CallFunc_GetJingleManager_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_TutorialHelpId;                 // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class FName TutorialHelpId)>   K2Node_CreateDelegate_OutputDelegate_1;            // 0x00F0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetJingleManager_IsValid_1;               // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_500D[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJingleManager*                         CallFunc_GetJingleManager_ReturnValue_1;           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_500E[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_500F[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetJingleManager_IsValid_2;               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5010[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJingleManager*                         CallFunc_GetJingleManager_ReturnValue_2;           // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5011[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x0170(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5012[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0184(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetJingleManager_IsValid_3;               // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5013[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UJingleManager*                         CallFunc_GetJingleManager_ReturnValue_3;           // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName TutorialHelpId)>   K2Node_CreateDelegate_OutputDelegate_3;            // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
	class UTutorialHelpDialogBox_C*               CallFunc_Create_ReturnValue_2;                     // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x01C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5014[0x1];                                     // 0x01C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Combo;                          // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5015[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_InRespawnTime;                  // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5016[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5017[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetComboCount_ReturnValue;                // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetJingleManager_IsValid_4;               // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5018[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJingleManager*                         CallFunc_GetJingleManager_ReturnValue_4;           // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5019[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD) == 0x000008, "Wrong alignment on BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD");
static_assert(sizeof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD) == 0x000228, "Wrong size on BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, EntryPoint) == 0x000000, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Create_ReturnValue) == 0x000018, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Create_ReturnValue_1) == 0x000020, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, Temp_bool_Variable) == 0x000028, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, Temp_byte_Variable) == 0x000029, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, Temp_byte_Variable_1) == 0x00002A, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, Temp_bool_True_if_break_was_hit_Variable) == 0x00002B, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, Temp_byte_Variable_2) == 0x000031, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, Temp_wildcard_Variable) == 0x000034, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetDataTableRowFromName_OutRow) == 0x000040, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000098, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0000A0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0000B0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Array_Get_Item) == 0x0000B4, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C4, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetClassType_ReturnValue) == 0x0000C5, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, Temp_byte_Variable_3) == 0x0000C6, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000C7, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_BooleanOR_ReturnValue) == 0x0000C8, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, Temp_bool_Variable_1) == 0x0000C9, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetJingleManager_IsValid) == 0x0000CA, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetJingleManager_IsValid' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetJingleManager_ReturnValue) == 0x0000D0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetJingleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_CustomEvent_TutorialHelpId) == 0x0000D8, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_CustomEvent_TutorialHelpId' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Conv_NameToString_ReturnValue) == 0x0000E0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Concat_StrStr_ReturnValue) == 0x000100, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000110, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetJingleManager_IsValid_1) == 0x000120, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetJingleManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetJingleManager_ReturnValue_1) == 0x000128, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetJingleManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, Temp_int_Loop_Counter_Variable) == 0x000130, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Less_IntInt_ReturnValue) == 0x000134, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Add_IntInt_ReturnValue) == 0x000138, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_BooleanAND_ReturnValue) == 0x00013C, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetPlayerController_ReturnValue) == 0x000140, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetJingleManager_IsValid_2) == 0x000148, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetJingleManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetJingleManager_ReturnValue_2) == 0x000150, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetJingleManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000158, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetHUD_ReturnValue) == 0x000168, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x000170, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_DynamicCast_bSuccess_1) == 0x000180, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x000184, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetJingleManager_IsValid_3) == 0x000194, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetJingleManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetJingleManager_ReturnValue_3) == 0x000198, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetJingleManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001A0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_Create_ReturnValue_2) == 0x0001B0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x0001B8, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_CustomEvent_InUIType) == 0x0001C0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_CustomEvent_bInVisibility) == 0x0001C1, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_CustomEvent_bInInstantly) == 0x0001C2, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetVisibleSetting_ReturnValue) == 0x0001C3, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_Select_Default) == 0x0001C4, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_Select_Default_1) == 0x0001C5, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0001C6, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_CustomEvent_Combo) == 0x0001C8, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_CustomEvent_Combo' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0001D0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_CustomEvent_InRespawnTime) == 0x0001D8, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_CustomEvent_InRespawnTime' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0001E0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_DynamicCast_bSuccess_2) == 0x0001E8, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetComboCount_ReturnValue) == 0x0001EC, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetComboCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetPlayerController_ReturnValue_1) == 0x0001F0, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetJingleManager_IsValid_4) == 0x0001F8, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetJingleManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetJingleManager_ReturnValue_4) == 0x000200, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetJingleManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000208, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, K2Node_DynamicCast_bSuccess_3) == 0x000210, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x000218, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x000220, "Member 'BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.OnShowRespawn_Event
// 0x0004 (0x0004 - 0x0000)
struct BattleInfoHUD_C_OnShowRespawn_Event final
{
public:
	float                                         InRespawnTime;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleInfoHUD_C_OnShowRespawn_Event) == 0x000004, "Wrong alignment on BattleInfoHUD_C_OnShowRespawn_Event");
static_assert(sizeof(BattleInfoHUD_C_OnShowRespawn_Event) == 0x000004, "Wrong size on BattleInfoHUD_C_OnShowRespawn_Event");
static_assert(offsetof(BattleInfoHUD_C_OnShowRespawn_Event, InRespawnTime) == 0x000000, "Member 'BattleInfoHUD_C_OnShowRespawn_Event::InRespawnTime' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.OnShowCombo_Event
// 0x0004 (0x0004 - 0x0000)
struct BattleInfoHUD_C_OnShowCombo_Event final
{
public:
	int32                                         Combo;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleInfoHUD_C_OnShowCombo_Event) == 0x000004, "Wrong alignment on BattleInfoHUD_C_OnShowCombo_Event");
static_assert(sizeof(BattleInfoHUD_C_OnShowCombo_Event) == 0x000004, "Wrong size on BattleInfoHUD_C_OnShowCombo_Event");
static_assert(offsetof(BattleInfoHUD_C_OnShowCombo_Event, Combo) == 0x000000, "Member 'BattleInfoHUD_C_OnShowCombo_Event::Combo' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.JingleTutorialHelp_Events
// 0x0008 (0x0008 - 0x0000)
struct BattleInfoHUD_C_JingleTutorialHelp_Events final
{
public:
	class FName                                   Param_TutorialHelpId;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleInfoHUD_C_JingleTutorialHelp_Events) == 0x000004, "Wrong alignment on BattleInfoHUD_C_JingleTutorialHelp_Events");
static_assert(sizeof(BattleInfoHUD_C_JingleTutorialHelp_Events) == 0x000008, "Wrong size on BattleInfoHUD_C_JingleTutorialHelp_Events");
static_assert(offsetof(BattleInfoHUD_C_JingleTutorialHelp_Events, Param_TutorialHelpId) == 0x000000, "Member 'BattleInfoHUD_C_JingleTutorialHelp_Events::Param_TutorialHelpId' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.Get_PartyEngram
// 0x0018 (0x0018 - 0x0000)
struct BattleInfoHUD_C_Get_PartyEngram final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BattleInfoHUD_C_Get_PartyEngram) == 0x000008, "Wrong alignment on BattleInfoHUD_C_Get_PartyEngram");
static_assert(sizeof(BattleInfoHUD_C_Get_PartyEngram) == 0x000018, "Wrong size on BattleInfoHUD_C_Get_PartyEngram");
static_assert(offsetof(BattleInfoHUD_C_Get_PartyEngram, ReturnValue) == 0x000000, "Member 'BattleInfoHUD_C_Get_PartyEngram::ReturnValue' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.Get_NextValue
// 0x0018 (0x0018 - 0x0000)
struct BattleInfoHUD_C_Get_NextValue final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BattleInfoHUD_C_Get_NextValue) == 0x000008, "Wrong alignment on BattleInfoHUD_C_Get_NextValue");
static_assert(sizeof(BattleInfoHUD_C_Get_NextValue) == 0x000018, "Wrong size on BattleInfoHUD_C_Get_NextValue");
static_assert(offsetof(BattleInfoHUD_C_Get_NextValue, ReturnValue) == 0x000000, "Member 'BattleInfoHUD_C_Get_NextValue::ReturnValue' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.Get_PartyLevel
// 0x0018 (0x0018 - 0x0000)
struct BattleInfoHUD_C_Get_PartyLevel final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BattleInfoHUD_C_Get_PartyLevel) == 0x000008, "Wrong alignment on BattleInfoHUD_C_Get_PartyLevel");
static_assert(sizeof(BattleInfoHUD_C_Get_PartyLevel) == 0x000018, "Wrong size on BattleInfoHUD_C_Get_PartyLevel");
static_assert(offsetof(BattleInfoHUD_C_Get_PartyLevel, ReturnValue) == 0x000000, "Member 'BattleInfoHUD_C_Get_PartyLevel::ReturnValue' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.Get_Combination_Visibility_0
// 0x0001 (0x0001 - 0x0000)
struct BattleInfoHUD_C_Get_Combination_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleInfoHUD_C_Get_Combination_Visibility_0) == 0x000001, "Wrong alignment on BattleInfoHUD_C_Get_Combination_Visibility_0");
static_assert(sizeof(BattleInfoHUD_C_Get_Combination_Visibility_0) == 0x000001, "Wrong size on BattleInfoHUD_C_Get_Combination_Visibility_0");
static_assert(offsetof(BattleInfoHUD_C_Get_Combination_Visibility_0, ReturnValue) == 0x000000, "Member 'BattleInfoHUD_C_Get_Combination_Visibility_0::ReturnValue' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.Get_CombinationNumber_Text_0
// 0x0018 (0x0018 - 0x0000)
struct BattleInfoHUD_C_Get_CombinationNumber_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BattleInfoHUD_C_Get_CombinationNumber_Text_0) == 0x000008, "Wrong alignment on BattleInfoHUD_C_Get_CombinationNumber_Text_0");
static_assert(sizeof(BattleInfoHUD_C_Get_CombinationNumber_Text_0) == 0x000018, "Wrong size on BattleInfoHUD_C_Get_CombinationNumber_Text_0");
static_assert(offsetof(BattleInfoHUD_C_Get_CombinationNumber_Text_0, ReturnValue) == 0x000000, "Member 'BattleInfoHUD_C_Get_CombinationNumber_Text_0::ReturnValue' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.Get_CombinationTimer_Text_0
// 0x0018 (0x0018 - 0x0000)
struct BattleInfoHUD_C_Get_CombinationTimer_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BattleInfoHUD_C_Get_CombinationTimer_Text_0) == 0x000008, "Wrong alignment on BattleInfoHUD_C_Get_CombinationTimer_Text_0");
static_assert(sizeof(BattleInfoHUD_C_Get_CombinationTimer_Text_0) == 0x000018, "Wrong size on BattleInfoHUD_C_Get_CombinationTimer_Text_0");
static_assert(offsetof(BattleInfoHUD_C_Get_CombinationTimer_Text_0, ReturnValue) == 0x000000, "Member 'BattleInfoHUD_C_Get_CombinationTimer_Text_0::ReturnValue' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.IsAllHUDCreated
// 0x0002 (0x0002 - 0x0000)
struct BattleInfoHUD_C_IsAllHUDCreated final
{
public:
	bool                                          OutIsCreated;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsAllHUDValid;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleInfoHUD_C_IsAllHUDCreated) == 0x000001, "Wrong alignment on BattleInfoHUD_C_IsAllHUDCreated");
static_assert(sizeof(BattleInfoHUD_C_IsAllHUDCreated) == 0x000002, "Wrong size on BattleInfoHUD_C_IsAllHUDCreated");
static_assert(offsetof(BattleInfoHUD_C_IsAllHUDCreated, OutIsCreated) == 0x000000, "Member 'BattleInfoHUD_C_IsAllHUDCreated::OutIsCreated' has a wrong offset!");
static_assert(offsetof(BattleInfoHUD_C_IsAllHUDCreated, IsAllHUDValid) == 0x000001, "Member 'BattleInfoHUD_C_IsAllHUDCreated::IsAllHUDValid' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.Get_Countdown_Visibility_0
// 0x0001 (0x0001 - 0x0000)
struct BattleInfoHUD_C_Get_Countdown_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleInfoHUD_C_Get_Countdown_Visibility_0) == 0x000001, "Wrong alignment on BattleInfoHUD_C_Get_Countdown_Visibility_0");
static_assert(sizeof(BattleInfoHUD_C_Get_Countdown_Visibility_0) == 0x000001, "Wrong size on BattleInfoHUD_C_Get_Countdown_Visibility_0");
static_assert(offsetof(BattleInfoHUD_C_Get_Countdown_Visibility_0, ReturnValue) == 0x000000, "Member 'BattleInfoHUD_C_Get_Countdown_Visibility_0::ReturnValue' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.GetHitIndicator
// 0x0008 (0x0008 - 0x0000)
struct BattleInfoHUD_C_GetHitIndicator final
{
public:
	class UHitIndicator_C*                        Param_HitIndicator;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleInfoHUD_C_GetHitIndicator) == 0x000008, "Wrong alignment on BattleInfoHUD_C_GetHitIndicator");
static_assert(sizeof(BattleInfoHUD_C_GetHitIndicator) == 0x000008, "Wrong size on BattleInfoHUD_C_GetHitIndicator");
static_assert(offsetof(BattleInfoHUD_C_GetHitIndicator, Param_HitIndicator) == 0x000000, "Member 'BattleInfoHUD_C_GetHitIndicator::Param_HitIndicator' has a wrong offset!");

// Function BattleInfoHUD.BattleInfoHUD_C.GetRespawnHUD
// 0x0008 (0x0008 - 0x0000)
struct BattleInfoHUD_C_GetRespawnHUD final
{
public:
	class URespawnHUD_C*                          Param_RespawnHUD;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleInfoHUD_C_GetRespawnHUD) == 0x000008, "Wrong alignment on BattleInfoHUD_C_GetRespawnHUD");
static_assert(sizeof(BattleInfoHUD_C_GetRespawnHUD) == 0x000008, "Wrong size on BattleInfoHUD_C_GetRespawnHUD");
static_assert(offsetof(BattleInfoHUD_C_GetRespawnHUD, Param_RespawnHUD) == 0x000000, "Member 'BattleInfoHUD_C_GetRespawnHUD::Param_RespawnHUD' has a wrong offset!");

}

