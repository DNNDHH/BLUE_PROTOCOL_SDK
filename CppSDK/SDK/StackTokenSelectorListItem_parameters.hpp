#pragma once

 

// Package: StackTokenSelectorListItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct StackTokenSelectorListItem_C_OnSelect__DelegateSignature final
{
public:
	class UStackTokenSelectorListItem_C*          Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackTokenSelectorListItem_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on StackTokenSelectorListItem_C_OnSelect__DelegateSignature");
static_assert(sizeof(StackTokenSelectorListItem_C_OnSelect__DelegateSignature) == 0x000008, "Wrong size on StackTokenSelectorListItem_C_OnSelect__DelegateSignature");
static_assert(offsetof(StackTokenSelectorListItem_C_OnSelect__DelegateSignature, Target) == 0x000000, "Member 'StackTokenSelectorListItem_C_OnSelect__DelegateSignature::Target' has a wrong offset!");

// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.ExecuteUbergraph_StackTokenSelectorListItem
// 0x0008 (0x0008 - 0x0000)
struct StackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem) == 0x000004, "Wrong alignment on StackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem");
static_assert(sizeof(StackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem) == 0x000008, "Wrong size on StackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem");
static_assert(offsetof(StackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem, EntryPoint) == 0x000000, "Member 'StackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem, K2Node_ComponentBoundEvent_bIsChecked) == 0x000004, "Member 'StackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");

// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct StackTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StackTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on StackTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(StackTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on StackTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(StackTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'StackTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.SetTokenData
// 0x01A0 (0x01A0 - 0x0000)
struct StackTokenSelectorListItem_C_SetTokenData final
{
public:
	struct FSBStackBTicketData                    Param_TokenID;                                     // 0x0000(0x001C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_6CE6[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0048(0x0028)()
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CE7[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0078(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindTokenMaster_bIsValid;                 // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE8[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_FindTokenMaster_TokenMaster;              // 0x0098(0x0058)()
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue_1;         // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0110(0x0018)()
	int32                                         CallFunc_GetTokenAmount_ReturnValue_1;             // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE9[0x3];                                     // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0130(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CEA[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0150(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0188(0x0018)()
};
static_assert(alignof(StackTokenSelectorListItem_C_SetTokenData) == 0x000008, "Wrong alignment on StackTokenSelectorListItem_C_SetTokenData");
static_assert(sizeof(StackTokenSelectorListItem_C_SetTokenData) == 0x0001A0, "Wrong size on StackTokenSelectorListItem_C_SetTokenData");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, Param_TokenID) == 0x000000, "Member 'StackTokenSelectorListItem_C_SetTokenData::Param_TokenID' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'StackTokenSelectorListItem_C_SetTokenData::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, K2Node_MakeStruct_SlateColor_1) == 0x000048, "Member 'StackTokenSelectorListItem_C_SetTokenData::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_GetTokenAmount_ReturnValue) == 0x000070, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_Conv_IntToText_ReturnValue) == 0x000078, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000090, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_FindTokenMaster_bIsValid) == 0x000091, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_FindTokenMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_FindTokenMaster_TokenMaster) == 0x000098, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_FindTokenMaster_TokenMaster' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_GetMasterTokenText_ReturnValue) == 0x0000F0, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_GetMasterTokenText_ReturnValue_1) == 0x000100, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_GetMasterTokenText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_Conv_StringToText_ReturnValue) == 0x000110, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_GetTokenAmount_ReturnValue_1) == 0x000128, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_GetTokenAmount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00012C, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000130, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, Temp_bool_Variable) == 0x000148, "Member 'StackTokenSelectorListItem_C_SetTokenData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, K2Node_Select_Default) == 0x000150, "Member 'StackTokenSelectorListItem_C_SetTokenData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000178, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetTokenData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000188, "Member 'StackTokenSelectorListItem_C_SetTokenData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.Set Select
// 0x0005 (0x0005 - 0x0000)
struct StackTokenSelectorListItem_C_Set_Select final
{
public:
	bool                                          bSelect;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackTokenSelectorListItem_C_Set_Select) == 0x000001, "Wrong alignment on StackTokenSelectorListItem_C_Set_Select");
