#pragma once

 

// Package: JankenWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function JankenWindow.JankenWindow_C.ExecuteUbergraph_JankenWindow
// 0x00A0 (0x00A0 - 0x0000)
struct JankenWindow_C_ExecuteUbergraph_JankenWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_420F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ButtonId)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_JankenResult__Result;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4210[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x001C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4211[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetJointGestureComponent_IsValid;         // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4212[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBJointGestureComponent*               CallFunc_GetJointGestureComponent_OutJointGestureComponent; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJointGestureStatusType                     CallFunc_GetStatusType_ReturnValue;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetJointGestureComponent_IsValid_1;       // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4213[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBJointGestureComponent*               CallFunc_GetJointGestureComponent_OutJointGestureComponent_1; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJointGestureStatusType                     CallFunc_GetStatusType_ReturnValue_1;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4214[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JankenWindow_C_ExecuteUbergraph_JankenWindow) == 0x000008, "Wrong alignment on JankenWindow_C_ExecuteUbergraph_JankenWindow");
static_assert(sizeof(JankenWindow_C_ExecuteUbergraph_JankenWindow) == 0x0000A0, "Wrong size on JankenWindow_C_ExecuteUbergraph_JankenWindow");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, EntryPoint) == 0x000000, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000004, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_JankenResult__Result) == 0x000018, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_JankenResult__Result' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, K2Node_Event_MyGeometry) == 0x00001C, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, K2Node_Event_InDeltaTime) == 0x000054, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000058, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00005C, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_SelectFloat_ReturnValue) == 0x000060, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_GetJointGestureComponent_IsValid) == 0x000064, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_GetJointGestureComponent_IsValid' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_GetJointGestureComponent_OutJointGestureComponent) == 0x000068, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_GetJointGestureComponent_OutJointGestureComponent' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_GetStatusType_ReturnValue) == 0x000070, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_GetStatusType_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000071, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000072, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_GetJointGestureComponent_IsValid_1) == 0x000073, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_GetJointGestureComponent_IsValid_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_GetJointGestureComponent_OutJointGestureComponent_1) == 0x000078, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_GetJointGestureComponent_OutJointGestureComponent_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_GetStatusType_ReturnValue_1) == 0x000080, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_GetStatusType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000081, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000082, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000083, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_BooleanOR_ReturnValue) == 0x000084, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000088, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_PlayAnimation_ReturnValue_1) == 0x000090, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_ExecuteUbergraph_JankenWindow, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000098, "Member 'JankenWindow_C_ExecuteUbergraph_JankenWindow::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");

