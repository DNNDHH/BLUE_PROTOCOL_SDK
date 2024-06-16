#pragma once

 

// Package: OverKeyInput

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "KeyInputMode_structs.hpp"


namespace SDK::Params
{

// Function OverKeyInput.OverKeyInput_C.OnMouseWheel
// 0x03E8 (0x03E8 - 0x0000)
struct OverKeyInput_C_OnMouseWheel final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D24[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PointerEvent_GetWheelDelta_ReturnValue;   // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   Temp_struct_Variable;                              // 0x0168(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D25[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   Temp_struct_Variable_1;                            // 0x0188(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x01A0(0x00B8)()
	struct FKey                                   K2Node_Select_Default;                             // 0x0258(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue;        // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D26[0x6];                                     // 0x0272(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0278(0x00B8)()
	struct FEventReply                            CallFunc_Unhandled_ReturnValue_1;                  // 0x0330(0x00B8)()
};
static_assert(alignof(OverKeyInput_C_OnMouseWheel) == 0x000008, "Wrong alignment on OverKeyInput_C_OnMouseWheel");
static_assert(sizeof(OverKeyInput_C_OnMouseWheel) == 0x0003E8, "Wrong size on OverKeyInput_C_OnMouseWheel");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, MyGeometry) == 0x000000, "Member 'OverKeyInput_C_OnMouseWheel::MyGeometry' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, MouseEvent) == 0x000038, "Member 'OverKeyInput_C_OnMouseWheel::MouseEvent' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, ReturnValue) == 0x0000A8, "Member 'OverKeyInput_C_OnMouseWheel::ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, Temp_bool_Variable) == 0x000160, "Member 'OverKeyInput_C_OnMouseWheel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, CallFunc_PointerEvent_GetWheelDelta_ReturnValue) == 0x000164, "Member 'OverKeyInput_C_OnMouseWheel::CallFunc_PointerEvent_GetWheelDelta_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, Temp_struct_Variable) == 0x000168, "Member 'OverKeyInput_C_OnMouseWheel::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, CallFunc_Less_FloatFloat_ReturnValue) == 0x000180, "Member 'OverKeyInput_C_OnMouseWheel::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, Temp_struct_Variable_1) == 0x000188, "Member 'OverKeyInput_C_OnMouseWheel::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, CallFunc_Unhandled_ReturnValue) == 0x0001A0, "Member 'OverKeyInput_C_OnMouseWheel::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, K2Node_Select_Default) == 0x000258, "Member 'OverKeyInput_C_OnMouseWheel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, CallFunc_IsAnyAnimationPlaying_ReturnValue) == 0x000270, "Member 'OverKeyInput_C_OnMouseWheel::CallFunc_IsAnyAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, CallFunc_Not_PreBool_ReturnValue) == 0x000271, "Member 'OverKeyInput_C_OnMouseWheel::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, CallFunc_Handled_ReturnValue) == 0x000278, "Member 'OverKeyInput_C_OnMouseWheel::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseWheel, CallFunc_Unhandled_ReturnValue_1) == 0x000330, "Member 'OverKeyInput_C_OnMouseWheel::CallFunc_Unhandled_ReturnValue_1' has a wrong offset!");

