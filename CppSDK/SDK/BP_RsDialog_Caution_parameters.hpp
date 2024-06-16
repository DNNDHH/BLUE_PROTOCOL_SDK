#pragma once

 

// Package: BP_RsDialog_Caution

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "RsDialogButtonType_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_Caution.BP_RsDialog_Caution_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_Caution_C_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Caution_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialog_Caution_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialog_Caution_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialog_Caution_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialog_Caution_C_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialog_Caution_C_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialog_Caution.BP_RsDialog_Caution_C.ExecuteUbergraph_BP_RsDialog_Caution
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialog_Caution_C_ExecuteUbergraph_BP_RsDialog_Caution final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Caution_C_ExecuteUbergraph_BP_RsDialog_Caution) == 0x000004, "Wrong alignment on BP_RsDialog_Caution_C_ExecuteUbergraph_BP_RsDialog_Caution");
static_assert(sizeof(BP_RsDialog_Caution_C_ExecuteUbergraph_BP_RsDialog_Caution) == 0x000004, "Wrong size on BP_RsDialog_Caution_C_ExecuteUbergraph_BP_RsDialog_Caution");
static_assert(offsetof(BP_RsDialog_Caution_C_ExecuteUbergraph_BP_RsDialog_Caution, EntryPoint) == 0x000000, "Member 'BP_RsDialog_Caution_C_ExecuteUbergraph_BP_RsDialog_Caution::EntryPoint' has a wrong offset!");

// Function BP_RsDialog_Caution.BP_RsDialog_Caution_C.SetShopType
// 0x0030 (0x0030 - 0x0000)
struct BP_RsDialog_Caution_C_SetShopType final
{
public:
	ESBRmShopMenuType                             ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5574[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_Caution_C_SetShopType) == 0x000004, "Wrong alignment on BP_RsDialog_Caution_C_SetShopType");
static_assert(sizeof(BP_RsDialog_Caution_C_SetShopType) == 0x000030, "Wrong size on BP_RsDialog_Caution_C_SetShopType");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, ShopType) == 0x000000, "Member 'BP_RsDialog_Caution_C_SetShopType::ShopType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_byte_Variable) == 0x000001, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_int_Variable) == 0x000004, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_int_Variable_1) == 0x000008, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_int_Variable_2) == 0x00000C, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_int_Variable_3) == 0x000010, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_int_Variable_4) == 0x000014, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_int_Variable_5) == 0x000018, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_int_Variable_6) == 0x00001C, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_int_Variable_7) == 0x000020, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_int_Variable_8) == 0x000024, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, Temp_int_Variable_9) == 0x000028, "Member 'BP_RsDialog_Caution_C_SetShopType::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_Caution_C_SetShopType, K2Node_Select_Default) == 0x00002C, "Member 'BP_RsDialog_Caution_C_SetShopType::K2Node_Select_Default' has a wrong offset!");

}

