#pragma once

 

// Package: StampCategoryButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function StampCategoryButton.StampCategoryButton_C.OnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryButton_C_OnClicked__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryButton_C_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StampCategoryButton_C_OnClicked__DelegateSignature");
static_assert(sizeof(StampCategoryButton_C_OnClicked__DelegateSignature) == 0x000004, "Wrong size on StampCategoryButton_C_OnClicked__DelegateSignature");
static_assert(offsetof(StampCategoryButton_C_OnClicked__DelegateSignature, Param_Index) == 0x000000, "Member 'StampCategoryButton_C_OnClicked__DelegateSignature::Param_Index' has a wrong offset!");

// Function StampCategoryButton.StampCategoryButton_C.ExecuteUbergraph_StampCategoryButton
// 0x0098 (0x0098 - 0x0000)
struct StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBStampCategoryData                   CallFunc_FindStampCategoryData_Data;               // 0x0008(0x0038)()
	bool                                          CallFunc_FindStampCategoryData_ReturnValue;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_462A[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_462B[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0058(0x0018)()
	class UObject*                                Temp_object_Variable;                              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_462C[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue;    // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton) == 0x000008, "Wrong alignment on StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton");
static_assert(sizeof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton) == 0x000098, "Wrong size on StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, EntryPoint) == 0x000000, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, Temp_bool_Variable) == 0x000006, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, K2Node_Event_IsDesignTime) == 0x000007, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_FindStampCategoryData_Data) == 0x000008, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_FindStampCategoryData_Data' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_FindStampCategoryData_ReturnValue) == 0x000040, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_FindStampCategoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000041, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, K2Node_CreateDelegate_OutputDelegate) == 0x000044, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000054, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_Conv_IntToText_ReturnValue) == 0x000058, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, Temp_object_Variable) == 0x000070, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, K2Node_DynamicCast_AsTexture_2D) == 0x000078, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000081, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, K2Node_CustomEvent_Loaded) == 0x000088, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_GetIsEnabled_ReturnValue) == 0x000090, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000091, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_BooleanAND_ReturnValue) == 0x000092, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_ValidStampEmoteTermUpdate_ReturnValue) == 0x000093, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_ValidStampEmoteTermUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, CallFunc_Not_PreBool_ReturnValue) == 0x000094, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton, K2Node_Select_Default) == 0x000095, "Member 'StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton::K2Node_Select_Default' has a wrong offset!");

// Function StampCategoryButton.StampCategoryButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct StampCategoryButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StampCategoryButton_C_PreConstruct) == 0x000001, "Wrong alignment on StampCategoryButton_C_PreConstruct");
static_assert(sizeof(StampCategoryButton_C_PreConstruct) == 0x000001, "Wrong size on StampCategoryButton_C_PreConstruct");
static_assert(offsetof(StampCategoryButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'StampCategoryButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function StampCategoryButton.StampCategoryButton_C.OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083
// 0x0008 (0x0008 - 0x0000)
struct StampCategoryButton_C_OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryButton_C_OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083) == 0x000008, "Wrong alignment on StampCategoryButton_C_OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083");
static_assert(sizeof(StampCategoryButton_C_OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083) == 0x000008, "Wrong size on StampCategoryButton_C_OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083");
static_assert(offsetof(StampCategoryButton_C_OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083, Loaded) == 0x000000, "Member 'StampCategoryButton_C_OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083::Loaded' has a wrong offset!");

// Function StampCategoryButton.StampCategoryButton_C.Update
// 0x0028 (0x0028 - 0x0000)
struct StampCategoryButton_C_Update final
{
public:
	struct FSBStampCategoryMasterData             InStampCategoryMasterData;                         // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         InIndex;                                           // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryButton_C_Update) == 0x000008, "Wrong alignment on StampCategoryButton_C_Update");
static_assert(sizeof(StampCategoryButton_C_Update) == 0x000028, "Wrong size on StampCategoryButton_C_Update");
static_assert(offsetof(StampCategoryButton_C_Update, InStampCategoryMasterData) == 0x000000, "Member 'StampCategoryButton_C_Update::InStampCategoryMasterData' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_Update, InIndex) == 0x000020, "Member 'StampCategoryButton_C_Update::InIndex' has a wrong offset!");

// Function StampCategoryButton.StampCategoryButton_C.SetEnabled
// 0x0002 (0x0002 - 0x0000)
struct StampCategoryButton_C_SetEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StampCategoryButton_C_SetEnabled) == 0x000001, "Wrong alignment on StampCategoryButton_C_SetEnabled");
static_assert(sizeof(StampCategoryButton_C_SetEnabled) == 0x000002, "Wrong size on StampCategoryButton_C_SetEnabled");
static_assert(offsetof(StampCategoryButton_C_SetEnabled, bEnabled) == 0x000000, "Member 'StampCategoryButton_C_SetEnabled::bEnabled' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_SetEnabled, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'StampCategoryButton_C_SetEnabled::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function StampCategoryButton.StampCategoryButton_C.SetLimitedItemNumber
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryButton_C_SetLimitedItemNumber final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryButton_C_SetLimitedItemNumber) == 0x000004, "Wrong alignment on StampCategoryButton_C_SetLimitedItemNumber");
static_assert(sizeof(StampCategoryButton_C_SetLimitedItemNumber) == 0x000004, "Wrong size on StampCategoryButton_C_SetLimitedItemNumber");
static_assert(offsetof(StampCategoryButton_C_SetLimitedItemNumber, Number) == 0x000000, "Member 'StampCategoryButton_C_SetLimitedItemNumber::Number' has a wrong offset!");

// Function StampCategoryButton.StampCategoryButton_C.SetIndex
// 0x0004 (0x0004 - 0x0000)
struct StampCategoryButton_C_SetIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryButton_C_SetIndex) == 0x000004, "Wrong alignment on StampCategoryButton_C_SetIndex");
static_assert(sizeof(StampCategoryButton_C_SetIndex) == 0x000004, "Wrong size on StampCategoryButton_C_SetIndex");
static_assert(offsetof(StampCategoryButton_C_SetIndex, Param_Index) == 0x000000, "Member 'StampCategoryButton_C_SetIndex::Param_Index' has a wrong offset!");