static_assert(sizeof(StackTokenSelectorListItem_C_Set_Select) == 0x000005, "Wrong size on StackTokenSelectorListItem_C_Set_Select");
static_assert(offsetof(StackTokenSelectorListItem_C_Set_Select, bSelect) == 0x000000, "Member 'StackTokenSelectorListItem_C_Set_Select::bSelect' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_Set_Select, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'StackTokenSelectorListItem_C_Set_Select::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_Set_Select, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'StackTokenSelectorListItem_C_Set_Select::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_Set_Select, Temp_bool_Variable) == 0x000003, "Member 'StackTokenSelectorListItem_C_Set_Select::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_Set_Select, K2Node_Select_Default) == 0x000004, "Member 'StackTokenSelectorListItem_C_Set_Select::K2Node_Select_Default' has a wrong offset!");

// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.UpdateNeedNum
// 0x0020 (0x0020 - 0x0000)
struct StackTokenSelectorListItem_C_UpdateNeedNum final
{
public:
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0000(0x0018)()
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StackTokenSelectorListItem_C_UpdateNeedNum) == 0x000008, "Wrong alignment on StackTokenSelectorListItem_C_UpdateNeedNum");
static_assert(sizeof(StackTokenSelectorListItem_C_UpdateNeedNum) == 0x000020, "Wrong size on StackTokenSelectorListItem_C_UpdateNeedNum");
static_assert(offsetof(StackTokenSelectorListItem_C_UpdateNeedNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000000, "Member 'StackTokenSelectorListItem_C_UpdateNeedNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_UpdateNeedNum, CallFunc_GetTokenAmount_ReturnValue) == 0x000018, "Member 'StackTokenSelectorListItem_C_UpdateNeedNum::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_UpdateNeedNum, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001C, "Member 'StackTokenSelectorListItem_C_UpdateNeedNum::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.SetUIScreen 
// 0x0090 (0x0090 - 0x0000)
struct StackTokenSelectorListItem_C_SetUIScreen_ final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CEB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	int32                                         CallFunc_GetTokenId_TokenId;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CEC[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0068(0x0028)()
};
static_assert(alignof(StackTokenSelectorListItem_C_SetUIScreen_) == 0x000008, "Wrong alignment on StackTokenSelectorListItem_C_SetUIScreen_");
static_assert(sizeof(StackTokenSelectorListItem_C_SetUIScreen_) == 0x000090, "Wrong size on StackTokenSelectorListItem_C_SetUIScreen_");
static_assert(offsetof(StackTokenSelectorListItem_C_SetUIScreen_, Temp_bool_Variable) == 0x000000, "Member 'StackTokenSelectorListItem_C_SetUIScreen_::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetUIScreen_, CallFunc_GetImpossibleColor_ReturnValue) == 0x000008, "Member 'StackTokenSelectorListItem_C_SetUIScreen_::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetUIScreen_, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'StackTokenSelectorListItem_C_SetUIScreen_::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetUIScreen_, CallFunc_GetTokenId_TokenId) == 0x000058, "Member 'StackTokenSelectorListItem_C_SetUIScreen_::CallFunc_GetTokenId_TokenId' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetUIScreen_, CallFunc_GetTokenAmount_ReturnValue) == 0x00005C, "Member 'StackTokenSelectorListItem_C_SetUIScreen_::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetUIScreen_, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000060, "Member 'StackTokenSelectorListItem_C_SetUIScreen_::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListItem_C_SetUIScreen_, K2Node_Select_Default) == 0x000068, "Member 'StackTokenSelectorListItem_C_SetUIScreen_::K2Node_Select_Default' has a wrong offset!");

// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.GetTokenId
// 0x0004 (0x0004 - 0x0000)
struct StackTokenSelectorListItem_C_GetTokenId final
{
public:
	int32                                         Param_TokenID;                                     // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackTokenSelectorListItem_C_GetTokenId) == 0x000004, "Wrong alignment on StackTokenSelectorListItem_C_GetTokenId");
static_assert(sizeof(StackTokenSelectorListItem_C_GetTokenId) == 0x000004, "Wrong size on StackTokenSelectorListItem_C_GetTokenId");
static_assert(offsetof(StackTokenSelectorListItem_C_GetTokenId, Param_TokenID) == 0x000000, "Member 'StackTokenSelectorListItem_C_GetTokenId::Param_TokenID' has a wrong offset!");

}

