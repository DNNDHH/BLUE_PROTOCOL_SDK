#pragma once

 

// Package: StatusAlimentNotify

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function StatusAlimentNotify.StatusAlimentNotify_C.ExecuteUbergraph_StatusAlimentNotify
// 0x0078 (0x0078 - 0x0000)
struct StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D73[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D74[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D75[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_OwnerActor;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStatusAilmentIconConfig             K2Node_CustomEvent_InputPin;                       // 0x0030(0x0014)(NoDestructor)
	uint8                                         Pad_4D76[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_FindIconAssetData_Texture;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindIconAssetData_IsFind;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D77[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_FindIconAssetData_TextID;                 // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindIconAssetData_bBuff;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStatusAilmentPlateType                     CallFunc_FindIconAssetData_Type;                   // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D78[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0070(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify) == 0x000008, "Wrong alignment on StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify");
static_assert(sizeof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify) == 0x000078, "Wrong size on StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, EntryPoint) == 0x000000, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::EntryPoint' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, Temp_byte_Variable) == 0x000004, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_GetSize_ReturnValue) == 0x000010, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, Temp_byte_Variable_1) == 0x000018, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_BreakVector2D_X) == 0x00001C, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_BreakVector2D_Y) == 0x000020, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, K2Node_CustomEvent_OwnerActor) == 0x000028, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::K2Node_CustomEvent_OwnerActor' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, K2Node_CustomEvent_InputPin) == 0x000030, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::K2Node_CustomEvent_InputPin' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_FindIconAssetData_Texture) == 0x000048, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_FindIconAssetData_Texture' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_FindIconAssetData_IsFind) == 0x000050, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_FindIconAssetData_IsFind' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_FindIconAssetData_TextID) == 0x000054, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_FindIconAssetData_TextID' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_FindIconAssetData_bBuff) == 0x00005C, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_FindIconAssetData_bBuff' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_FindIconAssetData_Type) == 0x00005D, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_FindIconAssetData_Type' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, Temp_bool_Variable) == 0x00005E, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_IsValid_ReturnValue) == 0x00005F, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, K2Node_Select_Default) == 0x000060, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, CallFunc_PlayAnimation_ReturnValue) == 0x000068, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify, K2Node_Event_Animation) == 0x000070, "Member 'StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify::K2Node_Event_Animation' has a wrong offset!");

// Function StatusAlimentNotify.StatusAlimentNotify_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct StatusAlimentNotify_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusAlimentNotify_C_OnAnimationFinished) == 0x000008, "Wrong alignment on StatusAlimentNotify_C_OnAnimationFinished");
static_assert(sizeof(StatusAlimentNotify_C_OnAnimationFinished) == 0x000008, "Wrong size on StatusAlimentNotify_C_OnAnimationFinished");
static_assert(offsetof(StatusAlimentNotify_C_OnAnimationFinished, Animation) == 0x000000, "Member 'StatusAlimentNotify_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function StatusAlimentNotify.StatusAlimentNotify_C.BP_Play
// 0x0020 (0x0020 - 0x0000)
struct StatusAlimentNotify_C_BP_Play final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStatusAilmentIconConfig             InputPin;                                          // 0x0008(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(StatusAlimentNotify_C_BP_Play) == 0x000008, "Wrong alignment on StatusAlimentNotify_C_BP_Play");
static_assert(sizeof(StatusAlimentNotify_C_BP_Play) == 0x000020, "Wrong size on StatusAlimentNotify_C_BP_Play");
static_assert(offsetof(StatusAlimentNotify_C_BP_Play, OwnerActor) == 0x000000, "Member 'StatusAlimentNotify_C_BP_Play::OwnerActor' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_BP_Play, InputPin) == 0x000008, "Member 'StatusAlimentNotify_C_BP_Play::InputPin' has a wrong offset!");

// Function StatusAlimentNotify.StatusAlimentNotify_C.Init_Internal
// 0x0020 (0x0020 - 0x0000)
struct StatusAlimentNotify_C_Init_Internal final
{
public:
	struct FSBStatusAilmentIconConfig             Status_AlimentIcon_Config;                         // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class FName                                   InTextID;                                          // 0x0014(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStatusAilmentPlateType                     Type;                                              // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusAlimentNotify_C_Init_Internal) == 0x000004, "Wrong alignment on StatusAlimentNotify_C_Init_Internal");
static_assert(sizeof(StatusAlimentNotify_C_Init_Internal) == 0x000020, "Wrong size on StatusAlimentNotify_C_Init_Internal");
static_assert(offsetof(StatusAlimentNotify_C_Init_Internal, Status_AlimentIcon_Config) == 0x000000, "Member 'StatusAlimentNotify_C_Init_Internal::Status_AlimentIcon_Config' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_Init_Internal, InTextID) == 0x000014, "Member 'StatusAlimentNotify_C_Init_Internal::InTextID' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_Init_Internal, Type) == 0x00001C, "Member 'StatusAlimentNotify_C_Init_Internal::Type' has a wrong offset!");

// Function StatusAlimentNotify.StatusAlimentNotify_C.SetBasePlate
// 0x0070 (0x0070 - 0x0000)
struct StatusAlimentNotify_C_SetBasePlate final
{
public:
	ESBStatusAilmentPlateType                     Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D79[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStatusAilmentIconConfig             SBStatusAilmentIconConfig;                         // 0x0004(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D7A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D7B[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D7C[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            CallFunc_Map_Find_Value;                           // 0x0040(0x0028)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D7D[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusAlimentNotify_C_SetBasePlate) == 0x000008, "Wrong alignment on StatusAlimentNotify_C_SetBasePlate");
static_assert(sizeof(StatusAlimentNotify_C_SetBasePlate) == 0x000070, "Wrong size on StatusAlimentNotify_C_SetBasePlate");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, Type) == 0x000000, "Member 'StatusAlimentNotify_C_SetBasePlate::Type' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, SBStatusAilmentIconConfig) == 0x000004, "Member 'StatusAlimentNotify_C_SetBasePlate::SBStatusAilmentIconConfig' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, Temp_bool_Variable) == 0x000018, "Member 'StatusAlimentNotify_C_SetBasePlate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000020, "Member 'StatusAlimentNotify_C_SetBasePlate::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, CallFunc_BooleanOR_ReturnValue) == 0x000030, "Member 'StatusAlimentNotify_C_SetBasePlate::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000034, "Member 'StatusAlimentNotify_C_SetBasePlate::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, CallFunc_MakeLiteralByte_ReturnValue) == 0x000038, "Member 'StatusAlimentNotify_C_SetBasePlate::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x00003C, "Member 'StatusAlimentNotify_C_SetBasePlate::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, CallFunc_Map_Find_Value) == 0x000040, "Member 'StatusAlimentNotify_C_SetBasePlate::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, CallFunc_Map_Find_ReturnValue) == 0x000068, "Member 'StatusAlimentNotify_C_SetBasePlate::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetBasePlate, K2Node_Select_Default) == 0x00006C, "Member 'StatusAlimentNotify_C_SetBasePlate::K2Node_Select_Default' has a wrong offset!");

// Function StatusAlimentNotify.StatusAlimentNotify_C.SetText
// 0x0118 (0x0118 - 0x0000)
struct StatusAlimentNotify_C_SetText final
{
public:
	struct FSBStatusAilmentIconConfig             SBStatusAilmentIconConfig;                         // 0x0000(0x0014)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class FName                                   InTextID;                                          // 0x0014(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D7E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0020(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class FString                                 Temp_string_Variable_1;                            // 0x0058(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            CallFunc_Map_Find_Value;                           // 0x0068(0x0028)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D7F[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_Map_Find_Value_1;                         // 0x0098(0x0028)()
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D80[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D8(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0100(0x0018)()
};
static_assert(alignof(StatusAlimentNotify_C_SetText) == 0x000008, "Wrong alignment on StatusAlimentNotify_C_SetText");
static_assert(sizeof(StatusAlimentNotify_C_SetText) == 0x000118, "Wrong size on StatusAlimentNotify_C_SetText");
static_assert(offsetof(StatusAlimentNotify_C_SetText, SBStatusAilmentIconConfig) == 0x000000, "Member 'StatusAlimentNotify_C_SetText::SBStatusAilmentIconConfig' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, InTextID) == 0x000014, "Member 'StatusAlimentNotify_C_SetText::InTextID' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, Temp_string_Variable) == 0x000020, "Member 'StatusAlimentNotify_C_SetText::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000030, "Member 'StatusAlimentNotify_C_SetText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'StatusAlimentNotify_C_SetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, Temp_string_Variable_1) == 0x000058, "Member 'StatusAlimentNotify_C_SetText::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, CallFunc_Map_Find_Value) == 0x000068, "Member 'StatusAlimentNotify_C_SetText::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, CallFunc_Map_Find_ReturnValue) == 0x000090, "Member 'StatusAlimentNotify_C_SetText::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, CallFunc_Map_Find_Value_1) == 0x000098, "Member 'StatusAlimentNotify_C_SetText::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, CallFunc_Map_Find_ReturnValue_1) == 0x0000C0, "Member 'StatusAlimentNotify_C_SetText::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000C8, "Member 'StatusAlimentNotify_C_SetText::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D8, "Member 'StatusAlimentNotify_C_SetText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x0000F0, "Member 'StatusAlimentNotify_C_SetText::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000100, "Member 'StatusAlimentNotify_C_SetText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function StatusAlimentNotify.StatusAlimentNotify_C.SetIcon
// 0x0018 (0x0018 - 0x0000)
struct StatusAlimentNotify_C_SetIcon final
{
public:
	struct FSBStatusAilmentIconConfig             InStatusAlimentIconConfig;                         // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	ESBStatusAilmentPlateType                     InType;                                            // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Setup_ReturnValue;                        // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatusAlimentNotify_C_SetIcon) == 0x000004, "Wrong alignment on StatusAlimentNotify_C_SetIcon");
static_assert(sizeof(StatusAlimentNotify_C_SetIcon) == 0x000018, "Wrong size on StatusAlimentNotify_C_SetIcon");
static_assert(offsetof(StatusAlimentNotify_C_SetIcon, InStatusAlimentIconConfig) == 0x000000, "Member 'StatusAlimentNotify_C_SetIcon::InStatusAlimentIconConfig' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIcon, InType) == 0x000014, "Member 'StatusAlimentNotify_C_SetIcon::InType' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIcon, CallFunc_Setup_ReturnValue) == 0x000015, "Member 'StatusAlimentNotify_C_SetIcon::CallFunc_Setup_ReturnValue' has a wrong offset!");

// Function StatusAlimentNotify.StatusAlimentNotify_C.SetIconCover
// 0x0038 (0x0038 - 0x0000)
struct StatusAlimentNotify_C_SetIconCover final
{
public:
	struct FSBStatusAilmentIconConfig             SBStatusAilmentIconConfig;                         // 0x0000(0x0014)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	ESBStatusAilmentPlateType                     InPlateType;                                       // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStatusAilmentPlateType                     Type;                                              // 0x0015(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D81[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D82[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D83[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusAlimentNotify_C_SetIconCover) == 0x000004, "Wrong alignment on StatusAlimentNotify_C_SetIconCover");
static_assert(sizeof(StatusAlimentNotify_C_SetIconCover) == 0x000038, "Wrong size on StatusAlimentNotify_C_SetIconCover");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, SBStatusAilmentIconConfig) == 0x000000, "Member 'StatusAlimentNotify_C_SetIconCover::SBStatusAilmentIconConfig' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, InPlateType) == 0x000014, "Member 'StatusAlimentNotify_C_SetIconCover::InPlateType' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, Type) == 0x000015, "Member 'StatusAlimentNotify_C_SetIconCover::Type' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, Temp_int_Variable) == 0x000018, "Member 'StatusAlimentNotify_C_SetIconCover::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, Temp_int_Variable_1) == 0x00001C, "Member 'StatusAlimentNotify_C_SetIconCover::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, Temp_bool_Variable) == 0x000020, "Member 'StatusAlimentNotify_C_SetIconCover::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, Temp_int_Variable_2) == 0x000024, "Member 'StatusAlimentNotify_C_SetIconCover::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, Temp_int_Variable_3) == 0x000028, "Member 'StatusAlimentNotify_C_SetIconCover::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002C, "Member 'StatusAlimentNotify_C_SetIconCover::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00002D, "Member 'StatusAlimentNotify_C_SetIconCover::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, Temp_bool_Variable_1) == 0x00002E, "Member 'StatusAlimentNotify_C_SetIconCover::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, K2Node_Select_Default) == 0x000030, "Member 'StatusAlimentNotify_C_SetIconCover::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StatusAlimentNotify_C_SetIconCover, K2Node_Select_Default_1) == 0x000034, "Member 'StatusAlimentNotify_C_SetIconCover::K2Node_Select_Default_1' has a wrong offset!");

}

