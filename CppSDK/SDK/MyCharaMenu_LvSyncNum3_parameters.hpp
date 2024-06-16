#pragma once

 

// Package: MyCharaMenu_LvSyncNum3

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_LvSyncNum3.MyCharaMenu_LvSyncNum3_C.ExecuteUbergraph_MyCharaMenu_LvSyncNum3
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_LvSyncNum3_C_ExecuteUbergraph_MyCharaMenu_LvSyncNum3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LvSyncNum3_C_ExecuteUbergraph_MyCharaMenu_LvSyncNum3) == 0x000004, "Wrong alignment on MyCharaMenu_LvSyncNum3_C_ExecuteUbergraph_MyCharaMenu_LvSyncNum3");
static_assert(sizeof(MyCharaMenu_LvSyncNum3_C_ExecuteUbergraph_MyCharaMenu_LvSyncNum3) == 0x000008, "Wrong size on MyCharaMenu_LvSyncNum3_C_ExecuteUbergraph_MyCharaMenu_LvSyncNum3");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_ExecuteUbergraph_MyCharaMenu_LvSyncNum3, EntryPoint) == 0x000000, "Member 'MyCharaMenu_LvSyncNum3_C_ExecuteUbergraph_MyCharaMenu_LvSyncNum3::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_ExecuteUbergraph_MyCharaMenu_LvSyncNum3, K2Node_Event_IsDesignTime) == 0x000004, "Member 'MyCharaMenu_LvSyncNum3_C_ExecuteUbergraph_MyCharaMenu_LvSyncNum3::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_LvSyncNum3.MyCharaMenu_LvSyncNum3_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_LvSyncNum3_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_LvSyncNum3_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_LvSyncNum3_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_LvSyncNum3_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_LvSyncNum3_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_LvSyncNum3_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_LvSyncNum3.MyCharaMenu_LvSyncNum3_C.SetValue
// 0x0030 (0x0030 - 0x0000)
struct MyCharaMenu_LvSyncNum3_C_SetValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OriginalValue;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A48[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_LvSyncNum3_C_SetValue) == 0x000008, "Wrong alignment on MyCharaMenu_LvSyncNum3_C_SetValue");
static_assert(sizeof(MyCharaMenu_LvSyncNum3_C_SetValue) == 0x000030, "Wrong size on MyCharaMenu_LvSyncNum3_C_SetValue");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_SetValue, Value) == 0x000000, "Member 'MyCharaMenu_LvSyncNum3_C_SetValue::Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_SetValue, OriginalValue) == 0x000004, "Member 'MyCharaMenu_LvSyncNum3_C_SetValue::OriginalValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_SetValue, Temp_bool_Variable) == 0x000008, "Member 'MyCharaMenu_LvSyncNum3_C_SetValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_SetValue, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000009, "Member 'MyCharaMenu_LvSyncNum3_C_SetValue::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_SetValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'MyCharaMenu_LvSyncNum3_C_SetValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_SetValue, Temp_byte_Variable) == 0x000028, "Member 'MyCharaMenu_LvSyncNum3_C_SetValue::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_SetValue, Temp_byte_Variable_1) == 0x000029, "Member 'MyCharaMenu_LvSyncNum3_C_SetValue::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSyncNum3_C_SetValue, K2Node_Select_Default) == 0x00002A, "Member 'MyCharaMenu_LvSyncNum3_C_SetValue::K2Node_Select_Default' has a wrong offset!");

}

