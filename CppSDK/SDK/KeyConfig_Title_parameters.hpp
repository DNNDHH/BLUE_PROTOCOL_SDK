#pragma once

 

// Package: KeyConfig_Title

#include "Basic.hpp"


namespace SDK::Params
{

// Function KeyConfig_Title.KeyConfig_Title_C.SetTitle
// 0x0004 (0x0004 - 0x0000)
struct KeyConfig_Title_C_SetTitle final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Title_C_SetTitle) == 0x000004, "Wrong alignment on KeyConfig_Title_C_SetTitle");
static_assert(sizeof(KeyConfig_Title_C_SetTitle) == 0x000004, "Wrong size on KeyConfig_Title_C_SetTitle");
static_assert(offsetof(KeyConfig_Title_C_SetTitle, TextId) == 0x000000, "Member 'KeyConfig_Title_C_SetTitle::TextId' has a wrong offset!");

}

