#pragma once

 

// Package: SelectInitializeHUD

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "LayoutPresetTypes_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SelectInitializeHUD.SelectInitializeHUD_C.OnSelected__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct SelectInitializeHUD_C_OnSelected__DelegateSignature final
{
public:
	ELayoutPresetTypes                            Preset;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectInitializeHUD_C_OnSelected__DelegateSignature) == 0x000001, "Wrong alignment on SelectInitializeHUD_C_OnSelected__DelegateSignature");
static_assert(sizeof(SelectInitializeHUD_C_OnSelected__DelegateSignature) == 0x000001, "Wrong size on SelectInitializeHUD_C_OnSelected__DelegateSignature");
static_assert(offsetof(SelectInitializeHUD_C_OnSelected__DelegateSignature, Preset) == 0x000000, "Member 'SelectInitializeHUD_C_OnSelected__DelegateSignature::Preset' has a wrong offset!");

// Function SelectInitializeHUD.SelectInitializeHUD_C.ExecuteUbergraph_SelectInitializeHUD
// 0x0148 (0x0148 - 0x0000)
struct SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELayoutPresetTypes                            Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79E8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD;                 // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79E9[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOptionHUDInterface> CallFunc_GetOptionLayoutableHUD_self_CastInput;    // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                            CallFunc_GetOptionLayoutableHUD_ReturnValue;       // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULayoutableHUD_C*                       K2Node_DynamicCast_AsLayoutable_HUD;               // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79EA[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79EB[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x00F4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_79EC[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0118(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0130(0x0018)()
};
static_assert(alignof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD) == 0x000008, "Wrong alignment on SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD");
static_assert(sizeof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD) == 0x000148, "Wrong size on SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, EntryPoint) == 0x000000, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, Temp_byte_Variable) == 0x000004, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, Temp_int_Variable) == 0x000008, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, Temp_int_Variable_1) == 0x00000C, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, Temp_int_Variable_2) == 0x000010, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, K2Node_Select_Default) == 0x000014, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_GetHUD_ReturnValue) == 0x000088, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, K2Node_MakeArray_Array) == 0x000090, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, K2Node_DynamicCast_AsSBBattle_HUD) == 0x0000A0, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::K2Node_DynamicCast_AsSBBattle_HUD' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_GetOptionLayoutableHUD_self_CastInput) == 0x0000B0, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_GetOptionLayoutableHUD_self_CastInput' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_GetOptionLayoutableHUD_ReturnValue) == 0x0000C0, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_GetOptionLayoutableHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, K2Node_DynamicCast_AsLayoutable_HUD) == 0x0000C8, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::K2Node_DynamicCast_AsLayoutable_HUD' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_PlayAnimation_ReturnValue) == 0x0000D8, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000E0, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_Create_ReturnValue) == 0x0000E8, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, K2Node_CustomEvent_Result) == 0x0000F0, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F1, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, K2Node_CreateDelegate_OutputDelegate) == 0x0000F4, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000108, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000118, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD, CallFunc_Format_ReturnValue) == 0x000130, "Member 'SelectInitializeHUD_C_ExecuteUbergraph_SelectInitializeHUD::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function SelectInitializeHUD.SelectInitializeHUD_C.OnSelectedHUD
// 0x0001 (0x0001 - 0x0000)
struct SelectInitializeHUD_C_OnSelectedHUD final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectInitializeHUD_C_OnSelectedHUD) == 0x000001, "Wrong alignment on SelectInitializeHUD_C_OnSelectedHUD");
static_assert(sizeof(SelectInitializeHUD_C_OnSelectedHUD) == 0x000001, "Wrong size on SelectInitializeHUD_C_OnSelectedHUD");
static_assert(offsetof(SelectInitializeHUD_C_OnSelectedHUD, Result) == 0x000000, "Member 'SelectInitializeHUD_C_OnSelectedHUD::Result' has a wrong offset!");

}

