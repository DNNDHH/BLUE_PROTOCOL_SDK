#pragma once

 

// Package: Startup

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SkipPointData_structs.hpp"


namespace SDK::Params
{

// Function Startup.Startup_C.ExecuteUbergraph_Startup
// 0x0358 (0x0358 - 0x0000)
struct Startup_C_ExecuteUbergraph_Startup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_454B[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_454C[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkipPointData                         CallFunc_Map_Find_Value;                           // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_454D[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_454E[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_454F[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4550[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSkipPointData                         K2Node_MakeStruct_SkipPointData;                   // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FSkipPointData                         K2Node_MakeStruct_SkipPointData_1;                 // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FSkipPointData                         K2Node_MakeStruct_SkipPointData_2;                 // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FSkipPointData                         K2Node_MakeStruct_SkipPointData_3;                 // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4551[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkipPointData                         K2Node_MakeStruct_SkipPointData_4;                 // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4552[0x5];                                     // 0x01AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkipPointData                         K2Node_MakeStruct_SkipPointData_5;                 // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FSkipPointData                         K2Node_MakeStruct_SkipPointData_6;                 // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4553[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CallFunc_Array_Get_Item;                           // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4554[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4555[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Today_Watched_IsTodayWatch;            // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4556[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UWidgetAnimation*>               K2Node_MakeArray_Array;                            // 0x0248(0x0010)(ReferenceParm)
	TArray<class UWidgetAnimation*>               K2Node_MakeArray_Array_1;                          // 0x0258(0x0010)(ReferenceParm)
	TArray<class UWidgetAnimation*>               K2Node_Select_Default;                             // 0x0268(0x0010)(ReferenceParm)
	class UWidgetAnimation*                       CallFunc_Array_Get_Item_1;                         // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4557[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4558[0x3];                                     // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4559[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x02A0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_455A[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCursorStateHandle                   CallFunc_ShowCursor_ReturnValue;                   // 0x02AC(0x0004)(NoDestructor)
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue;              // 0x02B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x02C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0308(0x0010)(ReferenceParm)
	TArray<struct FSBUserOnlineAccountCharacter>  CallFunc_GetLogedInPlayerCharacters_OutCharacters; // 0x0318(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLogedInPlayerCharacters_ReturnValue;   // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_455B[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0330(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_455C[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x034C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Startup_C_ExecuteUbergraph_Startup) == 0x000008, "Wrong alignment on Startup_C_ExecuteUbergraph_Startup");
static_assert(sizeof(Startup_C_ExecuteUbergraph_Startup) == 0x000358, "Wrong size on Startup_C_ExecuteUbergraph_Startup");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, EntryPoint) == 0x000000, "Member 'Startup_C_ExecuteUbergraph_Startup::EntryPoint' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_BreakColor_R) == 0x000004, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_BreakColor_G) == 0x000008, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_BreakColor_B) == 0x00000C, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_BreakColor_A) == 0x000010, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_FTrunc_ReturnValue) == 0x000014, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000030, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000050, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Map_Find_Value) == 0x000058, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Map_Find_ReturnValue) == 0x000070, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_IsValid_ReturnValue) == 0x000071, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000074, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Conv_FloatToString_ReturnValue) == 0x000078, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, Temp_bool_Variable) == 0x000098, "Member 'Startup_C_ExecuteUbergraph_Startup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_CreateDelegate_OutputDelegate_1) == 0x00009C, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_GetDisplayName_ReturnValue) == 0x0000B0, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C0, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000D0, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000E0, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000F0, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000100, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, Temp_int_Array_Index_Variable) == 0x000110, "Member 'Startup_C_ExecuteUbergraph_Startup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000118, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeStruct_SkipPointData) == 0x000128, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeStruct_SkipPointData' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeStruct_SkipPointData_1) == 0x000140, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeStruct_SkipPointData_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeStruct_SkipPointData_2) == 0x000158, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeStruct_SkipPointData_2' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeStruct_SkipPointData_3) == 0x000170, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeStruct_SkipPointData_3' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000188, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeStruct_SkipPointData_4) == 0x000190, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeStruct_SkipPointData_4' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x0001A8, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_BooleanAND_ReturnValue) == 0x0001A9, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_BooleanAND_ReturnValue_1) == 0x0001AA, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeStruct_SkipPointData_5) == 0x0001B0, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeStruct_SkipPointData_5' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeStruct_SkipPointData_6) == 0x0001C8, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeStruct_SkipPointData_6' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_IsValid_ReturnValue_1) == 0x0001E0, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Array_Length_ReturnValue) == 0x0001E4, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Array_Get_Item) == 0x0001E8, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Greater_IntInt_ReturnValue) == 0x0001F0, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_GetDisplayName_ReturnValue_1) == 0x0001F8, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000208, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Array_RemoveItem_ReturnValue) == 0x000218, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_GetDisplayName_ReturnValue_2) == 0x000220, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Is_Today_Watched_IsTodayWatch) == 0x000230, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Is_Today_Watched_IsTodayWatch' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Concat_StrStr_ReturnValue_8) == 0x000238, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeArray_Array) == 0x000248, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeArray_Array_1) == 0x000258, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_Select_Default) == 0x000268, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Array_Get_Item_1) == 0x000278, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Array_Length_ReturnValue_1) == 0x000280, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Array_RemoveItem_ReturnValue_1) == 0x000284, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Array_RemoveItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, Temp_int_Loop_Counter_Variable) == 0x000288, "Member 'Startup_C_ExecuteUbergraph_Startup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Less_IntInt_ReturnValue) == 0x00028C, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Add_IntInt_ReturnValue) == 0x000290, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_PlayAnimation_ReturnValue) == 0x000298, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_Event_Animation) == 0x0002A0, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002A8, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_ShowCursor_ReturnValue) == 0x0002AC, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_ShowCursor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Conv_BoolToText_ReturnValue) == 0x0002B0, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Conv_BoolToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeStruct_FormatArgumentData) == 0x0002C8, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, K2Node_MakeArray_Array_2) == 0x000308, "Member 'Startup_C_ExecuteUbergraph_Startup::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_GetLogedInPlayerCharacters_OutCharacters) == 0x000318, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_GetLogedInPlayerCharacters_OutCharacters' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_GetLogedInPlayerCharacters_ReturnValue) == 0x000328, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_GetLogedInPlayerCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Format_ReturnValue) == 0x000330, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Not_PreBool_ReturnValue) == 0x000348, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_Array_Length_ReturnValue_2) == 0x00034C, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000350, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Startup_C_ExecuteUbergraph_Startup, CallFunc_BooleanAND_ReturnValue_2) == 0x000351, "Member 'Startup_C_ExecuteUbergraph_Startup::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function Startup.Startup_C.OnAnimationStarted
// 0x0008 (0x0008 - 0x0000)
struct Startup_C_OnAnimationStarted final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Startup_C_OnAnimationStarted) == 0x000008, "Wrong alignment on Startup_C_OnAnimationStarted");
static_assert(sizeof(Startup_C_OnAnimationStarted) == 0x000008, "Wrong size on Startup_C_OnAnimationStarted");
static_assert(offsetof(Startup_C_OnAnimationStarted, Animation) == 0x000000, "Member 'Startup_C_OnAnimationStarted::Animation' has a wrong offset!");