// Function StampCategoryButton.StampCategoryButton_C.SetAlpha
// 0x00B8 (0x00B8 - 0x0000)
struct StampCategoryButton_C_SetAlpha final
{
public:
	bool                                          BMax;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_462D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	bool                                          Temp_bool_Variable_1;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_462E[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0060(0x0028)()
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StampCategoryButton_C_SetAlpha) == 0x000008, "Wrong alignment on StampCategoryButton_C_SetAlpha");
static_assert(sizeof(StampCategoryButton_C_SetAlpha) == 0x0000B8, "Wrong size on StampCategoryButton_C_SetAlpha");
static_assert(offsetof(StampCategoryButton_C_SetAlpha, BMax) == 0x000000, "Member 'StampCategoryButton_C_SetAlpha::BMax' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_SetAlpha, Temp_bool_Variable) == 0x000001, "Member 'StampCategoryButton_C_SetAlpha::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_SetAlpha, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'StampCategoryButton_C_SetAlpha::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_SetAlpha, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'StampCategoryButton_C_SetAlpha::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_SetAlpha, Temp_bool_Variable_1) == 0x000058, "Member 'StampCategoryButton_C_SetAlpha::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_SetAlpha, K2Node_Select_Default) == 0x000060, "Member 'StampCategoryButton_C_SetAlpha::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_SetAlpha, Temp_struct_Variable) == 0x000088, "Member 'StampCategoryButton_C_SetAlpha::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_SetAlpha, Temp_struct_Variable_1) == 0x000098, "Member 'StampCategoryButton_C_SetAlpha::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(StampCategoryButton_C_SetAlpha, K2Node_Select_Default_1) == 0x0000A8, "Member 'StampCategoryButton_C_SetAlpha::K2Node_Select_Default_1' has a wrong offset!");

}

