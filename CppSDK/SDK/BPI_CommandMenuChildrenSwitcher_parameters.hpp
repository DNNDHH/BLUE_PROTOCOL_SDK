#pragma once

 

// Package: BPI_CommandMenuChildrenSwitcher

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchIn
// 0x0018 (0x0018 - 0x0000)
struct BPI_CommandMenuChildrenSwitcher_C_SwitchIn final
{
public:
	class FString                                 OpenBookMarkType;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CommandMenuChildrenSwitcher_C_SwitchIn) == 0x000008, "Wrong alignment on BPI_CommandMenuChildrenSwitcher_C_SwitchIn");
static_assert(sizeof(BPI_CommandMenuChildrenSwitcher_C_SwitchIn) == 0x000018, "Wrong size on BPI_CommandMenuChildrenSwitcher_C_SwitchIn");
static_assert(offsetof(BPI_CommandMenuChildrenSwitcher_C_SwitchIn, OpenBookMarkType) == 0x000000, "Member 'BPI_CommandMenuChildrenSwitcher_C_SwitchIn::OpenBookMarkType' has a wrong offset!");
static_assert(offsetof(BPI_CommandMenuChildrenSwitcher_C_SwitchIn, ParamName) == 0x000010, "Member 'BPI_CommandMenuChildrenSwitcher_C_SwitchIn::ParamName' has a wrong offset!");

}

