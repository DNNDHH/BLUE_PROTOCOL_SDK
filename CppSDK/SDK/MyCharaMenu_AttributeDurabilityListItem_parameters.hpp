#pragma once

 

// Package: MyCharaMenu_AttributeDurabilityListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttribute
// 0x01A0 (0x01A0 - 0x0000)
struct MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute final
{
public:
	ESBAttribute                                  InAttribute;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89CD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAttribute                                  Temp_byte_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89CE[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0028(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;                        // 0x0050(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_2;                        // 0x0078(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_3;                        // 0x00A0(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_4;                        // 0x00C8(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_5;                        // 0x00F0(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_6;                        // 0x0118(0x0028)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_7;                        // 0x0140(0x0028)(HasGetValueTypeHash)
	ESBAttribute                                  Temp_byte_Variable_1;                              // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89CF[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x0170(0x0028)(HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute) == 0x000008, "Wrong alignment on MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute");
static_assert(sizeof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute) == 0x0001A0, "Wrong size on MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, InAttribute) == 0x000000, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::InAttribute' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_int_Variable) == 0x000004, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_int_Variable_1) == 0x000008, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_int_Variable_2) == 0x00000C, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_int_Variable_3) == 0x000010, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_int_Variable_4) == 0x000014, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_int_Variable_5) == 0x000018, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_int_Variable_6) == 0x00001C, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_int_Variable_7) == 0x000020, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_byte_Variable) == 0x000024, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_softobject_Variable) == 0x000028, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_softobject_Variable_1) == 0x000050, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_softobject_Variable_2) == 0x000078, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_softobject_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_softobject_Variable_3) == 0x0000A0, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_softobject_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_softobject_Variable_4) == 0x0000C8, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_softobject_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_softobject_Variable_5) == 0x0000F0, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_softobject_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_softobject_Variable_6) == 0x000118, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_softobject_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_softobject_Variable_7) == 0x000140, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_softobject_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, Temp_byte_Variable_1) == 0x000168, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, K2Node_Select_Default) == 0x000170, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute, K2Node_Select_Default_1) == 0x000198, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute::K2Node_Select_Default_1' has a wrong offset!");

// Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeIconTexture
// 0x0080 (0x0080 - 0x0000)
struct MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              InTexture;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0028(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89D0[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x0058(0x0028)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture) == 0x000008, "Wrong alignment on MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture");
static_assert(sizeof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture) == 0x000080, "Wrong size on MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture, InTexture) == 0x000000, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture::InTexture' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture, Temp_softobject_Variable) == 0x000028, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000050, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture, Temp_bool_Variable) == 0x000051, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture, K2Node_Select_Default) == 0x000058, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeNameByTextId
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeNameByTextId final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeNameByTextId) == 0x000004, "Wrong alignment on MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeNameByTextId");
static_assert(sizeof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeNameByTextId) == 0x000004, "Wrong size on MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeNameByTextId");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeNameByTextId, InTextID) == 0x000000, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeNameByTextId::InTextID' has a wrong offset!");

// Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeDurabilityValue
// 0x0068 (0x0068 - 0x0000)
struct MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89D1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LocalValue;                                        // 0x0008(0x0018)(Edit, BlueprintVisible)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89D2[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89D3[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0048(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue) == 0x000008, "Wrong alignment on MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue");
static_assert(sizeof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue) == 0x000068, "Wrong size on MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue, InValue) == 0x000000, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue::InValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue, LocalValue) == 0x000008, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue::LocalValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue, CallFunc_MakeLiteralBool_ReturnValue) == 0x000020, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue, CallFunc_GetText_ReturnValue) == 0x000048, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue, CallFunc_NotEqual_TextText_ReturnValue) == 0x000060, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.GetAttribute
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_AttributeDurabilityListItem_C_GetAttribute final
{
public:
	ESBAttribute                                  OutAttribute;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_AttributeDurabilityListItem_C_GetAttribute) == 0x000001, "Wrong alignment on MyCharaMenu_AttributeDurabilityListItem_C_GetAttribute");
static_assert(sizeof(MyCharaMenu_AttributeDurabilityListItem_C_GetAttribute) == 0x000001, "Wrong size on MyCharaMenu_AttributeDurabilityListItem_C_GetAttribute");
static_assert(offsetof(MyCharaMenu_AttributeDurabilityListItem_C_GetAttribute, OutAttribute) == 0x000000, "Member 'MyCharaMenu_AttributeDurabilityListItem_C_GetAttribute::OutAttribute' has a wrong offset!");

}

