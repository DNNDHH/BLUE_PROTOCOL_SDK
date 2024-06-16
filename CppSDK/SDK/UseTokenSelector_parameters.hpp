#pragma once

 

// Package: UseTokenSelector

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UseTokenSelector.UseTokenSelector_C.ExecuteUbergraph_UseTokenSelector
// 0x01B8 (0x01B8 - 0x0000)
struct UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67B2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       K2Node_CustomEvent_Recepi;                         // 0x0008(0x0088)()
	class UTokenSelectorListView_C*               CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TokenId;                        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetUIPosition_ReturnValue;                // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindTokenMaster_bIsValid;                 // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67B3[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_FindTokenMaster_TokenMaster;              // 0x00A8(0x0058)()
	struct FVector2D                              CallFunc_AbsoluteToViewport_PixelPosition;         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToViewport_ViewportPosition;      // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0120(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0138(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x014C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67B4[0x2];                                     // 0x0156(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0158(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0180(0x0028)()
	TDelegate<void(int32 TokenID)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector) == 0x000008, "Wrong alignment on UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector");
static_assert(sizeof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector) == 0x0001B8, "Wrong size on UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, EntryPoint) == 0x000000, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, K2Node_CustomEvent_Recepi) == 0x000008, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::K2Node_CustomEvent_Recepi' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_Create_ReturnValue) == 0x000090, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, K2Node_CustomEvent_TokenId) == 0x000098, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::K2Node_CustomEvent_TokenId' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_GetUIPosition_ReturnValue) == 0x00009C, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_GetUIPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_FindTokenMaster_bIsValid) == 0x0000A4, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_FindTokenMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_FindTokenMaster_TokenMaster) == 0x0000A8, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_FindTokenMaster_TokenMaster' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_AbsoluteToViewport_PixelPosition) == 0x000100, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_AbsoluteToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_AbsoluteToViewport_ViewportPosition) == 0x000108, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_AbsoluteToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_GetMasterTokenText_ReturnValue) == 0x000110, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_Conv_StringToText_ReturnValue) == 0x000120, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, K2Node_CreateDelegate_OutputDelegate) == 0x000138, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_GetViewportScale_ReturnValue) == 0x000148, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x00014C, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_IsValid_ReturnValue) == 0x000154, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, CallFunc_IsValid_ReturnValue_1) == 0x000155, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, K2Node_MakeStruct_SlateColor) == 0x000158, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, K2Node_MakeStruct_SlateColor_1) == 0x000180, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001A8, "Member 'UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function UseTokenSelector.UseTokenSelector_C.OnSelectToken
// 0x0004 (0x0004 - 0x0000)
struct UseTokenSelector_C_OnSelectToken final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UseTokenSelector_C_OnSelectToken) == 0x000004, "Wrong alignment on UseTokenSelector_C_OnSelectToken");
static_assert(sizeof(UseTokenSelector_C_OnSelectToken) == 0x000004, "Wrong size on UseTokenSelector_C_OnSelectToken");
static_assert(offsetof(UseTokenSelector_C_OnSelectToken, TokenID) == 0x000000, "Member 'UseTokenSelector_C_OnSelectToken::TokenID' has a wrong offset!");

// Function UseTokenSelector.UseTokenSelector_C.SetRecepi
// 0x0088 (0x0088 - 0x0000)
struct UseTokenSelector_C_SetRecepi final
{
public:
	struct FCraftMasterData                       Param_Recepi;                                      // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UseTokenSelector_C_SetRecepi) == 0x000008, "Wrong alignment on UseTokenSelector_C_SetRecepi");
static_assert(sizeof(UseTokenSelector_C_SetRecepi) == 0x000088, "Wrong size on UseTokenSelector_C_SetRecepi");
static_assert(offsetof(UseTokenSelector_C_SetRecepi, Param_Recepi) == 0x000000, "Member 'UseTokenSelector_C_SetRecepi::Param_Recepi' has a wrong offset!");

// Function UseTokenSelector.UseTokenSelector_C.IsUseToken
// 0x0050 (0x0050 - 0x0000)
struct UseTokenSelector_C_IsUseToken final
{
public:
	TArray<int32>                                 UseToken;                                          // 0x0000(0x0010)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67B5[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_1;                          // 0x0028(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67B6[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_Select_Default;                             // 0x0040(0x0010)(ReferenceParm)
};
static_assert(alignof(UseTokenSelector_C_IsUseToken) == 0x000008, "Wrong alignment on UseTokenSelector_C_IsUseToken");
static_assert(sizeof(UseTokenSelector_C_IsUseToken) == 0x000050, "Wrong size on UseTokenSelector_C_IsUseToken");
static_assert(offsetof(UseTokenSelector_C_IsUseToken, UseToken) == 0x000000, "Member 'UseTokenSelector_C_IsUseToken::UseToken' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IsUseToken, Temp_bool_Variable) == 0x000010, "Member 'UseTokenSelector_C_IsUseToken::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IsUseToken, K2Node_MakeArray_Array) == 0x000018, "Member 'UseTokenSelector_C_IsUseToken::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IsUseToken, K2Node_MakeArray_Array_1) == 0x000028, "Member 'UseTokenSelector_C_IsUseToken::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IsUseToken, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'UseTokenSelector_C_IsUseToken::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IsUseToken, K2Node_Select_Default) == 0x000040, "Member 'UseTokenSelector_C_IsUseToken::K2Node_Select_Default' has a wrong offset!");

// Function UseTokenSelector.UseTokenSelector_C.SetCraftCount
// 0x0008 (0x0008 - 0x0000)
struct UseTokenSelector_C_SetCraftCount final
{
public:
	int32                                         Param_CraftCount;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UseTokenSelector_C_SetCraftCount) == 0x000004, "Wrong alignment on UseTokenSelector_C_SetCraftCount");