// Function JankenWindow.JankenWindow_C.Tick
// 0x003C (0x003C - 0x0000)
struct JankenWindow_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JankenWindow_C_Tick) == 0x000004, "Wrong alignment on JankenWindow_C_Tick");
static_assert(sizeof(JankenWindow_C_Tick) == 0x00003C, "Wrong size on JankenWindow_C_Tick");
static_assert(offsetof(JankenWindow_C_Tick, MyGeometry) == 0x000000, "Member 'JankenWindow_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_Tick, InDeltaTime) == 0x000038, "Member 'JankenWindow_C_Tick::InDeltaTime' has a wrong offset!");

// Function JankenWindow.JankenWindow_C.SetTimer
// 0x0028 (0x0028 - 0x0000)
struct JankenWindow_C_SetTimer final
{
public:
	float                                         InTimer;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(JankenWindow_C_SetTimer) == 0x000008, "Wrong alignment on JankenWindow_C_SetTimer");
static_assert(sizeof(JankenWindow_C_SetTimer) == 0x000028, "Wrong size on JankenWindow_C_SetTimer");
static_assert(offsetof(JankenWindow_C_SetTimer, InTimer) == 0x000000, "Member 'JankenWindow_C_SetTimer::InTimer' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SetTimer, CallFunc_FTrunc_ReturnValue) == 0x000004, "Member 'JankenWindow_C_SetTimer::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SetTimer, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'JankenWindow_C_SetTimer::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SetTimer, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'JankenWindow_C_SetTimer::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function JankenWindow.JankenWindow_C.SelectButton
// 0x0068 (0x0068 - 0x0000)
struct JankenWindow_C_SelectButton final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4215[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJankenButton_C*>                ButtonList;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	ESBJankenHandType                             Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJankenHandType                             Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4216[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJankenButton_C*                        CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4217[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJankenHandType                             Temp_byte_Variable_2;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4218[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetJointGestureComponent_IsValid;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4219[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBJointGestureComponent*               CallFunc_GetJointGestureComponent_OutJointGestureComponent; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJankenHandType                             K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421A[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJankenButton_C*>                K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(JankenWindow_C_SelectButton) == 0x000008, "Wrong alignment on JankenWindow_C_SelectButton");
static_assert(sizeof(JankenWindow_C_SelectButton) == 0x000068, "Wrong size on JankenWindow_C_SelectButton");
static_assert(offsetof(JankenWindow_C_SelectButton, ButtonId) == 0x000000, "Member 'JankenWindow_C_SelectButton::ButtonId' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, ButtonList) == 0x000008, "Member 'JankenWindow_C_SelectButton::ButtonList' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, Temp_byte_Variable) == 0x000018, "Member 'JankenWindow_C_SelectButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, Temp_byte_Variable_1) == 0x000019, "Member 'JankenWindow_C_SelectButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'JankenWindow_C_SelectButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, Temp_int_Array_Index_Variable) == 0x000020, "Member 'JankenWindow_C_SelectButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'JankenWindow_C_SelectButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, CallFunc_Array_Get_Item) == 0x000028, "Member 'JankenWindow_C_SelectButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'JankenWindow_C_SelectButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'JankenWindow_C_SelectButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, Temp_byte_Variable_2) == 0x000038, "Member 'JankenWindow_C_SelectButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, Temp_int_Variable) == 0x00003C, "Member 'JankenWindow_C_SelectButton::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, CallFunc_GetJointGestureComponent_IsValid) == 0x000040, "Member 'JankenWindow_C_SelectButton::CallFunc_GetJointGestureComponent_IsValid' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, CallFunc_GetJointGestureComponent_OutJointGestureComponent) == 0x000048, "Member 'JankenWindow_C_SelectButton::CallFunc_GetJointGestureComponent_OutJointGestureComponent' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, K2Node_Select_Default) == 0x000050, "Member 'JankenWindow_C_SelectButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000051, "Member 'JankenWindow_C_SelectButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_SelectButton, K2Node_MakeArray_Array) == 0x000058, "Member 'JankenWindow_C_SelectButton::K2Node_MakeArray_Array' has a wrong offset!");

// Function JankenWindow.JankenWindow_C.JankenResult
// 0x0588 (0x0588 - 0x0000)
struct JankenWindow_C_JankenResult final
{
public:
	bool                                          BResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBJankenHandType                             TargetJankenHandType;                              // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJankenHandType                             JankenHandType;                                    // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJankenHandType                             Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_421B[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421C[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetResultText_OutText;                    // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421D[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0128(0x0018)()
	class FString                                 CallFunc_GetJankenHandText_OutText;                // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetJankenHandText_OutText_1;              // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0160(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0178(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0190(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01D0(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue_1;              // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0230(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0248(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0260(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x02B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x02C0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x02D8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x02F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421E[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0308(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetJointGestureComponent_IsValid;         // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421F[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBJointGestureComponent*               CallFunc_GetJointGestureComponent_OutJointGestureComponent; // 0x0340(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJankenHandType                             CallFunc_GetResultHandType_ReturnValue;            // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4220[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_1;                           // 0x034C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4221[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEmotionInfo                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0358(0x0038)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBJankenHandType                             CallFunc_GetResultHandType_ReturnValue_1;          // 0x0391(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4222[0x2];                                     // 0x0392(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerJointGestureInfo              CallFunc_GetTargetJointGestureInfo_OutTargetInfo;  // 0x0394(0x0014)(NoDestructor)
	class ASBPlayerCharacter*                     CallFunc_GetTargetJointGestureInfo_ReturnValue;    // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4223[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput;          // 0x03C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x03D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x03E8(0x0018)()
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput_1;        // 0x0400(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue_1;           // 0x0410(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0420(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0460(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0478(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0488(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x04C8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x04E0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x04F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0500(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_3;          // 0x0518(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_2;                           // 0x0528(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0538(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0548(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0558(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0568(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_3;                           // 0x0578(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(JankenWindow_C_JankenResult) == 0x000008, "Wrong alignment on JankenWindow_C_JankenResult");
static_assert(sizeof(JankenWindow_C_JankenResult) == 0x000588, "Wrong size on JankenWindow_C_JankenResult");
static_assert(offsetof(JankenWindow_C_JankenResult, BResult) == 0x000000, "Member 'JankenWindow_C_JankenResult::BResult' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, TargetJankenHandType) == 0x000001, "Member 'JankenWindow_C_JankenResult::TargetJankenHandType' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, JankenHandType) == 0x000002, "Member 'JankenWindow_C_JankenResult::JankenHandType' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, Temp_byte_Variable) == 0x000003, "Member 'JankenWindow_C_JankenResult::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, Temp_name_Variable) == 0x000004, "Member 'JankenWindow_C_JankenResult::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, Temp_name_Variable_1) == 0x00000C, "Member 'JankenWindow_C_JankenResult::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, Temp_name_Variable_2) == 0x000014, "Member 'JankenWindow_C_JankenResult::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, Temp_name_Variable_3) == 0x00001C, "Member 'JankenWindow_C_JankenResult::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000028, "Member 'JankenWindow_C_JankenResult::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'JankenWindow_C_JankenResult::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000031, "Member 'JankenWindow_C_JankenResult::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, Temp_bool_Variable) == 0x000032, "Member 'JankenWindow_C_JankenResult::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_BooleanOR_ReturnValue) == 0x000033, "Member 'JankenWindow_C_JankenResult::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000034, "Member 'JankenWindow_C_JankenResult::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000035, "Member 'JankenWindow_C_JankenResult::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetPlayerName_ReturnValue) == 0x000038, "Member 'JankenWindow_C_JankenResult::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000060, "Member 'JankenWindow_C_JankenResult::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'JankenWindow_C_JankenResult::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_MakeArray_Array) == 0x0000C8, "Member 'JankenWindow_C_JankenResult::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'JankenWindow_C_JankenResult::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F0, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetResultText_OutText) == 0x000100, "Member 'JankenWindow_C_JankenResult::CallFunc_GetResultText_OutText' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, Temp_bool_Variable_1) == 0x000110, "Member 'JankenWindow_C_JankenResult::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000118, "Member 'JankenWindow_C_JankenResult::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000128, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetJankenHandText_OutText) == 0x000140, "Member 'JankenWindow_C_JankenResult::CallFunc_GetJankenHandText_OutText' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetJankenHandText_OutText_1) == 0x000150, "Member 'JankenWindow_C_JankenResult::CallFunc_GetJankenHandText_OutText_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000160, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000178, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_MakeStruct_FormatArgumentData_1) == 0x000190, "Member 'JankenWindow_C_JankenResult::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001D0, "Member 'JankenWindow_C_JankenResult::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetPlayerName_ReturnValue_1) == 0x000210, "Member 'JankenWindow_C_JankenResult::CallFunc_GetPlayerName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000220, "Member 'JankenWindow_C_JankenResult::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000230, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000248, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_MakeStruct_FormatArgumentData_3) == 0x000260, "Member 'JankenWindow_C_JankenResult::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x0002A0, "Member 'JankenWindow_C_JankenResult::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_MakeArray_Array_1) == 0x0002B0, "Member 'JankenWindow_C_JankenResult::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0002C0, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Format_ReturnValue_1) == 0x0002D8, "Member 'JankenWindow_C_JankenResult::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0002F0, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, Temp_bool_Variable_2) == 0x000300, "Member 'JankenWindow_C_JankenResult::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_Select_Default) == 0x000308, "Member 'JankenWindow_C_JankenResult::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Concat_StrStr_ReturnValue) == 0x000318, "Member 'JankenWindow_C_JankenResult::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000328, "Member 'JankenWindow_C_JankenResult::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetJointGestureComponent_IsValid) == 0x000338, "Member 'JankenWindow_C_JankenResult::CallFunc_GetJointGestureComponent_IsValid' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetJointGestureComponent_OutJointGestureComponent) == 0x000340, "Member 'JankenWindow_C_JankenResult::CallFunc_GetJointGestureComponent_OutJointGestureComponent' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetResultHandType_ReturnValue) == 0x000348, "Member 'JankenWindow_C_JankenResult::CallFunc_GetResultHandType_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_Select_Default_1) == 0x00034C, "Member 'JankenWindow_C_JankenResult::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetDataTableRowFromName_OutRow) == 0x000358, "Member 'JankenWindow_C_JankenResult::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000390, "Member 'JankenWindow_C_JankenResult::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetResultHandType_ReturnValue_1) == 0x000391, "Member 'JankenWindow_C_JankenResult::CallFunc_GetResultHandType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetTargetJointGestureInfo_OutTargetInfo) == 0x000394, "Member 'JankenWindow_C_JankenResult::CallFunc_GetTargetJointGestureInfo_OutTargetInfo' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetTargetJointGestureInfo_ReturnValue) == 0x0003A8, "Member 'JankenWindow_C_JankenResult::CallFunc_GetTargetJointGestureInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToName_ReturnValue) == 0x0003B0, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetValidPlayerState_ReturnValue) == 0x0003B8, "Member 'JankenWindow_C_JankenResult::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_IsValid_ReturnValue) == 0x0003C0, "Member 'JankenWindow_C_JankenResult::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetCharacterName_self_CastInput) == 0x0003C8, "Member 'JankenWindow_C_JankenResult::CallFunc_GetCharacterName_self_CastInput' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetCharacterName_ReturnValue) == 0x0003D8, "Member 'JankenWindow_C_JankenResult::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToText_ReturnValue_8) == 0x0003E8, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetCharacterName_self_CastInput_1) == 0x000400, "Member 'JankenWindow_C_JankenResult::CallFunc_GetCharacterName_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_GetCharacterName_ReturnValue_1) == 0x000410, "Member 'JankenWindow_C_JankenResult::CallFunc_GetCharacterName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_MakeStruct_FormatArgumentData_4) == 0x000420, "Member 'JankenWindow_C_JankenResult::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000460, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_MakeArray_Array_2) == 0x000478, "Member 'JankenWindow_C_JankenResult::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_MakeStruct_FormatArgumentData_5) == 0x000488, "Member 'JankenWindow_C_JankenResult::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Format_ReturnValue_2) == 0x0004C8, "Member 'JankenWindow_C_JankenResult::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_MakeArray_Array_3) == 0x0004E0, "Member 'JankenWindow_C_JankenResult::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_TextToString_ReturnValue_2) == 0x0004F0, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Format_ReturnValue_3) == 0x000500, "Member 'JankenWindow_C_JankenResult::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Conv_TextToString_ReturnValue_3) == 0x000518, "Member 'JankenWindow_C_JankenResult::CallFunc_Conv_TextToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_Select_Default_2) == 0x000528, "Member 'JankenWindow_C_JankenResult::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000538, "Member 'JankenWindow_C_JankenResult::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000548, "Member 'JankenWindow_C_JankenResult::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000558, "Member 'JankenWindow_C_JankenResult::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000568, "Member 'JankenWindow_C_JankenResult::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_JankenResult, K2Node_Select_Default_3) == 0x000578, "Member 'JankenWindow_C_JankenResult::K2Node_Select_Default_3' has a wrong offset!");

