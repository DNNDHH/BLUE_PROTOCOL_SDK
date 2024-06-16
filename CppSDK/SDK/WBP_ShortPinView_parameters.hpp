#pragma once

 

// Package: WBP_ShortPinView

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_ShortPinView.WBP_ShortPinView_C.ExecuteUbergraph_WBP_ShortPinView
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DEA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKey>                           CallFunc_GetKeyByActionFunctionPlus_ReturnValue;   // 0x0008(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DEB[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4DEC[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKey>                           CallFunc_GetKeyByActionFunctionPlus_ReturnValue_1; // 0x0030(0x0010)(ReferenceParm)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DED[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                           CallFunc_GetKeyByActionFunctionPlus_ReturnValue_2; // 0x0060(0x0010)(ReferenceParm)
	TArray<struct FKey>                           CallFunc_GetKeyByActionFunctionPlus_ReturnValue_3; // 0x0070(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DEE[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBShortPinWidget*>              K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DEF[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShortPinWidget*                      CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DF0[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView) == 0x000008, "Wrong alignment on WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView");
static_assert(sizeof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView) == 0x0000C0, "Wrong size on WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, EntryPoint) == 0x000000, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_GetKeyByActionFunctionPlus_ReturnValue) == 0x000008, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_GetKeyByActionFunctionPlus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, Temp_bool_Variable) == 0x000018, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_GetKeyByActionFunctionPlus_ReturnValue_1) == 0x000030, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_GetKeyByActionFunctionPlus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, Temp_int_Array_Index_Variable) == 0x000050, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_GetPlayerManager_ReturnValue) == 0x000058, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_GetKeyByActionFunctionPlus_ReturnValue_2) == 0x000060, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_GetKeyByActionFunctionPlus_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_GetKeyByActionFunctionPlus_ReturnValue_3) == 0x000070, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_GetKeyByActionFunctionPlus_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, K2Node_MakeArray_Array) == 0x000088, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_MakeLiteralByte_ReturnValue) == 0x00009C, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000AD, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x0000B0, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, K2Node_CustomEvent_InUIType) == 0x0000B8, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, K2Node_CustomEvent_bInVisibility) == 0x0000B9, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, K2Node_CustomEvent_bInInstantly) == 0x0000BA, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000BB, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView, K2Node_Select_Default) == 0x0000BC, "Member 'WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ShortPinView.WBP_ShortPinView_C.SetUIVisible
// 0x0003 (0x0003 - 0x0000)
struct WBP_ShortPinView_C_SetUIVisible final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ShortPinView_C_SetUIVisible) == 0x000001, "Wrong alignment on WBP_ShortPinView_C_SetUIVisible");
static_assert(sizeof(WBP_ShortPinView_C_SetUIVisible) == 0x000003, "Wrong size on WBP_ShortPinView_C_SetUIVisible");
static_assert(offsetof(WBP_ShortPinView_C_SetUIVisible, InUIType) == 0x000000, "Member 'WBP_ShortPinView_C_SetUIVisible::InUIType' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetUIVisible, bInVisibility) == 0x000001, "Member 'WBP_ShortPinView_C_SetUIVisible::bInVisibility' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetUIVisible, bInInstantly) == 0x000002, "Member 'WBP_ShortPinView_C_SetUIVisible::bInInstantly' has a wrong offset!");

// Function WBP_ShortPinView.WBP_ShortPinView_C.IsReleaseRayButton
// 0x0080 (0x0080 - 0x0000)
struct WBP_ShortPinView_C_IsReleaseRayButton final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DF1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DF2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_Array_Get_Item;                           // 0x0018(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_Array_Get_Item_1;                         // 0x0030(0x0018)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DF3[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DF4[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DF5[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_1;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ShortPinView_C_IsReleaseRayButton) == 0x000008, "Wrong alignment on WBP_ShortPinView_C_IsReleaseRayButton");
static_assert(sizeof(WBP_ShortPinView_C_IsReleaseRayButton) == 0x000080, "Wrong size on WBP_ShortPinView_C_IsReleaseRayButton");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, NewParam) == 0x000000, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_Array_Length_ReturnValue_1) == 0x00004C, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_GetPlayerController_ReturnValue) == 0x000058, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, Temp_int_Loop_Counter_Variable_1) == 0x000060, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_IsInputKeyDown_ReturnValue) == 0x000064, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_Less_IntInt_ReturnValue_1) == 0x000065, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_Add_IntInt_ReturnValue_1) == 0x000068, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_GetPlayerController_ReturnValue_1) == 0x000070, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_IsReleaseRayButton, CallFunc_IsInputKeyDown_ReturnValue_1) == 0x000078, "Member 'WBP_ShortPinView_C_IsReleaseRayButton::CallFunc_IsInputKeyDown_ReturnValue_1' has a wrong offset!");

