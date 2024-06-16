#pragma once

 

// Package: BP_RsDialog_InputCoupon

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "RsDialogProductTitleType_structs.hpp"
#include "RsDialogButtonType_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_InputCoupon_C_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_InputCoupon_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialog_InputCoupon_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialog_InputCoupon_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialog_InputCoupon_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialog_InputCoupon_C_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.OnUseCoupon__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_RsDialog_InputCoupon_C_OnUseCoupon__DelegateSignature final
{
public:
	class FString                                 Code;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_InputCoupon_C_OnUseCoupon__DelegateSignature) == 0x000008, "Wrong alignment on BP_RsDialog_InputCoupon_C_OnUseCoupon__DelegateSignature");
static_assert(sizeof(BP_RsDialog_InputCoupon_C_OnUseCoupon__DelegateSignature) == 0x000010, "Wrong size on BP_RsDialog_InputCoupon_C_OnUseCoupon__DelegateSignature");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_OnUseCoupon__DelegateSignature, Code) == 0x000000, "Member 'BP_RsDialog_InputCoupon_C_OnUseCoupon__DelegateSignature::Code' has a wrong offset!");

// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.ExecuteUbergraph_BP_RsDialog_InputCoupon
// 0x0138 (0x0138 - 0x0000)
struct BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogProductTitleType                     K2Node_CustomEvent_ProductTilteType;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5567[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5568[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_ProductName;                    // 0x0010(0x0018)()
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0028(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5569[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_556A[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_556B[0x5];                                     // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0090(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00B8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00E0(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0108(0x0028)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon) == 0x000008, "Wrong alignment on BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon");
static_assert(sizeof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon) == 0x000138, "Wrong size on BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, EntryPoint) == 0x000000, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, K2Node_CustomEvent_ProductTilteType) == 0x000004, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::K2Node_CustomEvent_ProductTilteType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, K2Node_CustomEvent_ItemSetId) == 0x000008, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::K2Node_CustomEvent_ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, K2Node_CustomEvent_ProductName) == 0x000010, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::K2Node_CustomEvent_ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, K2Node_ComponentBoundEvent_Text) == 0x000028, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, CallFunc_Len_ReturnValue) == 0x000050, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, CallFunc_GetSubstring_ReturnValue) == 0x000058, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000088, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, CallFunc_BooleanOR_ReturnValue) == 0x000089, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, Temp_bool_Variable) == 0x00008A, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, K2Node_MakeStruct_SlateColor) == 0x000090, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, K2Node_MakeStruct_SlateColor_1) == 0x0000B8, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, K2Node_MakeStruct_SlateColor_2) == 0x0000E0, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, K2Node_Select_Default) == 0x000108, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon, K2Node_Event_IsDesignTime) == 0x000130, "Member 'BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_InputCoupon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RsDialog_InputCoupon_C_PreConstruct) == 0x000001, "Wrong alignment on BP_RsDialog_InputCoupon_C_PreConstruct");
static_assert(sizeof(BP_RsDialog_InputCoupon_C_PreConstruct) == 0x000001, "Wrong size on BP_RsDialog_InputCoupon_C_PreConstruct");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_RsDialog_InputCoupon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_RsDialog_InputCoupon_C_BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_RsDialog_InputCoupon_C_BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on BP_RsDialog_InputCoupon_C_BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(BP_RsDialog_InputCoupon_C_BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on BP_RsDialog_InputCoupon_C_BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'BP_RsDialog_InputCoupon_C_BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.SetDialogInfo
// 0x0020 (0x0020 - 0x0000)
struct BP_RsDialog_InputCoupon_C_SetDialogInfo final
{
public:
	ERsDialogProductTitleType                     ProductTilteType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_556C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProductName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_RsDialog_InputCoupon_C_SetDialogInfo) == 0x000008, "Wrong alignment on BP_RsDialog_InputCoupon_C_SetDialogInfo");
static_assert(sizeof(BP_RsDialog_InputCoupon_C_SetDialogInfo) == 0x000020, "Wrong size on BP_RsDialog_InputCoupon_C_SetDialogInfo");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_SetDialogInfo, ProductTilteType) == 0x000000, "Member 'BP_RsDialog_InputCoupon_C_SetDialogInfo::ProductTilteType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_SetDialogInfo, ItemSetId) == 0x000004, "Member 'BP_RsDialog_InputCoupon_C_SetDialogInfo::ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_InputCoupon_C_SetDialogInfo, ProductName) == 0x000008, "Member 'BP_RsDialog_InputCoupon_C_SetDialogInfo::ProductName' has a wrong offset!");

}