static_assert(sizeof(UseTokenSelector_C_SetCraftCount) == 0x000008, "Wrong size on UseTokenSelector_C_SetCraftCount");
static_assert(offsetof(UseTokenSelector_C_SetCraftCount, Param_CraftCount) == 0x000000, "Member 'UseTokenSelector_C_SetCraftCount::Param_CraftCount' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_SetCraftCount, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'UseTokenSelector_C_SetCraftCount::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UseTokenSelector.UseTokenSelector_C.IsMeetDemand
// 0x0010 (0x0010 - 0x0000)
struct UseTokenSelector_C_IsMeetDemand final
{
public:
	bool                                          MeetDemand;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67B7[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UseTokenSelector_C_IsMeetDemand) == 0x000004, "Wrong alignment on UseTokenSelector_C_IsMeetDemand");
static_assert(sizeof(UseTokenSelector_C_IsMeetDemand) == 0x000010, "Wrong size on UseTokenSelector_C_IsMeetDemand");
static_assert(offsetof(UseTokenSelector_C_IsMeetDemand, MeetDemand) == 0x000000, "Member 'UseTokenSelector_C_IsMeetDemand::MeetDemand' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IsMeetDemand, CallFunc_Less_IntInt_ReturnValue) == 0x000001, "Member 'UseTokenSelector_C_IsMeetDemand::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IsMeetDemand, CallFunc_GetTokenAmount_ReturnValue) == 0x000004, "Member 'UseTokenSelector_C_IsMeetDemand::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IsMeetDemand, CallFunc_Multiply_IntInt_ReturnValue) == 0x000008, "Member 'UseTokenSelector_C_IsMeetDemand::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IsMeetDemand, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'UseTokenSelector_C_IsMeetDemand::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IsMeetDemand, CallFunc_BooleanOR_ReturnValue) == 0x00000D, "Member 'UseTokenSelector_C_IsMeetDemand::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function UseTokenSelector.UseTokenSelector_C.IfMeetDemand
// 0x0014 (0x0014 - 0x0000)
struct UseTokenSelector_C_IfMeetDemand final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MeetDemand;                                        // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67B8[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UseTokenSelector_C_IfMeetDemand) == 0x000004, "Wrong alignment on UseTokenSelector_C_IfMeetDemand");
static_assert(sizeof(UseTokenSelector_C_IfMeetDemand) == 0x000014, "Wrong size on UseTokenSelector_C_IfMeetDemand");
static_assert(offsetof(UseTokenSelector_C_IfMeetDemand, Count) == 0x000000, "Member 'UseTokenSelector_C_IfMeetDemand::Count' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IfMeetDemand, MeetDemand) == 0x000004, "Member 'UseTokenSelector_C_IfMeetDemand::MeetDemand' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IfMeetDemand, CallFunc_Less_IntInt_ReturnValue) == 0x000005, "Member 'UseTokenSelector_C_IfMeetDemand::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IfMeetDemand, CallFunc_GetTokenAmount_ReturnValue) == 0x000008, "Member 'UseTokenSelector_C_IfMeetDemand::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IfMeetDemand, CallFunc_Multiply_IntInt_ReturnValue) == 0x00000C, "Member 'UseTokenSelector_C_IfMeetDemand::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IfMeetDemand, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'UseTokenSelector_C_IfMeetDemand::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UseTokenSelector_C_IfMeetDemand, CallFunc_BooleanOR_ReturnValue) == 0x000011, "Member 'UseTokenSelector_C_IfMeetDemand::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