// Function OverKeyInput.OverKeyInput_C.OnKeyUp
// 0x02C8 (0x02C8 - 0x0000)
struct OverKeyInput_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0128(0x0018)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue;        // 0x0146(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0147(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D27[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0150(0x00B8)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D28[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0210(0x00B8)()
};
static_assert(alignof(OverKeyInput_C_OnKeyUp) == 0x000008, "Wrong alignment on OverKeyInput_C_OnKeyUp");
static_assert(sizeof(OverKeyInput_C_OnKeyUp) == 0x0002C8, "Wrong size on OverKeyInput_C_OnKeyUp");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'OverKeyInput_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, InKeyEvent) == 0x000038, "Member 'OverKeyInput_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, ReturnValue) == 0x000070, "Member 'OverKeyInput_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, CallFunc_GetKey_ReturnValue) == 0x000128, "Member 'OverKeyInput_C_OnKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'OverKeyInput_C_OnKeyUp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000144, "Member 'OverKeyInput_C_OnKeyUp::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000145, "Member 'OverKeyInput_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, CallFunc_IsAnyAnimationPlaying_ReturnValue) == 0x000146, "Member 'OverKeyInput_C_OnKeyUp::CallFunc_IsAnyAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, CallFunc_Array_Contains_ReturnValue) == 0x000147, "Member 'OverKeyInput_C_OnKeyUp::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, CallFunc_Not_PreBool_ReturnValue) == 0x000148, "Member 'OverKeyInput_C_OnKeyUp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000150, "Member 'OverKeyInput_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, K2Node_SwitchEnum_CmpSuccess) == 0x000208, "Member 'OverKeyInput_C_OnKeyUp::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x000210, "Member 'OverKeyInput_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function OverKeyInput.OverKeyInput_C.ConvertFunctionKey
// 0x00C0 (0x00C0 - 0x0000)
struct OverKeyInput_C_ConvertFunctionKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          IsFunction3;                                       // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsLB;                                              // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsRB;                                              // 0x001A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D29[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   ResultKey;                                         // 0x0020(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          IsFunction2;                                       // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsFunction1;                                       // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D2A[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D2B[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_Array_Get_Item;                           // 0x0050(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D2C[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_ToFunction3Key_ReturnValue;               // 0x0070(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_ToPadFunction2Key_ReturnValue;            // 0x0088(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_ToPadFunctionKey_ReturnValue;             // 0x00A0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFunctionPadKey_ReturnValue;             // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFunction2PadKey_ReturnValue;            // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OverKeyInput_C_ConvertFunctionKey) == 0x000008, "Wrong alignment on OverKeyInput_C_ConvertFunctionKey");
static_assert(sizeof(OverKeyInput_C_ConvertFunctionKey) == 0x0000C0, "Wrong size on OverKeyInput_C_ConvertFunctionKey");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, Key) == 0x000000, "Member 'OverKeyInput_C_ConvertFunctionKey::Key' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, IsFunction3) == 0x000018, "Member 'OverKeyInput_C_ConvertFunctionKey::IsFunction3' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, IsLB) == 0x000019, "Member 'OverKeyInput_C_ConvertFunctionKey::IsLB' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, IsRB) == 0x00001A, "Member 'OverKeyInput_C_ConvertFunctionKey::IsRB' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, ResultKey) == 0x000020, "Member 'OverKeyInput_C_ConvertFunctionKey::ResultKey' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, IsFunction2) == 0x000038, "Member 'OverKeyInput_C_ConvertFunctionKey::IsFunction2' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, IsFunction1) == 0x000039, "Member 'OverKeyInput_C_ConvertFunctionKey::IsFunction1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'OverKeyInput_C_ConvertFunctionKey::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, Temp_int_Array_Index_Variable) == 0x000048, "Member 'OverKeyInput_C_ConvertFunctionKey::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_Array_Get_Item) == 0x000050, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_ToFunction3Key_ReturnValue) == 0x000070, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_ToFunction3Key_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_ToPadFunction2Key_ReturnValue) == 0x000088, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_ToPadFunction2Key_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_ToPadFunctionKey_ReturnValue) == 0x0000A0, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_ToPadFunctionKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0000B8, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x0000B9, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_IsFunctionPadKey_ReturnValue) == 0x0000BA, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_IsFunctionPadKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ConvertFunctionKey, CallFunc_IsFunction2PadKey_ReturnValue) == 0x0000BB, "Member 'OverKeyInput_C_ConvertFunctionKey::CallFunc_IsFunction2PadKey_ReturnValue' has a wrong offset!");

