#pragma once

 

// Package: TutorialHelpDialogBox

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_TutorialExtendData_structs.hpp"
#include "ST_TutorialExtendDataMain_structs.hpp"


namespace SDK::Params
{

// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.ExecuteUbergraph_TutorialHelpDialogBox
// 0x01D0 (0x01D0 - 0x0000)
struct TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_wildcard_Variable;                            // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9421[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9422[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0070(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9423[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_2;        // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_3;        // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_4;        // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_5;        // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9424[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9425[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9426[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9427[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x00D8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E8(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item;                           // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9428[0x5];                                     // 0x011B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0120(0x0018)()
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue_1;        // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9429[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x014C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x015E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_942A[0x1];                                     // 0x015F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_RegistTutorialHelp_ReturnValue;   // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_942B[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x016C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_942C[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ISCurrentPageEnd_NewParam;                // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_942D[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x018C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_TutorialHelpId;                 // 0x019C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsContinue;                     // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_942E[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_942F[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9430[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox) == 0x000008, "Wrong alignment on TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox");
static_assert(sizeof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox) == 0x0001D0, "Wrong size on TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, EntryPoint) == 0x000000, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, Temp_wildcard_Variable) == 0x000004, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_GetClassType_ReturnValue) == 0x00000C, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000068, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000070, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000080, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_Array_Length_ReturnValue) == 0x000084, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000088, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x000089, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_EqualEqual_BoolBool_ReturnValue_2) == 0x00008A, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_EqualEqual_BoolBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_EqualEqual_BoolBool_ReturnValue_3) == 0x00008B, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_EqualEqual_BoolBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_EqualEqual_BoolBool_ReturnValue_4) == 0x00008C, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_EqualEqual_BoolBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_BooleanAND_ReturnValue) == 0x00008D, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_BooleanAND_ReturnValue_1) == 0x00008E, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_EqualEqual_BoolBool_ReturnValue_5) == 0x00008F, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_EqualEqual_BoolBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_BooleanAND_ReturnValue_2) == 0x000090, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_GetPlayerController_ReturnValue) == 0x000098, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000A0, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x0000B0, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, Temp_bool_True_if_break_was_hit_Variable) == 0x0000B8, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x0000C0, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0000C8, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_Not_PreBool_ReturnValue) == 0x0000D1, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_GetSBRetMessage_ReturnValue) == 0x0000D8, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E8, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_PlayAnimation_ReturnValue) == 0x000100, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, Temp_int_Array_Index_Variable) == 0x000108, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_Array_Get_Item) == 0x00010C, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000118, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000119, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_BooleanOR_ReturnValue) == 0x00011A, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_MakeLiteralText_ReturnValue) == 0x000120, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_GetOwningPlayerPawn_ReturnValue_1) == 0x000138, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_GetOwningPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000140, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_DynamicCast_bSuccess_2) == 0x000148, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_CreateDelegate_OutputDelegate) == 0x00014C, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, Temp_bool_Variable) == 0x00015C, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_IsStandalone_ReturnValue) == 0x00015D, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_NotEqual_NameName_ReturnValue) == 0x00015E, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_Select_Default) == 0x000160, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_Request_RegistTutorialHelp_ReturnValue) == 0x000168, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_Request_RegistTutorialHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x000169, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_CreateDelegate_OutputDelegate_1) == 0x00016C, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_PlayAnimation_ReturnValue_1) == 0x000180, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_ISCurrentPageEnd_NewParam) == 0x000188, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_ISCurrentPageEnd_NewParam' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_CreateDelegate_OutputDelegate_2) == 0x00018C, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_CustomEvent_TutorialHelpId) == 0x00019C, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_CustomEvent_TutorialHelpId' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_CustomEvent_IsContinue) == 0x0001A4, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_CustomEvent_IsContinue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_PostAkEvent_ReturnValue) == 0x0001A8, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_CustomEvent_Sender) == 0x0001B0, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, K2Node_CustomEvent_Param) == 0x0001B8, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, Temp_int_Loop_Counter_Variable) == 0x0001C0, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_Less_IntInt_ReturnValue) == 0x0001C4, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_Add_IntInt_ReturnValue) == 0x0001C8, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox, CallFunc_BooleanAND_ReturnValue_3) == 0x0001CC, "Member 'TutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.EventClose
// 0x0010 (0x0010 - 0x0000)
struct TutorialHelpDialogBox_C_EventClose final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TutorialHelpDialogBox_C_EventClose) == 0x000008, "Wrong alignment on TutorialHelpDialogBox_C_EventClose");
static_assert(sizeof(TutorialHelpDialogBox_C_EventClose) == 0x000010, "Wrong size on TutorialHelpDialogBox_C_EventClose");
static_assert(offsetof(TutorialHelpDialogBox_C_EventClose, Sender) == 0x000000, "Member 'TutorialHelpDialogBox_C_EventClose::Sender' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_EventClose, Param) == 0x000008, "Member 'TutorialHelpDialogBox_C_EventClose::Param' has a wrong offset!");

// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnContinueOpen
// 0x000C (0x000C - 0x0000)
struct TutorialHelpDialogBox_C_OnContinueOpen final
{
public:
	class FName                                   Param_TutorialHelpId;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsContinue;                                  // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TutorialHelpDialogBox_C_OnContinueOpen) == 0x000004, "Wrong alignment on TutorialHelpDialogBox_C_OnContinueOpen");
static_assert(sizeof(TutorialHelpDialogBox_C_OnContinueOpen) == 0x00000C, "Wrong size on TutorialHelpDialogBox_C_OnContinueOpen");
static_assert(offsetof(TutorialHelpDialogBox_C_OnContinueOpen, Param_TutorialHelpId) == 0x000000, "Member 'TutorialHelpDialogBox_C_OnContinueOpen::Param_TutorialHelpId' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_OnContinueOpen, Param_IsContinue) == 0x000008, "Member 'TutorialHelpDialogBox_C_OnContinueOpen::Param_IsContinue' has a wrong offset!");

// Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.SaveReadHelpId
// 0x0278 (0x0278 - 0x0000)
struct TutorialHelpDialogBox_C_SaveReadHelpId final
{
public:
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9431[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9432[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9433[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveLibraryData_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9434[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0060(0x0218)()
};
static_assert(alignof(TutorialHelpDialogBox_C_SaveReadHelpId) == 0x000008, "Wrong alignment on TutorialHelpDialogBox_C_SaveReadHelpId");
static_assert(sizeof(TutorialHelpDialogBox_C_SaveReadHelpId) == 0x000278, "Wrong size on TutorialHelpDialogBox_C_SaveReadHelpId");
static_assert(offsetof(TutorialHelpDialogBox_C_SaveReadHelpId, CallFunc_GetCharacterId_ReturnValue) == 0x000000, "Member 'TutorialHelpDialogBox_C_SaveReadHelpId::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_SaveReadHelpId, CallFunc_NotEqual_NameName_ReturnValue) == 0x000010, "Member 'TutorialHelpDialogBox_C_SaveReadHelpId::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_SaveReadHelpId, CallFunc_GetPlayerId_ReturnValue) == 0x000018, "Member 'TutorialHelpDialogBox_C_SaveReadHelpId::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_SaveReadHelpId, Temp_bool_Variable) == 0x000028, "Member 'TutorialHelpDialogBox_C_SaveReadHelpId::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_SaveReadHelpId, CallFunc_GetPlayerId_ReturnValue_1) == 0x000030, "Member 'TutorialHelpDialogBox_C_SaveReadHelpId::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_SaveReadHelpId, CallFunc_GetLibrarySaveManager_IsValid) == 0x000040, "Member 'TutorialHelpDialogBox_C_SaveReadHelpId::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_SaveReadHelpId, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000048, "Member 'TutorialHelpDialogBox_C_SaveReadHelpId::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_SaveReadHelpId, K2Node_Select_Default) == 0x000050, "Member 'TutorialHelpDialogBox_C_SaveReadHelpId::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_SaveReadHelpId, CallFunc_SaveLibraryData_ReturnValue) == 0x000058, "Member 'TutorialHelpDialogBox_C_SaveReadHelpId::CallFunc_SaveLibraryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialHelpDialogBox_C_SaveReadHelpId, CallFunc_LoadLibraryData_ReturnValue) == 0x000060, "Member 'TutorialHelpDialogBox_C_SaveReadHelpId::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

}

