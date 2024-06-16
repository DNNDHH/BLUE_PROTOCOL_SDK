#pragma once

 

// Package: DsState

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function DsState.DsState_C.ExecuteUbergraph_DsState
// 0x0030 (0x0030 - 0x0000)
struct DsState_C_ExecuteUbergraph_DsState final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7465[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7466[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Count;                                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Index;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7467[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DsState_C_ExecuteUbergraph_DsState) == 0x000008, "Wrong alignment on DsState_C_ExecuteUbergraph_DsState");
static_assert(sizeof(DsState_C_ExecuteUbergraph_DsState) == 0x000030, "Wrong size on DsState_C_ExecuteUbergraph_DsState");
static_assert(offsetof(DsState_C_ExecuteUbergraph_DsState, EntryPoint) == 0x000000, "Member 'DsState_C_ExecuteUbergraph_DsState::EntryPoint' has a wrong offset!");
static_assert(offsetof(DsState_C_ExecuteUbergraph_DsState, K2Node_Event_Animation) == 0x000008, "Member 'DsState_C_ExecuteUbergraph_DsState::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(DsState_C_ExecuteUbergraph_DsState, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'DsState_C_ExecuteUbergraph_DsState::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(DsState_C_ExecuteUbergraph_DsState, K2Node_Event_Count) == 0x000014, "Member 'DsState_C_ExecuteUbergraph_DsState::K2Node_Event_Count' has a wrong offset!");
static_assert(offsetof(DsState_C_ExecuteUbergraph_DsState, K2Node_Event_Index) == 0x000018, "Member 'DsState_C_ExecuteUbergraph_DsState::K2Node_Event_Index' has a wrong offset!");
static_assert(offsetof(DsState_C_ExecuteUbergraph_DsState, K2Node_SwitchInteger_CmpSuccess) == 0x00001C, "Member 'DsState_C_ExecuteUbergraph_DsState::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DsState_C_ExecuteUbergraph_DsState, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'DsState_C_ExecuteUbergraph_DsState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DsState_C_ExecuteUbergraph_DsState, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'DsState_C_ExecuteUbergraph_DsState::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function DsState.DsState_C.OnChangeEffect
// 0x0004 (0x0004 - 0x0000)
struct DsState_C_OnChangeEffect final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DsState_C_OnChangeEffect) == 0x000004, "Wrong alignment on DsState_C_OnChangeEffect");
static_assert(sizeof(DsState_C_OnChangeEffect) == 0x000004, "Wrong size on DsState_C_OnChangeEffect");
static_assert(offsetof(DsState_C_OnChangeEffect, Param_Index) == 0x000000, "Member 'DsState_C_OnChangeEffect::Param_Index' has a wrong offset!");

// Function DsState.DsState_C.OnSetCount
// 0x0004 (0x0004 - 0x0000)
struct DsState_C_OnSetCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DsState_C_OnSetCount) == 0x000004, "Wrong alignment on DsState_C_OnSetCount");
static_assert(sizeof(DsState_C_OnSetCount) == 0x000004, "Wrong size on DsState_C_OnSetCount");
static_assert(offsetof(DsState_C_OnSetCount, Count) == 0x000000, "Member 'DsState_C_OnSetCount::Count' has a wrong offset!");

// Function DsState.DsState_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct DsState_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DsState_C_OnAnimationFinished) == 0x000008, "Wrong alignment on DsState_C_OnAnimationFinished");
static_assert(sizeof(DsState_C_OnAnimationFinished) == 0x000008, "Wrong size on DsState_C_OnAnimationFinished");
static_assert(offsetof(DsState_C_OnAnimationFinished, Animation) == 0x000000, "Member 'DsState_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function DsState.DsState_C.Show
// 0x0008 (0x0008 - 0x0000)
struct DsState_C_Show final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DsState_C_Show) == 0x000008, "Wrong alignment on DsState_C_Show");
static_assert(sizeof(DsState_C_Show) == 0x000008, "Wrong size on DsState_C_Show");
static_assert(offsetof(DsState_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'DsState_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function DsState.DsState_C.Hide
// 0x0008 (0x0008 - 0x0000)
struct DsState_C_Hide final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DsState_C_Hide) == 0x000008, "Wrong alignment on DsState_C_Hide");
static_assert(sizeof(DsState_C_Hide) == 0x000008, "Wrong size on DsState_C_Hide");
static_assert(offsetof(DsState_C_Hide, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'DsState_C_Hide::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function DsState.DsState_C.SetCount
// 0x0088 (0x0088 - 0x0000)
struct DsState_C_SetCount final
{
public:
	int32                                         InCount;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7468[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7469[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_746A[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_746B[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item_1;                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_746C[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item_2;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_746D[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item_3;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DsState_C_SetCount) == 0x000008, "Wrong alignment on DsState_C_SetCount");
static_assert(sizeof(DsState_C_SetCount) == 0x000088, "Wrong size on DsState_C_SetCount");
static_assert(offsetof(DsState_C_SetCount, InCount) == 0x000000, "Member 'DsState_C_SetCount::InCount' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, Count) == 0x000004, "Member 'DsState_C_SetCount::Count' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, Temp_int_Variable) == 0x000008, "Member 'DsState_C_SetCount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_Clamp_ReturnValue) == 0x00000C, "Member 'DsState_C_SetCount::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'DsState_C_SetCount::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_Percent_IntInt_ReturnValue) == 0x000014, "Member 'DsState_C_SetCount::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_Divide_IntInt_ReturnValue) == 0x000018, "Member 'DsState_C_SetCount::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, Temp_int_Variable_1) == 0x00001C, "Member 'DsState_C_SetCount::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000020, "Member 'DsState_C_SetCount::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, Temp_bool_Variable) == 0x000021, "Member 'DsState_C_SetCount::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, K2Node_Select_Default) == 0x000024, "Member 'DsState_C_SetCount::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, K2Node_SwitchInteger_CmpSuccess) == 0x000028, "Member 'DsState_C_SetCount::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'DsState_C_SetCount::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'DsState_C_SetCount::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000040, "Member 'DsState_C_SetCount::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_Array_Get_Item) == 0x000048, "Member 'DsState_C_SetCount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'DsState_C_SetCount::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_MakeLiteralByte_ReturnValue) == 0x000058, "Member 'DsState_C_SetCount::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_Array_Get_Item_2) == 0x000060, "Member 'DsState_C_SetCount::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000068, "Member 'DsState_C_SetCount::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_Array_Get_Item_3) == 0x000070, "Member 'DsState_C_SetCount::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, CallFunc_PlayAnimation_ReturnValue_2) == 0x000078, "Member 'DsState_C_SetCount::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, Temp_bool_Variable_1) == 0x000080, "Member 'DsState_C_SetCount::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(DsState_C_SetCount, K2Node_Select_Default_1) == 0x000081, "Member 'DsState_C_SetCount::K2Node_Select_Default_1' has a wrong offset!");

}

