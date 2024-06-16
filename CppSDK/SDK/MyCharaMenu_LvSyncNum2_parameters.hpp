#pragma once

 

// Package: MyCharaMenu_LvSyncNum2

#include "Basic.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_LvSyncNum2.MyCharaMenu_LvSyncNum2_C.SetValue
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_LvSyncNum2_C_SetValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OriginalValue;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(MyCharaMenu_LvSyncNum2_C_SetValue) == 0x000008, "Wrong alignment on MyCharaMenu_LvSyncNum2_C_SetValue");
static_assert(sizeof(MyCharaMenu_LvSyncNum2_C_SetValue) == 0x000020, "Wrong size on MyCharaMenu_LvSyncNum2_C_SetValue");
static_assert(offsetof(MyCharaMenu_LvSyncNum2_C_SetValue, Value) == 0x000000, "Member 'MyCharaMenu_LvSyncNum2_C_SetValue::Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSyncNum2_C_SetValue, OriginalValue) == 0x000004, "Member 'MyCharaMenu_LvSyncNum2_C_SetValue::OriginalValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_LvSyncNum2_C_SetValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'MyCharaMenu_LvSyncNum2_C_SetValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