// Function OverKeyInput.OverKeyInput_C.OnMouseButtonDown
// 0x0300 (0x0300 - 0x0000)
struct OverKeyInput_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue;        // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D2D[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0168(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D2E[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0188(0x00B8)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D2F[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0248(0x00B8)()
};
static_assert(alignof(OverKeyInput_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on OverKeyInput_C_OnMouseButtonDown");
static_assert(sizeof(OverKeyInput_C_OnMouseButtonDown) == 0x000300, "Wrong size on OverKeyInput_C_OnMouseButtonDown");
static_assert(offsetof(OverKeyInput_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'OverKeyInput_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'OverKeyInput_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'OverKeyInput_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseButtonDown, CallFunc_IsAnyAnimationPlaying_ReturnValue) == 0x000160, "Member 'OverKeyInput_C_OnMouseButtonDown::CallFunc_IsAnyAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000168, "Member 'OverKeyInput_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseButtonDown, CallFunc_Not_PreBool_ReturnValue) == 0x000180, "Member 'OverKeyInput_C_OnMouseButtonDown::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000188, "Member 'OverKeyInput_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseButtonDown, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000240, "Member 'OverKeyInput_C_OnMouseButtonDown::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000248, "Member 'OverKeyInput_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function OverKeyInput.OverKeyInput_C.OnKeyDown
// 0x0520 (0x0520 - 0x0000)
struct OverKeyInput_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	TArray<ESBKeyConfigGamepadKey>                FunctionAcceptKeys;                                // 0x0128(0x0010)(Edit, BlueprintVisible)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0138(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0150(0x00B8)()
	ESBKeyConfigGamepadKey                        CallFunc_PadToKeyConfigKey_ReturnValue;            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x020B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Key_IsMouseButton_ReturnValue;            // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Key_IsKeyboardKey_ReturnValue;            // 0x020D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x020E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D30[0x1];                                     // 0x020F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue_1;                    // 0x0210(0x00B8)()
	TArray<ESBKeyConfigGamepadKey>                K2Node_MakeArray_Array;                            // 0x02C8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue;        // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D31[0x6];                                     // 0x02DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue_2;                    // 0x02E0(0x00B8)()
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D32[0x3];                                     // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D33[0x3];                                     // 0x03A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFunction2PadKey_ReturnValue;            // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFunctionPadKey_ReturnValue;             // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x03AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x03AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x03AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x03AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x03AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x03B0(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue_3;                    // 0x0468(0x00B8)()
};
static_assert(alignof(OverKeyInput_C_OnKeyDown) == 0x000008, "Wrong alignment on OverKeyInput_C_OnKeyDown");
static_assert(sizeof(OverKeyInput_C_OnKeyDown) == 0x000520, "Wrong size on OverKeyInput_C_OnKeyDown");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'OverKeyInput_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'OverKeyInput_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'OverKeyInput_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, FunctionAcceptKeys) == 0x000128, "Member 'OverKeyInput_C_OnKeyDown::FunctionAcceptKeys' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x000138, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Handled_ReturnValue) == 0x000150, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_PadToKeyConfigKey_ReturnValue) == 0x000208, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_PadToKeyConfigKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Key_IsGamepadKey_ReturnValue) == 0x000209, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Key_IsGamepadKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x00020A, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x00020B, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Key_IsMouseButton_ReturnValue) == 0x00020C, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Key_IsMouseButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Key_IsKeyboardKey_ReturnValue) == 0x00020D, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Key_IsKeyboardKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_BooleanOR_ReturnValue) == 0x00020E, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Handled_ReturnValue_1) == 0x000210, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Handled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, K2Node_MakeArray_Array) == 0x0002C8, "Member 'OverKeyInput_C_OnKeyDown::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_IsAnyAnimationPlaying_ReturnValue) == 0x0002D8, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_IsAnyAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue) == 0x0002D9, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Handled_ReturnValue_2) == 0x0002E0, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Handled_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Array_Contains_ReturnValue) == 0x000398, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Array_Length_ReturnValue) == 0x00039C, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Greater_IntInt_ReturnValue) == 0x0003A0, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Array_AddUnique_ReturnValue) == 0x0003A4, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_IsFunction2PadKey_ReturnValue) == 0x0003A8, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_IsFunction2PadKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_IsFunctionPadKey_ReturnValue) == 0x0003A9, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_IsFunctionPadKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_BooleanOR_ReturnValue_1) == 0x0003AA, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_BooleanOR_ReturnValue_2) == 0x0003AB, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_BooleanOR_ReturnValue_3) == 0x0003AC, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_BooleanOR_ReturnValue_4) == 0x0003AD, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, K2Node_SwitchEnum_CmpSuccess) == 0x0003AE, "Member 'OverKeyInput_C_OnKeyDown::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Not_PreBool_ReturnValue_1) == 0x0003AF, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Unhandled_ReturnValue) == 0x0003B0, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_OnKeyDown, CallFunc_Handled_ReturnValue_3) == 0x000468, "Member 'OverKeyInput_C_OnKeyDown::CallFunc_Handled_ReturnValue_3' has a wrong offset!");

// Function OverKeyInput.OverKeyInput_C.Tick
// 0x003C (0x003C - 0x0000)
struct OverKeyInput_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverKeyInput_C_Tick) == 0x000004, "Wrong alignment on OverKeyInput_C_Tick");
static_assert(sizeof(OverKeyInput_C_Tick) == 0x00003C, "Wrong size on OverKeyInput_C_Tick");
static_assert(offsetof(OverKeyInput_C_Tick, MyGeometry) == 0x000000, "Member 'OverKeyInput_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_Tick, InDeltaTime) == 0x000038, "Member 'OverKeyInput_C_Tick::InDeltaTime' has a wrong offset!");

// Function OverKeyInput.OverKeyInput_C.Open
// 0x01D0 (0x01D0 - 0x0000)
struct OverKeyInput_C_Open final
{
public:
	EKeyInputMode                                 Param_InputMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsFunction;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D34[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            KeyConfig;                                         // 0x0008(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(OverKeyInput_C_Open) == 0x000008, "Wrong alignment on OverKeyInput_C_Open");
static_assert(sizeof(OverKeyInput_C_Open) == 0x0001D0, "Wrong size on OverKeyInput_C_Open");
static_assert(offsetof(OverKeyInput_C_Open, Param_InputMode) == 0x000000, "Member 'OverKeyInput_C_Open::Param_InputMode' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_Open, Param_IsFunction) == 0x000001, "Member 'OverKeyInput_C_Open::Param_IsFunction' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_Open, KeyConfig) == 0x000008, "Member 'OverKeyInput_C_Open::KeyConfig' has a wrong offset!");

// Function OverKeyInput.OverKeyInput_C.OnAnimationStarted
// 0x0008 (0x0008 - 0x0000)
struct OverKeyInput_C_OnAnimationStarted final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverKeyInput_C_OnAnimationStarted) == 0x000008, "Wrong alignment on OverKeyInput_C_OnAnimationStarted");
static_assert(sizeof(OverKeyInput_C_OnAnimationStarted) == 0x000008, "Wrong size on OverKeyInput_C_OnAnimationStarted");
static_assert(offsetof(OverKeyInput_C_OnAnimationStarted, Animation) == 0x000000, "Member 'OverKeyInput_C_OnAnimationStarted::Animation' has a wrong offset!");