// Function Startup.Startup_C.StartAnimation
// 0x0098 (0x0098 - 0x0000)
struct Startup_C_StartAnimation final
{
public:
	class UWidgetAnimation*                       InAnimation;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InStartTimeOffset;                                 // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidgetAnimation*>               Remove;                                            // 0x0010(0x0010)(Edit, BlueprintVisible)
	float                                         TmpStartTimeOffset;                                // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       TmpAnimation;                                      // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_455F[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4560[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4561[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4562[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4563[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4564[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Startup_C_StartAnimation) == 0x000008, "Wrong alignment on Startup_C_StartAnimation");
static_assert(sizeof(Startup_C_StartAnimation) == 0x000098, "Wrong size on Startup_C_StartAnimation");
static_assert(offsetof(Startup_C_StartAnimation, InAnimation) == 0x000000, "Member 'Startup_C_StartAnimation::InAnimation' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, InStartTimeOffset) == 0x000008, "Member 'Startup_C_StartAnimation::InStartTimeOffset' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, Remove) == 0x000010, "Member 'Startup_C_StartAnimation::Remove' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, TmpStartTimeOffset) == 0x000020, "Member 'Startup_C_StartAnimation::TmpStartTimeOffset' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, TmpAnimation) == 0x000028, "Member 'Startup_C_StartAnimation::TmpAnimation' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'Startup_C_StartAnimation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'Startup_C_StartAnimation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, Temp_bool_True_if_break_was_hit_Variable) == 0x000038, "Member 'Startup_C_StartAnimation::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'Startup_C_StartAnimation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'Startup_C_StartAnimation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, Temp_int_Loop_Counter_Variable_1) == 0x000044, "Member 'Startup_C_StartAnimation::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'Startup_C_StartAnimation::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'Startup_C_StartAnimation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'Startup_C_StartAnimation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, Temp_int_Array_Index_Variable_1) == 0x000054, "Member 'Startup_C_StartAnimation::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Array_Get_Item) == 0x000058, "Member 'Startup_C_StartAnimation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Array_RemoveItem_ReturnValue) == 0x000060, "Member 'Startup_C_StartAnimation::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'Startup_C_StartAnimation::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'Startup_C_StartAnimation::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'Startup_C_StartAnimation::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_Less_IntInt_ReturnValue_1) == 0x000078, "Member 'Startup_C_StartAnimation::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000079, "Member 'Startup_C_StartAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_BooleanAND_ReturnValue) == 0x00007A, "Member 'Startup_C_StartAnimation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000080, "Member 'Startup_C_StartAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000088, "Member 'Startup_C_StartAnimation::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_StartAnimation, CallFunc_PlayAnimation_ReturnValue_1) == 0x000090, "Member 'Startup_C_StartAnimation::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function Startup.Startup_C.Is Today Watched
// 0x0018 (0x0018 - 0x0000)
struct Startup_C_Is_Today_Watched final
{
public:
	bool                                          IsTodayWatch;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4565[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadMacheneCache_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTodayWatched_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoadedMachineCache_ReturnValue;         // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Startup_C_Is_Today_Watched) == 0x000008, "Wrong alignment on Startup_C_Is_Today_Watched");
static_assert(sizeof(Startup_C_Is_Today_Watched) == 0x000018, "Wrong size on Startup_C_Is_Today_Watched");
static_assert(offsetof(Startup_C_Is_Today_Watched, IsTodayWatch) == 0x000000, "Member 'Startup_C_Is_Today_Watched::IsTodayWatch' has a wrong offset!");
static_assert(offsetof(Startup_C_Is_Today_Watched, CallFunc_GetConfigSaveManager_IsValid) == 0x000001, "Member 'Startup_C_Is_Today_Watched::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Startup_C_Is_Today_Watched, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'Startup_C_Is_Today_Watched::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_Is_Today_Watched, CallFunc_LoadMacheneCache_ReturnValue) == 0x000010, "Member 'Startup_C_Is_Today_Watched::CallFunc_LoadMacheneCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_Is_Today_Watched, CallFunc_IsTodayWatched_ReturnValue) == 0x000011, "Member 'Startup_C_Is_Today_Watched::CallFunc_IsTodayWatched_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_Is_Today_Watched, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'Startup_C_Is_Today_Watched::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_Is_Today_Watched, CallFunc_IsLoadedMachineCache_ReturnValue) == 0x000013, "Member 'Startup_C_Is_Today_Watched::CallFunc_IsLoadedMachineCache_ReturnValue' has a wrong offset!");

// Function Startup.Startup_C.UpdateWatchTime
// 0x0018 (0x0018 - 0x0000)
struct Startup_C_UpdateWatchTime final
{
public:
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4566[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Today_Watched_IsTodayWatch;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveMacheneCache_ReturnValue;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadMacheneCache_ReturnValue;             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedMachineCache_ReturnValue;         // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Startup_C_UpdateWatchTime) == 0x000008, "Wrong alignment on Startup_C_UpdateWatchTime");
static_assert(sizeof(Startup_C_UpdateWatchTime) == 0x000018, "Wrong size on Startup_C_UpdateWatchTime");
static_assert(offsetof(Startup_C_UpdateWatchTime, CallFunc_GetConfigSaveManager_IsValid) == 0x000000, "Member 'Startup_C_UpdateWatchTime::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Startup_C_UpdateWatchTime, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'Startup_C_UpdateWatchTime::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_UpdateWatchTime, CallFunc_Is_Today_Watched_IsTodayWatch) == 0x000010, "Member 'Startup_C_UpdateWatchTime::CallFunc_Is_Today_Watched_IsTodayWatch' has a wrong offset!");
static_assert(offsetof(Startup_C_UpdateWatchTime, CallFunc_SaveMacheneCache_ReturnValue) == 0x000011, "Member 'Startup_C_UpdateWatchTime::CallFunc_SaveMacheneCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_UpdateWatchTime, CallFunc_LoadMacheneCache_ReturnValue) == 0x000012, "Member 'Startup_C_UpdateWatchTime::CallFunc_LoadMacheneCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(Startup_C_UpdateWatchTime, CallFunc_IsLoadedMachineCache_ReturnValue) == 0x000013, "Member 'Startup_C_UpdateWatchTime::CallFunc_IsLoadedMachineCache_ReturnValue' has a wrong offset!");

}

