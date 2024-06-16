#pragma once

 

// Package: ShopCmnBtn1

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ShopCmnBtn1Struct_structs.hpp"


namespace SDK::Params
{

// Function ShopCmnBtn1.ShopCmnBtn1_C.BtnClick__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ShopCmnBtn1_C_BtnClick__DelegateSignature final
{
public:
	class UShopCmnBtn1_C*                         ClickBtn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_TabId;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopCmnBtn1_C_BtnClick__DelegateSignature) == 0x000008, "Wrong alignment on ShopCmnBtn1_C_BtnClick__DelegateSignature");
static_assert(sizeof(ShopCmnBtn1_C_BtnClick__DelegateSignature) == 0x000010, "Wrong size on ShopCmnBtn1_C_BtnClick__DelegateSignature");
static_assert(offsetof(ShopCmnBtn1_C_BtnClick__DelegateSignature, ClickBtn) == 0x000000, "Member 'ShopCmnBtn1_C_BtnClick__DelegateSignature::ClickBtn' has a wrong offset!");
static_assert(offsetof(ShopCmnBtn1_C_BtnClick__DelegateSignature, Param_TabId) == 0x000008, "Member 'ShopCmnBtn1_C_BtnClick__DelegateSignature::Param_TabId' has a wrong offset!");

// Function ShopCmnBtn1.ShopCmnBtn1_C.ExecuteUbergraph_ShopCmnBtn1
// 0x0150 (0x0150 - 0x0000)
struct ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60F3[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0080(0x0028)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FShopCmnBtn1Struct                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60F4[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x00C8(0x0088)()
};
static_assert(alignof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1) == 0x000008, "Wrong alignment on ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1");
static_assert(sizeof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1) == 0x000150, "Wrong size on ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1");
static_assert(offsetof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1, EntryPoint) == 0x000000, "Member 'ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1, K2Node_MakeStruct_SlateColor_3) == 0x000080, "Member 'ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1, CallFunc_Conv_StringToName_ReturnValue) == 0x0000A8, "Member 'ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000B0, "Member 'ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1, K2Node_MakeStruct_SlateBrush) == 0x0000C8, "Member 'ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function ShopCmnBtn1.ShopCmnBtn1_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ShopCmnBtn1_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopCmnBtn1_C_PreConstruct) == 0x000001, "Wrong alignment on ShopCmnBtn1_C_PreConstruct");
static_assert(sizeof(ShopCmnBtn1_C_PreConstruct) == 0x000001, "Wrong size on ShopCmnBtn1_C_PreConstruct");
static_assert(offsetof(ShopCmnBtn1_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ShopCmnBtn1_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