// Function JankenWindow.JankenWindow_C.GetJankenHandText
// 0x0088 (0x0088 - 0x0000)
struct JankenWindow_C_GetJankenHandText final
{
public:
	ESBJankenHandType                             InHnadType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4224[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutText;                                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   Par;                                               // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Choki;                                             // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Goo;                                               // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJankenHandType                             Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4225[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEmotionName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEmotionName_ReturnValue_1;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEmotionName_ReturnValue_2;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(JankenWindow_C_GetJankenHandText) == 0x000008, "Wrong alignment on JankenWindow_C_GetJankenHandText");
static_assert(sizeof(JankenWindow_C_GetJankenHandText) == 0x000088, "Wrong size on JankenWindow_C_GetJankenHandText");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, InHnadType) == 0x000000, "Member 'JankenWindow_C_GetJankenHandText::InHnadType' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, OutText) == 0x000008, "Member 'JankenWindow_C_GetJankenHandText::OutText' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, Par) == 0x000018, "Member 'JankenWindow_C_GetJankenHandText::Par' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, Choki) == 0x000020, "Member 'JankenWindow_C_GetJankenHandText::Choki' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, Goo) == 0x000028, "Member 'JankenWindow_C_GetJankenHandText::Goo' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, Temp_byte_Variable) == 0x000030, "Member 'JankenWindow_C_GetJankenHandText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, Temp_string_Variable) == 0x000038, "Member 'JankenWindow_C_GetJankenHandText::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, CallFunc_GetEmotionName_ReturnValue) == 0x000048, "Member 'JankenWindow_C_GetJankenHandText::CallFunc_GetEmotionName_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, CallFunc_GetEmotionName_ReturnValue_1) == 0x000058, "Member 'JankenWindow_C_GetJankenHandText::CallFunc_GetEmotionName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, CallFunc_GetEmotionName_ReturnValue_2) == 0x000068, "Member 'JankenWindow_C_GetJankenHandText::CallFunc_GetEmotionName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJankenHandText, K2Node_Select_Default) == 0x000078, "Member 'JankenWindow_C_GetJankenHandText::K2Node_Select_Default' has a wrong offset!");

