#pragma once

 

// Package: Fishing_Cast

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Fishing_LineTensionStruct_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Fishing_Cast.Fishing_Cast_C.ExecuteUbergraph_Fishing_Cast
// 0x0518 (0x0518 - 0x0000)
struct Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4723[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0098(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4724[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00F8(0x0018)()
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4725[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0118(0x0040)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4726[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_1;     // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0180(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0198(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x01B0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x01F0(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_2;     // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0240(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0250(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0268(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0280(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x02C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x02D0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x02F8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x0320(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0360(0x0018)()
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_3;     // 0x0378(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x0388(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x03C8(0x0018)()
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_4;     // 0x03E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x03F0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0430(0x0018)()
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_5;     // 0x0448(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_9;            // 0x0458(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0498(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_10;           // 0x04B0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x04F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0500(0x0018)()
};
static_assert(alignof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast) == 0x000008, "Wrong alignment on Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast");
static_assert(sizeof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast) == 0x000518, "Wrong size on Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, EntryPoint) == 0x000000, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000018, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData_1) == 0x000098, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x0000D8, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetConfigSaveManager_IsValid) == 0x0000E8, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0000F0, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000F8, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetOperateMode_ReturnValue) == 0x000110, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData_2) == 0x000118, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_SwitchEnum_CmpSuccess) == 0x000158, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetDisplayTextByAction_ReturnValue_1) == 0x000160, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetDisplayTextByAction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000170, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000180, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000198, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData_3) == 0x0001B0, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData_4) == 0x0001F0, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetDisplayTextByAction_ReturnValue_2) == 0x000230, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetDisplayTextByAction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeArray_Array) == 0x000240, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000250, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Format_ReturnValue) == 0x000268, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData_5) == 0x000280, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeArray_Array_1) == 0x0002C0, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Format_ReturnValue_1) == 0x0002D0, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0002E8, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0002F8, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000310, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData_6) == 0x000320, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000360, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetDisplayTextByAction_ReturnValue_3) == 0x000378, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetDisplayTextByAction_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData_7) == 0x000388, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue_8) == 0x0003C8, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetDisplayTextByAction_ReturnValue_4) == 0x0003E0, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetDisplayTextByAction_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData_8) == 0x0003F0, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000430, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_GetDisplayTextByAction_ReturnValue_5) == 0x000448, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_GetDisplayTextByAction_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData_9) == 0x000458, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData_9' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000498, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeStruct_FormatArgumentData_10) == 0x0004B0, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeStruct_FormatArgumentData_10' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, K2Node_MakeArray_Array_2) == 0x0004F0, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast, CallFunc_Format_ReturnValue_2) == 0x000500, "Member 'Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast::CallFunc_Format_ReturnValue_2' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Fishing_Cast_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Cast_C_PreConstruct) == 0x000001, "Wrong alignment on Fishing_Cast_C_PreConstruct");
static_assert(sizeof(Fishing_Cast_C_PreConstruct) == 0x000001, "Wrong size on Fishing_Cast_C_PreConstruct");
static_assert(offsetof(Fishing_Cast_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Fishing_Cast_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.SetStaminaGauge
// 0x0040 (0x0040 - 0x0000)
struct Fishing_Cast_C_SetStaminaGauge final
{
public:
	float                                         CurentStamina;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxStamina;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StaminaPercentage;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SafeDivide_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4727[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Cast_C_SetStaminaGauge) == 0x000008, "Wrong alignment on Fishing_Cast_C_SetStaminaGauge");
static_assert(sizeof(Fishing_Cast_C_SetStaminaGauge) == 0x000040, "Wrong size on Fishing_Cast_C_SetStaminaGauge");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, CurentStamina) == 0x000000, "Member 'Fishing_Cast_C_SetStaminaGauge::CurentStamina' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, MaxStamina) == 0x000004, "Member 'Fishing_Cast_C_SetStaminaGauge::MaxStamina' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, StaminaPercentage) == 0x000008, "Member 'Fishing_Cast_C_SetStaminaGauge::StaminaPercentage' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, CallFunc_SafeDivide_ReturnValue) == 0x00000C, "Member 'Fishing_Cast_C_SetStaminaGauge::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'Fishing_Cast_C_SetStaminaGauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, CallFunc_Less_FloatFloat_ReturnValue) == 0x000018, "Member 'Fishing_Cast_C_SetStaminaGauge::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00001C, "Member 'Fishing_Cast_C_SetStaminaGauge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000020, "Member 'Fishing_Cast_C_SetStaminaGauge::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, CallFunc_GetPosition_ReturnValue) == 0x000028, "Member 'Fishing_Cast_C_SetStaminaGauge::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, CallFunc_BreakVector2D_X) == 0x000030, "Member 'Fishing_Cast_C_SetStaminaGauge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, CallFunc_BreakVector2D_Y) == 0x000034, "Member 'Fishing_Cast_C_SetStaminaGauge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetStaminaGauge, CallFunc_MakeVector2D_ReturnValue) == 0x000038, "Member 'Fishing_Cast_C_SetStaminaGauge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.SetTensionGauge
// 0x00B0 (0x00B0 - 0x0000)
struct Fishing_Cast_C_SetTensionGauge final
{
public:
	float                                         TensionValue;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         L_TensionValue;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NewLocalVar_0;                                     // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4728[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4729[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_472A[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_472B[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_UpdateLineColor_NewParam;                 // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Cast_C_SetTensionGauge) == 0x000008, "Wrong alignment on Fishing_Cast_C_SetTensionGauge");
static_assert(sizeof(Fishing_Cast_C_SetTensionGauge) == 0x0000B0, "Wrong size on Fishing_Cast_C_SetTensionGauge");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, TensionValue) == 0x000000, "Member 'Fishing_Cast_C_SetTensionGauge::TensionValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, L_TensionValue) == 0x000004, "Member 'Fishing_Cast_C_SetTensionGauge::L_TensionValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, NewLocalVar_0) == 0x000008, "Member 'Fishing_Cast_C_SetTensionGauge::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000018, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000028, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00002C, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_Round_ReturnValue) == 0x000030, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000058, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_GetSize_ReturnValue) == 0x000078, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_BreakVector2D_X) == 0x000080, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_BreakVector2D_Y) == 0x000084, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000088, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_MakeVector2D_ReturnValue) == 0x00008C, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_MakeVector2D_ReturnValue_1) == 0x000094, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00009C, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_SetTensionGauge, CallFunc_UpdateLineColor_NewParam) == 0x0000A0, "Member 'Fishing_Cast_C_SetTensionGauge::CallFunc_UpdateLineColor_NewParam' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.Get_FishStaminaGauge_Brush_0
// 0x0088 (0x0088 - 0x0000)
struct Fishing_Cast_C_Get_FishStaminaGauge_Brush_0 final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(Fishing_Cast_C_Get_FishStaminaGauge_Brush_0) == 0x000008, "Wrong alignment on Fishing_Cast_C_Get_FishStaminaGauge_Brush_0");
static_assert(sizeof(Fishing_Cast_C_Get_FishStaminaGauge_Brush_0) == 0x000088, "Wrong size on Fishing_Cast_C_Get_FishStaminaGauge_Brush_0");
static_assert(offsetof(Fishing_Cast_C_Get_FishStaminaGauge_Brush_0, ReturnValue) == 0x000000, "Member 'Fishing_Cast_C_Get_FishStaminaGauge_Brush_0::ReturnValue' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.InitFishIconPos
// 0x0038 (0x0038 - 0x0000)
struct Fishing_Cast_C_InitFishIconPos final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_1;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Cast_C_InitFishIconPos) == 0x000008, "Wrong alignment on Fishing_Cast_C_InitFishIconPos");
static_assert(sizeof(Fishing_Cast_C_InitFishIconPos) == 0x000038, "Wrong size on Fishing_Cast_C_InitFishIconPos");
static_assert(offsetof(Fishing_Cast_C_InitFishIconPos, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'Fishing_Cast_C_InitFishIconPos::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitFishIconPos, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000008, "Member 'Fishing_Cast_C_InitFishIconPos::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitFishIconPos, CallFunc_GetSize_ReturnValue) == 0x000010, "Member 'Fishing_Cast_C_InitFishIconPos::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitFishIconPos, CallFunc_GetSize_ReturnValue_1) == 0x000018, "Member 'Fishing_Cast_C_InitFishIconPos::CallFunc_GetSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitFishIconPos, CallFunc_BreakVector2D_X) == 0x000020, "Member 'Fishing_Cast_C_InitFishIconPos::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitFishIconPos, CallFunc_BreakVector2D_Y) == 0x000024, "Member 'Fishing_Cast_C_InitFishIconPos::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitFishIconPos, CallFunc_BreakVector2D_X_1) == 0x000028, "Member 'Fishing_Cast_C_InitFishIconPos::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitFishIconPos, CallFunc_BreakVector2D_Y_1) == 0x00002C, "Member 'Fishing_Cast_C_InitFishIconPos::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitFishIconPos, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000030, "Member 'Fishing_Cast_C_InitFishIconPos::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.InitLineTensionColorData
// 0x0068 (0x0068 - 0x0000)
struct Fishing_Cast_C_InitLineTensionColorData final
{
public:
	TArray<class FName>                           DataNames;                                         // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_472C[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFishing_LineTensionStruct             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0028(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_472D[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_472E[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0058(0x0010)(ReferenceParm)
};
static_assert(alignof(Fishing_Cast_C_InitLineTensionColorData) == 0x000008, "Wrong alignment on Fishing_Cast_C_InitLineTensionColorData");
static_assert(sizeof(Fishing_Cast_C_InitLineTensionColorData) == 0x000068, "Wrong size on Fishing_Cast_C_InitLineTensionColorData");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, DataNames) == 0x000000, "Member 'Fishing_Cast_C_InitLineTensionColorData::DataNames' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, Temp_int_Array_Index_Variable) == 0x000010, "Member 'Fishing_Cast_C_InitLineTensionColorData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'Fishing_Cast_C_InitLineTensionColorData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'Fishing_Cast_C_InitLineTensionColorData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, CallFunc_Array_Get_Item) == 0x00001C, "Member 'Fishing_Cast_C_InitLineTensionColorData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000028, "Member 'Fishing_Cast_C_InitLineTensionColorData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000048, "Member 'Fishing_Cast_C_InitLineTensionColorData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'Fishing_Cast_C_InitLineTensionColorData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'Fishing_Cast_C_InitLineTensionColorData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'Fishing_Cast_C_InitLineTensionColorData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_InitLineTensionColorData, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000058, "Member 'Fishing_Cast_C_InitLineTensionColorData::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.UpdateLineColor
// 0x0068 (0x0068 - 0x0000)
struct Fishing_Cast_C_UpdateLineColor final
{
public:
	float                                         LineTensionPercentage;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NewParam;                                          // 0x0004(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Ret;                                               // 0x0014(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LLinePercentage;                                   // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_472F[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4730[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFishing_LineTensionStruct             CallFunc_Array_Get_Item;                           // 0x0040(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Cast_C_UpdateLineColor) == 0x000008, "Wrong alignment on Fishing_Cast_C_UpdateLineColor");
static_assert(sizeof(Fishing_Cast_C_UpdateLineColor) == 0x000068, "Wrong size on Fishing_Cast_C_UpdateLineColor");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, LineTensionPercentage) == 0x000000, "Member 'Fishing_Cast_C_UpdateLineColor::LineTensionPercentage' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, NewParam) == 0x000004, "Member 'Fishing_Cast_C_UpdateLineColor::NewParam' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, Ret) == 0x000014, "Member 'Fishing_Cast_C_UpdateLineColor::Ret' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, LLinePercentage) == 0x000024, "Member 'Fishing_Cast_C_UpdateLineColor::LLinePercentage' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, Temp_int_Array_Index_Variable) == 0x000028, "Member 'Fishing_Cast_C_UpdateLineColor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'Fishing_Cast_C_UpdateLineColor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'Fishing_Cast_C_UpdateLineColor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, Temp_bool_True_if_break_was_hit_Variable) == 0x000034, "Member 'Fishing_Cast_C_UpdateLineColor::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, CallFunc_IsValid_ReturnValue) == 0x000035, "Member 'Fishing_Cast_C_UpdateLineColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, CallFunc_Not_PreBool_ReturnValue) == 0x000036, "Member 'Fishing_Cast_C_UpdateLineColor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'Fishing_Cast_C_UpdateLineColor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, CallFunc_Array_Get_Item) == 0x000040, "Member 'Fishing_Cast_C_UpdateLineColor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'Fishing_Cast_C_UpdateLineColor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, CallFunc_BooleanAND_ReturnValue) == 0x000061, "Member 'Fishing_Cast_C_UpdateLineColor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000062, "Member 'Fishing_Cast_C_UpdateLineColor::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000063, "Member 'Fishing_Cast_C_UpdateLineColor::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_UpdateLineColor, CallFunc_BooleanAND_ReturnValue_1) == 0x000064, "Member 'Fishing_Cast_C_UpdateLineColor::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.AnimHookSuccess
// 0x0008 (0x0008 - 0x0000)
struct Fishing_Cast_C_AnimHookSuccess final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Cast_C_AnimHookSuccess) == 0x000008, "Wrong alignment on Fishing_Cast_C_AnimHookSuccess");
static_assert(sizeof(Fishing_Cast_C_AnimHookSuccess) == 0x000008, "Wrong size on Fishing_Cast_C_AnimHookSuccess");
static_assert(offsetof(Fishing_Cast_C_AnimHookSuccess, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Fishing_Cast_C_AnimHookSuccess::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.AnimSuccess
// 0x0008 (0x0008 - 0x0000)
struct Fishing_Cast_C_AnimSuccess final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fishing_Cast_C_AnimSuccess) == 0x000008, "Wrong alignment on Fishing_Cast_C_AnimSuccess");
static_assert(sizeof(Fishing_Cast_C_AnimSuccess) == 0x000008, "Wrong size on Fishing_Cast_C_AnimSuccess");
static_assert(offsetof(Fishing_Cast_C_AnimSuccess, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Fishing_Cast_C_AnimSuccess::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.AnimFail
// 0x0010 (0x0010 - 0x0000)
struct Fishing_Cast_C_AnimFail final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Cast_C_AnimFail) == 0x000008, "Wrong alignment on Fishing_Cast_C_AnimFail");
static_assert(sizeof(Fishing_Cast_C_AnimFail) == 0x000010, "Wrong size on Fishing_Cast_C_AnimFail");
static_assert(offsetof(Fishing_Cast_C_AnimFail, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Fishing_Cast_C_AnimFail::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_AnimFail, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'Fishing_Cast_C_AnimFail::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function Fishing_Cast.Fishing_Cast_C.Init
// 0x00E8 (0x00E8 - 0x0000)
struct Fishing_Cast_C_Init final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4731[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0070(0x0018)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0090(0x0010)(ReferenceParm)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFishing_LineTensionStruct             CallFunc_GetDataTableRowFromName_OutRow;           // 0x00B8(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4732[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fishing_Cast_C_Init) == 0x000008, "Wrong alignment on Fishing_Cast_C_Init");
static_assert(sizeof(Fishing_Cast_C_Init) == 0x0000E8, "Wrong size on Fishing_Cast_C_Init");
static_assert(offsetof(Fishing_Cast_C_Init, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Fishing_Cast_C_Init::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Fishing_Cast_C_Init::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Fishing_Cast_C_Init::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'Fishing_Cast_C_Init::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000020, "Member 'Fishing_Cast_C_Init::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'Fishing_Cast_C_Init::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'Fishing_Cast_C_Init::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000060, "Member 'Fishing_Cast_C_Init::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000070, "Member 'Fishing_Cast_C_Init::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000088, "Member 'Fishing_Cast_C_Init::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000090, "Member 'Fishing_Cast_C_Init::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_GetSize_ReturnValue) == 0x0000A0, "Member 'Fishing_Cast_C_Init::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'Fishing_Cast_C_Init::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_BreakVector2D_X) == 0x0000B0, "Member 'Fishing_Cast_C_Init::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_BreakVector2D_Y) == 0x0000B4, "Member 'Fishing_Cast_C_Init::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000B8, "Member 'Fishing_Cast_C_Init::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D8, "Member 'Fishing_Cast_C_Init::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_Array_Add_ReturnValue) == 0x0000DC, "Member 'Fishing_Cast_C_Init::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'Fishing_Cast_C_Init::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fishing_Cast_C_Init, CallFunc_Less_IntInt_ReturnValue) == 0x0000E4, "Member 'Fishing_Cast_C_Init::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

