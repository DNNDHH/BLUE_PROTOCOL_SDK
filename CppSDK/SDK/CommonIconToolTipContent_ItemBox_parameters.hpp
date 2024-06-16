#pragma once

 

// Package: CommonIconToolTipContent_ItemBox

#include "Basic.hpp"

#include "ST_ToolTipInfo_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_ItemBox.CommonIconToolTipContent_ItemBox_C.SetItemBox
// 0x0170 (0x0170 - 0x0000)
struct CommonIconToolTipContent_ItemBox_C_SetItemBox final
{
public:
	struct FST_ToolTipInfo                        ST_ToolTipInfo;                                    // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          bNameEnable;                                       // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9406[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Type;                                              // 0x0080(0x0018)(Edit, BlueprintVisible)
	class FText                                   Param_Name;                                        // 0x0098(0x0018)(Edit, BlueprintVisible)
	struct FST_ToolTipInfo                        ToolTipInfo;                                       // 0x00B0(0x0078)(Edit, BlueprintVisible, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x012B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9407[0x2];                                     // 0x012E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName;    // 0x0130(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType;    // 0x0148(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName;  // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0163(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0165(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0166(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0167(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_ItemBox_C_SetItemBox) == 0x000008, "Wrong alignment on CommonIconToolTipContent_ItemBox_C_SetItemBox");
static_assert(sizeof(CommonIconToolTipContent_ItemBox_C_SetItemBox) == 0x000170, "Wrong size on CommonIconToolTipContent_ItemBox_C_SetItemBox");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, ST_ToolTipInfo) == 0x000000, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, bNameEnable) == 0x000078, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::bNameEnable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, Type) == 0x000080, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::Type' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, Param_Name) == 0x000098, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::Param_Name' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, ToolTipInfo) == 0x0000B0, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::ToolTipInfo' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, Temp_byte_Variable) == 0x000128, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, Temp_byte_Variable_1) == 0x000129, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_TextIsEmpty_ReturnValue) == 0x00012A, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_TextIsEmpty_ReturnValue_1) == 0x00012B, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_Not_PreBool_ReturnValue) == 0x00012C, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_Not_PreBool_ReturnValue_1) == 0x00012D, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_Get_Reward_Item_Name_and_Type_OutName) == 0x000130, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_Get_Reward_Item_Name_and_Type_OutName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_Get_Reward_Item_Name_and_Type_OutType) == 0x000148, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_Get_Reward_Item_Name_and_Type_OutType' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName) == 0x000160, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_MakeLiteralByte_ReturnValue) == 0x000161, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, Temp_bool_Variable) == 0x000162, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, Temp_bool_Variable_1) == 0x000163, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, K2Node_Select_Default) == 0x000164, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000165, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000166, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, Temp_bool_Variable_2) == 0x000167, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, K2Node_Select_Default_1) == 0x000168, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000169, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_ItemBox_C_SetItemBox, K2Node_Select_Default_2) == 0x00016A, "Member 'CommonIconToolTipContent_ItemBox_C_SetItemBox::K2Node_Select_Default_2' has a wrong offset!");

}