// Function JankenWindow.JankenWindow_C.GetResultText
// 0x00C0 (0x00C0 - 0x0000)
struct JankenWindow_C_GetResultText final
{
public:
	ESBJankenHandType                             MyHandType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBJankenHandType                             TargetHandType;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4226[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutText;                                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBJankenHandType                             Temp_byte_Variable;                                // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4227[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_1;                            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBJankenHandType                             Temp_byte_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4228[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_2;                            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBJankenHandType                             Temp_byte_Variable_2;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4229[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_2;                           // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(JankenWindow_C_GetResultText) == 0x000008, "Wrong alignment on JankenWindow_C_GetResultText");
static_assert(sizeof(JankenWindow_C_GetResultText) == 0x0000C0, "Wrong size on JankenWindow_C_GetResultText");
static_assert(offsetof(JankenWindow_C_GetResultText, MyHandType) == 0x000000, "Member 'JankenWindow_C_GetResultText::MyHandType' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, TargetHandType) == 0x000001, "Member 'JankenWindow_C_GetResultText::TargetHandType' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, OutText) == 0x000008, "Member 'JankenWindow_C_GetResultText::OutText' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, Temp_string_Variable) == 0x000018, "Member 'JankenWindow_C_GetResultText::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000028, "Member 'JankenWindow_C_GetResultText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000029, "Member 'JankenWindow_C_GetResultText::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00002A, "Member 'JankenWindow_C_GetResultText::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, Temp_byte_Variable) == 0x00002B, "Member 'JankenWindow_C_GetResultText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, Temp_string_Variable_1) == 0x000030, "Member 'JankenWindow_C_GetResultText::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, Temp_byte_Variable_1) == 0x000040, "Member 'JankenWindow_C_GetResultText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, Temp_string_Variable_2) == 0x000048, "Member 'JankenWindow_C_GetResultText::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000058, "Member 'JankenWindow_C_GetResultText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000068, "Member 'JankenWindow_C_GetResultText::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, Temp_byte_Variable_2) == 0x000078, "Member 'JankenWindow_C_GetResultText::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000080, "Member 'JankenWindow_C_GetResultText::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, K2Node_Select_Default) == 0x000090, "Member 'JankenWindow_C_GetResultText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, K2Node_Select_Default_1) == 0x0000A0, "Member 'JankenWindow_C_GetResultText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetResultText, K2Node_Select_Default_2) == 0x0000B0, "Member 'JankenWindow_C_GetResultText::K2Node_Select_Default_2' has a wrong offset!");