// Function WBP_ShortPinView.WBP_ShortPinView_C.GetPlayerShortPinComponent
// 0x0020 (0x0020 - 0x0000)
struct WBP_ShortPinView_C_GetPlayerShortPinComponent final
{
public:
	class USBPlayerShortPinComponent*             PlayerShortPinComponent;                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerShortPinComponent*             CallFunc_GetPlayerShortPinComponent_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ShortPinView_C_GetPlayerShortPinComponent) == 0x000008, "Wrong alignment on WBP_ShortPinView_C_GetPlayerShortPinComponent");
static_assert(sizeof(WBP_ShortPinView_C_GetPlayerShortPinComponent) == 0x000020, "Wrong size on WBP_ShortPinView_C_GetPlayerShortPinComponent");
static_assert(offsetof(WBP_ShortPinView_C_GetPlayerShortPinComponent, PlayerShortPinComponent) == 0x000000, "Member 'WBP_ShortPinView_C_GetPlayerShortPinComponent::PlayerShortPinComponent' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_GetPlayerShortPinComponent, CallFunc_GetSBPlayerState_ReturnValue) == 0x000008, "Member 'WBP_ShortPinView_C_GetPlayerShortPinComponent::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_GetPlayerShortPinComponent, CallFunc_GetPlayerShortPinComponent_ReturnValue) == 0x000010, "Member 'WBP_ShortPinView_C_GetPlayerShortPinComponent::CallFunc_GetPlayerShortPinComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_GetPlayerShortPinComponent, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_ShortPinView_C_GetPlayerShortPinComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_ShortPinView.WBP_ShortPinView_C.SetPinPositionBP
// 0x0108 (0x0108 - 0x0000)
struct WBP_ShortPinView_C_SetPinPositionBP final
{
public:
	class USBShortPinWidget*                      Pin;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetDistance;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DF6[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CanvasSlot;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PinPosition;                                       // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DF7[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DF8[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetUnscaledCapsuleSize_OutRadius;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetUnscaledCapsuleSize_OutHalfHeight;     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DF9[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DFA[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DFB[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DFC[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerShortPinComponent*             CallFunc_GetPlayerShortPinComponent_PlayerShortPinComponent; // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DFD[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector_NetQuantize                    CallFunc_GetPinLocation_ReturnValue;               // 0x00B4(0x000C)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqualExactly_VectorVector_ReturnValue; // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DFE[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue; // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DFF[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition_1; // 0x00E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue_1; // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E00[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition_2; // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue_2; // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ShortPinView_C_SetPinPositionBP) == 0x000008, "Wrong alignment on WBP_ShortPinView_C_SetPinPositionBP");
static_assert(sizeof(WBP_ShortPinView_C_SetPinPositionBP) == 0x000108, "Wrong size on WBP_ShortPinView_C_SetPinPositionBP");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, Pin) == 0x000000, "Member 'WBP_ShortPinView_C_SetPinPositionBP::Pin' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, TargetDistance) == 0x000008, "Member 'WBP_ShortPinView_C_SetPinPositionBP::TargetDistance' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CanvasSlot) == 0x000010, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CanvasSlot' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, PinPosition) == 0x000018, "Member 'WBP_ShortPinView_C_SetPinPositionBP::PinPosition' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_GetUnscaledCapsuleSize_OutRadius) == 0x000034, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_GetUnscaledCapsuleSize_OutRadius' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_GetUnscaledCapsuleSize_OutHalfHeight) == 0x000038, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_GetUnscaledCapsuleSize_OutHalfHeight' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00003C, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000048, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_BreakVector_X) == 0x00004C, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_BreakVector_Y) == 0x000050, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_BreakVector_Z) == 0x000054, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000058, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_Add_FloatFloat_ReturnValue) == 0x00005C, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_MakeVector_ReturnValue) == 0x000060, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_IsEmpty_ReturnValue) == 0x00006C, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_Not_PreBool_ReturnValue) == 0x00006D, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000070, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000074, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000078, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000080, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_MakeVector2D_ReturnValue) == 0x000088, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000090, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_Vector_Distance_ReturnValue) == 0x00009C, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0000A0, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_GetPlayerShortPinComponent_PlayerShortPinComponent) == 0x0000A8, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_GetPlayerShortPinComponent_PlayerShortPinComponent' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_GetPinLocation_ReturnValue) == 0x0000B4, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_GetPinLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_NotEqualExactly_VectorVector_ReturnValue) == 0x0000C0, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_NotEqualExactly_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_GetPlayerController_ReturnValue) == 0x0000C8, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000D0, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition) == 0x0000D8, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue) == 0x0000E0, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition_1) == 0x0000E4, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue_1) == 0x0000EC, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000F0, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition_2) == 0x0000F8, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition_2' has a wrong offset!");
static_assert(offsetof(WBP_ShortPinView_C_SetPinPositionBP, CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue_2) == 0x000100, "Member 'WBP_ShortPinView_C_SetPinPositionBP::CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue_2' has a wrong offset!");

}