// Function OverKeyInput.OverKeyInput_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct OverKeyInput_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverKeyInput_C_OnAnimationFinished) == 0x000008, "Wrong alignment on OverKeyInput_C_OnAnimationFinished");
static_assert(sizeof(OverKeyInput_C_OnAnimationFinished) == 0x000008, "Wrong size on OverKeyInput_C_OnAnimationFinished");
static_assert(offsetof(OverKeyInput_C_OnAnimationFinished, Animation) == 0x000000, "Member 'OverKeyInput_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function OverKeyInput.OverKeyInput_C.ExecuteUbergraph_OverKeyInput
// 0x0288 (0x0288 - 0x0000)
struct OverKeyInput_C_ExecuteUbergraph_OverKeyInput final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyInputMode                                 K2Node_CustomEvent_InputMode;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isFunction;                     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D35[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            K2Node_CustomEvent_KeyConfig;                      // 0x0048(0x01C8)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation_1;                          // 0x0220(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D36[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0230(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D37[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePosition_LocationX;               // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePosition_LocationY;               // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMousePosition_ReturnValue;             // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D38[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D39[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_ConvertFunctionKey_Key;                   // 0x0268(0x0018)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput) == 0x000008, "Wrong alignment on OverKeyInput_C_ExecuteUbergraph_OverKeyInput");
static_assert(sizeof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput) == 0x000288, "Wrong size on OverKeyInput_C_ExecuteUbergraph_OverKeyInput");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, EntryPoint) == 0x000000, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::EntryPoint' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, K2Node_Event_MyGeometry) == 0x000004, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, K2Node_CustomEvent_InputMode) == 0x000040, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::K2Node_CustomEvent_InputMode' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, K2Node_CustomEvent_isFunction) == 0x000041, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::K2Node_CustomEvent_isFunction' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, K2Node_CustomEvent_KeyConfig) == 0x000048, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::K2Node_CustomEvent_KeyConfig' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_PlayAnimation_ReturnValue) == 0x000210, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_PlayAnimation_ReturnValue_1) == 0x000218, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, K2Node_Event_Animation_1) == 0x000220, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::K2Node_Event_Animation_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000228, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, K2Node_Event_Animation) == 0x000230, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000238, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_GetPlayerController_ReturnValue) == 0x000240, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_GetPlayerController_ReturnValue_1) == 0x000248, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_GetMousePosition_LocationX) == 0x000250, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_GetMousePosition_LocationX' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_GetMousePosition_LocationY) == 0x000254, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_GetMousePosition_LocationY' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_GetMousePosition_ReturnValue) == 0x000258, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_GetMousePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_FTrunc_ReturnValue) == 0x00025C, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_FTrunc_ReturnValue_1) == 0x000260, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_ConvertFunctionKey_Key) == 0x000268, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_ConvertFunctionKey_Key' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_Array_Length_ReturnValue) == 0x000280, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverKeyInput_C_ExecuteUbergraph_OverKeyInput, CallFunc_Greater_IntInt_ReturnValue) == 0x000284, "Member 'OverKeyInput_C_ExecuteUbergraph_OverKeyInput::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function OverKeyInput.OverKeyInput_C.KeyInputed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct OverKeyInput_C_KeyInputed__DelegateSignature final
{
public:
	struct FKey                                   DownKey;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(OverKeyInput_C_KeyInputed__DelegateSignature) == 0x000008, "Wrong alignment on OverKeyInput_C_KeyInputed__DelegateSignature");
static_assert(sizeof(OverKeyInput_C_KeyInputed__DelegateSignature) == 0x000018, "Wrong size on OverKeyInput_C_KeyInputed__DelegateSignature");
static_assert(offsetof(OverKeyInput_C_KeyInputed__DelegateSignature, DownKey) == 0x000000, "Member 'OverKeyInput_C_KeyInputed__DelegateSignature::DownKey' has a wrong offset!");

}