// Function JankenWindow.JankenWindow_C.GetJointGestureComponent
// 0x0038 (0x0038 - 0x0000)
struct JankenWindow_C_GetJointGestureComponent final
{
public:
	bool                                          IsValid;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_422A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBJointGestureComponent*               OutJointGestureComponent;                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_422B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(JankenWindow_C_GetJointGestureComponent) == 0x000008, "Wrong alignment on JankenWindow_C_GetJointGestureComponent");
static_assert(sizeof(JankenWindow_C_GetJointGestureComponent) == 0x000038, "Wrong size on JankenWindow_C_GetJointGestureComponent");
static_assert(offsetof(JankenWindow_C_GetJointGestureComponent, IsValid) == 0x000000, "Member 'JankenWindow_C_GetJointGestureComponent::IsValid' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJointGestureComponent, OutJointGestureComponent) == 0x000008, "Member 'JankenWindow_C_GetJointGestureComponent::OutJointGestureComponent' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJointGestureComponent, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'JankenWindow_C_GetJointGestureComponent::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJointGestureComponent, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000018, "Member 'JankenWindow_C_GetJointGestureComponent::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJointGestureComponent, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'JankenWindow_C_GetJointGestureComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJointGestureComponent, K2Node_DynamicCast_AsSBPlayer_State) == 0x000028, "Member 'JankenWindow_C_GetJointGestureComponent::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJointGestureComponent, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'JankenWindow_C_GetJointGestureComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(JankenWindow_C_GetJointGestureComponent, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'JankenWindow_C_GetJointGestureComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

