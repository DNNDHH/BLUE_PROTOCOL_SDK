#pragma once

 

// Package: EngramCannonHUD_KeyHelp

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.ExecuteUbergraph_EngramCannonHUD_KeyHelp
// 0x0048 (0x0048 - 0x0000)
struct EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_458B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_458C[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerEngramCannonComponent*         CallFunc_GetPlayerEngramCannonComponent_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerEngramCannonComponent*         CallFunc_GetPlayerEngramCannonComponent_ReturnValue_1; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp) == 0x000008, "Wrong alignment on EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp");
static_assert(sizeof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp) == 0x000048, "Wrong size on EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp, EntryPoint) == 0x000000, "Member 'EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp::EntryPoint' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000018, "Member 'EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000020, "Member 'EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp, CallFunc_GetPlayerEngramCannonComponent_ReturnValue) == 0x000030, "Member 'EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp::CallFunc_GetPlayerEngramCannonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp, CallFunc_GetPlayerEngramCannonComponent_ReturnValue_1) == 0x000038, "Member 'EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp::CallFunc_GetPlayerEngramCannonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp, CallFunc_IsValid_ReturnValue_2) == 0x000040, "Member 'EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp, CallFunc_IsValid_ReturnValue_3) == 0x000041, "Member 'EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.UpdateKeyText
// 0x08E0 (0x08E0 - 0x0000)
struct EngramCannonHUD_KeyHelp_C_UpdateKeyText final
{
public:
	struct FSBPlayerClassKeyConfigData            TmpKeyConfigData;                                  // 0x0000(0x01C8)(Edit, BlueprintVisible)
	bool                                          TmpIsGamePad;                                      // 0x01C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_458D[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBKeyConfigAction>                    TmpKeyConfigActionList;                            // 0x01D0(0x0010)(Edit, BlueprintVisible)
	TArray<class USBRuntimeTextBlock*>            TmpTextList;                                       // 0x01E0(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigAction                            Temp_byte_Variable;                                // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            Temp_byte_Variable_1;                              // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigAction                            K2Node_Select_Default;                             // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            Temp_byte_Variable_2;                              // 0x01F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            Temp_byte_Variable_3;                              // 0x01F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x01F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigAction                            K2Node_Select_Default_1;                           // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_458E[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBKeyConfigAction>                    K2Node_MakeArray_Array;                            // 0x0200(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_4;                              // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_458F[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0218(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigAction                            CallFunc_Array_Get_Item;                           // 0x021D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue;              // 0x021E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4590[0x1];                                     // 0x021F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item_1;                         // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue;              // 0x0228(0x0018)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          CallFunc_GetActionKeyMouse_MouseKey;               // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_GetActionKeyMouse_KeyboardKey;            // 0x0245(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0246(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4591[0x1];                                     // 0x0247(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyboardKeyToKey_ReturnValue;             // 0x0248(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_MouseKeyToKey_ReturnValue;                // 0x0260(0x0018)(HasGetValueTypeHash)
	struct FKey                                   K2Node_Select_Default_2;                           // 0x0278(0x0018)(ConstParm, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4592[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_Select_Default_3;                           // 0x02A0(0x0018)(ConstParm, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4593[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4594[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x02F8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4595[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBRuntimeTextBlock*>            K2Node_MakeArray_Array_1;                          // 0x0300(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4596[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4597[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassCommonKeyConfig_ReturnValue;      // 0x0328(0x01C8)()
	int32                                         K2Node_Select_Default_4;                           // 0x04F0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4598[0x4];                                     // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0500(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0510(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4599[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0520(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0530(0x0018)()
	bool                                          CallFunc_IsClassKeyConfigCustomized_ReturnValue;   // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_459A[0x7];                                     // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassKeyConfig_ReturnValue;            // 0x0550(0x01C8)()
	struct FSBPlayerClassKeyConfigData            K2Node_Select_Default_5;                           // 0x0718(0x01C8)()
};
static_assert(alignof(EngramCannonHUD_KeyHelp_C_UpdateKeyText) == 0x000008, "Wrong alignment on EngramCannonHUD_KeyHelp_C_UpdateKeyText");
static_assert(sizeof(EngramCannonHUD_KeyHelp_C_UpdateKeyText) == 0x0008E0, "Wrong size on EngramCannonHUD_KeyHelp_C_UpdateKeyText");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, TmpKeyConfigData) == 0x000000, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::TmpKeyConfigData' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, TmpIsGamePad) == 0x0001C8, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::TmpIsGamePad' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, TmpKeyConfigActionList) == 0x0001D0, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::TmpKeyConfigActionList' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, TmpTextList) == 0x0001E0, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::TmpTextList' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_bool_Variable) == 0x0001F0, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_byte_Variable) == 0x0001F1, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_byte_Variable_1) == 0x0001F2, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_bool_Variable_1) == 0x0001F3, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, K2Node_Select_Default) == 0x0001F4, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_byte_Variable_2) == 0x0001F5, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_byte_Variable_3) == 0x0001F6, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_bool_Variable_2) == 0x0001F7, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, K2Node_Select_Default_1) == 0x0001F8, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_bool_Variable_3) == 0x0001F9, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, K2Node_MakeArray_Array) == 0x000200, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_bool_Variable_4) == 0x000210, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_int_Array_Index_Variable) == 0x000214, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_int_Variable) == 0x000218, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00021C, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_Array_Get_Item) == 0x00021D, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetActionKeyPad_ReturnValue) == 0x00021E, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetActionKeyPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_Array_Get_Item_1) == 0x000220, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GamepadKeyToKey_ReturnValue) == 0x000228, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GamepadKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_Array_Length_ReturnValue) == 0x000240, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetActionKeyMouse_MouseKey) == 0x000244, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetActionKeyMouse_MouseKey' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetActionKeyMouse_KeyboardKey) == 0x000245, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetActionKeyMouse_KeyboardKey' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000246, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_KeyboardKeyToKey_ReturnValue) == 0x000248, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_KeyboardKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_MouseKeyToKey_ReturnValue) == 0x000260, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_MouseKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, K2Node_Select_Default_2) == 0x000278, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetConfigSaveManager_IsValid) == 0x000290, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000298, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, K2Node_Select_Default_3) == 0x0002A0, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetOperateMode_ReturnValue) == 0x0002B8, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetKeyTextByKey_ReturnValue) == 0x0002C0, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002D0, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_Concat_StrStr_ReturnValue) == 0x0002D8, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0002E8, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_int_Variable_1) == 0x0002F8, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, K2Node_MakeArray_Array_1) == 0x000300, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_int_Loop_Counter_Variable) == 0x000310, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_Less_IntInt_ReturnValue) == 0x000314, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_Add_IntInt_ReturnValue) == 0x000318, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, Temp_bool_Variable_5) == 0x00031C, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetPlayerManager_ReturnValue) == 0x000320, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetClassCommonKeyConfig_ReturnValue) == 0x000328, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetClassCommonKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, K2Node_Select_Default_4) == 0x0004F0, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0004F8, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000500, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000510, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, K2Node_DynamicCast_bSuccess) == 0x000518, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000520, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_Conv_StringToText_ReturnValue) == 0x000530, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_IsClassKeyConfigCustomized_ReturnValue) == 0x000548, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_IsClassKeyConfigCustomized_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, CallFunc_GetClassKeyConfig_ReturnValue) == 0x000550, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::CallFunc_GetClassKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_UpdateKeyText, K2Node_Select_Default_5) == 0x000718, "Member 'EngramCannonHUD_KeyHelp_C_UpdateKeyText::K2Node_Select_Default_5' has a wrong offset!");

// Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.SetEnableKeyHelp
// 0x0001 (0x0001 - 0x0000)
struct EngramCannonHUD_KeyHelp_C_SetEnableKeyHelp final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EngramCannonHUD_KeyHelp_C_SetEnableKeyHelp) == 0x000001, "Wrong alignment on EngramCannonHUD_KeyHelp_C_SetEnableKeyHelp");
static_assert(sizeof(EngramCannonHUD_KeyHelp_C_SetEnableKeyHelp) == 0x000001, "Wrong size on EngramCannonHUD_KeyHelp_C_SetEnableKeyHelp");
static_assert(offsetof(EngramCannonHUD_KeyHelp_C_SetEnableKeyHelp, Enable) == 0x000000, "Member 'EngramCannonHUD_KeyHelp_C_SetEnableKeyHelp::Enable' has a wrong offset!");

}

